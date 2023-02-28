#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Cliente.h"
#include "Util.h"

ClientePtr crearCliente(int idCliente, char nombre[20], char apellido[20], char ciudad[15], char direccion[15], int nDireccion, int edad, int telefono){
    ClientePtr c = (ClientePtr)obtenerMemoria(sizeof(Cliente));
    strcpy(c->nombre, nombre);
    strcpy(c->apellido,apellido);
    strcpy(c->ciudad, ciudad);
    strcpy(c->direccion, direccion);
    c->nDireccion = nDireccion;
    c->idCliente = idCliente;
    c->edad = edad;
    c->telefono = telefono;

    return c;
}

ClientePtr destruirCliente(ClientePtr cliente){
    free(cliente);
    return NULL;
}

int getIdCliente(ClientePtr cliente){
    return cliente->idCliente;
}

void setIdCliente(ClientePtr cliente, int idCliente){
    cliente->idCliente = idCliente;
}

char getNombre(ClientePtr cliente){
    return cliente->nombre;
}

void setNombre(ClientePtr cliente, char nombre[20]){
    strcpy(cliente->nombre, nombre);
}

char getApellido(ClientePtr cliente){
    return cliente->apellido;
}

void setApellido(ClientePtr cliente, char apellido[20]){
    strcpy(cliente->apellido, apellido);
}

char getCiudad(ClientePtr cliente){
    return cliente->ciudad;
}

void setCiudad(ClientePtr cliente, char ciudad[15]){
    strcpy(cliente->ciudad,ciudad);
}

char getDireccion(ClientePtr cliente){
    return cliente->direccion;
}

void setDireccion(ClientePtr cliente, char direccion[15]){
    strcpy(cliente->direccion,direccion);
}

int getNdireccion(ClientePtr cliente){
    return cliente->nDireccion;
}

void setNdireccion(ClientePtr cliente, int nDireccion){
    cliente->nDireccion = nDireccion;
}

int getEdad(ClientePtr cliente){
    return cliente->edad;
}

void setEdad(ClientePtr cliente, int edad){
    cliente->edad = edad;
}

int getTelefono(ClientePtr cliente){
    return cliente->telefono;
}

void setTelefono(ClientePtr cliente, int telefono){
    cliente->telefono = telefono;
}
