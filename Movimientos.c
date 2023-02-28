#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Movimientos.h"
#include "Util.h"

MovimientosPtr crearMovimientos(int idCuenta, int idCliente, char idTipoMov[3], char descripcion[50], int monto, char fecha[15]){
    MovimientosPtr m = (MovimientosPtr)obtenerMemoria(sizeof(Movimientos));
    strcpy(m->idTipoMov,idTipoMov);
    strcpy(m->descripcion,descripcion);
    strcpy(m->fecha,fecha);
    m->idCuenta = idCuenta;
    m->idCliente = idCliente;
    m->monto = monto;

    return m;
}

MovimientosPtr destruirMovimientos(MovimientosPtr movimientos){
    free(movimientos);
    return NULL;
}

char getIdTipoMov(MovimientosPtr movimientos){
    return movimientos->idTipoMov;
}

void setIdTipoMov(MovimientosPtr movimientos, char idTipoMov[3]){
    strcpy(movimientos->idTipoMov,idTipoMov);
}

int getMonto(MovimientosPtr movimientos){
    return movimientos->monto;
}

void setMonto(MovimientosPtr movimientos, int monto){
    movimientos->monto = monto;
}

char getFecha(MovimientosPtr movimientos){
    return movimientos->fecha;
}

void setFecha(MovimientosPtr movimientos, char fecha[15]){
    strcpy(movimientos->fecha,fecha);
}
