-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 30-10-2023 a las 22:49:35
-- Versión del servidor: 10.4.24-MariaDB
-- Versión de PHP: 8.1.6
SET
  SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";

START TRANSACTION;

SET
  time_zone = "+00:00";

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */
;

/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */
;

/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */
;

/*!40101 SET NAMES utf8mb4 */
;

--
-- Base de datos: `farmacia`
--
-- --------------------------------------------------------
--
-- Estructura de tabla para la tabla `medicamentos`
--
CREATE TABLE `medicamentos` (
  `id_medi` int(11) NOT NULL,
  `descripcion` varchar(100) NOT NULL,
  `foto` varchar(100) NOT NULL DEFAULT 'sin_foto.png',
  `dosis` varchar(50) DEFAULT NULL,
  `cant_comprimidos` int(11) NOT NULL DEFAULT 0,
  `precio` float NOT NULL
) ENGINE = InnoDB DEFAULT CHARSET = latin1;

--
-- Volcado de datos para la tabla `medicamentos`
--
INSERT INTO
  `medicamentos` (
    `id_medi`,
    `descripcion`,
    `foto`,
    `dosis`,
    `cant_comprimidos`,
    `precio`
  )
VALUES
  (
    1,
    'levotiroxina',
    'sin_foto.jpg',
    '100 mg',
    12,
    3200
  ),
  (2, 'amoxicilina', 'amoxi.png', NULL, 24, 1300),
  (
    4,
    'ibuprofeno',
    'sin_foto.png',
    '200 mg',
    24,
    800
  ),
  (
    5,
    'azitromicina',
    'sin_foto.png',
    '150 mg',
    3,
    4100
  ),
  (
    6,
    'diclofenac',
    'sin_foto.png',
    '75 mg',
    12,
    950
  ),
  (
    7,
    'Cisplatino',
    'miCisplatino.png',
    '200 mg',
    12,
    15000
  ),
  (8, 'ketoconazol', 'sin_foto.png', NULL, 16, 5000);

-- --------------------------------------------------------
--
-- Estructura de tabla para la tabla `medicos`
--
CREATE TABLE `medicos` (
  `id_med` int(11) NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `especialidad` varchar(100) NOT NULL,
  `fecha_nac` date NOT NULL
) ENGINE = InnoDB DEFAULT CHARSET = latin1;

--
-- Volcado de datos para la tabla `medicos`
--
INSERT INTO
  `medicos` (`id_med`, `nombre`, `especialidad`, `fecha_nac`)
VALUES
  (2, 'Laura', 'Dermatologo', '1991-05-09'),
  (3, 'Pablo', 'Neurologo', '1998-12-19'),
  (4, 'Mariana', 'Clinica', '1994-04-10');

-- --------------------------------------------------------
--
-- Estructura de tabla para la tabla `receta`
--
CREATE TABLE `receta` (
  `id_receta` int(11) NOT NULL,
  `fecha_vence` date NOT NULL,
  `id_medicamento` int(11) NOT NULL,
  `id_medico` int(11) NOT NULL
) ENGINE = InnoDB DEFAULT CHARSET = latin1;

--
-- Volcado de datos para la tabla `receta`
--
INSERT INTO
  `receta` (
    `id_receta`,
    `fecha_vence`,
    `id_medicamento`,
    `id_medico`
  )
VALUES
  (1, '2022-12-02', 1, 2),
  (2, '2023-08-12', 2, 3),
  (3, '2023-07-10', 4, 1),
  (4, '2023-02-13', 3, 4),
  (5, '2023-06-14', 5, 2),
  (6, '2022-04-09', 7, 3),
  (7, '2023-11-10', 6, 1),
  (8, '2023-12-01', 1, 4),
  (9, '2023-10-23', 7, 4),
  (10, '2023-03-05', 8, 2),
  (11, '2023-03-22', 8, 3);

--
-- Índices para tablas volcadas
--
--
-- Indices de la tabla `medicamentos`
--
ALTER TABLE
  `medicamentos`
ADD
  PRIMARY KEY (`id_medi`);

--
-- Indices de la tabla `medicos`
--
ALTER TABLE
  `medicos`
ADD
  PRIMARY KEY (`id_med`);

--
-- Indices de la tabla `receta`
--
ALTER TABLE
  `receta`
ADD
  PRIMARY KEY (`id_receta`);

--
-- AUTO_INCREMENT de las tablas volcadas
--
--
-- AUTO_INCREMENT de la tabla `medicamentos`
--
ALTER TABLE
  `medicamentos`
MODIFY
  `id_medi` int(11) NOT NULL AUTO_INCREMENT,
  AUTO_INCREMENT = 9;

--
-- AUTO_INCREMENT de la tabla `medicos`
--
ALTER TABLE
  `medicos`
MODIFY
  `id_med` int(11) NOT NULL AUTO_INCREMENT,
  AUTO_INCREMENT = 5;

--
-- AUTO_INCREMENT de la tabla `receta`
--
ALTER TABLE
  `receta`
MODIFY
  `id_receta` int(11) NOT NULL AUTO_INCREMENT,
  AUTO_INCREMENT = 12;

COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */
;

/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */
;

/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */
;

/* Realizar las siguientes consultas */
/* a. Mostrar toods los medicos cuya edad no este entre 20  y 26 */
SELECT
  *
FROM
  medicos
WHERE
  YEAR(NOW()) - YEAR(fecha_nac) NOT BETWEEN 20
  AND 26;

/* b. Mostrar la descripcion de los medicamentos y cantidad de comprimidos de aquellos tengan 16 o 24 comprimidos y foto que tenga de segunda letra i */
SELECT
  descripcion,
  cant_comprimidos,
  foto
FROM
  medicamentos
WHERE
  cant_comprimidos = 16
  OR cant_comprimidos = 24
  AND foto LIKE '_i%';

/* c. hallar el promedio de la cantidad de comprimidos segun la dosis solamente los promedios que sean mayores a 17 */
SELECT
  AVG(cant_comprimidos)
FROM
  medicamentos
GROUP BY
  dosis
HAVING
  AVG(cant_comprimidos) > 17;

/* d. Hallar la cantidad de recetas solicitadas por cada medico cuya fecha de vencimiento de la receta  sea entre '2023-06-01' y la fecha actual */
SELECT
  COUNT(id_receta),
  id_medico
FROM
  receta
WHERE
  fecha_vence BETWEEN '2023-06-01'
  AND NOW()
GROUP BY
  id_medico;

/* e. Mostrar el nombre del medico y su especialidad solo de aquellos medicos cuya edad sea entre 30 y 40 o sus recetas sean del año anterior */
SELECT
  nombre,
  especialidad
FROM
  medicos
WHERE
  YEAR(NOW()) - YEAR(fecha_nac) BETWEEN 30
  AND 40
  OR id_med IN (
    SELECT
      id_medico
    FROM
      receta
    WHERE
      YEAR(fecha_vence) = YEAR(NOW()) - 1
  );

/* f. hallar la cantidad de medicamentos segun el mes que vence la receta de aquellos medicamentos que no sean ibuprofeno ni diclofenac y tengan una dosis indicada */
SELECT
  COUNT(id_medicamento)
FROM
  receta r
  INNER JOIN medicamentos m ON r.id_medicamento = m.id_medi
WHERE
  descripcion NOT IN ('ibuprofeno', 'diclofenac')
  AND dosis IS NOT NULL
GROUP BY
  MONTH(fecha_vence);

/* g. Hallar la suma de los precios de los medicamentos segun la especialidad del medico */
SELECT
  SUM(m.precio),
  med.especialidad
FROM
  receta r
  INNER JOIN medicamentos m ON r.id_medicamento = m.id_medi
  INNER JOIN medicos med ON r.id_medico = med.id_med
GROUP BY
  med.especialidad;

/* h. mostrar los medicamentos que fueron recetados pero ya no existen */
SELECT
  *
FROM
  medicamentos
WHERE
  id_medi NOT IN (
    SELECT
      id_medicamento
    FROM
      receta
  );

/* i hallar el maximo precio de los medicamentos segun la dosis solo de aquellos que fueron recetados por medicos que ya no existan*/
SELECT
  MAX(precio)
FROM
  medicamentos
WHERE
  id_medi IN (
    SELECT
      id_medicamento
    FROM
      receta
    WHERE
      id_medico NOT IN (
        SELECT
          id_med
        FROM
          medicos
      )
  )
  AND dosis IS NOT NULL;
/*  CON LEFT JOIN */
SELECT
  MAX(precio)
FROM
  medicamentos m
  LEFT JOIN receta r ON m.id_medi = r.id_medicamento
  LEFT JOIN medicos med ON r.id_medico = med.id_med
WHERE
  med.id_med IS NULL
  AND dosis IS NOT NULL;
  
 /* j. mostrar las 3 recetas mas nuevas mas*/
SELECT
  *
FROM
  receta
ORDER BY
  fecha_vence DESC
LIMIT
  3;

  /* k. hacer un stored procedure que muestre las recetas de un medicamento seleccionado */
  DELIMITER //
  CREATE PROCEDURE recetas_medicamento(IN id_medi INT)
  BEGIN
    SELECT
      *
    FROM
      receta
    WHERE
      id_medicamento = id_medi;
  END //
  DELIMITER ;
  /* l. hacer un stored procedure que busque la cantidad de recetas de un medico elegido */
  DELIMITER //
  CREATE PROCEDURE recetas_medico(IN id_med INT)
  BEGIN
    SELECT
      COUNT(id_receta)
    FROM
      receta
    WHERE
      id_medico = id_med;
  END //
  DELIMITER ;

  