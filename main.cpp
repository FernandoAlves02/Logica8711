#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int result1 = 4 + 4 * 2;
    int result2 = 4 + 2 / 2;
    int result3 = (4 + 4) * 2;

    std::cout<<result1<<std::endl;
    std::cout<<result2<<std::endl;
    std::cout<<result3<<std::endl;

    return 0;
}