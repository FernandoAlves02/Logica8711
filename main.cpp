#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[5] = {"Volvo", "BMW", "Ford", "Chevrolet", "Fiat"};

    for(int i = 0; i < std::size(carros); i++){
        std::cout<<carros[i]<<std::endl;
    }

    return 0;
}

