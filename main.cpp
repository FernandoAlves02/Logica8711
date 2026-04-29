#include<iostream>
#include<windows.h>

void minhaFuncao(std::string nome, int idade){
    std::cout<<"Meu nome é "<<nome<<" e tenho "<<idade<<" anos."<<std::endl;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    minhaFuncao("Fernando", 24);

    return 0;
}