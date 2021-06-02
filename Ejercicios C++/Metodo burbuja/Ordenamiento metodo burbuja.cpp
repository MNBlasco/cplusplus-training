#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main(){
	
	int num[5],aux,i,j;
	cout<<"Digite los 5 elementos del arreglo: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"\nDigite un numero: "<<endl;
		cin>>num[i];
	}
	
	// Algoritmo del metodo burbuja
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(num[j] > num[j+1]){
				aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	cout<<"\nEl arreglo ordenado queda de la siguiente forma: "<<endl;
	for(int i=0;i<5;i++){
		cout<<num[i]<<endl;
	}
	
	getch();
	return 0;
}




