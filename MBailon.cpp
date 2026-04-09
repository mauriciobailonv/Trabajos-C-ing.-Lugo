#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
//Mauricio Bailón Villarreal No. de Control: 25040827
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float primeva, segeva, evaf, cf, pct1, pct2, pct3, puntosdis, tr;
	int valido;
	//Mandar al usuario que la calificación debe ser de 0 a 100
	cout<<"Cálculo de la calificación final de residencia profesional"<<endl;
	cout<<"Registra la calificación de la primera evaluación con un valor de 0 a 100: "<<endl;
	cin>>primeva;
	cout<<"Registra la calificación de la segunda evaluación con un valor de 0 a 100: "<<endl;
	cin>>segeva;
	cout<<"Registra la calificación de la evaluación final con un valor de 0 a 100: "<<endl;
	cin>>evaf;
	//Confirmar que se puede realizar el calculo correctamente
	valido = (primeva<=100,segeva<=100, evaf<=100)?1:0;
	valido==1?cout<<"Las calificaciones son menores o iguales a 100 válidos, se calculará la calificación final.\n"
	:cout<<"Las calificaciones no son válidas por ser mayor a 100, aún así, se calcula la calificación a pesar de eso.\n";
	pct1 = primeva*.10;
	pct2 = primeva*.10;
	pct3 = evaf*.80;
	cf= pct1+pct2+pct3;
	puntosdis= 100;
	cout<<"La calificación final es: "<<cf<<endl;
	//Calcular valor ponderado de las calificaciones
	cout<<"Calificaciones redondeadas: "<<endl;
	printf("La primera calificación redondeada es: %3.0f", cf);
	printf("Las segunda calificación redondeada es: %3.0f", cf);
	printf("Las tercera calificación redondeada es: %3.0f", cf);
	printf("Las calificación final redondeada es: %3.0f", cf);
	cout<<"\nPor lo tanto, la calificación ponderada final es: "<<(cf*100)/puntosdis<<endl;
	return 0;
	}