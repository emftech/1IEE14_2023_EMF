
#include <stdio.h>
#include <stdlib.h>

int nota_del_final(int a,int b){
    return (110-3*a-3*b)/4;
}

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Debe ingresar exactamente 2 notas\r\n");
        return 0;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Me voy por: %d",nota_del_final(x,y));
    //return 0;
}
