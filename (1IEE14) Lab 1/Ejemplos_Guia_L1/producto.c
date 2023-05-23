/*
producto.c
Ejemplo Guia 1 Lab 1 1IEE14
Fecha 23-03-2023
Student: Estéfano Machado
We'll use english because it's cooler
*/

#include <stdio.h>
#include <stdlib.h>

//Command to execute in terminal using gcc: $ gcc producto.c -o exec_producto && ./exec_producto input1 input2

int main(int argc, char const *argv[]){
    /*
    Explanation about argc and argv:
    Although any name can be given to these parameters, they are usually referred to as argc and argv. 
    The first parameter, argc (argument count) is an integer that indicates how many arguments were 
    entered on the command line when the program was started. The second parameter, argv (argument vector)
    , is an array of pointers to arrays of character objects. The array objects are null-terminated strings,
     representing the arguments that were entered on the command line when the program was started.
    The first element of the array, argv[0], is a pointer to the character array that contains the program name 
    or invocation name of the program that is being run from the command line. argv[1] indicates the first argument 
    passed to the program, argv[2] the second argument, and so on.
    */
    //atoi -> ascii to integer
    int a = atoi(argv[1]); //1 because the first argument points to the program name
    int b = atoi(argv[2]); //second input
    int c = a*b;
    printf("El producto es %d \n",c);
    return 0;
}