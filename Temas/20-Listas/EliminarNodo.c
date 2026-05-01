#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

void insertarAlFinal(struct Nodo **cabeza, int valor)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); 
    nuevoNodo->dato = valor;                                             
    nuevoNodo->siguiente = NULL;
    if (*cabeza == NULL)
    {
        *cabeza = nuevoNodo;
        return;
    }

    struct Nodo *temp = *cabeza;
    while (temp->siguiente != NULL)
    {
        temp = temp->siguiente; 
    }
    temp->siguiente = nuevoNodo; 
}
void eliminarNodo(struct Nodo **cabeza, int valor)
{
    struct Nodo *temp = *cabeza;
    struct Nodo *anterior = NULL;
    while (temp != NULL && temp->dato != valor) 
    {
        anterior = temp;
        temp = temp->siguiente;
    }
    if (temp == NULL)
        return; // Si no lo encontramos, salimos

    if (anterior == NULL)
    {
        // El nodo a eliminar es el primero
        *cabeza = temp->siguiente;
    }
    else
    {
        // Saltamos el nodo a eliminar
        anterior->siguiente = temp->siguiente;
    }

    free(temp); // Liberamos la memoria del nodo eliminado
}

void mostrarLista(struct Nodo *nodo)
{
    while (nodo != NULL)
    {
        printf("%d -> ", nodo->dato); 
        nodo = nodo->siguiente;       
    }
    printf("NULL\n"); 
}

int main()
{
    struct Nodo *lista = NULL; 
    
    insertarAlFinal(&lista, 10);
    insertarAlFinal(&lista, 20);
    insertarAlFinal(&lista, 30); 
    insertarAlFinal(&lista, 40); 
    insertarAlFinal(&lista, 50);

    printf("Lista actual:\n");
    mostrarLista(lista); 

    eliminarNodo(&lista, 20); 
    mostrarLista(lista); 

    return 0; 
}
