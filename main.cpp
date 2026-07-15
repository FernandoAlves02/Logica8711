#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"De 1 a 20, os números pares são: ";
    
    for(int i = 2; i <= 20; i+=2){
        std::cout<<i<<(i == 20 ? "." : ", ");
    }

    return 0;
}