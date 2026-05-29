#include<iostream>
#include<windows.h>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0) return;

    tabuada(numero,multiplicador - 1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero = 0;
    int multiplicador = 0;

    std::cout<<"Digite o número que quer terminar a tabuada: "<<std::endl;
    std::cin>>numero;

    std::cout<<"Digite por quanto deseja multiplicar esse número: "<<std::endl;
    std::cin>>multiplicador;

    tabuada(multiplicador, numero);

    return 0;
}