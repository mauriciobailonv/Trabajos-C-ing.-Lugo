#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float radio, area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<endl;
	cout<<fixed;
	cout.precision(4);
	cout<<"Dame el radio de un círculo: ";
	cin>>radio;
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	cout<<"Usando precisión a cuatro decimales con fixed\n";
	cout<<"Para círculo de radio: "<<radio<<"\n";
	cout<<"El área es: "<<area<<endl;
	cout<<"La circunferencia es: "<<circunferencia<<endl;
	cout<<"Usando la precisión a dos decimales con printf: "<<endl;
	printf("Para un círculo de radio: %5.2f \n",radio);
	printf("El área ES: %5.2F\n", area);
	printf("La cirncunferencia es: %5.2f\n", circunferencia); 
}