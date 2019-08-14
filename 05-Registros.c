//EJEMPLO DE REGISTROS

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Persona{ //Definición de un registro (struct) en C
char apellido[15];
char nombre[15];
int edad;
};

struct Persona p; //Declaro una variable tipo Persona

int main(){
	printf("Ingrese apellido: ");
	scanf("%s", p.apellido); //Leo el apellido
	printf("Ingrese nombre: ");
	scanf("%s", p.nombre); //Leo el nombre
	printf("Ingrese edad: ");
	scanf("%d", &p.edad); //Leo la edad
	_clrscr();
	printf("Datos de la persona:\n");
	printf("Apellido: %s\n", p.apellido);
	printf("Nombre: %s\n", p.nombre);
	printf("Edad: %d\n", p.edad);
	_getch();
	_clrscr();
	return 0;
}
