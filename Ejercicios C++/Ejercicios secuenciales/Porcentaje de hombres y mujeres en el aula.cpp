#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
using namespace std; // Espacio de nombres estandar

int main (){
	int hombres,mujeres,total;
	float porcentaje_hombres,porcentaje_mujeres;
	
	cout<<"Ingrese la cantidad de hombres en el aula"<<endl;
	cin>>hombres;
	cout<<"Ingrese la cantidad de mujeres en el aula"<<endl;
	cin>>mujeres;
	total = hombres + mujeres;
	porcentaje_hombres = (float)hombres/total*100;
	porcentaje_mujeres = (float)mujeres/total*100;
	cout<<"\nEl porcentaje de hombres en el aula es: "<<porcentaje_hombres;
	cout<<"\nEl porcentaje de mujeres en el aula es: "<<porcentaje_mujeres;
}
