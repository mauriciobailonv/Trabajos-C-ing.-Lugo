#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Hola, esta es una prueba de la función gotoxy."<<endl;
	gotoxy(1,1);
	cout<<"Este letrero comienza en la pocisión (1,1)."<<endl;
	gotoxy(30,2);
	cout<<"Este letrero comienza en la pocisión (30,2). "<<endl;
	gotoxy(1,17);
	cout<<"Este letrero comienza en la pocisión (1,17). "<<endl;
	system("pause");
	system("cls");
	cout<<"					Impresión de las cuatro esquinas. "<<endl;
	gotoxy(0,0);
	cout<<"*";
	gotoxy(160,0);
	cout<<"*";
	gotoxy(0,39);
	cout<<"*";
	gotoxy(0,160);
	cout<<"*";
	return 0;
	}
	