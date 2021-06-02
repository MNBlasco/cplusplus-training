#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<cstdlib> // Libreria para random
#include<ctime> // Libreria para usar la funcion time
using namespace std; // Espacio de nombres estandar

int main(){
	int size,i;
	
	cout<<"Ingrese la cantidad de caracteres que desea randomizar"<<endl;
	cin>>size;
	
	char caracter[size];
	
	for (i=0;i<size;i++){
		cout<<"Ingrese un caracter: ";
		cin>>caracter[i];
	}
	
	cout<<endl;
	
	for	(i=size-1;i>=0;i--){
		cout<<caracter[i]<<endl;
	}
	
	getch();
	return 0;
}
