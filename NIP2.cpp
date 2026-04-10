#include <iostream>
#include <windows.h>
using namespace std;
/*Programa de validación de NIP*/
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip; 
	nip=123;
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		printf("**Correcto**\nAcceso concendido");
	}
	else{
		printf("**Incorrecto**\nAcceso denegado");
	}
	return 0;
}