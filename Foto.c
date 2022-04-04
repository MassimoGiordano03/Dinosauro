/**
 * Foto.c
 */
#include "Foto.h"
#include <stdlib.h>

foto* initFoto(uint8_t pin, bool mode) //Ritorno il puntatore per crearmi nel main diverse strutture
{
	foto* f = (foto*)malloc(sizeof(foto)); //allocare una struttura (foto)

	if(f == NULL) return NULL; //allocation error(quando non punta a nulla restituisce NULL)

	f->pin = pin; //assegno valori
	f->mode = mode;
	f->read = 0;

	return f; //ritorno il puntatore
}

uint16_t getRead(foto* f)
{
	if(f->mode == true) //la lettura è analogica
	{
		//f->read = analogRead(f->pin);
	}
	else //la lettura è digitale
	{
		//f->read = digitalRead(f->pin);
	}
	return f->read;
}

void setFoto(foto* f, uint8_t type)
{
	f->type = type; //imposto il tipo del transistor in modo da dargli uno 'scopo'
}

