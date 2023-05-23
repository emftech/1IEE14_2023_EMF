#!/bin/bash

#Ciclo iterativo que realize 15 ejecuciones de ambos programas:

for ((i=1; i<=15; i++))
do
    echo "Ejecución $i:"
    ./programa1_1
    ./programa1_2
done
