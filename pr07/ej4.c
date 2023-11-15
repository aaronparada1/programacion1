#include <stdio.h>

int main(int argc, char *argv[]) {
    // Verifica si se proporcionó el número correcto de argumentos
    if (argc < 3) {
        printf("Uso: %s <nombre_archivo> <mensaje1> <mensaje2> ... <mensajeN>\n", argv[0]);
        return 1;
    }

    // Abre el archivo en modo escritura
    FILE *fichero = fopen(argv[1], "w");

    if (fichero == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribe los mensajes en el archivo
    for (int i = 2; i < argc; i++) {
        fprintf(fichero, "%s\n", argv[i]);
    }

    fclose(fichero);
    printf("Archivo creado exitosamente.\n");
    return 0;
}
