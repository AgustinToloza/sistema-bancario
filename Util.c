#include <stdlib.h>
#include <stdio.h>
#include "Util.h"

void* obtenerMemoria(size_t tamanio){
    void* ptr = malloc(tamanio);
    if(ptr==NULL){
        printf("No se ha podido obtener memoria.\n");
        exit(1);
    }
    return ptr;
}
