#include<iostream>
#include<windows.h>
#include<thread> //para Lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo (ms, segundos)

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            int tabuada = j;
            if(j == 0){
                std::cout<<"Abaixo, temos a tabuada do "<<i<<":"<<std::endl;
            }
            std::cout<<"O resultado de "<<tabuada<<" x "<<i<<" = "<<i*tabuada<<std::endl;
            
        }
    }

    

    return 0;
}