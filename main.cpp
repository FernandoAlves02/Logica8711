#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    do{
        std::cout<<"Digite um valor para num: "<<std::endl;
        std::cin>>num;

        if(num < 0 || num > 10){
            std::cout<<"Entrada inválida!!"<<std::endl;
        }
    }while(num <= 10 && num >= 0);{
        std::cout<<"Obrigado!! Você escolheu o número: "<<std::endl;
    }

    return 0;
}