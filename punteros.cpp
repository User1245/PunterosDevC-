#include "iostream"
#include "conio.h"

using namespace std;

char nombre[10];
char *ptrnombre;

int main ()
{
	cout<<"Ingrese su Nombre: ";
	cin>>nombre;
	
	for (int i =0; i < 10; i++)
	{
		ptrnombre = &nombre[i];
		
		cout<<*ptrnombre<<endl;
		cout<<&ptrnombre[0];
	}

	system ("pause>nul");
	return 0;
}
