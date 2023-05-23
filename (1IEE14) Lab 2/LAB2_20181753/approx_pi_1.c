
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi_approx_for(int num_terms, double* terms){
    //El puntero nos permitirá usar memoria dinámica para guardar los términos de la suma parcial
    double sum=0; //variable donde acumularemos la suma
    for(int i=0; i<num_terms; i++){
        sum += pow(-1.0,(double)(i))/(2*(double)(i)+1);
        terms[i]=sum; //guardamos en memoria dinámica la suma parcial actual
    }
    return sum;
}

double pi_approx_while1(double ref_value, double precision,  double* terms){
    //El puntero nos permitirá usar memoria dinámica para guardar los términos de la suma parcial
    int i=0; //Contador de iteración
    double sum=0; //variable donde acumularemos la suma
    double term;
    while(1){
        term=pow(-1.0,(double)(i))/(2*(double)(i)+1); //Término actual
        sum += term; //acumulamos el término actual
        if(fabs(sum-ref_value)<precision){
            break;
        }
        i++;
        terms[i]=sum; //guardamos en memoria dinámica la suma parcial actual
    }
    return sum;
}

double pi_approx_while2(double precision,  double* terms){
    //El puntero nos permitirá usar memoria dinámica para guardar los términos de la suma parcial
    int i=0; //Contador de iteración
    double s_n=0; //variable donde acumularemos la suma
    double eps=1; //Inicialización de la variable de error, con el caso para n=1
    double s_n_ant=0; //variable donde guardaremos el resultado anterior
    double term;
    //printf("1\n"); //for debugging
    while(1){
        term=pow(-1.0,(double)(i))/(2*(double)(i)+1); //Término actual
        s_n += term; //acumulamos el término actual
        if(i>0){
            //A partir de la segunda iteración
            eps=fabs(s_n-s_n_ant)/s_n_ant;
        }
        if(eps<precision){
            break;
        }
        s_n_ant=s_n;
        i++;
        terms[i]=s_n; //guardamos en memoria dinámica la suma parcial actual
    }
    //printf("2\n"); //for debugging
    return s_n;
}

void print_terms(int N, double* terms){
    printf("Los últimos 5 términos de la serie son: \n");
    printf("%lf\t%lf\t%lf\t%lf\t%lf\n", terms[N-4], terms[N-4], terms[N-3], terms[N-2], terms[N-1]);
}

int main(){
    int num_terms=4000; //cantidad de términos para la función con for
    double precision_1=1e-4; //precisión para la primera función con while
    double precision_2=1e-5; //precisión para la segunda función con while
    double ref_value=M_PI_4; //Usamos el valor de pi/4 de math.h

    double* for_terms = (double*)malloc(sizeof(double)*num_terms); //Definimos los punteros y direcciones de memoria dinámica
    double* while1_terms = (double*)malloc(sizeof(double)*3000); //Definimos los punteros y direcciones de memoria dinámica
     double* while2_terms = (double*)malloc(sizeof(double)*70000); //Definimos los punteros y direcciones de memoria dinámica
    //para guardar los términos de las sumas parciales

    printf("El valor de referencia de pi/4 es %lf\n",ref_value);
    printf("s_for:%lf\n", pi_approx_for(num_terms, for_terms));
    print_terms(num_terms, for_terms);
    printf("s_while_1:%lf\n", pi_approx_while1(ref_value,precision_1,while1_terms));
    printf("s_while_2:%lf\n", pi_approx_while2(precision_2,while2_terms));
    return 0;
}
