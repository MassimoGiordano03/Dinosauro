/**
 * main.ino
 */

#include <stdio.h>
#include <stdlib.h>


#include "Foto.h"


#define NUM_FOTO 4

int main(int argc, char const *argv[]){
    foto* f_dino = initFoto(0, true);

    printf("La lettura del transistor: %d\n", f_dino->read);
    return 0;
}