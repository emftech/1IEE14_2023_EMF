#!/bin/bash

#Parte a
if [ $1 == "20181753" ]
    #Si es que se recibe mi código como entrada:
then
    echo "César Estéfano Machado Ferrer $1"
fi

#Parte b
mkdir Pregunta1
mkdir Pregunta2

chmod 777 Pregunta1 #permisos de read, write and execution para todos
chmod 777 Pregunta2 #permisos de read, write and execution para todos

#Parte c
cp pregunta1.c ./Pregunta1/

#Parte d
cd ./Pregunta1/
gcc pregunta1.c -o pregunta1_exec -lm #agregamos -lm para linkear math.h

#Parte e
time ./pregunta1_exec 1 100 4

#Parte f
cd .. #regresamos al directorio anterior donde está pregunta2.py
time python3 pregunta2.py 1 100 4

#Parte g
#modificación realizada en los programas internos de las preguntas 1 y 2, procedemos a validarlos
#usando este script de bash, asì como lo hicimos arriba, poniendo solo dos argumentos de entrada:
./pregunta1_exec 7 625
python3 pregunta2.py 7 625
