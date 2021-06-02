#include <iostream>
using namespace std;

//Prototipo
int factorial(int);
int potencia(int,int);

int main()
{
    int base,exponente;
    cout<<"Digite un numero: "<<endl;
    cin>>base;
    cout<<"Digite la potencia: "<<endl;
    cin>>exponente;
   
   
    cout<<"\nEl resultado de la potenciacion es: "<<potencia(base,exponente)<<endl;
   
    return 0;
}

int potencia(int b,int exp){
    int retorno;
   
    if (exp==0){
        retorno = 1;
    }
    else{
        retorno = b*potencia(b,exp-1);
    }
    return retorno;
}
