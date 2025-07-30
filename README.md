# Apunte de C para principiantes

El lenguaje C es uno de los más importantes en el mundo de la programación. A pesar de su antigüedad, sigue siendo ampliamente utilizado y enseñado en universidades e instituciones de tecnología. A continuación, te explico las razones clave por las que alguien debería estudiar C.

# 1 – Introducción al Lenguaje C

# Estructura de un programa en C

Un programa en C está compuesto por varias partes:

* **Directivas de preprocesador**  
* **Declaración de funciones**  
* **Función principal (`main`)**  
* **Definición de variables**  
* **Lógica del programa (instrucciones y sentencias)**  
* **Funciones auxiliares (opcionales)**

| *// 1️⃣ Directivas del preprocesador*\#include \<stdio.h\>   *// Librería estándar para entrada/salida*\#include \<math.h\>    *// Librería para funciones matemáticas**// 2️⃣ Declaración de funciones (prototipos)*float calcularAreaCirculo(float radio);*// 3️⃣ Función principal (punto de entrada del programa)*int main() {    *// 4️⃣ Definición de variables*    float radio, area;    *// 5️⃣ Lógica del programa*    printf("Ingrese el radio del círculo: ");    scanf("%f", \&radio);    *// Llamada a una función auxiliar*    area \= calcularAreaCirculo(radio);    printf("El área del círculo con radio %.2f es: %.2f\\n", radio, area);    return 0;  *// 6️⃣ Fin del programa (código de salida)*}*// 7️⃣ Definición de funciones auxiliares*float calcularAreaCirculo(float radio) {    return M\_PI \* radio \* radio; *// Fórmula del área de un círculo*} |
| :---- |

**Directivas del Preprocesador**

Se usan para incluir **librerías** necesarias antes de compilar el código.

| \#include \<stdio.h\>   *// Para funciones como printf() y scanf()*\#include \<math.h\>    *// Para usar funciones matemáticas como M\_PI* |
| :---- |

**Declaración de Funciones (Prototipos)**

Se escriben antes de `main()` para indicar que existen funciones auxiliares en el programa.  
Permiten que `main()` pueda llamarlas sin errores.

| float calcularAreaCirculo(float radio); |
| :---- |

**Función Principal (`main`)**

**Es el punto de entrada del programa**, donde inicia la ejecución y **debe existir en todos los programas en C**.

| int main() {    *// Código del programa*    return 0; *// Indica que el programa finalizó correctamente*} |
| :---- |

**Definición de Variables**

Se deben declarar antes de usarlas. C permite **diferentes tipos de datos**.

| int edad;     *// Entero*float precio; *// Decimal*char letra;   *// Caracter* |
| :---- |

**Lógica del Programa (Instrucciones y Sentencias):** Incluye la **entrada de datos**, **procesamiento** y **salida de datos**.

| printf("Ingrese un número: ");scanf("%d", \&numero);printf("El número ingresado es: %d", numero); |
| :---- |

**Funciones Auxiliares (Opcionales):** Son fragmentos de código reutilizables que **separan la lógica del programa**. Mejoran la organización y evitan repetir código.

| float calcularAreaCirculo(float radio) {    return M\_PI \* radio \* radio;} |
| :---- |

# Composición Secuencial de Acciones

La **composición secuencial** significa que las instrucciones se ejecutan en el orden en que aparecen en el código. Cada instrucción se ejecuta una tras otra, sin saltos ni repeticiones automáticas.

| \#include \<stdio.h\>int main() {    printf("Bienvenido al programa\\n");    printf("Por favor, ingrese su nombre: ");    char nombre\[20\];    scanf("%s", nombre);    printf("Hola, %s\!\\n", nombre);    return 0;} |
| :---- |

* Imprime un mensaje de bienvenida.  
* Pide al usuario su nombre.  
* Lee el nombre ingresado y lo muestra en pantalla.

# Procesos

En el contexto de C y los sistemas operativos, un **proceso** es un **programa en ejecución**. Cuando un programa escrito en C es ejecutado, el sistema operativo lo convierte en un proceso que tiene su propia **memoria, registros, pila y recursos**.

### **Características de un Proceso**

* **Código ejecutable**: Instrucciones del programa en C.  
* **Memoria asignada**: Datos y variables del programa.  
* **Contexto de ejecución**: Estado de los registros del procesador.  
* **Recursos del sistema**: Archivos abiertos, conexiones de red, etc.

## **Ejemplo básico de un Proceso en C**

Cuando ejecutamos un programa en C, el sistema operativo crea un proceso para ejecutarlo.

| \#include \<stdio.h\>int main() {    printf("¡Hola, soy un proceso en ejecución\!\\n");    return 0;} |
| :---- |

* **Compilamos el código:** `gcc programa.c -o programa`  
* **Ejecutamos:** `./programa`  
* **El sistema operativo crea un proceso** para ejecutar el programa.  
* **El proceso imprime un mensaje** en la consola.  
* **El proceso finaliza y libera sus recursos.**

## **Un proceso dentro de otro**

El programa imprimirá mensajes indicando que el proceso está iniciando, ejecutando y terminando.

| \#include \<stdio.h\>\#include \<unistd.h\>  *// Para usar sleep()**// Función que representa un proceso en ejecución*void procesoEjemplo() {    printf("🔵 Proceso iniciado...\\n");    sleep(2);  *// Simula que el proceso está haciendo algo durante 2 segundos*    printf("🟢 Proceso ejecutándose...\\n");    sleep(2);    printf("✅ Proceso finalizado.\\n");}int main() {    printf("🖥️ Iniciando programa...\\n");    *// Llamamos a la función que simula un proceso*    procesoEjemplo();    printf("🏁 Programa terminado.\\n");    return 0;} |
| :---- |

* **El programa inicia** e imprime `"🖥️ Iniciando programa..."`.  
* **Llamamos a `procesoEjemplo()`**, que representa un proceso en ejecución.  
* **Dentro de `procesoEjemplo()`**:  
  * Se imprime `"🔵 Proceso iniciado..."`.  
  * Se usa `sleep(2)`, lo que hace que el programa espere **2 segundos**.  
  * Luego imprime `"🟢 Proceso ejecutándose..."` y espera otros **2 segundos**.  
  * Finalmente, imprime `"✅ Proceso finalizado."`.  
* **El control vuelve a `main()`** y se imprime `"🏁 Programa terminado."`.

# Acciones y Estados

## **Acciones:** 

Son las tareas que realiza un proceso (leer datos, ejecutar cálculos, imprimir en pantalla, esperar recursos, etc.).

## **Estados:** 

Son las fases en las que se encuentra un proceso en su ciclo de vida.

Un proceso en C pasa por distintos estados en su ejecución:

| Estado | Descripción |
| ----- | ----- |
| **Nuevo** | Se crea el proceso pero aún no se ejecuta. |
| **Listo** | Está esperando que el sistema le asigne CPU. |
| **Ejecución** | Está siendo ejecutado en el CPU. |
| **Espera** | Está pausado esperando un recurso (ejemplo: entrada del usuario). |
| **Terminado** | Ha finalizado su ejecución. |

Este código **simula un proceso** que pasa por los diferentes estados y realiza acciones en cada uno.

| \#include \<stdio.h\>\#include \<unistd.h\> *// Para sleep()*void ejecutarProceso() {    printf("🔵 Estado: NUEVO \- Creando proceso...\\n");    sleep(1);    printf("🟡 Estado: LISTO \- Esperando asignación de CPU...\\n");    sleep(1);    printf("🟢 Estado: EJECUCIÓN \- El proceso está corriendo...\\n");    sleep(2); *// Simula el tiempo de ejecución*    printf("⏳ Estado: ESPERA \- El proceso está esperando entrada del usuario...\\n");    char input;    printf("Presiona cualquier tecla y Enter para continuar: ");    scanf(" %c", \&input); *// Espera entrada del usuario*    printf("✅ Estado: TERMINADO \- El proceso ha finalizado.\\n");}int main() {    printf("🚀 Iniciando el programa...\\n");    ejecutarProceso();    printf("🏁 Programa finalizado.\\n");    return 0;} |
| :---- |

* **El programa inicia en `main()`** y llama a `ejecutarProceso()`.  
* **Estados del proceso en `ejecutarProceso()`**:  
  * **NUEVO**: Se indica que el proceso se está creando.  
  * **LISTO**: El proceso espera ser ejecutado por el CPU.  
  * **EJECUCIÓN**: El proceso está activo (simulado con `sleep(2)`).  
  * **ESPERA**: Se pausa esperando entrada del usuario (`scanf`).  
  * **TERMINADO**: El proceso finaliza.  
* **El programa finaliza y vuelve a `main()`**, mostrando `"🏁 Programa finalizado."`. 

# Variables y Constantes

## **Variables**

Una **variable** es un espacio en memoria que guarda un valor que **puede cambiar** durante la ejecución del programa.

Cada variable tiene un **tipo de dato** que define qué tipo de información puede almacenar.

Para declarar una variable en C, usamos la sintaxis:

| tipo\_de\_dato nombre\_variable; |
| :---- |

**Variables en un Programa en C**

| \#include \<stdio.h\>int main() {    *// Declaración de variables*    int edad \= 25;        *// Variable de tipo entero*    float precio \= 15.99; *// Variable de tipo flotante*    char letra \= 'A';     *// Variable de tipo carácter*    *// Mostramos los valores de las variables*    printf("Edad: %d años\\n", edad);    printf("Precio: $%.2f\\n", precio);    printf("Letra: %c\\n", letra);    *// Modificamos la variable edad*    edad \= 30;    printf("Nueva edad: %d años\\n", edad);    return 0;} |
| :---- |

La variable `edad` cambió su valor de `25` a `30`, lo que demuestra que **una variable puede modificarse** en la ejecución.

## **Constantes**

Una **constante** es un valor que **no cambia** durante la ejecución del programa. Se usa la palabra clave **`const`** o la directiva **`#define`** para definirlas.

| const float PI \= 3.1416; \#define PI 3.1416 |
| :---- |

### 

| \#include \<stdio.h\>\#define PI 3.1416 *// Definimos una constante con \#define*int main() {    const float GRAVEDAD \= 9.81; *// Definimos una constante con const*    float radio \= 5.0;    *// Calculamos el área de un círculo con PI*    float area \= PI \* radio \* radio;    printf("Radio: %.2f\\n", radio);    printf("Área del círculo: %.2f\\n", area);    printf("Valor de la gravedad: %.2f m/s^2\\n", GRAVEDAD);    *// GRAVEDAD \= 10; ❌ Esto daría error porque es una constante*    return 0;} |
| :---- |

## **Diferencias entre Variables y Constantes**

| Característica | Variable | Constante |
| ----- | :---: | :---: |
| **Valor** | Puede cambiar en la ejecución | No cambia una vez definida |
| **Declaración** | `int edad = 25;` | `const float PI = 3.1416;` o `#define PI 3.1416` |
| **Modificable** | ✅ Sí | ❌ No |
| **Ejemplo** | `edad = 30;` | `PI = 3.5; // ❌ ERROR` |

# Operaciones básicas de salida

En **C**, las operaciones de salida se utilizan para mostrar información en la pantalla. La función principal para esto es **`printf()`**, que nos permite imprimir texto y valores de variables.

## **Funciones Básicas de Salida**

`printf()` pertenece a la biblioteca estándar **stdio.h**, por lo que siempre debemos incluir esta línea al inicio del programa:

| \#include \<stdio.h\> |
| :---- |

Su sintaxis básica es:

| printf("Texto a mostrar"); |
| :---- |

También podemos imprimir valores de **variables** usando **especificadores de formato**.

### **Especificadores de Formato en `printf()`**

Sí, aquí tienes la **sintaxis de `printf()`** para mostrar diferentes tipos de datos en C, incluyendo **enteros, caracteres, flotantes y más**, con ejemplos detallados.

#### **Mostrar un número entero (int)**

| \#include \<stdio.h\>int main() {    int edad \= 25;    printf("Tengo %d años\\n", edad);    return 0;} |
| :---- |

**Salida:**

| Tengo 25 años |
| :---- |

##### Mostrar un número decimal (`float`)

| \#include \<stdio.h\>int main() {    float pi \= 3.14159;    printf("El valor de Pi es %f\\n", pi);    return 0;} |
| :---- |

**Salida:**

| El valor de Pi es 3.141590 |
| :---- |

**Nota:** `printf()` imprime 6 decimales por defecto.

### **Controlar la cantidad de decimales**

Si quieres **limitar la cantidad de decimales**, usa `%.xf`:

| \#include \<stdio.h\>int main() {    float pi \= 3.14159;    printf("Pi con 2 decimales: %.2f\\n", pi);    printf("Pi con 4 decimales: %.4f\\n", pi);    return 0;} |
| :---- |

**Salida:**

| Pi con 2 decimales: 3.14Pi con 4 decimales: 3.1416 |
| :---- |

**Nota:** Se redondea automáticamente.

### **Mostrar un número de doble precisión (`double`)**

| \#include \<stdio.h\>int main() {    double numero \= 123.456789;    printf("Número double: %lf\\n", numero);    printf("Número double con 3 decimales: %.3lf\\n", numero);    return 0;} |
| :---- |

**Salida:**

| Número double: 123.456789Número double con 3 decimales: 123.457 |
| :---- |

### **Mostrar un carácter (`char`)**

| \#include \<stdio.h\>int main() {    char letra \= 'A';    printf("La letra es %c\\n", letra);    return 0;} |
| :---- |

**Salida:**

| La letra es A |
| :---- |

### **Mostrar una cadena de caracteres (`char[]`)**

| \#include \<stdio.h\>int main() {    char nombre\[\] \= "Juan";    printf("Mi nombre es %s\\n", nombre);    return 0;} |
| :---- |

**Salida:**

| Mi nombre es Juan |
| :---- |

### **Mostrar múltiples variables en un solo `printf()`**

| \#include \<stdio.h\>int main() {    int edad \= 30;    float altura \= 1.75;    char inicial \= 'J';    printf("Tengo %d años, mido %.2f metros y mi inicial es %c\\n", edad, altura, inicial);    return 0;} |
| :---- |

**Salida:**

| Tengo 30 años, mido 1.75 metros y mi inicial es J |
| :---- |

### **Formatos más usados en `printf()`**

| Formato | Tipo de dato | Ejemplo |
| ----- | ----- | ----- |
| `%d` | Entero (`int`) | `printf("%d", 100);` |
| `%f` | Flotante (`float`) | `printf("%.2f", 3.14);` |
| `%lf` | Doble (`double`) | `printf("%.3lf", 2.71828);` |
| `%c` | Carácter (`char`) | `printf("%c", 'A');` |
| `%s` | Cadena (`char[]`) | `printf("%s", "Hola");` |

## **Salto de Línea y Caracteres Especiales**

Dentro de las cadenas de `printf()`, podemos usar algunos caracteres especiales:

| Carácter Especial | Función |
| ----- | ----- |
| `\n` | Salto de línea |
| `\t` | Tabulación (espacio grande) |
| `\\` | Imprime una barra invertida (`\`) |
| `\"` | Imprime comillas dobles (`"`) |

| \#include \<stdio.h\>int main() {    printf("Hola\\nMundo\\n");    printf("Este es un\\tejemplo con tabulación.\\n");    printf("Usamos comillas dobles: \\"Hola\\"\\n");    return 0;} |
| :---- |

**Salida esperada:**

| HolaMundoEste es un    ejemplo con tabulación.Usamos comillas dobles: "Hola" |
| :---- |

## **Funciones Básicas de Entrada**

Las **funciones básicas de entrada** permiten al usuario ingresar datos desde el teclado. Las funciones más usadas son:

**`scanf()`** → Para leer datos primitivos como enteros, flotantes, caracteres y cadenas de texto.  
**`fgets()`** → Alternativa segura para leer cadenas de texto.

### **scanf()**

`scanf()` se usa para leer datos de diferentes tipos. Su sintaxis es:

| scanf("formato", \&variable); |
| :---- |

* **Se usa `&` (ampersand) antes de la variable** cuando se trata de números (`int`, `float`, etc.).  
* **Para cadenas (`char[]`), no se usa `&`** porque los arrays ya representan direcciones de memoria.

### **Leer un número entero**

| \#include \<stdio.h\>int main() {    int edad;    printf("Ingrese su edad: ");    scanf("%d", \&edad);    printf("Su edad es %d años.\\n", edad);    return 0;} |
| :---- |

### **Leer varios datos (entero y flotante)**

| \#include \<stdio.h\>int main() {    int edad;    float altura;    printf("Ingrese su edad y altura separados por espacio: ");    scanf("%d %f", \&edad, \&altura);    printf("Edad: %d años, Altura: %.2f metros\\n", edad, altura);    return 0;} |
| :---- |

### **Leer caracteres**

Para leer un **carácter (`char`)**, usamos `%c`, pero hay un problema:  
 **`scanf("%c", &variable)` puede capturar el ENTER de una entrada anterior.**

### **Leer un solo carácter**

| \#include \<stdio.h\>int main() {    char letra;    printf("Ingrese una letra: ");    scanf(" %c", \&letra);  *// Espacio antes de %c evita capturar el ENTER*    printf("La letra ingresada es: %c\\n", letra);    return 0;} |
| :---- |

El **espacio antes de `%c`** evita capturar el ENTER que queda en el buffer.

### **Leer una cadena de texto**

### **Leer una palabra**

| \#include \<stdio.h\>int main() {    char nombre\[20\];    printf("Ingrese su nombre: ");    scanf("%s", nombre);    printf("Hola, %s\!\\n", nombre);    return 0;} |
| :---- |

`scanf("%s", nombre);` **solo captura una palabra**. No lee espacios.

### **Leer una línea completa con `fgets()` (Alternativa Segura)**

Como `scanf("%s", variable)` **no lee espacios**, para leer una línea usamos `fgets()`.

### **Leer una frase con espacios**

| \#include \<stdio.h\>int main() {    char nombre\_completo\[50\];    printf("Ingrese su nombre completo: ");    fgets(nombre\_completo, sizeof(nombre\_completo), stdin);    printf("Hola, %s", nombre\_completo);    return 0;} |
| :---- |

### **Formatos en `scanf()`**

| Formato | Tipo de Dato | Ejemplo de Código |
| ----- | ----- | ----- |
| `%d` | Entero (`int`) | `scanf("%d", &num);` |
| `%f` | Flotante (`float`) | `scanf("%f", &num);` |
| `%lf` | Doble precisión (`double`) | `scanf("%lf", &num);` |
| `%c` | Carácter (`char`) | `scanf(" %c", &letra);` |
| `%s` | Cadena (`char[]`) | `scanf("%s", nombre);` |
| `fgets()` | Cadena con espacios | `fgets(nombre, 50, stdin);` |

# 

# 2 \-  Estructura de Datos

# Unidad 2 \- Estructura de Datos en C

## **Tipos Primitivos de Datos**

Son los tipos básicos proporcionados por el lenguaje C:

| Tipo | Descripción | Ejemplo | Tamaño en Memoria |
| ----- | ----- | ----- | ----- |
| `int` | Números enteros | `int edad = 25;` | 4 bytes (en la mayoría de sistemas) |
| `float` | Números decimales de precisión simple | `float precio = 10.5;` | 4 bytes |
| `double` | Números decimales de precisión doble | `double pi = 3.141592;` | 8 bytes |
| `char` | Caracteres individuales | `char letra = 'A';` | 1 byte |

| \#include \<stdio.h\>int main() {    int numero \= 10;    float decimal \= 3.14;    char letra \= 'A';    printf("Número entero: %d\\n", numero);    printf("Número decimal: %.2f\\n", decimal);    printf("Letra: %c\\n", letra);        return 0;} |
| :---- |

**Salida esperada:**

| Número entero: 10Número decimal: 3.14Letra: A |
| :---- |

### **Dominio de cada Tipo de Dato y Operaciones Válidas**

Cada tipo de dato tiene un rango de valores permitidos:

| Tipo | Dominio (Rango de Valores) |
| ----- | ----- |
| `int` | \-2,147,483,648 a 2,147,483,647 (en sistemas de 4 bytes) |
| `float` | Aproximadamente ±3.4E-38 a ±3.4E+38 |
| `double` | Aproximadamente ±1.7E-308 a ±1.7E+308 |
| `char` | \-128 a 127 (valores ASCII) |

Los tipos de datos soportan distintas **operaciones matemáticas, relacionales y lógicas**:

## **Operaciones Matemáticas**

| Operador | Descripción | Ejemplo |
| ----- | ----- | ----- |
| `+` | Suma | `a + b` |
| `-` | Resta | `a - b` |
| `*` | Multiplicación | `a * b` |
| `/` | División | `a / b` |
| `%` | Módulo (resto de la división) | `a % b` |

## **Operaciones Relacionales**

| Operador | Descripción |
| ----- | ----- |
| `==` | Igualdad |
| `!=` | Diferente |
| `>` | Mayor que |
| `<` | Menor que |
| `>=` | Mayor o igual que |
| `<=` | Menor o igual que |

## **Operaciones Lógicas**

| Operador | Descripción |
| ----- | ----- |
| `&&` | AND (Y lógico) |
| \` |  |
| `!` | NOT (Negación) |

| \#include \<stdio.h\>int main() {    int a \= 10, b \= 5;    printf("a \> b: %d\\n", a \> b);    printf("a \== 10 && b \== 5: %d\\n", a \== 10 && b \== 5);    return 0;} |
| :---- |

## **Precedencia entre Operadores**

La precedencia define qué operación se ejecuta primero:

1. `()`: Paréntesis  
2. `* / %`: Multiplicación, división, módulo  
3. `+ -`: Suma y resta  
4. `> < >= <=`: Comparaciones  
5. `== !=`: Igualdades  
6. `&&`: AND lógico  
7. `||`: OR lógico  
8. `=`: Asignación

| \#include \<stdio.h\>int main() {    int resultado \= 5 \+ 3 \* 2;    printf("Resultado: %d\\n", resultado);    return 0;} |
| :---- |

## **Estructuras de Datos**

Las estructuras de datos pueden ser **estáticas** o **dinámicas**:

* **Estáticas**: Su tamaño se define en tiempo de compilación (ej: arrays).  
* **Dinámicas**: Se asignan y liberan en tiempo de ejecución (ej: listas enlazadas).

💡 **Ejemplo de array estático:**

| \#include \<stdio.h\>int main() {    int numeros\[5\] \= {1, 2, 3, 4, 5};    printf("Primer elemento: %d\\n", numeros\[0\]);    return 0;} |
| :---- |

# 

# 3 \- Sentencias de Control e Iteración

# La Estructura de Decisión

Las estructuras de decisión permiten que un programa tome diferentes caminos según ciertas condiciones.

## **Sentencia if**

La sentencia `if` permite ejecutar un bloque de código **sólo si una condición es verdadera**. Si la condición es falsa, el código dentro del `if` no se ejecuta.

| if (condición) {    *// Código que se ejecuta si la condición es verdadera*} |
| :---- |

### **Evaluar si un número es positivo**

| \#include \<stdio.h\>int main() {    int numero;        printf("Ingrese un número: ");    scanf("%d", \&numero);    if (numero \> 0) {        printf("El número es positivo.\\n");    }    printf("Fin del programa.\\n");    return 0;} |
| :---- |

1. **Pide al usuario** que ingrese un número.  
2. **Verifica si el número es mayor que 0** con la condición `numero > 0`.  
3. **Si la condición es verdadera**, imprime `"El número es positivo."`.  
4. **Si la condición es falsa**, no imprime nada y sigue con el resto del código.  
5. **Siempre imprime `"Fin del programa."`** al final.

## **Sentencia if-else**

La sentencia `if-else` permite **ejecutar un bloque de código si la condición es verdadera** y **otro bloque si la condición es falsa**.

| if (condición) {    *// Código si la condición es verdadera*} else {    *// Código si la condición es falsa*} |
| :---- |

### **Verificar si un número es positivo o negativo**

| \#include \<stdio.h\>int main() {    int numero;        printf("Ingrese un número: ");    scanf("%d", \&numero);    if (numero \> 0) {        printf("El número es positivo.\\n");    } else {        printf("El número es negativo o cero.\\n");    }    return 0;} |
| :---- |

1. **Pide al usuario un número.**  
2. **Evalúa si el número es positivo (`numero > 0`)**.  
   * **Si la condición es verdadera**, imprime `"El número es positivo."`.  
   * **Si la condición es falsa**, ejecuta el bloque `else`, que imprime `"El número es negativo o cero."`.

### **Diferencia clave entre if y if-else**

* `if` **solo ejecuta código cuando la condición es verdadera**, si es falsa, no hace nada.  
* `if-else` **tiene dos caminos posibles**, uno cuando la condición es verdadera y otro cuando es falsa.

## **Sentencias if-else anidados**  

Los `if-else` anidados permiten tomar **decisiones más complejas** dentro de un programa. Se usan cuando se necesita evaluar **múltiples condiciones de manera jerárquica**.

Un `if-else` anidado ocurre cuando **dentro de un `if` o un `else` hay otro `if-else`**.  
 Se usa para evaluar **varias condiciones** en un orden específico.

| if (condición1) {    *// Código si condición1 es verdadera*    if (condición2) {        *// Código si condición2 también es verdadera*    } else {        *// Código si condición2 es falsa*    }} else {    *// Código si condición1 es falsa*} |
| :---- |

#### **Verificar si un número es positivo, negativo o cero**

| \#include \<stdio.h\>int main() {    int numero;    printf("Ingrese un número: ");    scanf("%d", \&numero);    if (numero \> 0) { *// Primer if*        printf("El número es positivo.\\n");    } else {         if (numero \< 0) { *// Segundo if dentro del else*            printf("El número es negativo.\\n");        } else {            printf("El número es cero.\\n"); *// Se ejecuta si numero no es ni mayor ni menor a 0*        }    }    return 0;} |
| :---- |

1. **Se solicita un número al usuario**.  
2. **Se verifica si es mayor que 0 (positivo).**  
3. **Si no es positivo (`else`), se evalúa si es negativo.**  
4. **Si tampoco es negativo, entonces es 0\.**

#### **Clasificación de notas**

| \#include \<stdio.h\>int main() {    int nota;    printf("Ingrese la nota del estudiante (0-100): ");    scanf("%d", \&nota);    if (nota \>= 90) {        printf("Calificación: A\\n");    } else {        if (nota \>= 80) {            printf("Calificación: B\\n");        } else {            if (nota \>= 70) {                printf("Calificación: C\\n");            } else {                if (nota \>= 60) {                    printf("Calificación: D\\n");                } else {                    printf("Calificación: F\\n");                }            }        }    }    return 0;} |
| :---- |

1. Si la nota es **90 o más**, se muestra `"A"`.  
2. Si no, pero es **80 o más**, se muestra `"B"`.  
3. Si no, pero es **70 o más**, se muestra `"C"`.  
4. Si no, pero es **60 o más**, se muestra `"D"`.  
5. Si ninguna de las anteriores se cumple, se muestra `"F"`.

#### **Menú interactivo con subopciones**

| \#include \<stdio.h\>int main() {    int opcion;    printf("Menú de opciones:\\n");    printf("1. Operaciones matemáticas\\n");    printf("2. Juegos\\n");    printf("Seleccione una opción: ");    scanf("%d", \&opcion);    if (opcion \== 1) { *// Primer nivel de decisión*        int subopcion;        printf("\\nSeleccione la operación:\\n");        printf("1. Suma\\n");        printf("2. Resta\\n");        printf("Seleccione una subopción: ");        scanf("%d", \&subopcion);        if (subopcion \== 1) {            printf("Seleccionaste Suma.\\n");        } else if (subopcion \== 2) {            printf("Seleccionaste Resta.\\n");        } else {            printf("Subopción no válida.\\n");        }    } else if (opcion \== 2) { *// Otra opción del primer nivel*        printf("Accediendo a juegos...\\n");    } else {        printf("Opción no válida.\\n");    }    return 0;} |
| :---- |

1. **Se muestra un menú con opciones**.  
2. **Si el usuario elige "1", se despliega otro submenú**.  
3. **Si elige "2", se le muestra un mensaje relacionado con juegos**.  
4. **Si ingresa otra opción, se le indica que no es válida**.

## **Sentencia switch**

Cuando hay múltiples opciones, `switch` simplifica el código en lugar de usar varios `if-else`.

| \#include \<stdio.h\>int main() {    int opcion;    printf("Seleccione una opción (1-3): ");    scanf("%d", \&opcion);        switch (opcion) {        case 1:            printf("Opción 1 seleccionada.\\n");            break;        case 2:            printf("Opción 2 seleccionada.\\n");            break;        case 3:            printf("Opción 3 seleccionada.\\n");            break;        default:            printf("Opción inválida.\\n");    }    return 0;} |
| :---- |

# La Estructura de Iteración

Permiten ejecutar repetidamente un bloque de código mientras se cumpla una condición.

## **Sentencia while**

La sentencia `while` permite repetir un bloque de código **mientras una condición sea verdadera**. Se usa cuando no sabemos exactamente cuántas veces se repetirá el ciclo, ya que depende de la evaluación de la condición.

| while (condición) {    *// Código que se ejecuta mientras la condición sea verdadera*} |
| :---- |

* Antes de cada iteración, **se evalúa la condición**.  
* **Si la condición es `true` (verdadera)**, se ejecuta el bloque de código dentro del `while`.  
* **Si la condición es `false` (falsa)**, el ciclo termina y el programa continúa con la siguiente instrucción después del `while`.

  #### **Contador del 1 al 5**

| \#include \<stdio.h\>int main() {    int contador \= 1; *// Inicialización de la variable*    while (contador \<= 5) { *// Condición: Mientras contador sea menor o igual a 5*        printf("Número: %d\\n", contador);        contador++; *// Incrementa el contador en 1*    }    return 0;} |
| :---- |

1. **Se inicializa `contador` en 1**.  
2. **El `while` evalúa si `contador <= 5`**. Si es cierto, ejecuta el bloque dentro del ciclo.  
3. **Se imprime el valor de `contador`**.  
4. **Se incrementa `contador` en 1** (`contador++`).  
5. **Se vuelve a evaluar la condición**. Si sigue siendo verdadera, repite el ciclo.  
6. Cuando `contador` llega a 6, **la condición es falsa y el `while` termina**.

 **Salida del programa:**

| Número: 1Número: 2Número: 3Número: 4Número: 5 |
| :---- |

#### **Solicitar contraseña hasta que sea correcta**

| \#include \<stdio.h\>int main() {    int clave;    printf("Ingrese la clave numérica (1234): ");    scanf("%d", \&clave);    while (clave \!= 1234) { *// Mientras la clave no sea 1234*        printf("Clave incorrecta. Intente nuevamente: ");        scanf("%d", \&clave);    }    printf("¡Acceso concedido\!\\n");    return 0;} |
| :---- |

1. Se le pide al usuario que ingrese una clave numérica.  
2. **Si la clave ingresada no es 1234**, el programa muestra `"Clave incorrecta"` y vuelve a pedir la clave.  
3. **Cuando el usuario ingresa 1234**, el ciclo termina y se muestra `"¡Acceso concedido!"`.

**Ejemplo de salida si el usuario ingresa claves incorrectas:**

| Ingrese la clave numérica (1234): 5678Clave incorrecta. Intente nuevamente: 9876Clave incorrecta. Intente nuevamente: 1234¡Acceso concedido\! |
| :---- |

## **Errores comunes al usar while**

### **Ciclo infinito**

Si la variable dentro del `while` **no cambia dentro del ciclo**, la condición **nunca será falsa** y el programa quedará atrapado en un bucle infinito.

| int x \= 1;while (x \<= 5) {    printf("Número: %d\\n", x); *// Falta incrementar x, el ciclo será infinito*} |
| :---- |

**Solución:** Asegurarse de que la variable `x` cambie dentro del ciclo.

### **Condición incorrecta**

|  int x \= 10;while (x \< 5) { *// x nunca será menor que 5*    printf("Esto nunca se imprimirá\\n");} |
| :---- |

🔴 **Solución:** Asegurarse de que la condición permita al `while` ejecutarse al menos una vez si es necesario.

## **Sentencia for**

La sentencia `for` se usa para ejecutar un bloque de código **un número determinado de veces**. A diferencia de `while`, donde el control de la condición es más manual, `for` tiene una estructura más organizada con **tres partes**:

1. **Inicialización** → Se ejecuta una sola vez antes del primer ciclo.  
2. **Condición** → Se evalúa antes de cada iteración; si es `true`, el ciclo continúa.  
3. **Actualización** → Se ejecuta después de cada iteración para modificar la variable de control.

| for (inicialización; condición; actualización) {    *// Código que se ejecuta en cada iteración mientras la condición sea verdadera*} |
| :---- |

#### **Contar del 1 al 5**

| \#include \<stdio.h\>int main() {    for (int i \= 1; i \<= 5; i++) { *// Se inicializa i en 1, el ciclo sigue mientras i \<= 5, se incrementa i en cada iteración*        printf("Número: %d\\n", i);    }    return 0;} |
| :---- |

1. **Inicialización:** `int i = 1;` → Se declara e inicializa `i` en 1\.  
2. **Condición:** `i <= 5;` → Mientras `i` sea menor o igual a 5, el ciclo continúa.  
3. **Actualización:** `i++` → Se incrementa `i` en 1 después de cada iteración.  
4. **Salida esperada:**

| Número: 1Número: 2Número: 3Número: 4Número: 5 |
| :---- |

#### **Sumar los primeros 10 números enteros**

| \#include \<stdio.h\>int main() {    int suma \= 0;    for (int i \= 1; i \<= 10; i++) {        suma \+= i; *// Se acumula la suma de los números*    }    printf("La suma de los primeros 10 números es: %d\\n", suma);    return 0;} |
| :---- |

1. Se inicializa `suma` en 0\.  
2. El ciclo `for` recorre los valores del 1 al 10\.  
3. En cada iteración, `suma += i;` acumula la suma de los números.  
4. Al finalizar el ciclo, se muestra el resultado.

#### **Mostrar una tabla de multiplicar (ingresada por el usuario)**

| \#include \<stdio.h\>int main() {    int numero;    printf("Ingrese un número para mostrar su tabla de multiplicar: ");    scanf("%d", \&numero);    for (int i \= 1; i \<= 10; i++) {        printf("%d x %d \= %d\\n", numero, i, numero \* i);    }    return 0;} |
| :---- |

1. Se solicita un número al usuario.  
2. El `for` recorre los valores del 1 al 10\.  
3. En cada iteración, se muestra la multiplicación `numero * i`.  
4. **Ejemplo de salida para `numero = 3`:**

3 x 1 \= 3  
3 x 2 \= 6  
3 x 3 \= 9  
...  
3 x 10 \= 30

## **Errores comunes con for**

### **No modificar la variable de control ( Bucle infinito)**

|  for (int i \= 1; i \<= 5; ) { *// Falta el incremento*    printf("%d\\n", i);} |
| :---- |

**Solución:** Agregar `i++` en la actualización.

### **Condición incorrecta (No entra al ciclo)**

|  for (int i \= 10; i \< 5; i++) { *// i empieza en 10, pero nunca es menor que 5*    printf("Esto nunca se imprimirá.\\n");} |
| :---- |

**Solución:** Corregir la condición `i > 5` o ajustar el valor inicial de `i`.

## **Sentencia do-while**

La sentencia `do-while` es una estructura de control de flujo que **ejecuta un bloque de código al menos una vez** y luego sigue ejecutándose mientras **una condición sea verdadera**.

A diferencia del `while`, donde primero se evalúa la condición antes de ejecutar el código, en `do-while` el código **se ejecuta al menos una vez** antes de comprobar la condición.

| do {    *// Código a ejecutar al menos una vez*} while (condición); |
| :---- |

* **Primero se ejecuta el bloque de código dentro de `do`**  
* **Luego se evalúa la condición**  
* **Si la condición es `true`, se repite el proceso; si es `false`, el bucle termina**

#### **Pedir un número hasta que sea mayor que 10**

| \#include \<stdio.h\>int main() {    int numero;    do {        printf("Ingrese un número mayor que 10: ");        scanf("%d", \&numero);    } while (numero \<= 10); *// Si el número es 10 o menor, vuelve a pedirlo*    printf("Número aceptado: %d\\n", numero);    return 0;} |
| :---- |

1. Se declara la variable `numero`.  
2. Dentro del `do`, se muestra un mensaje y se pide al usuario un número.  
3. **Si el número es menor o igual a 10, se repite el proceso**.  
4. **Si el número es mayor a 10, el bucle termina** y se muestra el mensaje final.

| Ingrese un número mayor que 10: 5Ingrese un número mayor que 10: 8Ingrese un número mayor que 10: 12Número aceptado: 12 |
| :---- |

*  **Se ejecutó al menos una ver.**  
* **El ciclo se repitió hasta que la condición fue falsa (`numero > 10`)**

#### **Menú interactivo**

Un menú que sigue mostrando opciones hasta que el usuario elija salir.

| \#include \<stdio.h\>int main() {    int opcion;    do {        printf("\\n--- Menú \---\\n");        printf("1. Saludar\\n");        printf("2. Despedirse\\n");        printf("3. Salir\\n");        printf("Seleccione una opción: ");        scanf("%d", \&opcion);        switch (opcion) {            case 1:                printf("¡Hola\!\\n");                break;            case 2:                printf("¡Adiós\!\\n");                break;            case 3:                printf("Saliendo del programa...\\n");                break;            default:                printf("Opción no válida. Intente nuevamente.\\n");        }    } while (opcion \!= 3); *// Repite mientras la opción no sea 3*    return 0;} |
| :---- |

1. **El menú siempre se muestra al menos una vez.**  
2. **El usuario elige una opción y se usa `switch` para ejecutar la acción.**  
3. **Si el usuario elige 3 (Salir), el ciclo termina.**  
4. **Si ingresa otra opción, el menú se repite.**

### **Contar del 1 al 5 con do-while**

| \#include \<stdio.h\>int main() {    int i \= 1;     do {        printf("Número: %d\\n", i);        i++; *// Incrementamos la variable i*    } while (i \<= 5); *// Repite hasta que i sea mayor que 5*    return 0;} |
| :---- |

1. Se inicializa `i` en `1`.  
2. **El bloque dentro de `do` se ejecuta una vez antes de evaluar la condición.**  
3. Se imprime el valor de `i` y luego se incrementa.  
4. **Si `i <= 5`, el ciclo continúa; si `i > 5`, se detiene.**

### **Diferencia entre while y do-while**

| Característica | while | do-while |
| ----- | ----- | ----- |
| ¿Cuándo se evalúa la condición? | Antes de entrar al bucle | Después de ejecutar el bloque |
| ¿Se ejecuta al menos una vez? | No, si la condición es `false` desde el inicio, nunca entra al ciclo | Sí, siempre se ejecuta al menos una vez |
| Uso recomendado | Cuando puede ser que el bloque **nunca** se ejecute | Cuando se necesita que el bloque **se ejecute al menos una vez** |

### **Ejemplo comparativo**

| *// Usando while*int x \= 5;while (x \> 10) {    printf("Esto no se imprimirá\\n");} |
| :---- |

| *// Usando do-while*int y \= 5;do {    printf("Esto se imprimirá al menos una vez\\n");} while (y \> 10); |
| :---- |

### **Errores comunes con do-while**

**Olvidar la actualización de la variable de control**

| int i \= 1;do {    printf("%d\\n", i);} while (i \<= 5); *// ¡Ciclo infinito porque i nunca cambia\!* |
| :---- |

**Solución:** `i++` dentro del bucle.

**Usar `;` después de `while` erróneamente**

| do {    printf("Hola\\n");} while (0);  *// Aquí es correcto, se ejecutará una vez* |
| :---- |

# 

# 4 \- Arreglos, Cadenas y Estructuras dinámicas

# Arreglos

Un **arreglo** (o array) es una **colección de variables del mismo tipo** almacenadas en **posiciones contiguas de memoria**. Sirve para **guardar muchos datos similares** bajo un mismo nombre.

## **¿Qué son los Arreglos en C?**

Un **arreglo** (o array) es una **colección de variables del mismo tipo** almacenadas en **posiciones contiguas de memoria**. Sirve para **guardar muchos datos similares** bajo un mismo nombre.

## **¿Para qué sirven?**

Supongamos que querés guardar las notas de 5 estudiantes. Podés hacerlo así:

| int nota1, nota2, nota3, nota4, nota5; |
| :---- |

Pero es poco práctico. Con un arreglo, lo hacés en una sola línea:

| int notas\[5\]; |
| :---- |

Ahora podés usar un índice para acceder a cada posición:

* `notas[0]` → primera nota

* `notas[1]` → segunda nota

* ...

* `notas[4]` → quinta nota (los arreglos **empiezan en 0**)

## **¿Cómo se declara un arreglo?**

| tipo nombre\[tamaño\]; |
| :---- |

## **¿Cómo se asignan valores?**

### **Manualmente:**

| int numeros\[3\];numeros\[0\] \= 10;numeros\[1\] \= 20;numeros\[2\] \= 30; |
| :---- |

### **Directamente al declarar:**

| int numeros\[3\] \= {10, 20, 30}; |
| :---- |

## **Arreglos Unidimensionales (Vectores)**

Un arreglo unidimensional es como una fila de casilleros. Cada casillero guarda un valor.

| \#include \<stdio.h\>int main() {    int numeros\[5\] \= {10, 20, 30, 40, 50};    *// Recorrido: mostrar cada número*    for (int i \= 0; i \< 5; i++) {        printf("Elemento %d: %d\\n", i, numeros\[i\]);    }    return 0;} |
| :---- |

## **Arreglos Bidimensionales (Matrices)**

Son como una tabla con filas y columnas.

| \#include \<stdio.h\>int main() {    int matriz\[2\]\[3\] \= {        {1, 2, 3},        {4, 5, 6}    };    *// Recorrer la matriz*    for (int fila \= 0; fila \< 2; fila++) {        for (int col \= 0; col \< 3; col++) {            printf("%d ", matriz\[fila\]\[col\]);        }        printf("\\n");    }    return 0;} |
| :---- |

## **Operaciones con Arreglos**

### **Recorrido:**

Usar un `for` para mostrar o procesar cada elemento.

| \#include \<stdio.h\>int main() {    int numeros\[5\] \= {10, 20, 30, 40, 50};    *// Recorrido: mostrar cada número*    for (int i \= 0; i \< 5; i++) {        printf("Elemento %d: %d\\n", i, numeros\[i\]);    }    return 0;} |
| :---- |

### **Búsqueda:**

Buscar si un valor está en el arreglo.

| \#include \<stdio.h\>int main() {    int numeros\[5\] \= {3, 7, 9, 1, 4};    int buscado \= 9;    int encontrado \= 0;    for (int i \= 0; i \< 5; i++) {        if (numeros\[i\] \== buscado) {            printf("Encontrado en la posición %d\\n", i);            encontrado \= 1;            break;        }    }    if (\!encontrado) {        printf("No encontrado.\\n");    }    return 0;} |
| :---- |

### **Inserción:**

En C los arreglos tienen tamaño fijo, así que podemos reemplazar valores, pero no agregar nuevos dinámicamente sin usar estructuras más avanzadas.

| numeros\[2\] \= 100; *// Reemplaza el valor en la posición 2* |
| :---- |

# Cadenas de Caracteres

En C, una **cadena** es un **arreglo de caracteres (`char`)** que termina con el carácter nulo `'\0'`. Por ejemplo:

| char nombre\[\] \= "Juan"; *// contiene: 'J', 'u', 'a', 'n', '\\0'* |
| :---- |

Para manipular cadenas, se usan funciones definidas en la biblioteca:

| \#include \<string.h\> |
| :---- |

## **Funciones de \<string.h\> más usadas**

### **strcpy(destino, origen) – Copiar cadenas**

Copia el contenido de una cadena `origen` en otra `destino`.

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char origen\[\] \= "Hola";    char destino\[20\];    strcpy(destino, origen); *// Copiamos "Hola" a destino*    printf("Destino: %s\\n", destino);    return 0;} |
| :---- |

### **strlen(cadena) – Longitud de la cadena**

Devuelve la **cantidad de caracteres** (sin contar el `\0`).

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char texto\[\] \= "Programar";    int longitud \= strlen(texto);    printf("Longitud de '%s': %d\\n", texto, longitud);    return 0;} |
| :---- |

### **strcmp(cad1, cad2) – Comparar cadenas**

Compara dos cadenas **carácter por carácter**.

* Devuelve `0` si son iguales

* Un número negativo si `cad1 < cad2`

* Un número positivo si `cad1 > cad2`

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char a\[\] \= "hola";    char b\[\] \= "hola";    char c\[\] \= "mundo";    if (strcmp(a, b) \== 0) {        printf("a y b son iguales\\n");    }    if (strcmp(a, c) \!= 0) {        printf("a y c son diferentes\\n");    }    return 0;} |
| :---- |

### **strcat(destino, origen) – Concatenar cadenas**

Agrega el contenido de `origen` al final de `destino`.

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char saludo\[20\] \= "Hola ";    char nombre\[\] \= "Juan";    strcat(saludo, nombre);    printf("Saludo completo: %s\\n", saludo);    return 0;} |
| :---- |

### **strchr(cadena, caracter) – Buscar un carácter**

Busca la **primera aparición** de un carácter en la cadena.

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char palabra\[\] \= "computadora";    char \*ptr \= strchr(palabra, 'u');    if (ptr \!= NULL) {        printf("Encontrado: %c en la posición %ld\\n", \*ptr, ptr \- palabra);    } else {        printf("No se encontró el carácter\\n");    }    return 0;} |
| :---- |

### **strstr(cadena, subcadena) – Buscar una subcadena**

Busca la **primera aparición** de una subcadena dentro de otra.

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char frase\[\] \= "Me gusta programar en C";    char \*ptr \= strstr(frase, "programar");    if (ptr \!= NULL) {        printf("Subcadena encontrada: %s\\n", ptr);    } else {        printf("Subcadena no encontrada\\n");    }    return 0;} |
| :---- |

## **Concatenar cadenas: strcat(destino, fuente)**

Agrega el contenido de una cadena al final de otra.

| \#include \<stdio.h\>\#include \<string.h\>int main() {    char saludo\[30\] \= "Hola ";    char nombre\[\] \= "Mundo";    strcat(saludo, nombre);    printf("%s\\n", saludo);  *// Imprime: Hola Mundo*    return 0;} |
| :---- |

# Búsqueda Binaria

La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en un arreglo ordenado. A diferencia de la búsqueda lineal (que revisa uno por uno), la binaria divide el arreglo por la mitad en cada paso, descartando la mitad en la que el elemento no puede estar.

## **Requisitos:**

* El arreglo debe estar ordenado (ascendente o descendente).  
* Es más rápida que la búsqueda lineal, especialmente en arreglos grandes.

## **¿Cómo funciona?**

1. Se comparan los extremos: izquierda (`inicio`) y derecha (`fin`).

2. Se calcula el **índice del medio**:  
    `medio = (inicio + fin) / 2`

3. Se compara el valor en esa posición con el valor buscado:

   * Si son iguales → **¡Listo\! Elemento encontrado.**

   * Si el buscado es menor → Buscar en la **mitad izquierda**.

   * Si es mayor → Buscar en la **mitad derecha**.

4. Se repite el proceso hasta encontrarlo o que no queden elementos.

| \#include \<stdio.h\>int main() {    int arreglo\[\] \= {3, 7, 15, 20, 25, 31, 40}; *// Arreglo ORDENADO*    int n \= sizeof(arreglo) / sizeof(arreglo\[0\]);    int buscar, inicio \= 0, fin \= n \- 1, medio;    int encontrado \= 0;    printf("Ingrese el numero que desea buscar: ");    scanf("%d", \&buscar);    while (inicio \<= fin) {        medio \= (inicio \+ fin) / 2;        if (arreglo\[medio\] \== buscar) {            printf("Numero encontrado en la posicion %d.\\n", medio);            encontrado \= 1;            break;        } else if (buscar \< arreglo\[medio\]) {            fin \= medio \- 1;        } else {            inicio \= medio \+ 1;        }    }    if (\!encontrado) {        printf("El numero no se encuentra en el arreglo.\\n");    }    return 0;} |
| :---- |

### **Explicación del código:**

* `int arreglo[] = {3, 7, 15, 20, 25, 31, 40};` → Un arreglo de 7 enteros ordenados.

* `scanf()` lee el número a buscar.

* El bucle `while` continúa mientras el rango de búsqueda no se cierre.

* `medio = (inicio + fin)/2` → Calcula el índice central.

* Compara el valor central con el buscado y decide si continúa a izquierda o derecha.

* `encontrado` es una bandera para saber si se encontró el valor.

## **Ventajas de la búsqueda binaria**

| Ventaja | Detalle |
| ----- | ----- |
| Muy eficiente | O(log n) tiempo |
| Rápida en listas grandes | Ideal cuando hay muchos elementos |
| Menos comparaciones | Que la búsqueda lineal |

### **Importante**

🔴 **NO FUNCIONA SI EL ARREGLO NO ESTÁ ORDENADO.**

# Ordenamiento

La **ordenación** consiste en organizar los elementos de un arreglo en un **orden específico**, ya sea:

* Ascendente (menor a mayor)

* Descendente (mayor a menor)

###  **Métodos más comunes**

1. **Burbuja (Bubble Sort)**

2. **Selección (Selection Sort)**

3. **Inserción (Insertion Sort)**

## 

## 

## **Método Burbuja (Bubble Sort)**

Compara elementos adyacentes y los intercambia si están en el orden incorrecto. Repite hasta que todo esté ordenado.

| \#include \<stdio.h\>int main() {    int arr\[\] \= {5, 2, 9, 1, 6};    int n \= sizeof(arr) / sizeof(arr\[0\]);    int i, j, temp;    for (i \= 0; i \< n \- 1; i++) {        for (j \= 0; j \< n \- i \- 1; j++) {            if (arr\[j\] \> arr\[j \+ 1\]) {                *// Intercambio*                temp \= arr\[j\];                arr\[j\] \= arr\[j \+ 1\];                arr\[j \+ 1\] \= temp;            }        }    }    printf("Arreglo ordenado: ");    for (i \= 0; i \< n; i++) {        printf("%d ", arr\[i\]);    }    return 0;} |
| :---- |

## **Método Selección (Selection Sort)**

Encuentra el **mínimo** en cada pasada y lo pone en su posición correcta.

| \#include \<stdio.h\>int main() {    int arr\[\] \= {7, 4, 2, 9, 1};    int n \= sizeof(arr) / sizeof(arr\[0\]);    int i, j, min, temp;    for (i \= 0; i \< n \- 1; i++) {        min \= i;        for (j \= i \+ 1; j \< n; j++) {            if (arr\[j\] \< arr\[min\]) {                min \= j;            }        }        *// Intercambio*        temp \= arr\[i\];        arr\[i\] \= arr\[min\];        arr\[min\] \= temp;    }    printf("Arreglo ordenado: ");    for (i \= 0; i \< n; i++) {        printf("%d ", arr\[i\]);    }    return 0;} |
| :---- |

## **Método Inserción (Insertion Sort)**

Inserta cada elemento en su lugar correcto como si estuvieras ordenando cartas en la mano.

| \#include \<stdio.h\>int main() {    int arr\[\] \= {8, 3, 5, 2, 4};    int n \= sizeof(arr) / sizeof(arr\[0\]);    int i, key, j;    for (i \= 1; i \< n; i++) {        key \= arr\[i\];        j \= i \- 1;        *// Mueve los elementos mayores al key*        while (j \>= 0 && arr\[j\] \> key) {            arr\[j \+ 1\] \= arr\[j\];            j--;        }        arr\[j \+ 1\] \= key;    }    printf("Arreglo ordenado: ");    for (i \= 0; i \< n; i++) {        printf("%d ", arr\[i\]);    }    return 0;} |
| :---- |

## **Comparación entre métodos**

| Método | Comparaciones | Fácil de entender | Eficiente |
| ----- | ----- | ----- | ----- |
| Burbuja | Muchas | ✅ Sí | ❌ No |
| Selección | Menos que burbuja | ✅ Sí | ❌ No |
| Inserción | Menos si está casi ordenado | ✅ Sí | ⚠️ Regular |

# Funciones

Una **función** es un bloque de código que **devuelve un valor**.

| tipo\_de\_dato nombre\_funcion(parámetros) {    *// código*    return valor;} |
| :---- |

Ejemplo:

| \#include \<stdio.h\>*// Función que suma dos números enteros*int sumar(int a, int b) {    return a \+ b;}int main() {    int resultado \= sumar(5, 3);    printf("La suma es: %d\\n", resultado);    return 0;} |
| :---- |

## **Pasaje de Parámetros**

Cuando llamás a una función, podés pasarle **valores o variables** para que esa función los use internamente. Esos valores se conocen como **parámetros** o **argumentos**.

#### **Tipos de Pasaje de Parámetros en C**

### **1\. Pasaje por valor (el más común en C)**

La función recibe una copia del valor original. Si la función modifica el valor, no afecta al original.

| \#include \<stdio.h\>void duplicar(int x) {    x \= x \* 2;    printf("Dentro de la funcion: %d\\n", x);}int main() {    int numero \= 5;    duplicar(numero);    printf("Fuera de la funcion: %d\\n", numero);    return 0;} |
| :---- |

### **2\. Pasaje por referencia (usando punteros)**

La función recibe la dirección de la variable, por lo tanto, puede modificar el valor original.

| \#include \<stdio.h\>void duplicar(int \*x) {    \*x \= \*x \* 2;    printf("Dentro de la funcion: %d\\n", \*x);}int main() {    int numero \= 5;    duplicar(\&numero);    printf("Fuera de la funcion: %d\\n", numero);    return 0;} |
| :---- |

## **Procedimiento**

Un **procedimiento** es una función que **NO devuelve valor**. En C, se usa el tipo `void`.

| \#include \<stdio.h\>*// Procedimiento sin valor de retorno*void saludar() {    printf("¡Hola, bienvenido\!\\n");}int main() {    saludar();  *// Llamamos al procedimiento*    return 0;} |
| :---- |

## **Ejemplo combinando función y procedimiento**

| \#include \<stdio.h\>int cuadrado(int x) {    return x \* x;}void mostrarResultado(int numero, int resultado) {    printf("El cuadrado de %d es %d\\n", numero, resultado);}int main() {    int n \= 4;    int res \= cuadrado(n);    mostrarResultado(n, res);    return 0;} |
| :---- |

| Tipo | Nombre en C | Devuelve valor | Se usa con `return` | Ejemplo |
| ----- | ----- | ----- | ----- | ----- |
| Función | `int sumar()` | ✅ Sí | ✅ Sí | `return a + b;` |
| Procedimiento | `void saludar()` | ❌ No | ❌ No | solo hace algo |

# Estructuras

Una **estructura** en C (llamada `struct`) es una forma de **crear un tipo de dato propio**, que **agrupa varios datos diferentes en una sola unidad**.

Es como una caja que guarda distintos tipos de cosas: enteros, decimales, cadenas, etc., con nombre propio cada una.

## **¿Para qué sirve?**

En vez de tener muchas variables separadas para representar algo, como los datos de una persona, podés agrupar todo en una **estructura**.

### **Sin estructuras:**

| char nombre\[30\];int edad;float altura; |
| :---- |

### **Con estructura:**

| struct Persona {    char nombre\[30\];    int edad;    float altura;}; |
| :---- |

Ahora, cada persona es una **unidad completa**.

## **Cómo se usa una estructura**

### **Definir una estructura**

| struct Persona {    char nombre\[30\];    int edad;    float altura;}; |
| :---- |

Esto es como crear un **molde** o **plantilla** para una persona.

### **Crear variables de tipo estructura**

| struct Persona p1; |
| :---- |

Ahora `p1` tiene:

* `p1.nombre`  
* `p1.edad`  
* `p1.altura`

### **Asignar valores**

| strcpy(p1.nombre, "Lucía");p1.edad \= 25;p1.altura \= 1.65; |
| :---- |

Para copiar una cadena, usamos `strcpy()` del `<string.h>`.

### **Mostrar valores**

| printf("Nombre: %s\\n", p1.nombre);printf("Edad: %d\\n", p1.edad);printf("Altura: %.2f\\n", p1.altura); |
| :---- |

## **Ejemplo** 

| \#include \<stdio.h\>\#include \<string.h\>struct Persona {    char nombre\[30\];    int edad;    float altura;};int main() {    struct Persona p1;    *// Ingreso de datos*    printf("Ingrese nombre: ");    fgets(p1.nombre, sizeof(p1.nombre), stdin);    p1.nombre\[strcspn(p1.nombre, "\\n")\] \= '\\0';  *// Quitar salto de línea*    printf("Ingrese edad: ");    scanf("%d", \&p1.edad);    printf("Ingrese altura: ");    scanf("%f", \&p1.altura);    *// Mostrar datos*    printf("\\nDatos de la persona:\\n");    printf("Nombre: %s\\n", p1.nombre);    printf("Edad: %d\\n", p1.edad);    printf("Altura: %.2f\\n", p1.altura);    return 0;} |
| :---- |

## **¿Cuándo usar estructuras?**

Cuando tenés **varios datos relacionados entre sí**, como:

* Los datos de un estudiante (nombre, legajo, nota)

* Una fecha (día, mes, año)

* Un producto (nombre, precio, stock)

# Recursividad

La **recursividad** es una técnica de programación en la que **una función se llama a sí misma** para resolver un problema más pequeño del mismo tipo.

Es como cuando te mirás en un espejo frente a otro espejo y ves una imagen dentro de otra imagen... dentro de otra imagen...

Una función recursiva tiene **dos partes importantes**:

1. **Caso base (condición de parada):** evita que la función se llame infinitamente.  
2. **Llamada recursiva:** la función se llama a sí misma con un nuevo valor más cerca del caso base.

## **Contar hacia atrás**

1. Llama a la función con `5`.  
2. Imprime 5, luego se llama con 4, luego 3... hasta llegar a 0\.  
3. Cuando llega a 0, imprime “¡Listo\!” y termina.

| \#include \<stdio.h\>void contarAtras(int n) {    if (n \== 0) {        printf("¡Listo\!\\n"); *// Caso base*    } else {        printf("%d\\n", n);          *// Mostrar el número actual*        contarAtras(n \- 1);         *// Llamada recursiva*    }}int main() {    contarAtras(5);  *// Comenzamos desde 5*    return 0;} |
| :---- |

### **¿Qué pasa si NO hay caso base?**

La función se llamaría a sí misma para siempre → se produce un **desbordamiento de pila (stack overflow)** y el programa se cae… o EXPLOTA\!\!\!\! 

| void infinita() {    infinita(); *// nunca se detiene*} |
| :---- |

## **Factorial de un número**

| n\! \= n × (n \- 1) × (n \- 2) × ... × 14\! \= 4 × 3 × 2 × 1 \= 24 |
| :---- |

| \#include \<stdio.h\>int factorial(int n) {    if (n \== 0 || n \== 1\) {        return 1; *// Caso base*    } else {        return n \* factorial(n \- 1); *// Llamada recursiva*    }}int main() {    int num \= 4;    printf("El factorial de %d es %d\\n", num, factorial(num));    return 0;} |
| :---- |

## **Serie de Fibonacci**

La **serie de Fibonacci** comienza con 0 y 1, y cada número siguiente es la suma de los dos anteriores:

| 0, 1, 1, 2, 3, 5, 8, 13...fibonacci(n) \= fibonacci(n \- 1) \+ fibonacci(n \- 2) |
| :---- |

| \#include \<stdio.h\>int fibonacci(int n) {    if (n \== 0) return 0; *// Caso base*    if (n \== 1) return 1; *// Caso base*    return fibonacci(n \- 1) \+ fibonacci(n \- 2); *// Recursión*}int main() {    int i;    for (i \= 0; i \< 8; i++) {        printf("%d ", fibonacci(i));    }    return 0;} |
| :---- |

## **¿Cuándo usar recursividad?**

Usá recursividad cuando:

* El problema se puede **dividir en subproblemas más pequeños**.

* No se necesita guardar muchos resultados intermedios (aunque esto puede optimizarse con técnicas como "memoización").

* Te conviene escribir menos código y más elegante (por ejemplo, para árboles, fractales, estructuras jerárquicas).

## **Cuidados con la recursividad**

1. Siempre debe tener un **caso base** que detenga las llamadas.

2. Puede ser **más lenta** que las soluciones iterativas si no se optimiza.

3. Consume **más memoria** por las llamadas anidadas en la pila.

| Criterio | Recursividad | Estructura Repetitiva (Iteración) |
| ----- | ----- | ----- |
| 🧠 **Concepto** | Una función se llama a sí misma para resolver un problema. | Se repite un bloque de código usando `for`, `while` o `do-while`. |
| 📚 **Código más legible** | Sí, en problemas como factorial, torres de Hanoi, árboles. | No tanto para problemas muy recursivos. |
| 🔁 **Uso de memoria** | Alto: cada llamada ocupa espacio en la pila (stack). | Bajo: usa una sola variable de control. |
| 🚀 **Velocidad (performance)** | Más lento si hay muchas llamadas (por sobrecarga de stack). | Más rápido en la mayoría de los casos. |
| 🧪 **Riesgo de desbordamiento** | Sí, puede causar Stack Overflow si no tiene un caso base correcto. | No hay riesgo de desbordamiento por sí solo. |
| 🧩 **Adecuado para** | Problemas recursivos por naturaleza: árboles, combinaciones, fractales. | Cálculos repetitivos como sumas, multiplicaciones, bucles comunes. |
| 👶 **Fácil de entender al inicio** | No, puede ser confuso para principiantes. | Sí, es más directo. |
| 🔄 **Conversión a iterativo** | A veces difícil  | Fácil de codificar y entender. |

# Modularización 

La **modularización** es dividir un programa grande en **partes más pequeñas y organizadas**, llamadas **módulos**. Cada módulo se escribe en **archivos diferentes**, y normalmente se separan en:

* `.h` → archivos **header** (declaraciones).  
* `.c` → archivos de **implementación** (código de funciones).  
* `main.c` → archivo principal que **usa los módulos**.

## **¿Por qué usar modularización?**

* Hace el código más **ordenado** y **fácil de entender**.  
* Permite **reutilizar funciones** en otros proyectos.  
* Facilita el **trabajo en equipo**.  
* Es más fácil de **probar y mantener**.

## **Estructura**

Vamos a hacer un programa que tenga:

* Una función para **sumar** dos números.  
* Una función para **multiplicar** dos números.

| mi\_programa/│├── operaciones.h       *// Declaración de funciones*├── operaciones.c       *// Implementación de funciones*├── main.c              *// Función principal* |
| :---- |

### **`operaciones.h` – Header File**

| *// operaciones.h*\#ifndef OPERACIONES\_H\#define OPERACIONES\_H*// Declaración de funciones*int sumar(int a, int b);int multiplicar(int a, int b);\#endif |
| :---- |

`#ifndef`, `#define`, `#endif` es una forma de evitar incluir dos veces el mismo archivo (buena práctica).

### **`operaciones.c` – Implementación**

| *// operaciones.c*\#include "operaciones.h"*// Implementación de la función sumar*int sumar(int a, int b) {    return a \+ b;}*// Implementación de la función multiplicar*int multiplicar(int a, int b) {    return a \* b;} |
| :---- |

### **`main.c` – Programa principal**

| *// main.c*\#include \<stdio.h\>\#include "operaciones.h"int main() {    int x \= 5, y \= 3;    int suma \= sumar(x, y);    int producto \= multiplicar(x, y);    printf("Suma: %d\\n", suma);    printf("Producto: %d\\n", producto);    return 0;} |
| :---- |

## **¿Cómo compilarlo?**

Si estás usando la consola (por ejemplo, en Linux o usando `gcc`), compila así:

| gcc main.c operaciones.c \-o programa./programa |
| :---- |

### **¿Qué pasa si agregamos más funciones?**

Simple: las agregás en `operaciones.h` y las implementás en `operaciones.c`. ¡Modularizar te permite escalar el programa sin que se vuelva un lío\!

## **¿Por qué se usan archivos .h y .c con el mismo nombre?**

En C, **el archivo `.h` (header)** y **el archivo `.c` (implementación)** suelen tener el mismo nombre porque trabajan juntos como un **módulo**. Pero **no es obligatorio** que tengan el mismo nombre; simplemente es una **buena práctica** para mantener tu código **organizado y fácil de entender**.

##  **¿El orden afecta?**

### **En la mayoría de los casos, NO afecta el orden:**

Porque `gcc` **primero compila todos los `.c` por separado**, y **luego los enlaza** juntos en el ejecutable.

Es decir:  
 `gcc main.c input.c operaciones.c -o programa`  
 es igual que:  
 `gcc operaciones.c input.c main.c -o programa`

Siempre que todas las dependencias estén satisfechas, el programa va a compilar igual.

# Estructuras Dinámicas

# Lista

Una **lista** es una estructura de datos dinámica que permite almacenar una colección de elementos de forma **lineal**. A diferencia de un array, **una lista puede crecer y reducir su tamaño en tiempo de ejecución**.

En C, como no hay listas integradas como en otros lenguajes, se implementan usando **estructuras (`struct`) y punteros (`pointer`)**.

### **Tipos de listas**

1. **Lista simplemente enlazada**

2. **Lista doblemente enlazada**

3. **Lista circular** (variante de las anteriores)

## **Lista Simplemente Enlazada**

Cada elemento de la lista (llamado **nodo**) tiene dos partes:

* **Dato**

* **Puntero** al siguiente nodo

### **Lista que guarda enteros**

| \#include \<stdio.h\>\#include \<stdlib.h\>*// Definición del nodo*struct Nodo {    int dato;    struct Nodo\* siguiente;};*// Función para agregar un nodo al inicio*void insertarAlInicio(struct Nodo\*\* cabeza, int valor) {    struct Nodo\* nuevoNodo \= (struct Nodo\*)malloc(sizeof(struct Nodo));    nuevoNodo-\>dato \= valor;    nuevoNodo-\>siguiente \= \*cabeza;    \*cabeza \= nuevoNodo;}*// Función para mostrar la lista*void mostrarLista(struct Nodo\* nodo) {    while (nodo \!= NULL) {        printf("%d \-\> ", nodo-\>dato);        nodo \= nodo-\>siguiente;    }    printf("NULL\\n");}int main() {    struct Nodo\* lista \= NULL;    insertarAlInicio(\&lista, 10);    insertarAlInicio(\&lista, 20);    insertarAlInicio(\&lista, 30);    printf("Lista enlazada: ");    mostrarLista(lista);    return 0;} |
| :---- |

#### **Explicación del código**

* `struct Nodo` define cómo luce un nodo (dato y puntero al siguiente).

* `insertarAlInicio` agrega un nuevo nodo al principio de la lista.

* `mostrarLista` recorre e imprime todos los nodos hasta que llega a `NULL`.

## **Operaciones comunes de Listas**

1. **Insertar al inicio**

2. **Insertar al final**

3. **Eliminar un nodo**

4. **Buscar un valor**

5. **Mostrar todos los valores**

### **Estructura base de un nodo**

**Primero, definimos cómo es un nodo de nuestra lista:**

| \#include \<stdio.h\>\#include \<stdlib.h\>struct Nodo {    int dato;    struct Nodo\* siguiente;}; |
| :---- |

### **Insertar al inicio**

| void insertarAlInicio(struct Nodo\*\* cabeza, int valor) {    struct Nodo\* nuevoNodo \= (struct Nodo\*)malloc(sizeof(struct Nodo));    nuevoNodo-\>dato \= valor;    nuevoNodo-\>siguiente \= \*cabeza; *// Apunta al nodo actual*    \*cabeza \= nuevoNodo; *// Ahora nuevoNodo es el primero*} |
| :---- |

### **Explicación:**

* **Creamos un nuevo nodo.**

* **Le asignamos el valor.**

* **Hacemos que apunte al primer nodo actual.**

* **Actualizamos el puntero de inicio.**

### **Insertar al final**

| void insertarAlFinal(struct Nodo\*\* cabeza, int valor) {    struct Nodo\* nuevoNodo \= (struct Nodo\*)malloc(sizeof(struct Nodo));    nuevoNodo-\>dato \= valor;    nuevoNodo-\>siguiente \= NULL;    if (\*cabeza \== NULL) {        \*cabeza \= nuevoNodo;        return;    }    struct Nodo\* actual \= \*cabeza;    while (actual-\>siguiente \!= NULL) {        actual \= actual-\>siguiente;    }    actual-\>siguiente \= nuevoNodo;} |
| :---- |

### **Explicación:**

* **Si la lista está vacía, el nuevo nodo será el primero.**

* **Si no, recorremos hasta el último nodo y agregamos allí.**

### **Eliminar un nodo (por valor)**

| void eliminarNodo(struct Nodo\*\* cabeza, int valor) {    struct Nodo\* actual \= \*cabeza;    struct Nodo\* anterior \= NULL;    while (actual \!= NULL && actual-\>dato \!= valor) {        anterior \= actual;        actual \= actual-\>siguiente;    }    if (actual \== NULL) return; *// No encontrado*    if (anterior \== NULL) {        \*cabeza \= actual-\>siguiente; *// Se borra el primero*    } else {        anterior-\>siguiente \= actual-\>siguiente;    }    free(actual);} |
| :---- |

### **Explicación:**

* **Buscamos el nodo con el valor.**

* **Si es el primero, actualizamos la cabeza.**

* **Si no, ajustamos el enlace del nodo anterior.**

* **Liberamos la memoria del nodo eliminado.**

### **Buscar un valor**

| int buscar(struct Nodo\* cabeza, int valor) {    while (cabeza \!= NULL) {        if (cabeza-\>dato \== valor) return 1;        cabeza \= cabeza-\>siguiente;    }    return 0;} |
| :---- |

### **Explicación:**

* **Recorremos la lista.**

* **Si encontramos el valor, devolvemos `1` (true).**

* **Si no está, devolvemos `0`.**

### **Mostrar todos los valores**

| void mostrarLista(struct Nodo\* nodo) {    while (nodo \!= NULL) {        printf("%d \-\> ", nodo-\>dato);        nodo \= nodo-\>siguiente;    }    printf("NULL\\n");} |
| :---- |

### **Ejemplo completo de Lista**

| \#include \<stdio.h\>\#include \<stdlib.h\>struct Nodo {    int dato;    struct Nodo\* siguiente;};void insertarAlInicio(struct Nodo\*\* cabeza, int valor);void insertarAlFinal(struct Nodo\*\* cabeza, int valor);void eliminarNodo(struct Nodo\*\* cabeza, int valor);int buscar(struct Nodo\* cabeza, int valor);void mostrarLista(struct Nodo\* nodo);int main() {    struct Nodo\* lista \= NULL;    insertarAlInicio(\&lista, 10);    insertarAlInicio(\&lista, 20);    insertarAlFinal(\&lista, 30);    insertarAlFinal(\&lista, 40);    printf("Lista actual:\\n");    mostrarLista(lista);    eliminarNodo(\&lista, 20);    printf("Luego de eliminar 20:\\n");    mostrarLista(lista);    if (buscar(lista, 30)) {        printf("El valor 30 está en la lista.\\n");    } else {        printf("El valor 30 no está en la lista.\\n");    }    return 0;} |
| :---- |

### **¿Por qué usar listas?**

* Puedes **agregar/eliminar** elementos sin mover otros datos.

* El tamaño **no es fijo** como en los arrays.

* Son útiles cuando no sabés cuántos datos vas a manejar.

# Pila (Stack)

Una **pila** es una estructura de datos **dinámica** que funciona como una pila de platos:

* **El último que entra es el primero que sale**.

* En inglés se llama **LIFO**: **Last In, First Out**.

Imagina que tenés una pila de libros:

| Top \-\> \[Libro C\]        \[Libro B\]        \[Libro A\] |
| :---- |

Si ponés otro libro (Libro D), va arriba.

Si sacás uno, solo podés sacar el de arriba (Libro D).

## **Operaciones básicas en una pila**

1. **push()** → Agrega un elemento arriba de la pila.

2. **pop()** → Saca el elemento que está arriba de la pila.

3. **peek()** (opcional) → Muestra el elemento de arriba sin sacarlo.

## **¿Cómo se hace una pila en C?**

### **Versión con punteros (estructura dinámica):**

| \#include \<stdio.h\>\#include \<stdlib.h\>*// Nodo de la pila*struct Nodo {    int dato;    struct Nodo\* siguiente;};*// Agregar (push)*void push(struct Nodo\*\* tope, int valor) {    struct Nodo\* nuevo \= (struct Nodo\*) malloc(sizeof(struct Nodo));    nuevo-\>dato \= valor;    nuevo-\>siguiente \= \*tope;    \*tope \= nuevo;    printf("Se apiló: %d\\n", valor);}*// Sacar (pop)*int pop(struct Nodo\*\* tope) {    if (\*tope \== NULL) {        printf("La pila está vacía.\\n");        return \-1;    }    struct Nodo\* temp \= \*tope;    int valor \= temp-\>dato;    \*tope \= temp-\>siguiente;    free(temp);    return valor;}*// Mostrar pila*void mostrar(struct Nodo\* tope) {    printf("Contenido de la pila:\\n");    while (tope \!= NULL) {        printf("%d\\n", tope-\>dato);        tope \= tope-\>siguiente;    }}int main() {    struct Nodo\* pila \= NULL;    *// Apilamos valores*    push(\&pila, 10);    push(\&pila, 20);    push(\&pila, 30);    mostrar(pila);    *// Desapilamos uno*    int desapilado \= pop(\&pila);    printf("Se desapiló: %d\\n", desapilado);    mostrar(pila);    return 0;} |
| :---- |

## **Importante:** 

* Una **pila** es como una caja donde solo se puede **meter o sacar desde arriba**.

* En C, podemos hacer pilas con arrays (tamaño fijo) o con punteros (tamaño dinámico).

* Las funciones `push()` y `pop()` son como **manos mágicas** que meten y sacan elementos de la pila.

* Las pilas se usan en muchas situaciones reales: para deshacer acciones, resolver operaciones matemáticas, hacer recorridos en juegos o laberintos, etc.

# Cola

Una **cola (queue)** es una estructura de datos donde:

* El **primero que entra es el primero que sale**.

* En inglés se llama **FIFO**: **First In, First Out**.

Imaginá que estás en una fila para comprar entradas:

| Inicio \-\> \[Persona 1\] → \[Persona 2\] → \[Persona 3\] ← Fin |
| :---- |

Llega una nueva persona → va al **final** de la cola.  
Atienden a una persona → se va el que está al **inicio** de la cola.

## **Operaciones básicas en una cola**

1. **Encolar (enqueue)**: agregar un elemento al final.

2. **Desencolar (dequeue)**: sacar el primer elemento (el que está al frente).

3. **Ver frente (peek o front)**: ver quién está primero (sin sacarlo).

## **¿Cómo se hace una cola en C?**

Vamos a crear una cola con punteros usando una estructura dinámica (listas enlazadas):

| \#include \<stdio.h\>\#include \<stdlib.h\>*// Estructura de cada nodo*struct Nodo {    int dato;    struct Nodo\* siguiente;};*// Encolar (agregar al final)*void encolar(struct Nodo\*\* frente, struct Nodo\*\* fin, int valor) {    struct Nodo\* nuevo \= (struct Nodo\*) malloc(sizeof(struct Nodo));    nuevo-\>dato \= valor;    nuevo-\>siguiente \= NULL;    if (\*fin \== NULL) {        \*frente \= \*fin \= nuevo;    } else {        (\*fin)-\>siguiente \= nuevo;        \*fin \= nuevo;    }    printf("Se encoló: %d\\n", valor);}*// Desencolar (sacar del frente)*int desencolar(struct Nodo\*\* frente, struct Nodo\*\* fin) {    if (\*frente \== NULL) {        printf("La cola está vacía.\\n");        return \-1;    }    struct Nodo\* temp \= \*frente;    int valor \= temp-\>dato;    \*frente \= (\*frente)-\>siguiente;    if (\*frente \== NULL) {        \*fin \= NULL;    }    free(temp);    return valor;}*// Mostrar la cola*void mostrar(struct Nodo\* frente) {    printf("Contenido de la cola:\\n");    while (frente \!= NULL) {        printf("%d \-\> ", frente-\>dato);        frente \= frente-\>siguiente;    }    printf("NULL\\n");}int main() {    struct Nodo\* frente \= NULL;    struct Nodo\* fin \= NULL;    *// Encolamos valores*    encolar(\&frente, \&fin, 10);    encolar(\&frente, \&fin, 20);    encolar(\&frente, \&fin, 30);    mostrar(frente);    *// Desencolamos uno*    int valor \= desencolar(\&frente, \&fin);    printf("Se desencoló: %d\\n", valor);    mostrar(frente);    return 0;} |
| :---- |

## **Cosas importantes para recordar**

* La **cola** es como una fila: el primero en llegar es el primero en salir.

* Se usan **punteros y estructuras** para hacerla crecer y reducirse dinámicamente.

* Las funciones `encolar()` y `desencolar()` manejan los datos como si fueran personas en una fila.

* Las colas se usan en:

  * Sistemas de impresión

  * Turnos en bancos

  * Comunicación entre programas

  * Juegos (para manejar acciones o eventos)

## **Diferencia entre una pila y una cola**

| Característica | Pila (Stack) | Cola (Queue) |
| ----- | ----- | ----- |
| Orden de atención | Último en entrar, primero en salir (LIFO) | Primero en entrar, primero en salir (FIFO) |
| Función de insertar | `push()` | `encolar()` |
| Función de eliminar | `pop()` | `desencolar()` |

# Árboles Binarios

Un árbol binario es una estructura de datos en la que cada nodo puede tener hasta dos hijos: uno a la izquierda y otro a la derecha.

|        10      /  \\     5   15    / \\   3   7 |
| :---- |

* El nodo **10** es la **raíz** (inicio del árbol).  
* Tiene dos hijos: 5 (izquierdo) y 15 (derecho).  
* El 5 tiene a su vez dos hijos: 3 y 7\.  
* Los nodos sin hijos se llaman **hojas**.

##  **¿Para qué sirven los árboles binarios?**

* Para ordenar datos rápidamente.  
* Para búsquedas eficientes (como en Google).  
* Para representar jerarquías o decisiones.

## **¿Cómo se representa un árbol binario en C?**

Usamos una estructura `struct` para definir cada nodo.

### **Estructura básica de un nodo:**

| \#include \<stdio.h\>\#include \<stdlib.h\>*// Definimos la estructura del nodo*struct Nodo {    int dato;    struct Nodo\* izquierdo;    struct Nodo\* derecho;}; |
| :---- |

### **Crear un nuevo nodo**

| *// Función para crear un nuevo nodo*struct Nodo\* nuevoNodo(int valor) {    struct Nodo\* nodo \= (struct Nodo\*)malloc(sizeof(struct Nodo));    nodo-\>dato \= valor;    nodo-\>izquierdo \= NULL;    nodo-\>derecho \= NULL;    return nodo;} |
| :---- |

### **Insertar nodos (como en un Árbol Binario de Búsqueda)**

| *// Función para insertar en el árbol*struct Nodo\* insertar(struct Nodo\* raiz, int valor) {    if (raiz \== NULL) {        return nuevoNodo(valor);    }    if (valor \< raiz-\>dato) {        raiz-\>izquierdo \= insertar(raiz-\>izquierdo, valor);    } else {        raiz-\>derecho \= insertar(raiz-\>derecho, valor);    }    return raiz;} |
| :---- |

### **Recorrer el árbol (inorden)**

| *// Recorrido inorden: izquierda, nodo, derecha*void inorden(struct Nodo\* raiz) {    if (raiz \!= NULL) {        inorden(raiz-\>izquierdo);        printf("%d ", raiz-\>dato);        inorden(raiz-\>derecho);    }} |
| :---- |

# Archivos

Un **archivo** es un espacio en el disco donde se puede **guardar información**. En lugar de guardar los datos solo en la memoria (que se pierde cuando termina el programa), los archivos permiten **leer y escribir datos que permanecen guardados**.

## **Tipos de operaciones con archivos**

En C, se pueden hacer principalmente **4 operaciones** con archivos:

1. **Abrir** un archivo  
2. **Leer** un archivo  
3. **Escribir** en un archivo  
4. **Cerrar** el archivo

Todo esto se hace con la ayuda de la biblioteca estándar `stdio.h` y el tipo `FILE`.

## **Abrir un archivo**

Para trabajar con un archivo, primero se **declara un puntero de tipo `FILE`** y se usa la función `fopen()`.

| FILE \*archivo;archivo \= fopen("datos.txt", "w"); |
| :---- |

La función `fopen` recibe dos argumentos:

* El **nombre del archivo**  
* El **modo de apertura**

## **Modos de apertura de archivos**

| Modo | Significado |
| ----- | ----- |
| `"r"` | Leer (el archivo debe existir) |
| `"w"` | Escribir (crea el archivo o lo sobreescribe si ya existe) |
| `"a"` | Agregar (append) al final del archivo |
| `"r+"` | Leer y escribir (el archivo debe existir) |
| `"w+"` | Leer y escribir (borra el contenido anterior) |
| `"a+"` | Leer y agregar (no borra el contenido anterior) |

## **Escribir en un archivo**

escribir texto en un archivo

| \#include \<stdio.h\>int main() {    FILE \*archivo \= fopen("saludo.txt", "w"); *// Abrir en modo escritura*    if (archivo \== NULL) {        printf("No se pudo abrir el archivo.\\n");        return 1;    }    fprintf(archivo, "Hola mundo\!\\n");    fprintf(archivo, "Este texto fue escrito desde un programa en C.\\n");    fclose(archivo); *// ¡IMPORTANTE\! Siempre cerrar el archivo*    printf("Texto escrito correctamente en el archivo.\\n");    return 0;} |
| :---- |

## **Leer desde un archivo**

leer línea por línea

| \#include \<stdio.h\>int main() {    FILE \*archivo \= fopen("saludo.txt", "r"); *// Abrir en modo lectura*    char linea\[100\];    if (archivo \== NULL) {        printf("No se pudo abrir el archivo para leer.\\n");        return 1;    }    while (fgets(linea, sizeof(linea), archivo)) {        printf("%s", linea); *// Mostrar cada línea*    }    fclose(archivo);    return 0;} |
| :---- |

### **Funciones útiles**

| Función | Descripción |
| ----- | ----- |
| `fprintf(FILE*, ...)` | Escribir texto formateado |
| `fscanf(FILE*, ...)` | Leer texto formateado |
| `fgets(cadena, tamaño, archivo)` | Leer línea completa |
| `fputs(cadena, archivo)` | Escribir línea |
| `fgetc(archivo)` | Leer un solo carácter |
| `fputc(caracter, archivo)` | Escribir un solo carácter |
| `feof(archivo)` | Devuelve verdadero si se llegó al final del archivo |
| `fclose(archivo)` | Cierra el archivo |

### **Ejemplo: guardar y leer nombres**

| \#include \<stdio.h\>int main() {    FILE \*archivo;    char nombre\[50\];    *// Escribir nombres*    archivo \= fopen("nombres.txt", "w");    if (archivo \== NULL) {        printf("No se pudo abrir el archivo.\\n");        return 1;    }    printf("Ingrese 3 nombres:\\n");    for (int i \= 0; i \< 3; i++) {        printf("Nombre %d: ", i \+ 1);        scanf("%s", nombre);        fprintf(archivo, "%s\\n", nombre);    }    fclose(archivo);    *// Leer nombres*    archivo \= fopen("nombres.txt", "r");    if (archivo \== NULL) {        printf("No se pudo abrir el archivo para leer.\\n");        return 1;    }    printf("\\nNombres guardados en el archivo:\\n");    while (fgets(nombre, sizeof(nombre), archivo)) {        printf("%s", nombre);    }    fclose(archivo);    return 0;} |
| :---- |

# Programación Orientado a Objetos (C++)

La POO es un paradigma de programación que organiza el código en torno a "objetos", en lugar de funciones y estructuras como en C.

## **¿Qué es un objeto?**

En C, usarías una estructura (`struct`) para guardar datos del auto.  
En C++, podés crear un **objeto** llamado `Auto`, que **tiene datos (atributos)** y **puede hacer cosas (métodos)**.

## **Diferencias entre C y C++**

| C (Estructurado) | C++ (Orientado a Objetos) |
| ----- | ----- |
| Usa `struct` solo para agrupar datos | Usa `class` para datos \+ funciones |
| No hay encapsulamiento | Sí hay: público, privado, protegido |
| No hay herencia | Soporta herencia |
| No hay polimorfismo | Sí hay polimorfismo (virtual, sobrecarga) |
| Todo está centrado en funciones | Todo gira en torno a objetos |

## **Conceptos Clave de la POO**

### **Clase**

Una **clase** es un **molde o plantilla** que define cómo serán los **objetos** de un programa.

Una clase contiene:

* **Atributos** → las características o propiedades del objeto (por ejemplo: nombre, edad).

* **Métodos** → las acciones o funciones que el objeto puede realizar (por ejemplo: hablar(), caminar()).

| class Auto {public:    string marca;    int velocidad;    void acelerar() {        velocidad \+= 10;    }}; |
| :---- |

### **Objeto**

Un objeto es una **instancia de una clase**. Es como cuando usás el molde para hacer un auto real.

| Auto miAuto;miAuto.marca \= "Toyota";miAuto.acelerar(); |
| :---- |

### **Encapsulamiento**

La idea de **proteger los datos** internos. Usás `private` y `public` para controlar el acceso.

| class CuentaBancaria {private:    double saldo;public:    void depositar(double monto) {        saldo \+= monto;    }    double verSaldo() {        return saldo;    }}; |
| :---- |

### **Herencia**

Una clase puede **heredar** las propiedades de otra.

| class Animal {public:    void hablar() {        cout \<\< "Hace un sonido." \<\< endl;    }};class Perro : public Animal {public:    void hablar() {        cout \<\< "Guau guau" \<\< endl;    }}; |
| :---- |

### **Polimorfismo**

**Polimorfismo** viene del griego *"poli" (muchos)* y *"morphos" (formas)*.  
 En programación, significa:

“**Una misma acción puede tener diferentes comportamientos dependiendo del contexto**”.

#### **¿Dónde aparece esto en C++?**

Cuando **usamos punteros o referencias a clases base** para **llamar métodos definidos en clases derivadas**, y **esas funciones están marcadas como `virtual`**, entonces se activa el polimorfismo.

Imaginá una clase `Instrumento`. Todos los instrumentos tienen un método `tocar()`.

* Guitarra → "Strum strum 🎸"

* Piano → "Plink plink 🎹"

* Tambor → "Boom boom 🥁"

Aunque todos tienen un método `tocar()`, **suena distinto según el instrumento**.

#### **¿Cómo se aplica en código C++?**

Clase base con función virtual

| class Instrumento {public:    virtual void tocar() {        cout \<\< "Tocando un instrumento genérico" \<\< endl;    }}; |
| :---- |

Clases derivadas que sobreescriben tocar()

| class Guitarra : public Instrumento {public:    void tocar() override {        cout \<\< "Strum strum 🎸" \<\< endl;    }};class Piano : public Instrumento {public:    void tocar() override {        cout \<\< "Plink plink 🎹" \<\< endl;    }}; |
| :---- |

Usar puntero de la clase base

| int main() {    Instrumento\* i1 \= new Guitarra();    Instrumento\* i2 \= new Piano();    i1-\>tocar(); *// Llama a Guitarra::tocar()*    i2-\>tocar(); *// Llama a Piano::tocar()*    delete i1;    delete i2;    return 0;} |
| :---- |

Resultado del programa

| Strum strum 🎸Plink plink 🎹 |
| :---- |

### **¿Cuándo usar virtual?**

Usá `virtual` cuando:

* Querés que una función pueda ser redefinida por clases hijas.

* Vas a usar punteros o referencias de la clase base para manejar clases derivadas.

* Querés extender comportamientos sin reescribir todo el código.

## **Comparación Visual entre C y C++**

### **En C:**

| struct Persona {    char nombre\[50\];    int edad;};void saludar(struct Persona p) {    printf("Hola, soy %s\\n", p.nombre);} |
| :---- |

### **En C++:**

| class Persona {public:    string nombre;    int edad;    void saludar() {        cout \<\< "Hola, soy " \<\< nombre \<\< endl;    }}; |
| :---- |

