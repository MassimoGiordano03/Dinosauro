/**
 * Fototransistor.ino
 * Massimo Giordano
 */

//funzioni per la lettura dei transistor
uint8_t readT_T()
{
	// Lettura del transistor di terra
	
	uint8_t read = analogRead(TR_T);

	return TR_T;
}

uint8_t readT_A()
{
	// Lettura del transistor dell'aria
	
	uint8_t read = analogRead(TR_A);

	return TR_A;
}

uint8_t readT_S()
{
	// Lettura del transistor dello sfondo
	
	uint8_t read = analogRead(TR_S);

	return TR_S;
}
