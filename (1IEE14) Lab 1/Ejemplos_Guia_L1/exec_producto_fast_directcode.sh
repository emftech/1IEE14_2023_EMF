#Ejecución con un script en bash de scripts en c y en python
#Ejemplo Guia 1 Lab 1 1IEE14
#Fecha 23-03-2023
#Student: Estéfano Machado
#We'll use english because it's cooler

#Command to execute in terminal: 
    # $ bash /home/emf_ubuntu/1IEE14_EMF_23_1/Lab_1/Ejemplos_Guia_L1/exec_producto_fast_directcode.sh input1 input2

#Same as other example, but coding directlyy without assigning commands to variables

#Compilation in C
gcc producto.c -o exec_producto
#Execution in C
./exec_producto $1 $2

#Compilation and execution in python3
python3 producto.py $1 $2