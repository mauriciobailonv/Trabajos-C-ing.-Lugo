#include <iostream>
#include <windows.h>
using namespace std;
main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	cout << "Dame un número: ";
	cin>>x;
	cout<<"Hola Mundo\n";
	cout<< "La variable x vale "<<x;
	return 0;
}
