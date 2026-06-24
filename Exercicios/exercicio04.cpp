#include<iostream>
#include<windows.h>

// 4. Encontrar menor
// Leia 5 números e encontre o menor deles.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];

    std::cout<<"Bem-vindo, aqui verificamos qual o menor número de uma lista de 5 números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }
    
    int menor = num[1];
    std::cout<<std::endl;
    std::cout<<"O menor número da lista digitada, é: ";
    for(int i = 0; i != 5; i++){
        if(num[i] < menor){
            menor = num[i];
        };
    }
    std::cout<<menor<<std::endl;

    return 0;
}