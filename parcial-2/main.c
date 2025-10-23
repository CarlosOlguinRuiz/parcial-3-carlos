#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[256];
    FILE *f;
    printf("ingresar texto:\n");
    if (gets(buf) == NULL) {
        printf("No se leyó entrada\n");
        return 1;
    }
    printf(buf);
    size_t len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') buf[len - 1] = '\0';
    f = fopen("C:\\Users\\byrfn\\OneDrive\\Documentos\\GitHub\\ciberseguridad\\salida.txt", "w");
    if (f == NULL) {
        fprintf(stderr, "no esta siendo posible abrirlo\n");
        return 1;
    }
    if (fprintf(f, "%s\n", buf) < 0) {
        fprintf(stderr, "Error\n");
        fclose(f);
        return 1;
    }
    fclose(f);
    printf("Texto guardado en salida.txt en el Escritorio\n");
    return 0;



