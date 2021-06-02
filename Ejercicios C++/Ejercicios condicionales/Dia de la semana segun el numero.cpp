#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main (){
	int num;
	cout<<"Ingrese el numero del dia de la semana: "<<endl;
	cin>>num;
	switch(num){
		case 1: cout<<"\nEl numero corresponde al dia Lunes"; break;
		case 2: cout<<"\nEl numero corresponde al dia Martes"; break;
		case 3: cout<<"\nEl numero corresponde al dia Miercoles"; break;	
		case 4: cout<<"\nEl numero corresponde al dia Jueves"; break;	
		case 5: cout<<"\nEl numero corresponde al dia Viernes"; break;	
		case 6: cout<<"\nEl numero corresponde al dia Sabado"; break;
		case 7: cout<<"\nEl numero corresponde al dia Domingo"; break;	
		default: cout<<"\nEl numero esta fuera del rango 1-7"; break;
}
getch();
}
