#Ejecución con un script en bash de scripts en c y en python
#Ejemplo Guia 1 Lab 1 1IEE14
#Fecha 23-03-2023
#Student: Estéfano Machado
#We'll use english because it's cooler

#Command to execute in terminal: 
    # $ bash /home/emf_ubuntu/1IEE14_EMF_23_1/Lab_1/Ejemplos_Guia_L1/exec_producto_fast.sh input1 input2

#We'll illustrate that in a bash script we can actually save commands as variables and execute them sequentally:

#inputs
input1=$1
input2=$2s

#Compilation in C
CC=gcc
EXEC=exec_producto #executable
SRC=producto.c #source reference code
$CC $SRC -o $EXEC #equivalent to writing on terminal $ gcc producto.c -o exec_producto
#Execution in C
Execution=./$EXEC
$Execution $input1 $input2

#Compilation and execution in python3
EXECpy=python3
SRCpy=producto.py
$EXECpy $SRCpy $input1 $input2