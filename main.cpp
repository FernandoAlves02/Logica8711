#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Fernando";
    
    std::cout<<nome[0]<<std::endl;
    std::cout<<nome[2]<<std::endl;
    std::cout<<nome[nome.length() - 1]<<std::endl;
    
    return 0;
}