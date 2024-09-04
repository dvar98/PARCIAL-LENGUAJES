#include <stdio.h>
#include "arroz.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <archivo> <palabra_clave>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    const char *keyword = argv[2];

    FILE *file = open_file(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    int occurrences = count_word_in_file(file, keyword);
    close_file(file);

    printf("La palabra '%s' se repite %d veces en el texto.\n", keyword, occurrences);

    return 0;
}
