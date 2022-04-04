/** 
 * Foto_Handler.h
 * Gestore componenti
 */
#ifndef FOTO_HANDLER_H
#define FOTO_HANDLER_H

#include <stdio.h>
#include <stdint.h>

typedef struct foto_handler
{
	uint8_t i;
	//Variabili di gestione di tutti i fototransistor
	//
	//1-> Comunicare alla struttura quali sono i fototransistor con una funzione di init
	//
	//char foto[i]; STA COSA NON SI PUO FARE

} foto_handler;

foto_handler* init_fotoHandler(uint8_t numero);
/**
 * Impostare il numero di transistor che andiamo ad utilizzare
 */

void role_fotoHandler(char ruolo);
/**
 * Riconoscere il ruolo che il fototransistor ha nel progetto
 * In base a quello assegnare un valore in una variabile che gli farà fare determinate azioni
 */

#endif //FOTO_HANDLER_H