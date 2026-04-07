#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Fernando";

    std::cout<<"Nome tem: "<<nome.length()<<" letras."<<std::endl;
    std::cout<<"nome tem: "<<nome.size()<<" letras."<<std::endl;

    return 0;
}