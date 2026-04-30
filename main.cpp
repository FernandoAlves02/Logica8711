#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    std::cout<<"Vamos descobrir se o seu número é par ou ímpar?"<<std::endl;
    std::cout<<"Digite seu número: "<<std::endl;
    std::cin>>num;


    if(num < 0){
        std::cout<<"Por favor, digite um número positivo."<<std::endl;
    }else if(num % 2 == 0){
            std::cout<<"Parabéns, seu número é par!"<<std::endl;
        }else{
            std::cout<<"Dessa vez, seu número é ímpar."<<std::endl;
        }
    


    return 0;
}