/**
 * Keyboard.c
 */

#include "Keyboard.h"
#include <stdlib.h>
#include <stdint.h>

/*
Stesso discorso per la malloc vale qui
*/

void pressKey(keyboard* k)
{
	/**
	 * Controllo se il tasto assegnato a un pin è la freccia in su o in giu
	 * Premo il tasto corrispondente
	 */
	/*uint8_t key_state = digitalRead(k->pin);
	if(k->bind == 'U')
	{
		if(key_state == LOW)
		{
			Keyboard.set_key1(KEY_UP);
			Keyboard.send_now();
		}

		else
		{
			Keyboard.set_key1(0);
			Keyboard.send_now();
		}
	}

	else if(k->bind == 'D')
	{
		if(key_state == LOW)
		{
			Keyboard.set_key1(KEY_DOWN);
			Keyboard.send_now();
		}

		else
		{
			Keyboard.set_key1(0);
			Keyboard.send_now();
		}
	}*/
}