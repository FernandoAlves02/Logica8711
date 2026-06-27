#include<iostream>
#include<windows.h>

// 12. Números acima da média
// Leia 8 números, calcule a média e exiba quais estão acima dela.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[8];

    std::cout<<"Bem-vindo, aqui verificamos quais números estão acima da média de uma lista de 8 números, para começar, digite 8 números."<<std::endl;
    for(int i = 0; i != 8; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int media = 0;
    for(int i = 0; i != 8; i++){
        media += num[i];
    }
    std::cout<<"A média dos números digitados, é: "<<media/8<<std::endl;
    std::cout<<"Os números acima da média, são: "<<std::endl;
    for(int i = 0; i != 8; i++){
        if(num[i] > media/8){
            std::cout<<num[i]<<std::endl;
        }
    }

    return 0;
}