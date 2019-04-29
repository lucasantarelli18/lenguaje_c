//EJEMPLO DE DECISION SIMPLE EN C

#include <stdio.h> //Permite usar printf y scanf
#include <conio.h> //Permite usar _getch

int numero1, numero2; //Declaramos 2 variables enteras

int main(void){
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero1);
	printf("=======Numero ingresado correctamente======= \n");
	printf("Ingrese otro numero entero: ");
	scanf("%d", &numero2);
	printf("=======Numero ingresado correctamente======= \n");
	_getch();
	//Le dimos valores a ambos enteros

	if (numero1>=numero2){ 
		printf("El numero %d es mayor o igual que el numero %d", numero1, numero2); //si la condicion se cumple se ejecutara este bloque
	}
	else{ 
		printf("El numero %d es menor que el numero %d", numero1, numero2); //si la condicion no se cumple se ejecutara este bloque
	}
	_getch();
	return 0;
}
