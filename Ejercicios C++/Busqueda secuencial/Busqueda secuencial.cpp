#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main(){
	
	int num[5],aux,i,posicion,dato;
	bool encontrado=false;
	
	cout<<"Digite los 5 elementos del arreglo: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"\n"<<i<<") Digite un numero: "<<endl;
		cin>>num[i];
	}
	cout<<"\nDigite el dato a buscar"<<endl;
	cin>>dato;
	
	// Algoritmo busqueda secuencial
	while(i<5 && encontrado==false){
		if(num[i]==dato){
			encontrado = true;
			posicion = i;
		}
		i++;
	}
	
	if(encontrado==true){
		cout<<"\nElemento encontrado en la posicion: "<<posicion<<endl;
	}
	else{
		cout<<"\nElemento no encontrado"<<endl;
	}
	
	getch();
	return 0;
}
