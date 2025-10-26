// Programa que calcula o valor a pagar em um estacionamento.
// O usuário informa o dia, horário de entrada e saída.
// Exemplo de uso de classe e cálculo baseado em tempo.

#include <iostream>
using namespace std;

class Estacionamento {
public:
    int dia, HE, HS;

    void dados() {
        cout << "Digite o dia: ";
        cin >> dia;
        cout << "Digite o horário de entrada: ";
        cin >> HE;
        cout << "Digite o horário de saída: ";
        cin >> HS;

        if (HE < 0 || HE > 23 || HS < 0 || HS > 23) {
            cout << "AVISO: Horário inválido digitado. O cálculo pode estar incorreto." << endl;
        }
    }

    int calculo() {
        int r = (HS - HE) * 5;
        return r;
    }
};

int main() {
    Estacionamento obj;
    obj.dados();
    cout << "Valor a pagar: R$" << obj.calculo() << endl;
    return 0;
}
