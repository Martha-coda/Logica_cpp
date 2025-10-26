// Programa que calcula o fatorial de um número inteiro informado pelo usuário.
// Utiliza um laço de repetição 'for' para multiplicar os valores sequencialmente.

#include <iostream>
using namespace std;

int fat(int a) {
    int r = 1;
    for (int i = 1; i <= a; i++) {
        r *= i;
    }
    return r;
}

int main() {
    int a;
    cout << "Digite um número: ";
    cin >> a;
    cout << "Fatorial de " << a << " é: " << fat(a) << endl;
    return 0;
}
