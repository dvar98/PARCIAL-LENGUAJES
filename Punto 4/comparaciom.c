#include <stdio.h>
#include <time.h>  // Para medir el tiempo

int main() {
    long sum = 0;

    // Obtener el tiempo inicial
    clock_t start_time = clock();

    for (int i = 0; i < 10000000; i++) {
        sum += i;
    }

    // Obtener el tiempo final
    clock_t end_time = clock();

    // Calcular el tiempo transcurrido en segundos
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Sum: %ld\n", sum);
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}