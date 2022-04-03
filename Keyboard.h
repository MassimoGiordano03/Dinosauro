/**
 * Keyboard.h
 */
#include <Arduino.h>
#include <keyboard.h>

typedef struct keyboard
{
	uint8_t pin; //il pin associato
	char bind; //il tasto da premere

} keyboard;

keyboard* initKeyboard(uint8_t pin, char bind);