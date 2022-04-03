/**
 * Keyboard.c
 */

keyboard* initKeyboard(uint8_t pin, char bind)
{
	keyboard* k = (keyboard*)malloc(sizeof(keyboard));

	if(k == NULL) return NULL;

	k->pin = pin;
	pinMode(k->pin, INPUT_PULLUP);

	k->bind = bind;
}

void pressKey(keyboard* k)
{
	/**
	 * Controllo se il tasto assegnato a un pin è la freccia in su o in giu
	 * Premo il tasto corrispondente
	 */
	uint8_t key_state = digitalRead(k->pin);
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
	}
}