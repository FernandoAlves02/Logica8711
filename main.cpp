#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // for(int i = 1; i <= 2; ++i){
    //     std::cout<<"Externo: "<<i<<std::endl;

    //     for(int j = 1; j <= 3; ++j){
    //         std::cout<<"Interno: "<<j<<std::endl;
    //     }
    // }

    for(int i = 0; i <= 10; i++){
        std::cout<<"Abaixo, temos a tabuada do "<<i<<":"<<std::endl;
        for(int j = 0; j <= 10; j++){
            int tabuada = j;
            std::cout<<"O resultado de "<<tabuada<<" x "<<i<<" = "<<i*tabuada<<std::endl;
            
        }
    }

    return 0;
}