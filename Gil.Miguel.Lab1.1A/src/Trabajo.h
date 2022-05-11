/*
 * Trabajo.h
 *
 *  Created on: 11 may. 2022
 *      Author: JUNMI
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_

#include "Notebook.h"
#include "Servicio.h"
#include "Fecha.h"

typedef struct{

int id;
int idNotebook;
int idServicio;
eFecha fPactada;
char descripcion[20];
int isEmpty;

}eTrabajo;

int inicializarTrabajos(eTrabajo vec[], int tam);

int mostrarTrabajo(eTrabajo lista, eNotebook notebooks[], int tamNot, eServicio servicios[], int tamSer);

int listarTrabajos(eTrabajo vec[], eNotebook notebooks[], int tamNot, eServicio servicios[], int tamSer);

int buscarTrabajoLibre(eTrabajo vec[], int tam, int* pIndex);

int altaTrabajo(eTrabajo vec[], int tam, int* pId, eNotebook notebooks[], int tamNot, eMarca marcas[], int tamMar,
		eTipo tipos[], int tamTip, eServicio servicios[], int tamSer);


#endif /* TRABAJO_H_ */
