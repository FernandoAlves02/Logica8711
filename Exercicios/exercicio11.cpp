#include<iostream>
#include<windows.h>

// 11. Buscar elemento
// Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos se um número específico está presente em uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int buscar;
    std::cout<<"Digite o número que deseja buscar: ";
    std::cin>>buscar;

    for(int i = 0; i != 10; i++){
        if(num[i] == buscar){
            std::cout<<"O número "<<buscar<<" foi encontrado na posição "<<i+1<<" da lista."<<std::endl;
            return 0;
        }
    }

    std::cout<<"O número "<<buscar<<" não foi encontrado na lista."<<std::endl;
    return 0;
}