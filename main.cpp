#include<iostream>
#include<windows.h>

void minhaFuncao(std::string nome){
    std::cout<<nome<<std::endl;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    minhaFuncao("Fernando");
    minhaFuncao("Nome");

    return 0;
}