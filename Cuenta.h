#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

typedef struct Cuenta{
    int idCuenta;
    int idClienteCuenta;
    char NIP[5];
    int nTipoCuenta;
    int saldo;
    int limiteCredito;
    PtrLista listaMovimientos;
}Cuenta;

typedef Cuenta* CuentaPtr;

// Operaci�n de creaci�n (Constructor)
// Precondiciones: cuenta no debe haberse creado
// Postcondiciones: se crea la cuenta con id, respectivo id de cliente, NIP, n tipo de cuenta, saldo y l�mite de credito seg�n el tipo de cuenta
// Par�metros:
// idCuenta: entero representando el id de la cuenta
// idCliente: entero representando el respectivo id de cliente
// NIP: char representando el c�digo NIP
// nTipoCuenta: entero representando el n tipo de cuenta (cr�dito/d�bito)
// saldo: entero representando el saldo
// limiteCredito: entero representando el l�mite de credito seg�n el tipo de cuenta
// Devuelve un puntero a la estructura Cliente en memoria din�mica
CuentaPtr crearCuenta(int idCuenta, int idClienteCuenta, char NIP[5], int nTipoCuenta, int saldo, int limiteCredito, PtrLista listaMovimientos);

// Operaci�n de destrucci�n (Destructor)
// Precondiciones: se debe haber creado la cuenta con crearCuenta
// Postcondiciones: se destruye la cuenta y se libera la memoria que ocupaba
// Par�metros:
// cliente: TDACuenta a destruir
// Devuelve NULL
CuentaPtr destruirCuenta(CuentaPtr cuenta);

// Operaci�n de obtenci�n del idCuenta
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene el id de la cuenta
// Par�metros:
// cuenta: TDACuenta del que se obtiene el ID
// Devuelve un entero representando el id de la cuenta
int getIdCuenta(CuentaPtr cuenta);

// Operaci�n de asignaci�n de idCliente
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de idCuenta
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de idCuenta
// idCuenta: entero representando el nuevo valor de idCuenta
// No devuelve valor.
void setIdCuenta(CuentaPtr cuenta, int idCuenta);

// Operaci�n de obtenci�n del NIP
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene el NIP de la cuenta
// Par�metros:
// cuenta: TDACuenta del que se obtiene el NIP
// Devuelve un char representando el NIP de la cuenta
char getNip(CuentaPtr cuenta);

// Operaci�n de asignaci�n de NIP
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de NIP
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de NIP
// NIP: char representando el nuevo valor de NIP
// No devuelve valor.
void setNip(CuentaPtr cuenta, char NIP[5]);

// Operaci�n de obtenci�n del nTipoCuenta
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene el numero del tipo de cuenta (1.Cr�dito/2.D�bito)
// Par�metros:
// cuenta: TDACuenta del que se obtiene el nTipoCuenta
// Devuelve un entero representando el numero del tipo de cuenta
int getNtipoCuenta(CuentaPtr cuenta);

// Operaci�n de asignaci�n de nTipoCuenta
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de nTipoCuenta
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de nTipoCuenta
// nTipoCuenta: entero representando el nuevo valor de nTipoCuenta
// No devuelve valor.
void setNtipoCuenta(CuentaPtr cuenta, int nTipoCuenta);

// Operaci�n de obtenci�n del saldo
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene el saldo de la cuenta
// Par�metros:
// cuenta: TDACuenta del que se obtiene el saldo
// Devuelve un entero representando el saldo de la cuenta
int getSaldo(CuentaPtr cuenta);

// Operaci�n de asignaci�n del saldo
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de saldo
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de saldo
// saldo: entero representando el nuevo valor de saldo
// No devuelve valor.
void setSaldo(CuentaPtr cuenta, int saldo);

// Operaci�n de obtenci�n del limiteCredito
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene el limite de credito
// Par�metros:
// cuenta: TDACuenta del que se obtiene el limiteCredito
// Devuelve un entero representando el limiteCredito
int getLimiteCredito(CuentaPtr cuenta);

// Operaci�n de asignaci�n de limiteCredito
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de limiteCredito
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de limiteCrdito
// limiteCredito: entero representando el nuevo valor de limiteCredito
// No devuelve valor.
void setLimiteCredito(CuentaPtr cuenta, int limiteCredito);

// Operaci�n de obtenci�n de listaMovimientos
// Precondicion: cuenta debe haberse creado
// Postcondici�n: se obtiene la lista de movimientos
// Par�metros:
// cuenta: TDACuenta del que se obtiene listaMovimientos
// Devuelve un puntero a lista representando la listaMovimientos
PtrLista getListaMovimientos(CuentaPtr cuenta);

// Operaci�n de asignaci�n de listaMovimientos
// Precondicion: cuenta debe haberse creado
// Postcondici�n: cuenta cambia con el nuevo valor de listaMovimientos
// Par�metros:
// cuenta: TDACuenta al que se asignara el nuevo valor de listaMovimientos
// listaMovimientos: puntero a lista representando el nuevo valor de listaMovimientos
// No devuelve valor.
void setListaMovimientos(CuentaPtr cuenta, PtrLista listaMovimientos);

#endif // CUENTA_H_INCLUDED
