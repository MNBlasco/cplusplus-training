#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<cstdlib> // Libreria para random
#include<ctime> // Libreria para usar la funcion time
using namespace std; // Espacio de nombres estandar

int main(){
	int size,i;
	cout<<"Ingrese la cantidad de numeros que desea randomizar"<<endl;
	cin>>size;
	int num[size];
	srand(time(NULL)); // Encabezado para crear numeros aleatorios, va afuera del for porque sino son todos iguales
	for (i=0;i<size;i++){
		num[i]=1+rand()%(101-1); // variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
	}
	for	(i=0;i<size;i++){
		cout<<i<<") : "<<num[i]<<endl;
	}
}
