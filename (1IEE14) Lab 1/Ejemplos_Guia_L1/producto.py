#producto.py
#Ejemplo Guia 1 Lab 1 1IEE14
#Fecha 23-03-2023
#Student: Estéfano Machado
#We'll use english because it's cooler

#Command to execute in terminal: $ python3 producto.py 9 11

import sys #we import the library to acces system-specific parameters and functions in order
#to have access to sys.argv, which functions analogously to argv in C

a=int(sys.argv[1]) #we cast directly to int the ascii input by the user in the terminal
b=int(sys.argv[2])

c=a*b

print("El producto es", c)