#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	//uso de if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dame una calificación: ";
	cin>>cal;
	if(cal>=70)
		cout<<"Aprobatoria\n";
	system("pause");
	system("cls");
	cout<<"Dame otra califiación: ";
	cin>>cal;
	if(cal>=70)
		cout<<"Calificación aprobatoria";
	else
		cout<<"Califiación reprobatoria";
	system("pause");
	system("cls");
	cout<<"Escribe una calificación (con ?). ";
	cin>>cal;
	cal>=70?cout<<"Suficiente\n":cout<<"No suficiente\n";
	
	return 0;
		}