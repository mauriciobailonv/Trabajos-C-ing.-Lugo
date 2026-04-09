#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
main (){
	int entera;
	float flotante;
	char letra, palabra[50];
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Lectura de datos scanf\n";
	cout<<"Dame un valor entero: ";
	fflush(stadin);
	scanf("%d",&entera);
	cout<<"Dame un valor flotante: ";
	fflush(stadin);
	scanf("%f",&flotante);
	cout<<"Dame una letra";
	fflush(stadin);
	cout <<"Dame una frase sin espacios: ";
	fflush(stadin);
	scanf(%s,&palabra);
	
	return 0;
}