// Programa que converte temperaturas entre Celsius e Fahrenheit.
// Contém duas funções: uma para converter Celsius → Fahrenheit e outra para Fahrenheit → Celsius.

#include <iostream>
using namespace std;

float fahrenheitParaCelsius(float a) {
    return (a - 32) * 5 / 9;
}

float celsiusParaFahrenheit(float a) {
    return (a * 9 / 5) + 32;
}

int main() {
    float a;
    cout << "Digite a temperatura: ";
    cin >> a;

    cout << "Em Fahrenheit: " << celsiusParaFahrenheit(a) << endl;
    cout << "Em Celsius: " << fahrenheitParaCelsius(a) << endl;

    return 0;
}
