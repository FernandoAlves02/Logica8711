#include<iostream>
#include<windows.h>
#include<string>
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 5;
    int b = 3;

    std::cout<<std::max(a, b)<<std::endl;

    return 0;
}