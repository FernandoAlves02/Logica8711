#include<iostream>
#include<windows.h>
#include<thread> //para Lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo (ms, segundos)

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 10; i >= 0; i--){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout<<"A bomba irá explodir em.."<<i<<std::endl;
    }

    

    return 0;
}