#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1, num2, soma;

    std::cout<<"Digite num 1: "<<"\n";
    std::cin>>num1;

    std::cout<<"Digite num 2: "<<"\n";
    std::cin>>num2;

    soma = num1 + num2;

    std::cout<<"O resultado da soma é "<<soma<<"\n";

    // "\n" (New Line): Apenas insere o caractere de nova linha. 
    // É como apertar "Enter" em um editor de texto. 
    // O computador guarda essa informação em um espaço temporário (chamado buffer) e 
    // só mostra na tela quando esse espaço enche ou o programa acaba. 

    // std::endl (End Line): Insere a nova linha E força o "esvaziamento" do buffer (operação chamada de flush). 
    // Ele obriga o computador a exibir tudo o que está guardado na memória imediatamente na tela. 

    return 0;
}