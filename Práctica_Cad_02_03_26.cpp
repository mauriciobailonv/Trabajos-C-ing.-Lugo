#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cad[80];
	int i,j,k;
	puts("Usnado scanf con juegos de inspección\n");
	cout <<"Dame una cadena con espacios";
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("Dame una cadena con mayúsculas y espacios: ");
	scanf("%[ A-Z]",cad);
	puts(cad);
	puts("Dame una cadena con mayúsuculas, minúsculas, Ñ, ñ y espacios: ");
	scanf("%[a-zA-ZÑñ]",cad);
	cout<<cad<<"\n";
	puts("Dame una cadena con cualquier caracter y termina con enter: ");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	puts("Dame tres números enteros de máximo tres cifras: ");
	scanf("%3d,%3d,%3d",&i,&j,&k);
	cout<<i<<" "<<j<<" "<<k<<;
	printf("%d,%d,%d",i,j,k);
	printf("\a");//beep, alarma
	return 0 ;
}