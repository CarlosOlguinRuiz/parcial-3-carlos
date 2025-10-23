

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* nombreAlAzar(void) {
    const char* nombres[] = { "carlos", "gael", "bruno", "bryan", "jair" };
    int count = sizeof(nombres) / sizeof(nombres[0]);
    int index = rand() % count;
    return nombres[index];
}

int main(void) {
   
    srand((unsigned int) time(NULL));

    
    const char* elegido = nombreAlAzar();
    printf("Nombre elegido: %s\n", elegido);

    return 0;
}



