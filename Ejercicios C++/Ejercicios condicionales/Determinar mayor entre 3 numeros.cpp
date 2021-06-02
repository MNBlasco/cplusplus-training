#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main (){
float num1,num2,num3,mayor;
cout<<"\n 1) ingrese un numero: "<<endl;
cin>>num1;
cout<<"\n 2) ingrese un numero: "<<endl;
cin>>num2;
cout<<"\n 3) ingrese un numero: "<<endl;
cin>>num3;

if (num1>num2){
	if (num1>num3){
	cout<<"El numero mayor es: "<<num1;}
}
else{
	if (num2>num3)
	cout<<"El numero mayor es: "<<num2;
else{
	cout<<"El numero mayor es: "<<num3;
}
}
getch();
}
