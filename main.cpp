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

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    std::cout<<"Original: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<(i == numeros.size() - 1 ? "." : ", ");
    }

    std::cout<<std::endl;
    std::cout<<"Invertido: ";
    for(int i = numeros.size() - 1; i >= 0; i--){
        std::cout<<numeros[i]<<(i == 0 ? "." : ", ");
    }

    return 0;
}