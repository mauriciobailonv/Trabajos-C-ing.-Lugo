#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float a, b, c, s,base, altura, areaHeron, areaTradicional;
	int valido;
	cout<<"Dame el valor del lado a:\n ";
	cin>>a;
	cout<<"Dame el valor del lado b:\n ";
	cin>>b;
	cout<<"Dame el valor del lado c: \n";
	cin>>c;
	
	valido = (a+b>c&&a+c>b&&b+c>a)?1:0;
	valido==1?cout<<"Lados válidos, se calculará el área.\n"
	:cout<<"Los lados no son válidos, se calcula el áreaa pesar de eso.\n";
	
	s=(a+b+c)/2;
	
	areaHeron=sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout<<"Dame la base de un triángulo: ";
	cin>>base;
	cout<<"Dame la altura de un triángulo: ";
	cin>>altura;
	
	areaTradicional=(base*altura)/2;
	
	cout<<"El área con la fórmula de Heron es: "<<areaHeron;
	cout<<"\n El área con la formula Tradicional es: "<<areaTradicional;
	return 0;
	}