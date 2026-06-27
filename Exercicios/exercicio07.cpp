#include<iostream>
#include<windows.h>

// 7. Exibir pares
// Leia 10 números e exiba apenas os pares.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos quais números são pares em uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    std::cout<<"Os números pares digitados são: "<<std::endl;
    for(int i = 0; i != 10; i++){
        if(num[i] % 2 == 0){
            std::cout<<num[i]<<std::endl;
        }
    }

    return 0;
}