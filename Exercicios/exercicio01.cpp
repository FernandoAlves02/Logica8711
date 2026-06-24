#include<iostream>
#include<windows.h>

// 1. Ler e exibir
// Crie um programa que leia 5 números e exiba-os na tela.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];

    std::cout<<"Bem-vindo ao exibidor de números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }
    std::cout<<std::endl;
    std::cout<<"Os números digitados foram: ";
    for(int i = 0; i != 5; i++){
        std::cout<<num[i]<<" ";
    }

    return 0;
}