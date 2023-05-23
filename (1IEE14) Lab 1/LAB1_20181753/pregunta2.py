
import math
import sys

if len(sys.argv) != 4:
    #Validamos que se ingresen 3 argumentos, el otro es el nombre (arg 0)
    print("Debe ingresar exactamente 3 valores")
    sys.exit() #Agregamos este "break" para que no de un error de fuera de rango al intentar seguir con la ejecución del programa
    #a pesar de no tener los inputs necesarios

A = int(sys.argv[1])
B = int(sys.argv[2])
C = int(sys.argv[3])

if C==1:
    counter_primes=0 #contador de números primos en el rango, inicializado en 0 antes del loop
    #Opción para contar números primos en el rango:
    for i in range(A,B):
        counter_div=0 #inicializamos en 0 la cantidad de divisores para cada número del rango en cada iteración
        for j in range(2,int(i/2)+1): #por si acaso casteamos a int para evitar que se use float y sea decimal
            #Si hasta llegar a la mitad del número no tenemos divisores, entonces podemos afirmar que es primo
            #range(A.B) va desde A hasta B-1
            if i%j==0:
                counter_div=counter_div+1
        if (counter_div==0 and i>1):
            #Es primo si no tiene divisores en el rango dado y es mayor que 1
            counter_primes=counter_primes+1
    print(f"Hay {counter_primes} números primos en este rango")
elif C==2:
    #Opción para contar potencias de 2 dentro del rango
    counter_pow2=0 #contador de potencias de 2 dentro del rango
    for i in range(0,int(math.log(B)/math.log(2))+1):
        #Realizamos un cambio de base logarítmico para iterar desde 0 hasta el logaritmo
        #en base 2 del límite superior del rango y así poder encontrar todas las posibles potencias de dos
        #sin iterar más de lo necesario.
        current_2_pow=math.pow(2,i)
        if (current_2_pow>=A and current_2_pow<=B):
            counter_pow2=counter_pow2+1
    print(f"Hay {counter_pow2} potencias de 2 en este rango." )

elif C==3:
    #Opción para contar potencias de 3 dentro del rango
    counter_pow3=0 #contador de potencias de 3 dentro del rango
    for i in range(0,int(math.log(B)/math.log(3))+1):
        #Tomamos un cambio de base logarítmico, similarmente a lo realizado anteriormente,
        #e iteramos hasta el logaritmo en base 3 de B.
        current_3_pow=math.pow(3,i)
        if (current_3_pow>=A and current_3_pow<=B):
            counter_pow3=counter_pow3+1
    print(f"Hay {counter_pow3} potencias de 3 en este rango." )
else:
    #Opción para contar potencias de k dentro del rango
    counter_powk=0 #contador de potencias de k dentro del rango
    for i in range(0,int(math.log(B)/math.log(C))+1):
        #Tomamos un cambio de base logarítmico, similarmente a lo realizado anteriormente,
        #e iteramos hasta el logaritmo en base k de B.
        current_k_pow=math.pow(3,i)
        if (current_k_pow>=A and current_k_pow<=B):
            counter_powk=counter_powk+1
    print(f"Hay {counter_powk} potencias de {C} en este rango." )
