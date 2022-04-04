/**
 * main.ino
 */
//#include <Arduino.h>
#include "Foto.h"
//#include "Keyboard.h"

#define NUM_FOTO 4

int main(int argc, char const *argv[])
{
    foto* f_dino = initFoto(0, true);
    foto* f_cactus = initFoto(1, true);
    foto* f_air = initFoto(2, true);
    foto* f_wall = initFoto(3, true);

    printf("La lettura del transistor: %d\n", f_dino->read);
    return 0;
}
// void setup()
// {

// }

// void loop
// {
//     Serial.print("Il pin del fototransistor è: ");
//     Serial.println(f_dino->pin);
// }