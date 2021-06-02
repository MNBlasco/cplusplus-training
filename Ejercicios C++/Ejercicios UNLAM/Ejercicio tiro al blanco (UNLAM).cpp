#include<iostream> // Libreria
#include<conio.h> // Libreria para que no se cierre el ejecutable, se debe utlizar el comando getch(); al final
#include<string> // Libreria para utilizar strings
using namespace std; // Espacio de nombres estandar

int cuadrante (int,int);
int puntaje (int,int,int,int,int);

int main(){
	int participante,i,disparos_perfectos=0;
	int dx,dy;
	int cuadrant,cuadrante0=0,cuadrante1=0,cuadrante2=0,cuadrante3=0,cuadrante4=0,puntaje_ganador=0,participante_ganador;
	
	do{
		cout<<"\nIngrese el numero del participante: "<<endl;
		cin>>participante;
		
		if(participante>0){
			cuadrante0 = 0,cuadrante1 = 0,cuadrante2 = 0,cuadrante3 = 0, cuadrante4 = 0;
			for(i=0;i<5;i++){
				cout<<endl;
				do{
					cout<<"Digite las cordenadas X e Y del disparo "<<i+1<<" :"<<endl;
					cin>>dx>>dy;	
				}
				while(dx == 0 && dy!=0 || dx!=0 && dy == 0);
				
				cuadrant = cuadrante(dx,dy);	
				cout<<endl;
				cout<<"Disparo realizado en el cuadrante: "<<cuadrant<<endl;
				cout<<endl;	
				switch (cuadrant){
					case 0: cuadrante0 += 1; break;
					case 1: cuadrante1 += 1; break;
					case 2: cuadrante2 += 1; break;
					case 3: cuadrante3 += 1; break;
					case 4: cuadrante4 += 1; break;
				}	
			}
			disparos_perfectos += cuadrante0;
			
			cout<<cuadrante0<<" disparos realizados en el cuadrante 0."<<endl;
			cout<<cuadrante1<<" disparos realizados en el cuadrante 1."<<endl;
			cout<<cuadrante2<<" disparos realizados en el cuadrante 2."<<endl;
			cout<<cuadrante3<<" disparos realizados en el cuadrante 3."<<endl;
			cout<<cuadrante4<<" disparos realizados en el cuadrante 4."<<endl;
			cout<<"\nEl puntaje total obtenido por el participante "<<participante<<" es: "<<puntaje(cuadrante0,cuadrante1,cuadrante2,cuadrante3,cuadrante4)<<endl;
			
			if(puntaje_ganador<puntaje(cuadrante0,cuadrante1,cuadrante2,cuadrante3,cuadrante4)){
				puntaje_ganador = puntaje(cuadrante0,cuadrante1,cuadrante2,cuadrante3,cuadrante4);
				participante_ganador = participante;
			}
		}
	}	
	while(participante>0);
	
	cout<<"\nEl puntaje ganador es: "<<puntaje_ganador<<", obtenido por el participante numero: "<<participante_ganador<<endl;
	cout<<"\nSe realizaron "<<disparos_perfectos<<" disparos perfectos en toda la competencia."<<endl;
	
	getch();
}

// Funcion para sacar el cuadrante
int cuadrante (int dx,int dy){
	int cuadrante,cuadrante0,cuadrante1,cuadrante2,cuadrante3,cuadrante4;
	
	if(dx==0 && dy==0){
		cuadrante = 0;
	}
	if(dx>0 && dy>0){
		cuadrante = 1;
	}
	if(dx<0 && dy>0){
		cuadrante = 2;
	}
	if(dx<0 && dy<0){
		cuadrante = 3;
	}
	if(dx>0 && dy<0){
		cuadrante = 4;
	}
	return cuadrante;	
}

// Funcion para el puntaje
int puntaje (int cuadrante0,int cuadrante1,int cuadrante2,int cuadrante3,int cuadrante4){
	int puntaje_total=0;
	
	puntaje_total = (cuadrante1 + cuadrante2)*50 + (cuadrante3 + cuadrante4)*40 + cuadrante0*100;
	
	return puntaje_total;
}
