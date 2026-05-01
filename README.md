# Comunidad

## Discrod
Para unirse a la comunidad https://discord.gg/TsF5KmQJ

# Contenidos:
Para ver los contenidos de la clase: https://facundouferer.github.io/programierds/

---

# Índice de Temas

Las carpetas en [`Temas/`](./Temas) están numeradas siguiendo el orden del curso publicado en [Programierds — Curso de C](https://facundouferer.github.io/programierds/es/cursos/c/01-introduccion-y-estructura/). El número de cada carpeta coincide con la lección del sitio.

> Los números faltantes (08, 13, 14, 30) corresponden a temas del sitio que todavía no tienen ejemplos en este repo.

## Fundamentos del lenguaje

- [**01 — Introducción a C**](./Temas/01-Introduccion-a-C) — Primeros programas. Estructura mínima de un `main`, `printf` y compilación de un "Hola, mundo".
- [**02 — Secuencia de Acciones**](./Temas/02-Secuencia-de-Acciones) — El programa como una serie de pasos ordenados. Estados de un proceso, ejemplos de ejecución secuencial y procesos del sistema operativo (`fork`, `sleep`).
- [**03 — Variables y Constantes**](./Temas/03-Variables-y-Constantes) — Declaración y uso de variables (`int`, `float`, `char`) y constantes con `#define` y `const`.
- [**04 — Entrada y Salida**](./Temas/04-Entrada-y-Salida) — `printf` para mostrar datos y `scanf` para leerlos. Formateo básico y manejo de la consola.
- [**05 — Tipos de Datos**](./Temas/05-Tipos-de-Datos) — Enteros, flotantes, caracteres. Conversión y uso en operaciones simples (suma, área de un rectángulo).
- [**06 — Operadores**](./Temas/06-Operadores) — Aritméticos, relacionales y lógicos. Combinación de operadores en expresiones.

## Estructuras de control

- [**07 — If-Else**](./Temas/07-If-Else) — Decisiones condicionales, `if`/`else if`/`else` e ifs anidados. Ejemplos: clasificación de notas, ordenar tres números, menús.
- [**09 — Switch**](./Temas/09-Switch) — Selección múltiple con `switch`/`case`/`break`. Operaciones básicas dirigidas por menú.
- [**10 — While**](./Temas/10-While) — Bucle con condición previa. Validación de contraseña, tablas de multiplicar.
- [**11 — For**](./Temas/11-For) — Bucle con contador. Tablas, sumatorias, números primos, promedios, multiplicación de matrices.
- [**12 — Do-While**](./Temas/12-Do-While) — Bucle con condición posterior (al menos una iteración). Menús interactivos y validación de entrada.

## Estructuras de datos

- [**15 — Arreglos**](./Temas/15-Arreglos) — Vectores y matrices. Recorrido lineal y cuadrado, declaración y acceso por índice.
- [**16 — Operaciones con Arreglos**](./Temas/16-Operaciones-con-Arreglos) — Búsqueda, inserción, suma de matrices y recorrido paralelo de dos arrays.
- [**17 — Cadenas**](./Temas/17-Cadenas) — Strings como arrays de `char`. Longitud, copia, concatenación, comparación y búsqueda de caracteres y subcadenas.
- [**18 — Estructuras**](./Temas/18-Estructuras) — `struct` para agrupar datos relacionados. Arreglos de structs, búsqueda, comparación de personas y productos.
- [**19 — Ordenación y Búsqueda**](./Temas/19-Ordenacion-y-Busqueda) — Algoritmos clásicos: Bubble Sort, Selection Sort, Insertion Sort y Búsqueda Binaria.
- [**20 — Listas**](./Temas/20-Listas) — Listas enlazadas dinámicas con punteros. Creación de nodos, inserción al inicio, eliminación, recorrido.
- [**21 — Pilas**](./Temas/21-Pilas) — Estructura LIFO con `push`/`pop`.
- [**22 — Colas**](./Temas/22-Colas) — Estructura FIFO con `enqueue`/`dequeue`.
- [**23 — Árboles Binarios**](./Temas/23-Arboles-Binarios) — Nodos con dos hijos, recorridos y un ejemplo de árbol genealógico.

## Programación estructurada

- [**24 — Modularización y Funciones**](./Temas/24-Modularizacion-y-Funciones) — Dividir programas en funciones y archivos `.c`/`.h` separados. Proyectos completos con `main.c` + módulos (operaciones, menú, etc).
- [**25 — Variables y Parámetros**](./Temas/25-Variables-y-Parametros) — Pasaje de parámetros **por valor** vs **por referencia** (con punteros). Diferencia entre modificar la copia o el original.
- [**26 — Recursividad**](./Temas/26-Recursividad) — Funciones que se llaman a sí mismas. Factorial, Fibonacci, conteo regresivo.
- [**27 — Archivos**](./Temas/27-Archivos) — Lectura y escritura de archivos de texto con `fopen`, `fprintf`, `fgets`. Texto formateado y línea por línea.

## Programación Orientada a Objetos (en C/C++)

- [**28 — POO en C**](./Temas/28-POO-en-C) — Introducción a clases y objetos.
- [**29 — Encapsulación y Abstracción**](./Temas/29-Encapsulacion-y-Abstraccion) — Ocultar detalles internos y exponer una interfaz pública.
- [**31 — Herencia y Polimorfismo**](./Temas/31-Herencia-y-Polimorfismo) — Reutilización de código mediante herencia y comportamiento polimórfico.

## Cómo compilar y correr un ejemplo

```bash
cd Temas/01-Introduccion-a-C
gcc hola-mundo.c -o hola-mundo
./hola-mundo
```

Para los temas con varios archivos (`24-Modularizacion-y-Funciones`):

```bash
cd Temas/24-Modularizacion-y-Funciones/MegaOperaciones
gcc main.c menu.c operaciones.c -o programa
./programa
```
