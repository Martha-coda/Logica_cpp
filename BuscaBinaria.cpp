// Programa que ordena um vetor de números e realiza uma busca binária.
// Demonstra a implementação dos algoritmos de ordenação por seleção (Selection Sort)
// e busca binária (Binary Search).

#include <iostream>
using namespace std;

void ordena(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int i_menor = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[i_menor])
                i_menor = j;
        }
        if (i_menor != i) {
            int aux = vetor[i];
            vetor[i] = vetor[i_menor];
            vetor[i_menor] = aux;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << vetor[i] << (i == n - 1 ? "" : " ");
    }
}

int buscaBinaria(int vetor[], int n, int valorProcurado) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == valorProcurado)
            return meio;
        else if (vetor[meio] < valorProcurado)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int vetor[5];
    int valorProcurado = 0;
    int n = 5;

    cout << "Digite 5 números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    cout << "Digite o valor que procura: ";
    cin >> valorProcurado;

    cout << "Vetor ordenado: ";
    ordena(vetor, n);
    cout << endl;

    int resultado = buscaBinaria(vetor, n, valorProcurado);
    if (resultado != -1)
        cout << "Valor encontrado na posição: " << resultado << endl;
    else
        cout << "Valor não encontrado." << endl;

    return 0;
}
