/** 
 * Foto_Handler.h
 * Gestore componenti
 */
#include "Foto.h"

typedef struct foto_handler
{
	//Variabili di gestione di tutti i fototransistor
	//
	//1-> Comunicare alla struttura quali sono i fototransistor con una funzione di init
	//

} foto_handler;

foto_handler* init_fotoHandler(uint8_t numero, uint8_t ruolo);