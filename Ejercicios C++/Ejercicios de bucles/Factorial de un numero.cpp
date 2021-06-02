#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main (){
	int num,factorial=1,i;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	for(i=1;i<=num;i++){
		factorial=factorial*i; // Se puede escribir tambien: factorial*=i
	}
	cout<<"\nEl factorial de "<<num<<" es : "<<factorial<<endl;
	getch();
}
