// Programa que verifica se um ano informado é bissexto.
// Exemplo de uso de operadores lógicos e condicionais em C++.

#include <iostream>
using namespace std;

bool eBissexto(int a) {
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
        return true;
    else
        return false;
}

int main() {
    int a;
    cout << "Digite um ano: ";
    cin >> a;
    cout << "É bissexto (1 = sim, 0 = não): " << eBissexto(a) << endl;
    return 0;
}
