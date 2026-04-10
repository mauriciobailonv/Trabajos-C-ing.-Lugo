//Programa de ejemplo, lee tres calificaciones, obtiene el promedio y grado.
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1, cal2, cal3, prom;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dame la califiación 1: ";
	cin>>cal1;
	cout<<"Dame la califiación 2: ";
	cin>>cal2;
	cout<<"Dame la califiación 3: ";
	cin>>cal3;
	prom=(cal1+cal2+cal3)/3;
	cout<<nombre<<", tu promedio: "<<prom<<", y tu calificación final es: ";
	if(prom>=90 and prom<=100){//prom>89 && prom>101
		cout<< "A";
	}else{
		if(prom>=80 and prom<=89){
			cout<<"B";
		}else{
			if(prom>=70 and prom<=79){
				cout<<"C";
			}else{
				if(prom>=60 and prom<=69){
					cout<<"D";
				}else{
					if(prom>=0 && prom<=59){
						cout<<"NA";
					}else{
						cout<<"Valores inválidos";
					}
				}
			}
		}
	}
	return 0;
}