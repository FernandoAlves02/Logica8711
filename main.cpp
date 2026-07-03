#include<iostream>
#include<windows.h>
#include<vector>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    std::cout<<"===== Limpar vector ====="<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    std::cout<<"Tamanho antes: "<<numeros.size()<<std::endl;

    numeros.clear();

    std::cout<<"Tamanho depois: "<<numeros.size()<<std::endl;
    std::cout<<"Vector vazio? "<<(numeros.empty() ? "Sim" : "Não")<<std::endl;

    return 0;
}

