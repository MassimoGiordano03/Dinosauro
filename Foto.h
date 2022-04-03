/** 
 * Foto.h
 * Componenti
 */
#ifndef FOTO_H
#define FOTO_H

#endif //FOTO_H

typedef struct foto
{
	uint8_t pin; //Numero del pin del transistor

	bool mode; //true == analog, false == digital

	uint16_t read; //La lettura del transistor 

	uint8_t type; //Di che cosa si occupa il transistor

} foto;

foto* initFoto(uint8_t pin, bool mode); //inizializzazione struttura dati

uint16_t getRead(foto* f); //ritorno lettura fototransistor

void setFoto(foto* f, uint8_t type); //impostare il ruolo del fototransistor
/**
 * -> type == 1 "Foto del dinosauro"
 * -> type == 2 "Foto dei cactus"
 * -> type == 3 "Foto degli uccelli"
 * -> type == 4 "Foto dello sfondo"
 */
