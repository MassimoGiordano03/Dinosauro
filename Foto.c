/**
 * Foto.c
 */
#include "Foto.h"
#include <stdlib.h>


/*
NOTA ENORME:
Come vedi ho eliminato la dichiarazione della funzione.
Come ti ho detto quella funzione non può tornare più un puntatore alla struttura che viene allocata
perchè la funzione void *malloc(size_t size) è una chiamata a SO (Sistema operativo), anche detta system call.
L'Arduino non ha un SO e tutte le funzioni definite nella libreria standard di C per la gestione della
memoria non sono disponibili, perchè l'allocazione di essa viene gestita esclusivamente dal SO e non 
dall'utente.
Per questo motivo andrai a lavorare con strutture dati che risultano essere statiche e non più con memoria dinamica.
Lavorare con strutture statiche è lo standard per i sistemi embedded come Arduino.
GUARDA E MODIFICA IL GLOBAL (se non sai come si fa riprendi il file global.h e .c del nostro calciatore e se non ce l'hai
vai sul github di jack scrivendo su google "emanuele giacomini github", lo riconosci perchè ha una foto del cazzo e un coso
che suona uno strumento che manco lui sa cosa è <3)
*/

/*
Metti qui che fa sta funzione
*/
uint16_t getRead(foto* f)
{
	if(f->mode == true){
		//f->read = analogRead(f->pin);
	} 
	else{
		//f->read = digitalRead(f->pin);
	}
	return f->read;
}

/*
Metti qui che fa sta funzione
*/
void setFoto(foto* f, uint8_t type)
{
	f->type = type; //imposto il tipo del transistor in modo da dargli uno 'scopo'
}

