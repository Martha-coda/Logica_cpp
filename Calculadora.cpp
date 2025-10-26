// Programa simples de calculadora em C++
// Permite ao usuário realizar soma, subtração, multiplicação e divisão entre dois números.
// Desenvolvido para praticar o uso de classes, métodos e estrutura switch.

#include <iostream>
using namespace std;

class Teste {
public:
    int a, b;

    void dados() {
        cout << "Digite dois números:\n";
        cin >> a >> b;
    }

    int soma() { return a + b; }
    int multi() { return a * b; }
    float divisao() {
        if (b == 0) {
            cout << "Não é possível dividir por zero!" << endl;
            return 0;
        }
        return float(a) / b;
    }
    int sub() { return a - b; }
};

int main() {
    Teste obj;
    obj.dados();
    int c;
    cout << "Digite a opção:\n1 - Multiplicação\n2 - Adição\n3 - Divisão\n4 - Subtração\n0 - Saída\n";
    cin >> c;

    switch (c) {
        case 1: cout << obj.multi() << "\n"; break;
        case 2: cout << obj.soma() << "\n"; break;
        case 3: cout << obj.divisao() << "\n"; break;
        case 4: cout << obj.sub() << "\n"; break;
        case 0: break;
        default: cout << "Opção inválida.\n"; break;
    }

    return 0;
}
