#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<cstdlib> // Libreria para random
#include<ctime> // Libreria para usar la funcion time
using namespace std; // Espacio de nombres estandar

int main(){
	
int size,i,minimo,maximo;
	
	cout<<"Ingrese la cantidad de numeros que desea randomizar"<<endl;
	cin>>size;
	
	int num[size];
	
	for (i=0;i<size;i++){
		cout<<"Ingrese un numero: ";
		cin>>num[i];
	}
	
	minimo = num[0];
	maximo = num[0];
	
	cout<<endl;

	for (i=1;i<size;i++){
	
		if (num[i]>maximo){
			maximo = num[i];
		}
		
		if (num[i]<minimo){
			minimo = num[i];
		}
	}
	
	cout<<"\nEl numero minimo es: "<<minimo;
	cout<<" y el numero maximo es: "<<maximo<<endl;
}
