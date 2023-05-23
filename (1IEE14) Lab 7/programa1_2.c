
#include <stdio.h>
#include <time.h> //Usamos la librería time.h para realizar las mediciones de tiempo de ejecución

int main()
{
    int N = 512;
    int matriz[N][N];
    int transpuesta[N][N];

    //Mediremos el tiempo de ejecución a partir de que se calcula la matriz transpuesta
    struct timespec ti, tf; //declaramos las variables en las que mediremos el tiempo de ejecución
    double t_elapsed; //declaramos la variable en la que guardaremos el cálculo del tiempo de ejecución

    for (int i = 0; i<N; i++){
        for(int j = 0; j<N;j++){
            matriz[i][j] = i+j*N;
        }
    }
    
    clock_gettime(CLOCK_REALTIME, &ti); //Inicio de la medición tiempo de ejecución

    for (int i = 0; i<N; i++){
        for(int j = 0; j<N;j++){
            transpuesta[j][i] = matriz[i][j];
        }
    }

    clock_gettime(CLOCK_REALTIME, &tf); //Fin de la medición tiempo de ejecución

    //Calculamos el tiempo de ejecución y lo imprimimos en el terminal
    t_elapsed = (tf.tv_sec - ti.tv_sec) * 1e9 + (tf.tv_nsec - ti.tv_nsec);
    printf("El tiempo de ejecución del cálculo de la transpuesta de la matriz generada realizado por el programa1_2.c es %.2f nanosegundos.\n", t_elapsed);

    return 0;
}
