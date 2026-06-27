#include<iostream>
#include<windows.h>

// 13. Maior e menor
// Leia 10 números e encontre tanto o maior quanto o menor em um mesmo programa.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos qual o maior e o menor número de uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int maior = num[0];
    int menor = num[0];

    for(int i = 1; i != 10; i++){
        if(num[i] > maior){
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }
    }

    std::cout<<"O maior número digitado é: "<<maior<<std::endl;
    std::cout<<"O menor número digitado é: "<<menor<<std::endl;

    return 0;
}