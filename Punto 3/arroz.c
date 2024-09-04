#include "arroz.h"
#include <string.h>

FILE* open_file(const char *filename, const char *mode) {
    return fopen(filename, mode);
}

void close_file(FILE *file) {
    fclose(file);
}

int count_word_in_file(FILE *file, const char *keyword) {
    int count = 0;
    char word[100];
    
    while (fscanf(file, "%99s", word) == 1) {
        if (strstr(word, keyword) != NULL) {
            count++;
        }
    }

    return count;
}
