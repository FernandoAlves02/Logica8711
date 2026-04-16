#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int soma = 0;

    for(int i = 1; i <= 5; i++){
        soma += i;
    }


    // soma = soma + i
    // 0    = 0    + 1
    // 1    = 1    + 2
    // 3    = 3    + 3
    // 6    = 6    + 4
    // 10   = 10   + 5

    std::cout<<"Soma é: "<<soma<<std::endl;

    return 0;
}