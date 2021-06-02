#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings

using namespace std; // Espacio de nombres estandar

int main(){
	int tam,i,vocales=0;
	string frase;
	cout<<"Ingrese una frase: "<<endl;
	getline(cin,frase); // Comando para guardar strings
	tam = frase.length();
	
	for (i=0;i<tam;i++){
		if (frase[i]=='a' || frase.substr(i,1)=="e" || frase.substr(i,1)=="i" || frase.substr(i,1)=="o" || frase.substr(i,1)=="u"){
			vocales++;
		}
	}
	cout<<vocales<<endl;
	
return 0;
}
