#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int
main ()
{   int num[4][4],i,j,suma_fila[4],suma_columna[4],aux;

   // Limpiador de arrays
   for(i=0;i<4;i++){
  		suma_fila[i] = 0;
  		suma_columna[i] = 0;
    }
   
   // Llenar matriz
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"Ingrese un numero: ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>num[i][j];
        }
        cout<<endl;
    }
    
    // Suma de filas
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        	suma_fila[i] += num[i][j];
    	}
    	cout<<"\nLa suma de la fila: "<<i<<" es : "<<suma_fila[i];
	}
    
    cout<<endl;
    
    // Suma de columnas
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        	suma_columna[i] += num[j][i];
    	}
    	cout<<"\nLa suma de la columna: "<<i<<" es : "<<suma_columna[i];
	}
    
    cout<<endl;
    
    // Chequeador
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        	cout<<num[i][j];
    	}
	}
}
