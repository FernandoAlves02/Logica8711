#include<iostream>
#include<windows.h>

// 10. Contar ocorrências
// Leia 10 números e conte quantas vezes aparece o número 5.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos quantas vezes o número 5 aparece em uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int count = 0;
    for(int i = 0; i != 10; i++){
        if(num[i] == 5){
            count++;
        }
    }

    std::cout<<"O número 5 aparece "<<count<<" vezes na lista."<<std::endl;

    return 0;
}