/**
 * Foto_Handler.c
 */
#include "Foto_Handler.h"
#include <stdlib.h>
#include <stdint.h>

foto_handler* init_fotoHandler(uint8_t numero)
{
	foto_handler* f = (foto_handler*)malloc(sizeof(foto_handler)); //allocare una struttura (foto)

	if(f == NULL) return NULL;

	f->i = numero;
	return f;
}

void role_fotoHandler(char ruolo)
{
	/**
	 * Che cosa deve fare il sensore?
	 * Ruolo:
	 * 	-> D: transistor del dinosauro
	 * 	-> C: transistor dei cactus
	 * 	-> U: transistor degli uccelli
	 * 	-> S: transistor dello sfondo
	 */
	
}