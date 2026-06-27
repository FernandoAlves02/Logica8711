#include<iostream>
#include<windows.h>

// 14. Soma de pares
// Leia 10 números e some apenas os números pares.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui somamos apenas os números pares de uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int soma = 0;
    for(int i = 0; i != 10; i++){
        if(num[i] % 2 == 0){
            soma += num[i];
        }
    }
    std::cout<<"A soma dos números pares é: "<<soma<<std::endl;

    return 0;
}