#include<iostream>
#include<windows.h>

// 2. Soma simples
// Leia 5 números e calcule a soma total.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];
    int soma = 0;

    std::cout<<"Bem-vindo ao somador de números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }
    std::cout<<std::endl;
    std::cout<<"A soma dos números digitados, é: ";
    for(int i = 0; i != 5; i++){
        soma += num[1];
    }
    std::cout<<soma<<std::endl;

    return 0;
}