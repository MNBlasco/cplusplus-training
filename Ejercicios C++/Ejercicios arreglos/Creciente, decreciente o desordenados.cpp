#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<cstdlib> // Libreria para random
#include<ctime> // Libreria para usar la funcion time
using namespace std; // Espacio de nombres estandar

// En este ejercicio se podria haber jugado con los true, si ambos son true esta desordenado.
// No haria falta que pasen a false cuando no cumplen el creciente o decreciente.

int main(){
	int num[5],i,falseador;
	bool creciente,decreciente,desordenado;
	
	creciente = false;
	decreciente = false;
	desordenado = false;
	
	for (i=0;i<5;i++){
		cout<<"Ingrese un numero: "<<endl;
		cin>>num[i];
	}
	// Creciente
	falseador = 0;
	for (i=1;i<5;i++){
		if (num[i-1]<num[i]){
		creciente = true;
	}
		else
		{
		creciente = false;
		falseador++;
		}
	}
	if (falseador>0){
		desordenado = true;
		creciente = false;
	}
	// Decreciente
	falseador = 0;
	for (i=1;i<5;i++){
		if (num[i-1]>num[i]){
		decreciente = true;
	}
		else
		{
		decreciente = false;
		falseador++;
		}
	}
	if (falseador>0){
		desordenado = true;
		decreciente = false;

	}
	
	// Resultado 
	if (creciente==true && decreciente==false){
		cout<<"Los numeros estan ordenados de forma creciente";
	}
	if (decreciente==true && creciente==false){
		cout<<"Los numeros estan ordenados de forma decreciente";
	}
	if (desordenado==true && creciente==false && decreciente==false)
		cout<<"Los numeros estan desordenados ";
	
}
