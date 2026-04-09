#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc, ri, rb, cf, tr, puntosdis;
	float cf1;
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
	cout<<"Las respuestas incorrectas restan 1 punto c/u\n";
	cout<<"Las respuestas en blanco valen 0 puntos c/u\n";
	
	printf("Dame el número de las respuestas correctas (valor = 5 puntos):");
	scanf("%d",&rc);
	printf("Dame el número de las respuestas incorrectas(valor = -1 ):" );
	scanf("%d",&ri);
	printf("Dame el número de las respuestas en blanco (valor = 0): ");
	scanf("%d",&rb);
	cf = (rc*5)-ri+(rb*0);
	tr = rc+ri+rb;
	puntosdis = tr*5;
	printf("La puntuación total es de: %d",cf);
	cout<<"\nPor lo tanto, la calificación ponderada final es: "<<(cf*100)/puntosdis<<endl;
	cf1=(cf*100)/puntosdis;
	cout<<"La calificación final vale: "<<cf1;
	return 0;

	}