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

// Operación de creación (Constructor)
// Precondiciones: cuenta no debe haberse creado
// Postcondiciones: se crea la cuenta con id, respectivo id de cliente, NIP, n tipo de cuenta, saldo y límite de credito según el tipo de cuenta
// Parámetros:
// idCuenta: entero representando el id de la cuenta
// idCliente: entero representando el respectivo id de cliente
// NIP: char representando el código NIP
// nTipoCuenta: entero representando el n tipo de cuenta (crédito/débito)
// saldo: entero representando el saldo
// limiteCredito: entero representando el límite de credito según el tipo de cuenta
// Devuelve un puntero a la estructura Cliente en memoria dinámica
CuentaPtr crearCuenta(int idCuenta, int idClienteCuenta, char NIP[5], int nTipoCuenta, int saldo, int limiteCredito, PtrLista listaMovimientos);

// Operación de destrucción (Destructor)
// Precondiciones: se debe haber creado la cuenta con crearCuenta
// Postcondiciones: se destruye la cuenta y se libera la memoria que ocupaba
// Parámetros:
// cliente: TDACuenta a destruir
// Devuelve NULL
CuentaPtr destruirCuenta(CuentaPtr cuenta);

// Operación de obtención del idCuenta
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene el id de la cuenta
// Parámetros:
// cuenta: TDACuenta del que se obtiene el ID
// Devuelve un entero representando el id de la cuenta
int getIdCuenta(CuentaPtr cuenta);

// Operación de asignación de idCliente
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de idCuenta
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de idCuenta
// idCuenta: entero representando el nuevo valor de idCuenta
// No devuelve valor.
void setIdCuenta(CuentaPtr cuenta, int idCuenta);

// Operación de obtención del NIP
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene el NIP de la cuenta
// Parámetros:
// cuenta: TDACuenta del que se obtiene el NIP
// Devuelve un char representando el NIP de la cuenta
char getNip(CuentaPtr cuenta);

// Operación de asignación de NIP
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de NIP
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de NIP
// NIP: char representando el nuevo valor de NIP
// No devuelve valor.
void setNip(CuentaPtr cuenta, char NIP[5]);

// Operación de obtención del nTipoCuenta
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene el numero del tipo de cuenta (1.Crédito/2.Débito)
// Parámetros:
// cuenta: TDACuenta del que se obtiene el nTipoCuenta
// Devuelve un entero representando el numero del tipo de cuenta
int getNtipoCuenta(CuentaPtr cuenta);

// Operación de asignación de nTipoCuenta
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de nTipoCuenta
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de nTipoCuenta
// nTipoCuenta: entero representando el nuevo valor de nTipoCuenta
// No devuelve valor.
void setNtipoCuenta(CuentaPtr cuenta, int nTipoCuenta);

// Operación de obtención del saldo
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene el saldo de la cuenta
// Parámetros:
// cuenta: TDACuenta del que se obtiene el saldo
// Devuelve un entero representando el saldo de la cuenta
int getSaldo(CuentaPtr cuenta);

// Operación de asignación del saldo
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de saldo
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de saldo
// saldo: entero representando el nuevo valor de saldo
// No devuelve valor.
void setSaldo(CuentaPtr cuenta, int saldo);

// Operación de obtención del limiteCredito
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene el limite de credito
// Parámetros:
// cuenta: TDACuenta del que se obtiene el limiteCredito
// Devuelve un entero representando el limiteCredito
int getLimiteCredito(CuentaPtr cuenta);

// Operación de asignación de limiteCredito
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de limiteCredito
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de limiteCrdito
// limiteCredito: entero representando el nuevo valor de limiteCredito
// No devuelve valor.
void setLimiteCredito(CuentaPtr cuenta, int limiteCredito);

// Operación de obtención de listaMovimientos
// Precondicion: cuenta debe haberse creado
// Postcondición: se obtiene la lista de movimientos
// Parámetros:
// cuenta: TDACuenta del que se obtiene listaMovimientos
// Devuelve un puntero a lista representando la listaMovimientos
PtrLista getListaMovimientos(CuentaPtr cuenta);

// Operación de asignación de listaMovimientos
// Precondicion: cuenta debe haberse creado
// Postcondición: cuenta cambia con el nuevo valor de listaMovimientos
// Parámetros:
// cuenta: TDACuenta al que se asignara el nuevo valor de listaMovimientos
// listaMovimientos: puntero a lista representando el nuevo valor de listaMovimientos
// No devuelve valor.
void setListaMovimientos(CuentaPtr cuenta, PtrLista listaMovimientos);

#endif // CUENTA_H_INCLUDED
