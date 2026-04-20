#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};
    int tamanho = sizeof(carros) / sizeof(carros[0]); //tamanho deve voltar 5 que é o tamanho do array, sizeof retorna bytes
    
    std::cout<<tamanho<<std::endl;

    for(int i = 0; i < std::size(carros); i++){
        std::cout<<carros[i]<<std::endl;
    }



    return 0;
}