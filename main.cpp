#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1, num2, soma, subt, mult, op;
    float div;

    std::cout<<"Digite aqui o valor para o número 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"DIgite aqui o valor para o número 2: "<<std::endl;
    std::cin>>num2;

    std::cout<<"----- Escolha a operação -----"<<std::endl;
    std::cout<<"1 - Soma"<<std::endl;
    std::cout<<"2 - Subtração"<<std::endl;
    std::cout<<"3 - Multiplicação"<<std::endl;
    std::cout<<"4 - Divisão"<<std:: endl;
    std::cin>>op;

    switch(op){
        case 1:
            soma = num1 + num2;
            std::cout<<"O resultado da soma é: "<<soma<<std::endl;
            break;
        case 2:
            subt = num1 - num2;
            std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
            break;
        case 3:
            mult = num1 * num2;
            std::cout<<"O resultado da multiplicação é: "<<mult<<std::endl;
            break;
        case 4:
            div = num1 / num2;
            std::cout<<"O resultado da divisão é: "<<div<<std::endl;
            break;
        default:
            std::cout<<"Escolha inválida!"<<std::endl;
    };


    return 0;
}