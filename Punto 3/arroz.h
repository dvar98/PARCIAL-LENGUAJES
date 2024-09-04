#ifndef ARROZ_DAO_H
#define ARROZ_DAO_H

#include <stdio.h>

FILE* open_file(const char *filename, const char *mode);
void close_file(FILE *file);
int count_word_in_file(FILE *file, const char *keyword);

#endif
