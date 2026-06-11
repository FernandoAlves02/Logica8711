#include<iostream>
#include<windows.h>
#include<string>
<<<<<<< HEAD

void torreDeHanoi(int n, std::string origem, std::string destino, std::string auxiliar){
    if(n == 1){
        std::cout<<"Mover disco "<<origem<<" para "<<destino<<std::endl;
        return;
    }
    torreDeHanoi(n - 1, origem, auxiliar, destino);
    std::cout<<"Mover disco "<<n<<" de "<<origem<<" para "<<destino<<std::endl;
    torreDeHanoi(n - 1, auxiliar, destino, origem);
}
=======
#include<chrono>

struct Aluno{
    std::string nome;
    float nota;
};
>>>>>>> ca3762504f865036ca89bd8f6ecd7d780cffc3db

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

<<<<<<< HEAD
    int numDiscos;
    std::cout<<"Quantos discos: ";
    std::cin>>numDiscos;

    std::cout<<"\nSequência de movimentos: "<<std::endl;
    torreDeHanoi(numDiscos, "A", "C", "B");

    std::cout<<"\nTotal de movimentos: "<<(1 << numDiscos) - 1<<std::endl;
=======
    Aluno alunos[3]{
        {"Henrique", 8.5},
        {"Paula", 9.0},
        {"Juliana", 7.0}
    };

    for(int i = 0; i < 3; i++){
        std::cout<<alunos[i].nome<<": "<<alunos[i].nota<<std::endl;
    }
>>>>>>> ca3762504f865036ca89bd8f6ecd7d780cffc3db

    return 0;
}