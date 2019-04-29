//EJEMPLO REPETICION INCONDICIONAL
//Ejemplo CALCULADORA MULTIPLICACION

#include <stdio.h> //Permite usar printf y scanf
#include <conio.h> //Permite usar _getch

int num,multi; //Declaramos 2 variables enteras

int main (void){
	printf("TABLA DE MULTIPLICAR \n");
	printf("Ingrese numero a multiplicar: ");
	scanf("%d",&num);
	for (int indice=1; indice<=10; indice++){  //Nuestro indice tomara valores de 1 a 10 cada vez que repite
		multi=num*indice; //Guarda en 'multi' la multiplicacion
		printf("%d por %d = %d \n",num,indice,multi); //Imprime el producto
	}
	_getch();
	return 0;
}
