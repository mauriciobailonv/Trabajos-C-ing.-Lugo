#include <iostream>
#include <windows.h>
using namespace std;
//Función para posicionar el cursor en un punto específico en la pantalla
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip; 
	nip=123;
	int intento=0;
	gotoxy(10,8);
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		gotoxy(10,11);
		printf("**Correcto**");
	}
	else{
		gotoxy(36,9);
		printf("**Incorrecto**");
	}
	return 0;
}