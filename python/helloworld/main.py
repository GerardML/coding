nombre = "Gerardo Meneses"
edad = 20

#comentario 1
"""
comentario 2
comentario 3
"""
#############____PRINT____##################
print("Hola Mundo #1")
#print(f"Var 1 Name: {nombre} Edad: {str(edad)}")
print("Nombre: " + nombre + ", Edad: " + str(edad))
nombre = 20
edad = "Gerardo Meneses"
#print(f"Var 2 Name: {nombre}, Edad: {str(edad)}")
print("Nombre: " + str(nombre) + ", Edad: " + edad)

#############____INPUT____##################
estatura = int(input("Ingrese tu ESTATURA: "))

if estatura >=180:
    print("Eres una persona alta")
else:
    print("Eres una persona bajita")
    