#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero = 0;

    std::cout<<"Escolha um número para ver a tabuada: ";
    std::cin>>numero;
    
    std::cout<<std::endl;

    for(int i = 0; i <= 10; i++){
        std::cout<<numero<<" x "<<i<<" = "<<numero * i<<std::endl;
    }

    return 0;
}