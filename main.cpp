#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 40;
    int b = 10;
    std::string c = "40";
    std::string d = "10";

    std::cout<<a+b<<std::endl;
    std::cout<<c+d<<std::endl;

    return 0;
}