### Métricas de Rendimiento


### Caso de Estudio: Suma de 10,000 Números

#### Código en C

```c
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
```

- **Tiempo de Ejecución**: 0.05 Milisegundos.
- **Uso de Memoria**: Bajísimo.

#### Código en Python

```python
import time  # Para medir el tiempo

sum = 0

# Obtener el tiempo inicial
start_time = time.time()

for i in range(10000000):
    sum += i

# Obtener el tiempo final
end_time = time.time()

# Calcular el tiempo transcurrido en segundos
time_taken = end_time - start_time

print(f"Sum: {sum}")
print(f"Time taken: {time_taken} seconds")
```

- **Tiempo de Ejecución**: 0.6 segundos.
- **Uso de Memoria**: Más alto que C, pero manejable.


