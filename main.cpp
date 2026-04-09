#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 5;
    int b = 2;

    if (a > b){
        std::cout<<"A é maior que B."<<std::endl;
    }else{
        std::cout<<"B é maior ou igual a A."<<std::endl;
    }
    

    return 0;
}