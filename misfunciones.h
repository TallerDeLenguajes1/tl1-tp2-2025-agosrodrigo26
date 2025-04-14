#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"}; 


struct compu{
    int velocidad;  // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu;// Tipo de procesador (apuntador a cadena de caracteres) 
}typedef Computadora;
void cargarCaracteristicas(Computadora * compu, int cantidad_pc);
void mostrarCaracteristicas(Computadora pc);
void listarPc(Computadora * pcs, int cantidad);
void cargarCaracteristicas(Computadora * compu, int cantidad_pc){
    
    int index_tipo = 0;
    for(int i = 0; i< cantidad_pc; i++){

        compu[i].velocidad = 1 + rand() % 3;
        compu[i].anio = rand() % (2024 - 2015 + 1) + 2015 ; // a + rand() % b - a + 1
        compu[i].cantidad_nucleos = 1 + rand() % 8;
        index_tipo = rand() % 6;
        compu[i].tipo_cpu = tipos[index_tipo];
        
    }
}

void listarPc(Computadora * pcs, int cantidad){

    printf("----Listado de Pc----\n\n");
    for (int i=0; i < cantidad; i++){

        printf("Pc Nro %d\n\n", i);

        mostrarCaracteristicas(pcs[i]);

    }
}

void mostrarCaracteristicas(Computadora pc){

    printf("Velocidad: %d\n", pc.velocidad);
    printf("Anio: %d\n", pc.anio );
    printf("Cantidad nucleos: %d\n", pc.cantidad_nucleos);
    printf("Tipo CPU: %s\n\n\n", pc.tipo_cpu);
}

void masVieja(Computadora pc[], int cantidad){

    int indiceMasVieja = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pc[i].anio < pc[indiceMasVieja].anio) {
            indiceMasVieja = i;
        }
    }

    // Mostrar la compu más vieja
    printf("Computadora mas vieja:\n");
    printf("Velocidad: %d MHz\n", pc[indiceMasVieja].velocidad);
    printf("Anio: %d\n", pc[indiceMasVieja].anio);
    printf("Tipo CPU: %s\n\n", pc[indiceMasVieja].tipo_cpu);
}


void mostrarMasVeloz(struct compu pc[], int cantidad) {
    int indiceMasVeloz = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pc[i].velocidad > pc[indiceMasVeloz].velocidad) {
            indiceMasVeloz = i;
        }
    }

    // Mostrar la compu más rápida
    printf("Computadora mas veloz:\n");
    printf("Velocidad: %d MHz\n", pc[indiceMasVeloz].velocidad);
    printf("Anio: %d\n", pc[indiceMasVeloz].anio);
    printf("Tipo CPU: %s\n", pc[indiceMasVeloz].tipo_cpu);
}