#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main(){
	int num,resultado,i,aux;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	resultado = 0;
	do{
		aux = num % 10;
		resultado+=aux;
		num = trunc(num/10);
	}
	while(num!=0);
	
	if (resultado<0){
		resultado*=-1;
	}
	cout<<"\nLa suma de las cifras es: "<<resultado<<endl;
}
