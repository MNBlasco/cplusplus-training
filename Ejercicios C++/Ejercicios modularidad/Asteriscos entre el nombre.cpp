#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings
using namespace std; // Espacio de nombres estandar

void pedirnombre (string &);
void asterisquero (string &);

int main (){
	string nombre;
	
	pedirnombre(nombre);
	asterisquero(nombre);
}

void pedirnombre (string &nombre){
	cout<<"Ingrese su nombre: "<<endl;
	cin>>nombre;
	cout<<endl;
}
void asterisquero (string &nombre){
	int asteriscos,i;
	asteriscos = nombre.length();
	

		for (i=0;i<asteriscos;i++){
			cout<<"*";
		}
		
	cout<<endl;
	cout<<nombre<<endl;
	
		for (i=0;i<asteriscos;i++){
			cout<<"*";
		}
	}
