//EJEMPLO ARREGLO (TIPO VECTOR)

#include <stdio.h> 
#include <conio.h> 
 
int vecNum[5], i;  //Defino un arreglo tipo vector de enteros de 5 posiciones y un índice 
 
int main(){  
	for (i=0; i<5; i++){ //Recorro el arreglo
   		vecNum[i]= 0; //Inicializo con valor 0
    }  
	for (i=0; i<5; i++){     //Realizo la carga del vector
    	printf("Vector posicion: %d\n", i);
		printf("Ingrese valor entero: ");
    	scanf("%d", &vecNum[i]); //Nótese que en el scan el vector va con & porque use índice   
		_clrscr();
    }
	for (i=0; i<5; i++){ //Muestro como quedo el vector
		printf("Vector Posicion: %d\n", i);
		printf("Valor: %d\n",vecNum[i]);
		printf("===============\n");
	}
	_getch();
}       
