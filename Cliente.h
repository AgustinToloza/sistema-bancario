#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Lista.h"

typedef struct Cliente{
    int idCliente;
    char nombre[20];
    char apellido[20];
    char ciudad[15];
    char direccion[15];
    int nDireccion;
    int edad;
    int telefono;
}Cliente;

typedef Cliente* ClientePtr;

// Operación de creación (Constructor)
// Precondiciones: cliente no debe haberse creado
// Postcondiciones: se crea el cliente con id, nombre, apellido, ciudad, direccion, edad y telefono
// Parámetros:
// idCliente: entero representando el id del cliente
// nombres: char representando el nombre y apellido del cliente
// ciudad: char representando el nombre de la ciudad
// direccion: char representando el nombre de la direccion
// edad: entero representando la edad del cliente
// telefono: entero representando el telefono del cliente
// Devuelve un puntero a la estructura Cliente en memoria dinámica
ClientePtr crearCliente(int idCliente, char nombre[20], char apellido[20], char ciudad[15], char direccion[15], int nDireccion, int edad, int telefono);

// Operación de destrucción (Destructor)
// Precondiciones: se debe haber creado el cliente con crearCliente
// Postcondiciones: se destruye el cliente y se libera la memoria que ocupaba
// Parámetros:
// cliente: TDACliente a destruir
// Devuelve NULL
ClientePtr destruirCliente(ClientePtr cliente);

// Operación de obtención del idCliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el id del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene el ID
// Devuelve un entero representando el id del cliente
int getIdCliente(ClientePtr cliente);

// Operación de asignación de idCliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de idCliente
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de idCliente
// idCliente: entero representando el nuevo valor de idCliente
// No devuelve valor.
void setIdCliente(ClientePtr cliente, int idCliente);

// Operación de obtención del nombre del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el nombre del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene el nombre
// Devuelve un char representando el nombre del cliente
char getNombre(ClientePtr cliente);

// Operación de asignación de nombre del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de nombre
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de nombre
// nombre: char representando el nuevo valor de nombre
// No devuelve valor.
void setNombre(ClientePtr cliente, char nombre[20]);

// Operación de obtención del apellido del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el apellido del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene el apellido
// Devuelve un char representando el apellido del cliente
char getApellido(ClientePtr cliente);

// Operación de asignación de apellido del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de apellido
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de apellido
// apellido: char representando el nuevo valor de apellido
// No devuelve valor.
void setApellido(ClientePtr cliente, char apellido[20]);

// Operación de obtención de la ciudad del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene la ciudad del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene la ciudad
// Devuelve un char representando la ciudad del cliente
char getCiudad(ClientePtr cliente);

// Operación de asignación de la ciudad del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de ciudad
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de ciudad
// ciudad: char representando el nuevo valor de ciudad
// No devuelve valor.
void setCiudad(ClientePtr cliente, char ciudad[15]);

// Operación de obtención de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene la direccion del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene la direccion
// Devuelve un char representando la direccion del cliente
char getDireccion(ClientePtr cliente);

// Operación de asignación de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de direccion
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de direccion
// direccion: char representando el nuevo valor de direccion
// No devuelve valor.
void setDireccion(ClientePtr cliente, char direccion[15]);

// Operación de obtención del numero de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el numero de la direccion del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene el nDireccion
// Devuelve un entero representando el nDireccion
int getNdireccion(ClientePtr cliente);

// Operación de asignación del numero de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de nDireccion
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor nDireccion
// nDireccion: entero representando el nuevo valor de nDireccion
// No devuelve valor.
void setNdireccion(ClientePtr cliente, int nDireccion);

// Operación de obtención de edad del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene la edad del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene la edad
// Devuelve un entero representando la edad del cliente
int getEdad(ClientePtr cliente);

// Operación de asignación de edad del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de edad
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de edad
// edad: entero representando el nuevo valor de edad
// No devuelve valor.
void setEdad(ClientePtr cliente, int edad);

// Operación de obtención del telefono del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el telefono del cliente
// Parámetros:
// cliente: TDACliente del que se obtiene el telefono
// Devuelve un entero representando el telefono del cliente
int getTelefono(ClientePtr cliente);

// Operación de asignación del telefono del cliente
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de telefono
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor de telefono
// telefono: entero representando el nuevo valor de telefono
// No devuelve valor.
void setTelefono(ClientePtr cliente, int telefono);

#endif // CLIENTE_H_INCLUDED
