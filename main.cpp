#include<iostream>
#include<windows.h>

int calcularCubo(int num){
    return static_cast<int>(std::pow(num, 3));
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero = 0;

    std::cout<<"Digite um número inteiro: "<<std::endl;
    std::cin>>numero;

    int cubo = calcularCubo(numero);
    std::cout<<"O resultado foi: "<<cubo<<"."<<std::endl;

    return 0;
}