//EJEMPLO DE CASO

#include <stdio.h> //Permite usar printf y scanf
#include <conio.h> //Permite usar _getch

int numero; //Declaramos un entero

int main(void){
	printf("Ingrese un numero entero del 1 al 3: ");
	scanf("%d", &numero);
	printf("=======Numero ingresado correctamente======= \n");
	//Le damos valor al entero
	switch (numero){
		case 1:
			printf("El numero elegido es 1"); //Se ejecuta si el numero es 1
			break;
		case 2:
			printf("El numero elegido es 2"); //Se ejecuta si el numero es 2
			break;
		case 3:
			printf("El numero elegido es 3"); //Se ejecuta si el numero es 3
			break;
		default:
			printf("Numero incorrecto"); //Se ejecuta si el numero es distinto del 1 al 3
			break;
	}
	_getch();
	return 0;
}
