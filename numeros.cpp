#include <iostream>
using namespace std;

int fatorial(int);
int fibonacci(int);
int somaSequencial(int,int);


int main(){
    int opcao=0;
    do{
        cout << "Escolha uma opcao:\n"
             << "0-Sair\n"
             << "1-Fatorial\n"
             << "2-Fibonacci\n"
             << "3-Soma Sequencial\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
               int num=0;
               cout << "Digite o numero para fazer o fatorial:\n";
               cin >> num;
               cout << "Fatorial = " << fatorial(num) << endl;
               break;
        case 2:
               int num=0;
               cout << "Digite o numero de iteracoes de fibonacci:\n";
               cin >> num;
               cout << "Fibonacci = " << fibonacci(num) << endl;
               break; 
        case 3:
               int num1=0, num2=0;
               cout << "Digite o limite inferior da soma:\n";
               cin >> num1;
               cout << "Digite o limite superior da soma:\n";
               cin >> num2;
               cout << "Soma = " << somaSequencial(num1,num2) << endl;
               break; 
        default:
            break;
        }
    }while(opcao!=0);
    return 0;
}