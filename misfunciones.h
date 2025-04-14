#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", 
    "Pentium"}; 

struct compu{
    int velocidad;  // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu;// Tipo de procesador (apuntador a cadena de caracteres) 
}typedef Computadora;

void cargarCaracteristicas(Computadora * compu, int cantidad_pc){
    
    for(int i = 0; i< cantidad_pc; i++){

        compu[i].velocidad = 1 + rand() % 3;
        compu[i].anio = 2015 + rand() % 2024 - 2015 + 1; // a + rand() % b - a + 1
        compu[i].cantidad_nucleos = 1 + rand() % 8;
        
        

    
    }
}

int main(){

    




}