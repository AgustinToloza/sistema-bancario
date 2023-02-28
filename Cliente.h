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

// Operaci�n de creaci�n (Constructor)
// Precondiciones: cliente no debe haberse creado
// Postcondiciones: se crea el cliente con id, nombre, apellido, ciudad, direccion, edad y telefono
// Par�metros:
// idCliente: entero representando el id del cliente
// nombres: char representando el nombre y apellido del cliente
// ciudad: char representando el nombre de la ciudad
// direccion: char representando el nombre de la direccion
// edad: entero representando la edad del cliente
// telefono: entero representando el telefono del cliente
// Devuelve un puntero a la estructura Cliente en memoria din�mica
ClientePtr crearCliente(int idCliente, char nombre[20], char apellido[20], char ciudad[15], char direccion[15], int nDireccion, int edad, int telefono);

// Operaci�n de destrucci�n (Destructor)
// Precondiciones: se debe haber creado el cliente con crearCliente
// Postcondiciones: se destruye el cliente y se libera la memoria que ocupaba
// Par�metros:
// cliente: TDACliente a destruir
// Devuelve NULL
ClientePtr destruirCliente(ClientePtr cliente);

// Operaci�n de obtenci�n del idCliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el id del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene el ID
// Devuelve un entero representando el id del cliente
int getIdCliente(ClientePtr cliente);

// Operaci�n de asignaci�n de idCliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de idCliente
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de idCliente
// idCliente: entero representando el nuevo valor de idCliente
// No devuelve valor.
void setIdCliente(ClientePtr cliente, int idCliente);

// Operaci�n de obtenci�n del nombre del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el nombre del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene el nombre
// Devuelve un char representando el nombre del cliente
char getNombre(ClientePtr cliente);

// Operaci�n de asignaci�n de nombre del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de nombre
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de nombre
// nombre: char representando el nuevo valor de nombre
// No devuelve valor.
void setNombre(ClientePtr cliente, char nombre[20]);

// Operaci�n de obtenci�n del apellido del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el apellido del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene el apellido
// Devuelve un char representando el apellido del cliente
char getApellido(ClientePtr cliente);

// Operaci�n de asignaci�n de apellido del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de apellido
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de apellido
// apellido: char representando el nuevo valor de apellido
// No devuelve valor.
void setApellido(ClientePtr cliente, char apellido[20]);

// Operaci�n de obtenci�n de la ciudad del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene la ciudad del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene la ciudad
// Devuelve un char representando la ciudad del cliente
char getCiudad(ClientePtr cliente);

// Operaci�n de asignaci�n de la ciudad del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de ciudad
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de ciudad
// ciudad: char representando el nuevo valor de ciudad
// No devuelve valor.
void setCiudad(ClientePtr cliente, char ciudad[15]);

// Operaci�n de obtenci�n de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene la direccion del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene la direccion
// Devuelve un char representando la direccion del cliente
char getDireccion(ClientePtr cliente);

// Operaci�n de asignaci�n de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de direccion
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de direccion
// direccion: char representando el nuevo valor de direccion
// No devuelve valor.
void setDireccion(ClientePtr cliente, char direccion[15]);

// Operaci�n de obtenci�n del numero de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el numero de la direccion del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene el nDireccion
// Devuelve un entero representando el nDireccion
int getNdireccion(ClientePtr cliente);

// Operaci�n de asignaci�n del numero de la direccion del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de nDireccion
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor nDireccion
// nDireccion: entero representando el nuevo valor de nDireccion
// No devuelve valor.
void setNdireccion(ClientePtr cliente, int nDireccion);

// Operaci�n de obtenci�n de edad del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene la edad del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene la edad
// Devuelve un entero representando la edad del cliente
int getEdad(ClientePtr cliente);

// Operaci�n de asignaci�n de edad del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de edad
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de edad
// edad: entero representando el nuevo valor de edad
// No devuelve valor.
void setEdad(ClientePtr cliente, int edad);

// Operaci�n de obtenci�n del telefono del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el telefono del cliente
// Par�metros:
// cliente: TDACliente del que se obtiene el telefono
// Devuelve un entero representando el telefono del cliente
int getTelefono(ClientePtr cliente);

// Operaci�n de asignaci�n del telefono del cliente
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de telefono
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor de telefono
// telefono: entero representando el nuevo valor de telefono
// No devuelve valor.
void setTelefono(ClientePtr cliente, int telefono);

#endif // CLIENTE_H_INCLUDED
