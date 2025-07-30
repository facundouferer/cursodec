
# 📘 Apunte de C para Principiantes

El lenguaje **C** es uno de los más importantes en el mundo de la programación.  
A pesar de su antigüedad, sigue siendo ampliamente utilizado y enseñado en universidades e instituciones de tecnología.  
A continuación, te explico las razones clave por las que alguien debería estudiar C.

---

## 1️⃣ Introducción al Lenguaje C

### Estructura de un Programa en C
Un programa en C está compuesto por varias partes:

1. **Directivas de preprocesador**
2. **Declaración de funciones**
3. **Función principal (`main`)**
4. **Definición de variables**
5. **Lógica del programa (instrucciones y sentencias)**
6. **Funciones auxiliares (opcionales)**

---

## 📌 Ejemplo de Programa en C

```c
// 1️⃣ Directivas del preprocesador
#include <stdio.h>   // Librería estándar para entrada/salida
#include <math.h>    // Librería para funciones matemáticas

// 2️⃣ Declaración de funciones (prototipos)
float calcularAreaCirculo(float radio);

// 3️⃣ Función principal (punto de entrada del programa)
int main() {
    // 4️⃣ Definición de variables
    float radio, area;

    // 5️⃣ Lógica del programa
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Llamada a una función auxiliar
    area = calcularAreaCirculo(radio);
    printf("El área del círculo con radio %.2f es: %.2f\n", radio, area);

    return 0;  // 6️⃣ Fin del programa (código de salida)
}

// 7️⃣ Definición de funciones auxiliares
float calcularAreaCirculo(float radio) {
    return M_PI * radio * radio; // Fórmula del área de un círculo
}
````

---

## 2️⃣ Explicación de los Componentes

### 🔹 Directivas del Preprocesador

Se usan para incluir librerías necesarias antes de compilar el código.

```c
#include <stdio.h>   // Para funciones como printf() y scanf()
#include <math.h>    // Para usar funciones matemáticas como M_PI
```

---

### 🔹 Declaración de Funciones (Prototipos)

Se escriben antes de `main()` para indicar que existen funciones auxiliares en el programa.
Permiten que `main()` pueda llamarlas sin errores.

```c
float calcularAreaCirculo(float radio);
```

---

### 🔹 Función Principal (`main`)

Es el punto de entrada del programa, donde inicia la ejecución y **debe existir** en todos los programas en C.

```c
int main() {
    // Código del programa
    return 0; // Indica que el programa finalizó correctamente
}
```

---

### 🔹 Definición de Variables

Se deben declarar antes de usarlas. C permite diferentes tipos de datos:

```c
int edad;     // Entero
float precio; // Decimal
char letra;   // Caracter
```

---

### 🔹 Lógica del Programa (Instrucciones y Sentencias)

Incluye la entrada de datos, procesamiento y salida de datos.

```c
printf("Ingrese un número: ");
scanf("%d", &numero);
printf("El número ingresado es: %d", numero);
```

---

### 🔹 Funciones Auxiliares (Opcionales)

Son fragmentos de código reutilizables que separan la lógica del programa.
Mejoran la organización y evitan repetir código.

```c
float calcularAreaCirculo(float radio) {
    return M_PI * radio * radio;
}
```

---

## ✅ Conclusión

El lenguaje C es la base de muchos otros lenguajes modernos. Aprender su sintaxis y estructura permite entender los fundamentos de la programación y optimizar el uso de los recursos de un sistema.


# 🔄 Composición Secuencial de Acciones y Procesos en C

El lenguaje C no solo permite ejecutar instrucciones de forma secuencial, sino que también interactúa con el sistema operativo para ejecutar programas como procesos.

---

## 1️⃣ Composición Secuencial de Acciones
La composición secuencial significa que las instrucciones se ejecutan **en el orden en que aparecen en el código**.  
Cada instrucción se ejecuta una tras otra, sin saltos ni repeticiones automáticas.

### Ejemplo:
```c
#include <stdio.h>

int main() {
    printf("Bienvenido al programa\n");
    printf("Por favor, ingrese su nombre: ");
    char nombre[20];
    scanf("%s", nombre);
    printf("Hola, %s!\n", nombre);
    return 0;
}
````

### Explicación:

1. Imprime un mensaje de bienvenida.
2. Pide al usuario su nombre.
3. Lee el nombre ingresado y lo muestra en pantalla.

---

## 2️⃣ Procesos en C

En el contexto de C y los sistemas operativos, **un proceso es un programa en ejecución**.
Cuando un programa escrito en C se ejecuta, el sistema operativo lo convierte en un proceso que tiene su propia memoria, registros, pila y recursos.

### Características de un Proceso:

* **Código ejecutable:** Instrucciones del programa en C.
* **Memoria asignada:** Datos y variables del programa.
* **Contexto de ejecución:** Estado de los registros del procesador.
* **Recursos del sistema:** Archivos abiertos, conexiones de red, etc.

---

### Ejemplo básico de un proceso en C

```c
#include <stdio.h>

int main() {
    printf("¡Hola, soy un proceso en ejecución!\n");
    return 0;
}
```

#### Ejecución:

1. Compilar el código:

   ```bash
   gcc programa.c -o programa
   ```
2. Ejecutar:

   ```bash
   ./programa
   ```
3. El sistema operativo:

   * Crea un proceso para ejecutar el programa.
   * El proceso imprime un mensaje en la consola.
   * El proceso finaliza y libera sus recursos.

---

## 3️⃣ Un proceso dentro de otro

Este ejemplo simula un proceso que imprime mensajes indicando su inicio, ejecución y finalización.

```c
#include <stdio.h>
#include <unistd.h>  // Para usar sleep()

// Función que representa un proceso en ejecución
void procesoEjemplo() {
    printf("🔵 Proceso iniciado...\n");
    sleep(2);  // Simula que el proceso está haciendo algo durante 2 segundos
    printf("🟢 Proceso ejecutándose...\n");
    sleep(2);
    printf("✅ Proceso finalizado.\n");
}

int main() {
    printf("🖥️ Iniciando programa...\n");
    // Llamamos a la función que simula un proceso
    procesoEjemplo();
    printf("🏁 Programa terminado.\n");
    return 0;
}
```

### Explicación:

1. El programa inicia e imprime "🖥️ Iniciando programa...".
2. Llama a `procesoEjemplo()`, que representa un proceso en ejecución.
3. Dentro de `procesoEjemplo()`:

   * Imprime "🔵 Proceso iniciado...".
   * Usa `sleep(2)`, lo que hace que el programa espere 2 segundos.
   * Luego imprime "🟢 Proceso ejecutándose..." y espera otros 2 segundos.
   * Finalmente, imprime "✅ Proceso finalizado.".
4. El control vuelve a `main()` y se imprime "🏁 Programa terminado.".

---

## 4️⃣ Acciones y Estados de un Proceso

### Acciones:

Son las tareas que realiza un proceso:

* Leer datos
* Ejecutar cálculos
* Imprimir en pantalla
* Esperar recursos

### Estados:

Son las fases en las que se encuentra un proceso en su ciclo de vida:

| Estado        | Descripción                                                       |
| ------------- | ----------------------------------------------------------------- |
| **Nuevo**     | Se crea el proceso pero aún no se ejecuta.                        |
| **Listo**     | Está esperando que el sistema le asigne CPU.                      |
| **Ejecución** | Está siendo ejecutado en el CPU.                                  |
| **Espera**    | Está pausado esperando un recurso (ejemplo: entrada del usuario). |
| **Terminado** | Ha finalizado su ejecución.                                       |

---

## 5️⃣ Simulación de Estados de un Proceso

```c
#include <stdio.h>
#include <unistd.h> // Para sleep()

void ejecutarProceso() {
    printf("🔵 Estado: NUEVO - Creando proceso...\n");
    sleep(1);

    printf("🟡 Estado: LISTO - Esperando asignación de CPU...\n");
    sleep(1);

    printf("🟢 Estado: EJECUCIÓN - El proceso está corriendo...\n");
    sleep(2); // Simula el tiempo de ejecución

    printf("⏳ Estado: ESPERA - El proceso está esperando entrada del usuario...\n");
    char input;
    printf("Presiona cualquier tecla y Enter para continuar: ");
    scanf(" %c", &input); // Espera entrada del usuario

    printf("✅ Estado: TERMINADO - El proceso ha finalizado.\n");
}

int main() {
    printf("🚀 Iniciando el programa...\n");
    ejecutarProceso();
    printf("🏁 Programa finalizado.\n");
    return 0;
}
```

### Explicación:

1. El programa inicia en `main()` y llama a `ejecutarProceso()`.
2. Estados del proceso:

   * **NUEVO:** Se indica que el proceso se está creando.
   * **LISTO:** El proceso espera ser ejecutado por el CPU.
   * **EJECUCIÓN:** El proceso está activo (`sleep(2)` simula la ejecución).
   * **ESPERA:** Se pausa esperando entrada del usuario (`scanf`).
   * **TERMINADO:** El proceso finaliza.
3. El programa vuelve a `main()` y muestra "🏁 Programa finalizado.".

---

```

