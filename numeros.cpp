#include <iostream>
using namespace std;

int fatorial(int);
int fibonacci(int n){
    if (n <= 1){
        return n;
    }   

    return fibonacci(n - 1) + fibonacci(n - 2);

}
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
        int num1=0, num2=0;
        switch (opcao)
        {
        case 1:
               cout << "Digite o numero para fazer o fatorial:\n";
               cin >> num1;
               cout << "Fatorial = " << fatorial(num1) << endl;
               break;
        case 2:
               cout << "Digite o numero de iteracoes de fibonacci:\n";
               cin >> num1;
               cout << "Fibonacci = " << fibonacci(num1) << endl;
               break; 
        case 3:
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


int fatorial(int num){
    if(num<=1){
        return 1;
    }
    return num*fatorial(num-1);
}
int somaSequencial(int inferior, int superior){
    int soma = ((inferior+superior)*(superior-inferior+1))/2;
    return soma;
}