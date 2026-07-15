#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int primeiroTermo = 1; //a1
    const int ultimoTermo = 100; //an
    const int n = 100; //quantidade total de números

    int soma = ((primeiroTermo + ultimoTermo) * n)/ 2;

    std::cout<<"A soma de todos os números de 1 a 100 é: "<<soma<<std::endl;

    return 0;
}