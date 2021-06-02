#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int
main ()
{   int num[4][4],i,j,diagonal[4];
   
   // Limpiador de arrays
   for(i=0;i<4;i++){
   		diagonal[i] = 0;
   	}
   
   
   // Llenar matriz
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"Ingrese un numero: ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>num[i][j];
        }
        cout<<endl;
    }
    
    // Llenado del array
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (i==j){
            	diagonal[i] += num[i][j];
			}
        }
        cout<<endl;
    }
    
    for(i=0;i<4;i++){
    	cout<<"\nLa diagonal ["<<i<<"]["<<i<<"] es: "<<diagonal[i]<<endl;
	}	
    
}
