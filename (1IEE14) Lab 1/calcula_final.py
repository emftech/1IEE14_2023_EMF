
import sys

def nota_del_final(a,b):
    res=(110 - 3*a - 3*b)/4
    print("Calculando por cuánto me voy: ",res)
    return res

if len(sys.argv) != 3:
    #En caso de error por que se han ingresado más de dos argumentos
    print("Debe ingresar exactamente 2 notas")

x = int(sys.argv[1])
y = int(sys.argv[2])

resultado = nota_del_final(x,y)
print(resultado)
