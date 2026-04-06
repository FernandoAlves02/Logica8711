#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Fernando";
    std::string sobrenome = "Alves";

    std::cout<<nome + " " + sobrenome<<std::endl;

    return 0;
}