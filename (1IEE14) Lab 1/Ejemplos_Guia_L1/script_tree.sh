#!/bin/bash

#Ejemplo de Aplicación 3.3 Guía Lab 1 1IEE14 23-1
#Fecha 23-03-2023
#Student: Estéfano Machado
#We'll use english because it's cooler

#Permissions:
# r -> read
# w -> write
# x -> execution


mkdir lab
mkdir lab/prog
mkdir lab/prog/deprecated
mkdir lab/prog/working

mkdir lab/example
mkdir lab/example/recovered

mkdir lab/data
mkdir lab/data/last
mkdir lab/data/dummy

chmod 444 lab/prog/deprecated #read only to all groups: user,group,others
chmod 244 lab/prog/working #user can write only
chmod 444 lab/prog #user cannot write anymore in the root of prog, only read

chmod 125 lab/example/recovered # --x -w- r-x -> user:execution only, groups: write only, others: read and execution
chmod 345 lab/example # -wx r-- r-x

chmod 345 lab/data/last # -wx r-- r-x
chmod 125 lab/data/dummy
chmod 244 lab/data

chmod 700 lab 