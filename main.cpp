#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //algoritmo que solicite o nome, altura, idade
    //a idade, iremos classificar <=10 Infantil, <=18 = Adolescente, <= 60 Adulto

    for(int i = 1; i <= 10; i++){
        std::cout<<i<<std::endl;
    }

    return 0;
}