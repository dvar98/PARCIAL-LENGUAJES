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