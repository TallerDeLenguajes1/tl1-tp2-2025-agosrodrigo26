#include <stdio.h>
#include "misfunciones.h"


int main(){

    Computadora compu[5];
    cargarCaracteristicas(compu, 5);
    listarPc(compu, 5);
    masVieja(compu, 5);
    mostrarMasVeloz(compu, 5);
    

    return 0;

}