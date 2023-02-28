#ifndef MOVIMIENTOS_H_INCLUDED
#define MOVIMIENTOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

typedef struct Movimientos{
    int idCuenta;
    int idCliente;
    char idTipoMov[3];
    char descripcion[50];
    int monto;
    char fecha[15];
}Movimientos;

typedef Movimientos* MovimientosPtr;

// Operaci�n de creaci�n (Constructor)
// Precondiciones: movimientos no debe haberse creado
// Postcondiciones: se crean los movimientos con idCuenta, idCliente, idTipoMov, descripcion, monto y fecha
// Par�metros:
// idCuenta: entero representando el id de la cuenta
// idCliente: entero representando el respectivo id de cliente
// idTipoMov: char representando el id del tipo de movimiento (S. Saldo Inicial, D. Dep�sito , R. Retiro, P. Pago, T+ Transferencia Recibida, T- Transferencia Realizada)
// descripcion: char representnado la descripcion del movimiento
// monto: entero representando el monto
// fecha: char representando la fecha
// Devuelve un puntero a la estructura Cliente en memoria din�mica
MovimientosPtr crearMovimientos(int idCuenta, int idCliente, char idTipoMov[3], char descripcion[50], int monto, char fecha[15]);

// Operaci�n de destrucci�n (Destructor)
// Precondiciones: se deben haber creado los movimientos con crearMovimientos
// Postcondiciones: se destruyen los movimientos y se libera la memoria que ocupaban
// Par�metros:
// movimientos: TDACuenta a destruir
// Devuelve NULL
MovimientosPtr destruirMovimientos(MovimientosPtr movimientos);

// Operaci�n de obtenci�n del idTipoMov
// Precondicion: movimientos debe haberse creado
// Postcondici�n: se obtiene el ID del tipo de movimiento
// Par�metros:
// movimientos: TDAMovimientos del que se obtiene el ID del tipo de movimiento
// Devuelve un char representando el ID del tipo de movimiento
char getIdTipoMov(MovimientosPtr movimientos);

// Operaci�n de asignaci�n de idTipoMov
// Precondicion: movimientos debe haberse creado
// Postcondici�n: movimientos cambia con el nuevo valor de idTipoMov
// Par�metros:
// movimintos: TDAMovimientos al que se asignara el nuevo valor de idTipoMov
// idTipoMov: char representando el nuevo valor de idTipoMov
// No devuelve valor.
void setIdTipoMov(MovimientosPtr movimientos, char idTipoMov[3]);

// Operaci�n de obtenci�n del monto del movimiento
// Precondicion: movimientos debe haberse creado
// Postcondici�n: se obtiene el monto del movimiento
// Par�metros:
// movimientos: TDAMovimientos del que se obtiene el monto del movimiento
// Devuelve un entero representando el monto del movimiento
int getMonto(MovimientosPtr movimientos);

// Operaci�n de asignaci�n de monto del movimiento
// Precondicion: movimientos debe haberse creado
// Postcondici�n: movimientos cambia con el nuevo valor de monto
// Par�metros:
// movimintos: TDAMovimientos al que se asignara el nuevo valor de monto
// monto: entero representando el nuevo valor de monto
// No devuelve valor.
void setMonto(MovimientosPtr movimientos, int monto);

// Operaci�n de obtenci�n de la fecha del movimiento
// Precondicion: movimientos debe haberse creado
// Postcondici�n: se obtiene el la fecha del movimiento
// Par�metros:
// movimientos: TDAMovimientos del que se obtiene la fecha del movimiento
// Devuelve un char representando el la fecha del movimiento
char getFecha(MovimientosPtr movimientos);

// Operaci�n de asignaci�n de la fecha del movimiento
// Precondicion: movimientos debe haberse creado
// Postcondici�n: movimientos cambia con el nuevo valor de fecha
// Par�metros:
// movimintos: TDAMovimientos al que se asignara el nuevo valor de fecha
// fecha: char representando el nuevo valor de fecha
// No devuelve valor.
void setFecha(MovimientosPtr movimientos, char fecha[15]);

#endif // MOVIMIENTOS_H_INCLUDED
