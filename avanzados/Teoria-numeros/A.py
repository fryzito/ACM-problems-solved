def multiple11(n):
    # inicializar las variables para almacenar las sumas de los dígitos
    left_sum = 0
    right_sum = 0
    # iterar sobre los dígitos desde ambos extremos
    for i in range(len(n)):
        # si el índice es par, se suma el dígito a la suma de la izquierda
        if i % 2 == 0:
            left_sum += int(n[i])
        # si el índice es impar, se suma el dígito a la suma de la derecha
        else:
            right_sum += int(n[i])
    # se calcula la diferencia entre las sumas
    diff = abs(left_sum - right_sum)
    # si la diferencia es cero o divisible entre 11, entonces n es múltiplo de 11
    if diff == 0 or diff % 11 == 0:
        rpta="is a multiple of 11."
    else:
        rpta="is not a multiple of 11."
    print(n, rpta)
while(1):
    n = input("Ingrese un numero")
    if n == "0":
        break
    else:
        multiple11(n)