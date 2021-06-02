#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main(){
	float num,promedio,i;
	int aux;
	promedio = 0;
	i = 0;
	do{
		cout<<"\nIngrese un numero: "<<endl;
		cin>>num;
		promedio+=num;
		i++;
		cout<<"\n¿Desea ingresar otro numero? (SI=1 / NO=0) "<<endl;
		cin>>aux;
		if(aux!=1 && aux!=0){
			do{
				cout<<"Ingrese 0 para dejar de ingresar o 1 para seguir ingresando numeros"<<endl;
				cin>>aux;
			}
			while (aux!=1 && aux!=0);
		}
	}
	while(aux==1);
	promedio/=i;
	cout<<"\nEl promedio de los numeros ingresados es: "<<promedio;
	getch();	
}
