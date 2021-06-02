#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings

using namespace std; // Espacio de nombres estandar

int main(){
	int i;
	string frase,nueva_frase,frase_inversa;
	nueva_frase = "";
	frase_inversa = "";
	cout<<"Ingrese una frase: "<<endl;
	getline(cin,frase);
	
	for (i=0;i<=frase.length();i++){ // Obtener frase sin espacios
		if (frase.substr(i,1)==" "){
			nueva_frase = nueva_frase;
		}
		else{
			nueva_frase = nueva_frase + frase.substr(i,1);
		}
	}
	
	for(i=nueva_frase.length()-1;i>=0;i--){ // Obtener frase inversa
		frase_inversa = frase_inversa + nueva_frase.substr(i,1);
	}

	if (nueva_frase==frase_inversa){
		cout<<"\nLa palabra/frase es un palindromo"<<endl;
	}
	else{
		cout<<"\nLa palabra/frase no es un palindromo"<<endl;
	}
}
