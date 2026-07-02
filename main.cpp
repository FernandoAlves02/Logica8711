#include<iostream>
#include<windows.h>
#include<vector>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    std::cout<<"===== Remover elemento específico ====="<<std::endl;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);

    std::cout<<"Antes: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    numeros.erase(numeros.begin() + 1);

    std::cout<<"Depois: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }

    return 0;
}

