/*
 * explicacion de clases y objectos en codigo
 */

// Definición de una clase llamada "Persona"
public class Persona {
  // Atributos de la clase
  String nombre;
  int edad;

  // Constructor de la clase
  public Persona(String nombre, int edad) {
    this.nombre = nombre;
    this.edad = edad;
  }

  // Método de la clase
  public void saludar() {
    System.out.println(
        "Hola, soy " + nombre + " y tengo " + edad + " años.");
  }

  public static void main(String[] args) {
    // Crear objetos de la clase Persona
    Persona persona1 = new Persona("Juan", 30);
    Persona persona2 = new Persona("María", 25);
    // Llamar al método "saludar" de los objetos
    persona1.saludar();
    // > Hola, soy Juan y tengo 30 años.
    persona2.saludar();
    // > Hola, soy María y tengo 25 años.
  }
}
