#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona{
    int dni;
    char nombre[50];
    char apellido[50];
    struct Persona *siguiente;
};

struct PersonaNueva{
    int dni;
    char nombre[50];
    char apellido[50];
};

void mostrarMenu(){
    printf("\nMenu de opciones:\n");
    printf(" 'i' - Insertar una persona\n");
    printf(" 'f' - Insertar al final\n");
    printf(" 'e' - Eliminar persona\n");
    printf(" 'm' - Mostrar listado\n");
    printf(" 'b' - Buscar Persona\n");
    printf(" 'u' - Modificar listado\n");
    printf(" 's' - Salir\n");
    printf(" Seleccione una opción:"); 
}

void insertarAlInicio(struct Persona** cabeza, int dni, char nombre[50], char apellido[50]) {
    struct Persona* nuevo = (struct Persona*)malloc(sizeof(struct Persona)); 
    nuevo->dni = dni; 
    strcpy(nuevo->nombre, nombre);
    strcpy(nuevo->apellido, apellido); 
    nuevo->siguiente = *cabeza; 
    *cabeza = nuevo;
}

void mostrarLista(struct Persona* cabeza) {
    printf("MOSTRAR LISTADO\n");
    while (cabeza != NULL) {
        printf("%d - %s %s \n", cabeza->dni, cabeza->nombre, cabeza->apellido);
        cabeza = cabeza->siguiente;
    }
}

struct PersonaNueva pedirDator(){
    printf("\nINGRESAR DATOS DE LA PERSONA");
    int dni;
    char nombre[50];
    char apellido[50];
    printf("\nIngrese DNI: ");
    scanf("%d", &dni);
    printf("Ingrese Nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese Apellido: ");
    scanf("%s", &apellido);
    struct PersonaNueva nuevaPersona;
    nuevaPersona.dni = dni;
    strcpy(nuevaPersona.nombre, nombre);
    strcpy(nuevaPersona.apellido, apellido);
    return nuevaPersona;
}

void insertarAlFinal(struct Persona** cabeza, int dni, char nombre[50], char apellido[50]) {
    printf("INSERTAR PERSONA AL FINAL\n");
    struct Persona* nuevo = (struct Persona*)malloc(sizeof(struct Persona));
    nuevo->dni = dni;
    strcpy(nuevo->nombre, nombre);
    strcpy(nuevo->apellido, apellido);
    nuevo->siguiente = NULL; 
    if (*cabeza == NULL) {
        *cabeza = nuevo;
    } else {
        struct Persona* actual = *cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente; 
        }
        actual->siguiente = nuevo;
    }
}

void eliminarPersona(struct Persona** cabeza, int dni) {
    struct Persona* actual = *cabeza;
    struct Persona* anterior = NULL;
    while (actual != NULL) {
        if (actual->dni == dni) {
            if (anterior == NULL) {
                *cabeza = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }
            free(actual);
            printf("El DNI %d fue eliminado de la lista.\n", dni);
            return; 
        }
        anterior = actual;
        actual = actual->siguiente;
    }
    printf("El DNI %d no fue encontrado en la lista.\n", dni);
}

void buscarPersona(struct Persona** cabeza, int dni) {
    struct Persona* actual = *cabeza;
    struct Persona* anterior = NULL;
    int encontrado = 0;
    while (actual != NULL) {
        if (actual->dni == dni) {
            encontrado = 1;
            break;
        }
        actual = actual->siguiente;
    }
    if(encontrado == 1){
        printf( "%d %s %s\n", actual->dni, actual->nombre, actual->apellido);
    }else{
        printf("El DNI %d no fue encontrado en la lista.\n", dni);
    }
   
}

void modificarPersona(struct Persona** cabeza, int dni, char nombre[50], char apellido[50]) {
    struct Persona* actual = *cabeza;
    while (actual != NULL) {
        if (actual->dni == dni) {
            strcpy(actual->nombre, nombre);
            strcpy(actual->apellido, apellido);
            printf("Datos actualizados para el DNI %d: %s %s\n", dni, actual->nombre, actual->apellido);
            return; 
        }
        actual = actual->siguiente;
    }
    printf("El DNI %d no fue encontrado en la lista.\n", dni);
}

int main(){
   struct Persona *inicio = NULL;
   char seguir = 's';
   char opcion = 'i';
   while(seguir == 's' || seguir == 'S'){
    mostrarMenu();
    scanf(" %c", &opcion);
    if(opcion == 'i'){
        struct PersonaNueva nuevaPersona = pedirDator();
        insertarAlInicio(&inicio, nuevaPersona.dni, nuevaPersona.nombre, nuevaPersona.apellido);
    }else if(opcion == 'f'){
        struct PersonaNueva nuevaPersona = pedirDator();
        insertarAlFinal(&inicio, nuevaPersona.dni, nuevaPersona.nombre, nuevaPersona.apellido);
    }else if(opcion == 'e'){
        printf("ELIMINAR PERSONA");
        int dni;
        printf("\nIngrese el DNI de la persona a eliminar: ");
        scanf("%d", &dni);
        eliminarPersona(&inicio, dni);
    }else if(opcion == 'm'){
        mostrarLista(inicio);
    }else if(opcion == 'b'){
        printf("BUSCAR PERSONA");
        int dni;
        printf("\nIngrese el DNI de la persona a buscar: ");
        scanf("%d", &dni);
        buscarPersona(&inicio, dni);
    }else if(opcion == 'u'){
        printf("ACTUALIZAR PERSONA");
        int dni;
        printf("\nIngrese el DNI de la persona a modificar: ");
        scanf("%d", &dni);
        char nombre[50];
        char apellido[50];
        printf("Ingrese el nuevo Nombre: ");
        scanf("%s", nombre);
        printf("Ingrese el nuevo Apellido: ");
        scanf("%s", apellido);
        modificarPersona(&inicio, dni, nombre, apellido);
    }else if(opcion == 's'){
        printf("SALIENDO DEL PROGRAMA");
        seguir = 'n';
    }else{
        printf("OPCION NO VALIDA, INTENTE NUEVAMENTE");
        continue;
    }
   }
return 0;
}