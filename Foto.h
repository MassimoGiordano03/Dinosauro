/** 
 * Foto.h
 */
typedef struct foto
{
	uint8_t pin; //Numero del pin del transistor

	bool mode; //true == analog, false == digital

	uint16_t read; //La lettura del transistor 

} foto;

foto* initFoto(uint8_t pin, bool mode); //inizializzazione struttura dati

uint16_t getRead(foto* f); //ritorno lettura fototransistor
