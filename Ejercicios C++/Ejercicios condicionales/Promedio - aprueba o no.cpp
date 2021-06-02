#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
using namespace std; // Espacio de nombres estandar

int main (){
float calificacion1,calificacion2,calificacion3,promedio;
// Las calificaciones van del 0 al 100
cout<<"\nIngrese la calificacion numero 1: "<<endl;
cin>>calificacion1;
cout<<"\nIngrese la calificacion numero 2: "<<endl;
cin>>calificacion2;
cout<<"\nIngrese la calificacion numero 3: "<<endl;
cin>>calificacion3;
promedio = (calificacion1+calificacion2+calificacion3)/3;
if (promedio>=70)
cout<<"El alumno esta aprobado con un promedio de: "<<promedio;
else
cout<<"El alumno esta desaprobado con un promedio de: "<<promedio;
getch();
}
