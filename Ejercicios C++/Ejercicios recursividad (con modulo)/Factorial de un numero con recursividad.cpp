#include <iostream>

using namespace std;

//Prototipo
int factorial(int);

int main()
{
    int numero;
    cout<<"Digite un numero: "<<endl;
    cin>>numero;
   
    cout<<"\nEl factorial es: "<<factorial(numero)<<endl;
   
    return 0;
}

int factorial(int num){
    int retorno;
   
    if (num==0){
        retorno = 1;
    }
    else{
        retorno = num*factorial(num-1);
    }
    return retorno;
}
