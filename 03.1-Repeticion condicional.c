//EJEMPLO REPETICION CONDICIONAL

#include <stdio.h> //Permite usar printf y scanf
#include <conio.h> //Permite usar _getch

int num,multi,cant,num2; //Declaramos 4 variables enteras

int main (void){
	printf("TABLA DE MULTIPLICAR \n");
	printf("Ingrese numero a multiplicar: ");
	scanf("%d",&num);
	printf("Ingrese cantidad de veces a multiplicar: ");
	scanf("%d", &cant);
	num2=1;
	while (num2!=cant){ //mientras que nuestro indice sea distinto que la cantidad ingresada, se repetira
		multi=num*num2; //Guarda en 'multi' la multiplicacion
		printf("%d por %d = %d \n",num,num2,multi); //Imprime el producto
		num2=num2 + 1; //Contador
	}
	_getch();
	return 0;
}
