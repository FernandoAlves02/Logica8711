#include<iostream>
#include<windows.h>

// 6. Contar elementos
// Leia um array com 10 números e exiba quantos elementos tem.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos quantos elementos tem uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int count = 0;
    for(int i = 0; i != 10; i++){
        if(num[i] != 0){
            count++;
        }
    }

    std::cout<<"A lista contém "<<count<<" elementos diferentes de zero."<<std::endl;

    return 0;
}