﻿//Lo basico de C

//Declaracion de librerias
#include <stdio.h> //Permite printf, scanf, entre otras
#include <conio.h> //Permite _getch, entre otras

//Declaracion de varibales GLOBALES
int NumEntero, Ent2, Nuevo; //Declaracion de enteros
float NumReal; //Declaracion de numero real
char Carac; //Declaracion de caracter
char Car[20]; //Declaracion de string, representado como arreglo de 20 caracteres

int main(void){
	//Declaracion de variables LOCALES
	int VarLocal;
	printf("---------------------------------------");
	printf("           Lo basico de C              ");
	printf("---------------------------------------");
	printf("\n"); //Salteamos un renglon
	printf("\n");
	printf("Ingrese valor tipo entero: \n");
	scanf("%d", &NumEntero); //Usamos '%d' para indicar tipo de dato integer, '&' antes de varibale para indicar la direccion de memoria de la misma
	printf("\n");
	printf("Ingrese valor tipo real: \n");
	scanf("%f.2", &NumReal); //Usamos '%f' para indicar tipo de dato float, '&' antes de varibale para indicar la direccion de memoria de la misma
	printf("\n");	
        getchar(); //Para que tome el caracter proximo
	printf("Ingrese valor tipo caracter: \n");
	scanf("%c", &Carac); //Usamos '%d' para indicar tipo de dato character, '&' antes de varibale para indicar la direccion de memoria de la misma
	printf("\n");
	printf("Ingrese valor tipo string: \n");
	scanf("%s", Car); //Usamos '%s' para indicar tipo de dato string, No se usa '&' antes de varibale
	printf("\n");
	printf("\n");
	printf("Los valores son: \n");
	printf("\n");
	printf("Entero = %d", NumEntero);
	printf("\n");
	printf("Real = %f", NumReal);
	printf("\n");
	printf("Caracter = %c", Carac);
	printf("\n");
	printf("String = %s", Car);
	printf("\n");
	printf("\n");
	_getch(); //A la espera de un caracter
	printf("Ingrese valor para variable local tipo entero: \n");
	scanf("%d", &Ent2);
	Nuevo=NumEntero+Ent2; //Operaciones aritmeticas basicas
	printf("\n");
	printf("La suma del entero mas la variables local es %d", Nuevo);
	printf("\n");
	printf("\n");
	_getch();
	printf("Saliendo..... \n");
	_getch();
}
