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

    int i = 10;
    int x = i++;

    int j = 10;
    int y = ++j;

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;

    return 0;
}