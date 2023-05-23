
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    if(argc != 4){
        //Validamos que se ingresen 3 argumentos, el otro es el nombre (arg 0)
        printf("Debe ingresar exactamente 3 valores\r\n");
    }
    int A = atoi(argv[1]);
    int B = atoi(argv[2]);
    int C = atoi(argv[3]);

    if (C==1){
        //Opción para contar números primos en el rango:
        int counter_primes=0; //contador de números primos en el rango, inicializado en 0 antes del loop
        int counter_div; //contador de divisores diferentes de 1
        for(int i=A; i<=B; i++){
            counter_div=0; //inicializamos en 0 la cantidad de divisores para cada número del rango en cada iteración
            for(int j=2;j<=i/2;j++){
                //Si hasta llegar a la mitad del número no tenemos divisores, entonces podemos afirmar que es primo
                if(i%j==0){
                    counter_div++;
                }
            }
            if(counter_div==0 && i>1){
                //Es primo si no tiene divisores en el rango dado y es mayor que 1
                counter_primes++;
            }
        }
        printf("Hay %d números primos en este rango.",counter_primes);
    }
    else if(C==2){
        /* Realizamos un cambio de base logarítmico para iterar desde 0 hasta el logaritmo
        en base 2 del límite superior del rango y así poder encontrar todas las posibles potencias de dos
        sin iterar más de lo necesario. */
        int current_2_pow;
        int counter_pow2=0; //contador de potencias de 2 dentro del rango
        for(int j=0; j<=log(B)/log(2); j++){ 
            //iteramos hasta el logaritmo en base 2 de B
            current_2_pow=pow(2,j);
            if(current_2_pow>=A && current_2_pow<=B){
                counter_pow2++;
            }
        }
        printf("Hay %d potencias de 2 en este rango.",counter_pow2);
    }
    else if(C==3){
        //Opción para contar potencias de 3 dentro del rango
        int current_3_pow;
        int counter_pow3=0; //contador de potencias de 3 dentro del rango
        for(int j=0; j<=log(B)/log(3); j++){ 
            /*Tomamos un cambio de base logarítmico, similarmente a lo realizado anteriormente,
            e iteramos hasta el logaritmo en base 3 de B.*/
            current_3_pow=pow(3,j);
            if(current_3_pow>=A && current_3_pow<=B){
                counter_pow3++;
            }
        }
        printf("Hay %d potencias de 3 en este rango",counter_pow3);
    }
    else {
        //Opción para contar potencias de k dentro del rango
        int current_k_pow;
        int counter_powk=0; //contador de potencias de k dentro del rango
        for(int j=0; j<=log(B)/log(C); j++){ 
            /*Tomamos un cambio de base logarítmico, similarmente a lo realizado anteriormente,
            e iteramos hasta el logaritmo en base k de B.*/
            current_k_pow=pow(C,j);
            if(current_k_pow>=A && current_k_pow<=B){
                counter_powk++;
            }
        }
        printf("Hay %d potencias de %d en este rango",counter_powk,C);
    }
}
