#include<iostream>
#include<windows.h>

// 9. Inverter array
// Leia 5 números e exiba-os em ordem inversa.

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num[5];

    std::cout<<"Bem-vindo, aqui verificamos a ordem inversa de uma lista de 5 números, para começar, digite 5 números."<<std::endl;
    for(int i = 0; i != 5; i++){
        std::cout<<"Digite um número: ";
        std::cin>>num[i];
    }

    std::cout<<"A ordem inversa dos números digitados, é: "<<std::endl;
    for(int i = 4; i != -1; i--){
        std::cout<<num[i]<<std::endl;
    }

    return 0;
}