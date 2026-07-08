#include<iostream>
#include<windows.h>
#include<vector>

bool verificarExiste(std::vector<int>&vec, int valor){
    for(int i = 0; i < vec.size(); i++){
        if(valor == vec[i]) return true;
    }
    return false;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);

    std::vector<int>pares;
    std::vector<int>impares;

    std::cout<<"Vetor: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<(i == numeros.size() - 1 ? "." : ", ");
        (numeros[i] % 2) == 0 ? pares.push_back(numeros[i]) : impares.push_back(numeros[i]);
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Pares: ";
    for(int i = 0; i < pares.size(); i++){
        std::cout<<pares[i]<<(i == pares.size() - 1 ? "." : ", ");
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Ímpares: ";
    for(int i = 0; i < impares.size(); i++){
        std::cout<<impares[i]<<(i == impares.size() - 1 ? "." : ", ");
    }

    return 0;
}