/**
 * Keyboard.h
 */
#ifndef KEYBOARD_H
#define KEYBOARD_H


//#include <Arduino.h>
#include <stdio.h>
#include <stdint.h>
//#include <keyboard.h>

typedef struct keyboard
{
	uint8_t pin; //il pin associato
	char bind; //il tasto da premere

} keyboard;

#endif //KEYBOARD_H