#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	//uso if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dime una ccalificación";
	cin>>cal;
	if(cal>=70)
		cout<<"Aprbatoria\n";
	system("cls");
	cout<<"Dime otra califiación: ";
	cin>>cal;
	if(cal>=70)
		cout<<"Suficiente\n";
	else
		cout<<"No Sufiiente\n";
	system("pause");
	system("cls");
	//Lo mismo con ?
	cout<<"Dime una califiación: (Evaluando con ?) ";
	cin>>cal;
	cal>=70?cout<<"Suficiente\n":cout<<"No suficiente\n";
	//if con más de una instrucción
	cout<<"Dime una califiación: ";
	cin>>cal;
	if(cal>=70){
		printf("La calfiiación obtenida es: ");
		cout<<"Suficiente\n";
	}
	else{
		printf("La califiación obtenida es: ");
		cout<<"No suficiente\n";
	}
	return 0;
	}