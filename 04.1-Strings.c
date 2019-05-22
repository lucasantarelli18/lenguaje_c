//EJEMPLO USO Y MANIPULACION DE STRINGS

#include <conio.h>
#include <stdio.h>
#include <string.h> //Agregamos la libreria para utilizar las funciones de strings

char str1[10];
char str2[15];
char str3[20];
char str4[20];

int main (void){
	printf("Ingrese un string: \n");
	scanf("%s", str1);
	printf("Ingrese otro string: \n");
	scanf("%s", str2);
	_getch();
	printf("La longitud del string 1 es de %d \n", strlen(str1)); //Utilizamos strlen(str) para saber la longitud de un string
	_getch();
	printf("La longitud del string 2 es de %d \n", strlen(str2));
	_getch();
	if (strcmp(str1, str2)==0){ //Comparamos si el str1 es igual a str2; de ser iguales la funcion retornara valor 0, por lo tanto, 0==0 TRUE
		printf("Los strings son iguales \n");
		_getch();
	}
	else{
		printf("Los strings son distintos \n");
		_getch();
	}
	strcpy(str3,"Copio mi texto \n"); //Copia el string de la segunda posicion al la varibale string de la primera posicion (str3)
	printf("%s", str3);
	_getch();
	strcpy(str4,"Me j"); //NO SE PUEDE HACER str4="Me j" ; DEBEMOS USAR ESTA FUNCION SIEMPRE
	printf("String 4 = %s \n", str4); 
	strcpy(str3,"unto");
	printf("String 3 = %s \n", str3);
	strcat(str4,str3); //Concatena 2 strings y guarda el string final en el primer string (str4)
	printf("Concatenados = %s", str4);
	_getch();
	return 0;
}
