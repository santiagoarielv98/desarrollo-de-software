/* 1.Realizar las siguientes consultas:  */
/* a.Mostrar todas las flores cuyo precio de unidad no está entre 1000 y 5000. */
SELECT
  *
FROM
  flores
WHERE
  precio_unidad NOT BETWEEN 1000
  AND 5000;

/* b.Mostrar la descripción del evento y adicionales de aquellos eventos cuya seña sea mayor a 10000 y en adicionales sea decoracion o globologia  */
SELECT
  descripcion,
  adicionales
FROM
  evento
WHERE
  id_eve IN (
    SELECT
      id_eve
    FROM
      pedido
    WHERE
      senia_dada > 10000
  )
  AND adicionales IN ('decoracion', 'globologia');

/* CON INNER JOIN */
SELECT
  /* DISTINCT e.id_eve, */
  e.descripcion,
  e.adicionales
FROM
  evento AS e
  INNER JOIN pedido AS p ON e.id_eve = p.id_eve
WHERE
  p.senia_dada > 10000
  AND e.adicionales IN ('decoracion', 'globologia')
GROUP BY
  e.id_eve;

/* c.Hallar el promedio de la cantidad solicitada de flores según el año del pedido solamente si el promedio es mayor o igual a 100  */
SELECT
  AVG(cantidad_solicitada)
FROM
  pedido
GROUP BY
  YEAR(fecha_pedido)
HAVING
  AVG(cantidad_solicitada) >= 100;

/* d.Hallar la máxima cantidad solicitada según la ciudad del cliente de aquellos pedidos que fueron entre ‘ 2022 -02 -10 ’ a la fecha actual  */
SELECT
  MAX(p.cantidad_solicitada)
FROM
  pedido AS p
  INNER JOIN cliente AS c ON p.id_cli = c.id_cli
WHERE
  p.fecha_pedido BETWEEN '2022-02-10'
  AND NOW()
GROUP BY
  c.ciudad;

/* e.Mostrar el nombre del cliente y su ciudad solo de aquellos clientes cuya fecha de alta no fuera en los meses 1 y 7 o sus pedidos tengan una seña. */
SELECT
  nombre_cli,
  ciudad
FROM
  cliente
WHERE
  MONTH(fecha_alta) NOT IN (1, 7)
  OR id_cli IN (
    SELECT
      id_cli
    FROM
      pedido
    WHERE
      senia_dada IS NOT NULL
  );

/* CON INNER JOIN */
SELECT
  /* DISTINCT c.id_cli, */
  c.nombre_cli,
  c.ciudad
FROM
  cliente AS c
  INNER JOIN pedido AS p ON c.id_cli = p.id_cli
WHERE
  MONTH(c.fecha_alta) NOT IN (1, 7)
  OR p.senia_dada IS NOT NULL
GROUP BY
  c.id_cli;

/* f.Hallar la cantidad de clientes que pidieron flores que todavía existen y cuya descripción no contenga ‘ an ’ */
/* CON LEFT JOIN */
SELECT
  COUNT(p.id_cli)
FROM
  pedido AS p
  LEFT JOIN flores AS f ON p.id_flor = f.id
WHERE
  p.id_flor IS NOT NULL
  AND f.descripcion_flor NOT LIKE '%an%';

/* CON SUBCONSULTA */
SELECT
  COUNT(id_cli)
FROM
  pedido
WHERE
  id_flor IN (
    SELECT
      id
    FROM
      flores
    WHERE
      descripcion_flor NOT LIKE '%an%'
  );

/* g.Hallar el promedio de los precios de las flores de cada evento. */
SELECT
  AVG(f.precio_unidad)
FROM
  flores AS f
  INNER JOIN pedido AS p ON f.id = p.id_flor
GROUP BY
  p.id_eve;

/* h.Mostrar la cantidad solicitada y fecha del pedido solamente de las flores que ya no existan */
/* CON LEFT JOIN */
SELECT
  p.cantidad_solicitada,
  p.fecha_pedido
FROM
  pedido AS p
  LEFT JOIN flores AS f ON p.id_flor = f.id
WHERE
  f.id IS NULL;

/* CON SUBCONSULTA */
SELECT
  cantidad_solicitada,
  fecha_pedido
FROM
  pedido
WHERE
  id_flor NOT IN (
    SELECT
      id
    FROM
      flores
  );

/* i.Hallar la suma de las cantidades solicitadas según el mes de la fecha del pedido solamente si la suma es mayor o igual a 50  */
SELECT
  SUM(cantidad_solicitada)
FROM
  pedido
GROUP BY
  MONTH(fecha_pedido)
HAVING
  SUM(cantidad_solicitada) >= 50;

/* j.Hallar la cantidad de pedidos que fueron de clientes de ituzaingo o moreno y cuya fecha de pedido fue hace un año atras segun la flor elegida  */
/* CON INNER JOIN */
SELECT
  COUNT(p.id_pe)
FROM
  pedido AS p
  INNER JOIN cliente AS c ON p.id_cli = c.id_cli
WHERE
  c.ciudad IN ('ituzaingo', 'moreno')
  AND YEAR(p.fecha_pedido) = YEAR(NOW()) - 1
GROUP BY
  p.id_flor;

/* CON SUBCONSULTA */
SELECT
  COUNT(id_pe)
FROM
  pedido
WHERE
  id_cli IN (
    SELECT
      id_cli
    FROM
      cliente
    WHERE
      ciudad IN ('ituzaingo', 'moreno')
  )
  AND YEAR(fecha_pedido) = YEAR(NOW()) - 1
GROUP BY
  id_flor;

/* k.Mostrar los 2 pedidos más antiguos  */
SELECT
  *
FROM
  pedido
ORDER BY
  fecha_pedido ASC
LIMIT
  2;

/* l.Hacer un stored procedure que muestre los pedidos una flor elegida  */
DROP PROCEDURE IF EXISTS `mostrar_pedidos`;

DELIMITER // 
CREATE PROCEDURE IF NOT EXISTS `mostrar_pedidos`(IN id INT) BEGIN
SELECT
  *
FROM
  pedido
WHERE
  id_flor = id;

END // 
DELIMITER ;

CALL mostrar_pedidos(1);

/* m.Hacer un stored procedure que inserte una nueva flor  */
DROP PROCEDURE IF EXISTS `insertar_flor`;

DELIMITER //
CREATE PROCEDURE IF NOT EXISTS `insertar_flor`(IN id INT, IN descripcion VARCHAR(20), IN precio FLOAT) BEGIN
INSERT INTO
  flores (id, descripcion_flor, precio_unidad)
VALUES
  (id, descripcion, precio);

END //
DELIMITER ;

CALL insertar_flor(12, 'margarita', 1000);

/* n.Hacer un stored procedure que actualice los datos de la flor elegido  */
DROP PROCEDURE IF EXISTS `actualizar_flor`;

DELIMITER //
CREATE PROCEDURE IF NOT EXISTS `actualizar_flor`(IN id INT, IN descripcion VARCHAR(20), IN precio FLOAT) BEGIN
UPDATE
  flores
SET
  descripcion_flor = descripcion,
  precio_unidad = precio
WHERE
  id = id;

END //
DELIMITER ;

CALL actualizar_flor(12, 'margarita', 1500);

/* o.Hacer un stored procedure que elimine una flor elegida  */
DROP PROCEDURE IF EXISTS `eliminar_flor`;

DELIMITER //
CREATE PROCEDURE IF NOT EXISTS `eliminar_flor`(IN id INT) BEGIN
DELETE
FROM
  flores
WHERE
  id = id;

END //
DELIMITER ;

CALL eliminar_flor(12);

/* p.Hacer un stored procedure que busque la suma de la cantidad solicitada de un evento elegido  */
DROP PROCEDURE IF EXISTS `suma_cantidad_solicitada`;

DELIMITER //
CREATE PROCEDURE IF NOT EXISTS `suma_cantidad_solicitada`(IN id INT) BEGIN
SELECT
  SUM(cantidad_solicitada)
FROM
  pedido
WHERE
  id_eve = id;

END //
DELIMITER ;

CALL suma_cantidad_solicitada(1);

/* 2.Diferencias entre triggers y stored procedure  */
/* los triggers se ejecutan automaticamente cuando se realiza una accion sobre una tabla, mientras que los stored procedure se ejecutan cuando se los llama */

/* 3.Hacer un ejemplo de trigger usando BEFORE INSERT */
DROP TRIGGER IF EXISTS `insertar_pedido`;

DELIMITER //
CREATE TRIGGER IF NOT EXISTS `insertar_pedido` BEFORE
INSERT
  ON `pedido` FOR EACH ROW IF NEW.senia_dada IS NULL THEN
SET
  NEW.senia_dada = 0;
END IF //
DELIMITER ;
