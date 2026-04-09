#include<iostream>
#include<windows.h>
#include<string>
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<std::sqrt(64)<<std::endl;
    std::cout<<std::round(2.6)<<std::endl;
    std::cout<<std::log(2)<<std::endl;

    return 0;
}