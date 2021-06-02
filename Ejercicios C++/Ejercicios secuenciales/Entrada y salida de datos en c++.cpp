#include<iostream> // Libreria
using namespace std; // Espacio de nombres estandar

int main(){
	int numero;
	string nombre;
	cout<<"Ingrese un  numero: ";
	cin>>numero;
	cout<<"Ingrese su nombre completo: ";
	getline(cin,nombre); // No se puede usar cin para leer strings ya que solo apareceria la primer palabra antes del espacio
	cout<<" El numero es: "<<numero<<" y su nombre es: "<<nombre<<endl;
}
