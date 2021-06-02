#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings
#include<cstdlib> // Libreria para limpiar la pantalla de la consola
using namespace std; // Espacio de nombres estandar

void pedirnum(float &);
void menu (float &);
void potenciacion(float &);
void raiz_cuadrada(float &);

int main(){
	float num;
	
	pedirnum(num);
	menu(num);
	
	getch();
	return 0;
}

// Procedimiento para ingresar numero
void pedirnum(float &num){
	cout<<"\nIngrese un numero: "<<endl;
	cin>>num;
}

// MENU
void menu(float &num){
	int opcion;
	do{
		cout<<"\nElija la operacion que desea utilizar marcando el numero correspondiente: "<<endl;
		cout<<"1) Potenciacion"<<endl;
		cout<<"2) Raiz cuadrada"<<endl;
		cout<<"3) Salir del programa"<<endl;
		cin>>opcion;
		cout<<endl;
		
		switch(opcion){
			case 1: potenciacion(num); break;
			case 2: raiz_cuadrada(num); break;
			case 3: cout<<"Finalizado correctamente"<<endl; break;
			default: cout<<"\nOpcion incorrecta, vuelva a elegir una opcion valida"<<endl;
		}
		getch();
		system("cls"); // Comando para limpiar pantalla (pulsamos enter)
	}while (opcion !=3);
}

void potenciacion(float &num){
	float potencia,exponente;
	cout<<"\nIngrese el exponente: "<<endl;
	cin>>exponente;
	potencia = pow(num,exponente);
	cout<<"\nEl resultado es: "<<potencia<<endl;
}

void raiz_cuadrada(float &num){
	float raiz;
	raiz = sqrt(num);
	cout<<num;
	cout<<"\nEl resultado de la raiz cuadrada es: "<<raiz<<endl;
}


