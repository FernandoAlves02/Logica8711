#include<iostream>
#include<windows.h>

int quadrado(int num){

    return num * num;
}

int cubo(int num){

    return num * num * num;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"Quadrado de 5: "<<quadrado(5)<<". Cubo de 5: "<<cubo(5)<<std::endl;
    std::cout<<"Quadrado de 8: "<<quadrado(8)<<". Cubo de 8: "<<cubo(8)<<std::endl;
    std::cout<<"Quadrado de 10: "<<quadrado(10)<<". Cubo de 10: "<<cubo(10)<<std::endl;

    return 0;
}