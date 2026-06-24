#include<iostream>
#include<windows.h>

// 3. Encontrar maior
// Leia 5 números e encontre o maior deles.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];
    int maior = 0;

    std::cout<<"Bem-vindo, aqui verificamos qual o maior número de uma lista de 5 números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }
    std::cout<<std::endl;
    std::cout<<"O maior número da lista digitada, é: ";
    for(int i = 0; i != 5; i++){
        if(num[i] > maior){
            maior = num[i];
        };
    }
    std::cout<<maior<<std::endl;

    return 0;
}