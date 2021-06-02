#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings

using namespace std; // Espacio de nombres estandar

int main(){
	int i;
	string frase,nueva_frase;
	nueva_frase = "";
	cout<<"Ingrese una frase: "<<endl;
	getline(cin,frase);
	
	for (i=0;i<=frase.length();i++){
		if (frase.substr(i,1)==" "){
			nueva_frase = nueva_frase;
		}
		else{
			nueva_frase = nueva_frase + frase.substr(i,1);
		}
	}
	
	cout<<nueva_frase;
}
