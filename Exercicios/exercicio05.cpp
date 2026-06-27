#include<iostream>
#include<windows.h>

// 5. Calcular média
// Leia 5 números, calcule a média e exiba.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];

    std::cout<<"Bem-vindo, aqui verificamos qual a média de uma lista de 5 números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int media = 0;
    std::cout<<"A média dos números digitados, é: ";
    for(int i = 0; i != 5; i++){
        media += num[i];
    }
    std::cout<<media/5<<std::endl;

    return 0;
}