# Examen Final de Programación I - 29/07/2025

## CUESTIONARIO
Se pide desarrollar un programa en C para gestionar los registros de una **librería**.  
El sistema debe permitir administrar un conjunto de libros y realizar diversas operaciones sobre ellos.

---

### Requerimientos del programa
- Defina una estructura llamada **Libro** con los siguientes campos:
  - `codigo` (entero): identificador único del libro.
  - `titulo` (cadena de caracteres de hasta 50).
  - `autor` (cadena de caracteres de hasta 30).
  - `precio` (flotante).
  - `stock` (entero).

---

### Funcionalidades requeridas
El programa debe permitir:
1. Agregar un nuevo libro al registro.
2. Buscar un libro por su código y mostrar sus datos.
3. Listar todos los libros disponibles.
4. Eliminar un libro del registro.
5. Salir del sistema.

Además:
- Validar las operaciones necesarias (por ejemplo: no permitir agregar un libro si el código ya existe, ni modificar uno inexistente).
- Organizar el código de forma modular, dividiendo las operaciones en funciones.
- Mostrar un menú interactivo que se ejecute de manera repetitiva hasta que el usuario decida salir.

---

### Entrega
El examen será entregado por **correo electrónico** en el formato de un **archivo de código fuente en C**.  
Será realizado en una computadora aprobada por el profesor, la cual debe permitir:
- La vigilancia constante del docente.
- La revisión del código una vez terminado el examen.

---

## CRITERIO DE EVALUACIÓN

| Criterio                   | Descripción                                                                                 | Pts |
|----------------------------|---------------------------------------------------------------------------------------------|------|
| **1. Definición de la estructura (Libro)** | La estructura Libro está correctamente definida con todos los campos requeridos y los tipos de datos adecuados. | 1    |
| **2. Manejo de registros con arreglos**   | Se almacenan múltiples libros correctamente y el programa permite trabajar con ellos dinámicamente.             | 2    |
| **3. Funcionalidades principales**       | Cada una de las funcionalidades solicitadas debe estar implementada: <br> - Agregar libro (0,8) <br> - Buscar libro (0,8) <br> - Listar libros (0,8) <br> - Eliminar libro (0,8) <br> - Salir del sistema (0,8) | 4    |
| **4. Validaciones**                      | Se realizan comprobaciones como evitar duplicados, verificar existencia antes de modificar/eliminar, y manejo de entradas incorrectas. | 1 |
| **5. Organización modular**              | Uso correcto de funciones y pasaje de parámetros para dividir las responsabilidades del programa. | 1 |
| **6. Control de flujo y repetición**     | Uso adecuado de estructuras de control (`if-else`, `switch`) y bucles para el menú. | 1 |

---
