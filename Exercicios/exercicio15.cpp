#include<iostream>
#include<windows.h>

// 15. Contar positivos e negativos
// Leia 10 números e conte quantos são positivos e quantos são negativos.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[10];

    std::cout<<"Bem-vindo, aqui verificamos quantos números positivos e negativos existem em uma lista de 10 números, para começar, digite 10 números."<<std::endl;
    for(int i = 0; i != 10; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    int positivos = 0;
    int negativos = 0;

    for(int i = 0; i != 10; i++){
        if(num[i] > 0){
            positivos++;
        } else if(num[i] < 0){
            negativos++;
        }
    }

    std::cout<<"Quantidade de números positivos: "<<positivos<<std::endl;
    std::cout<<"Quantidade de números negativos: "<<negativos<<std::endl;

    return 0;
}