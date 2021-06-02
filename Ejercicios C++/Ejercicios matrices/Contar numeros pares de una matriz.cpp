#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int
main ()
{   int num[3][4],i,j,suma_pares;
   
   // Llenar matriz
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<"Ingrese un numero: ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>num[i][j];
        }
        cout<<endl;
    }
   
   // Operacion matriz
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if (num[i][j] % 2 == 0){
            	suma_pares += num[i][j];	
			}
    	}
	}
   
   cout<<"\nLa suma de los numeros pares de la matriz es: "<<suma_pares<<endl;
    getch();  
    return 0;
}
