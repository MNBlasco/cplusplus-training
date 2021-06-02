#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings

using namespace std; // Espacio de nombres estandar

int main(){
	string frase1,frase2;
	cout<<"Ingrese una frase: "<<endl;
	getline(cin,frase1);
	cout<<"Ingrese otra frase: "<<endl;
	getline(cin,frase2);
	
	if (frase1.length()>frase2.length()){
		cout<<"La frase mas larga es: "<<frase1<<endl;
	}
	if (frase1.length()<frase2.length()){
		cout<<"La frase mas larga es: "<<frase2<<endl;
	}
	if (frase1.length()==frase2.length()){
		cout<<"Las frases son igual de largas"<<endl;
	}
	return 0;
}
