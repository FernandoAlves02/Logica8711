#include<iostream>
#include<windows.h>

bool ehPrimo(int numero){
    if(numero <= 1){
        return false;
    }

    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;
    
    std::cout<<"Digite um número: "<<std::endl;
    std::cin>>numero;

    if(ehPrimo(numero)){
        std::cout<<numero<<" é primo!"<<std::endl;
    }else{
        std::cout<<numero<<" não é primo!"<<std::endl;
    }

    return 0;
}