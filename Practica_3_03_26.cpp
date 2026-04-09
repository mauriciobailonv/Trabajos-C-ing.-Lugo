#include<stdio.h>//agregar función system
#include<iostream>
#include<windows.h>//caracteres
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	char letras[20]= "Hexadecimal";	
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("Impresión simple\n"); //cout<<"Impresión simple \n"; puts ("Impresión simple \n");
	printf("La variable char tiene un valor de %c\n varint=%f\n cadena=%s",c,i,f,letras);
	//cout>>"La variable char tiene un valor de"<<c"\n" varint="<<i<<" varfloat "<<f...
	system("pause"); 
	printf("Impresión sin espacios\n");
	printf("%d%f%c%S",i,f,c,letras);
	printf("Impresióin con etiquetas\n");
	printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s\n", i,f,c,letras);
	system("pause");
	return 0;
}