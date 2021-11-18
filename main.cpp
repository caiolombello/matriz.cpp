/* Implemente um programa que lê 8 números e armazena-os em duas matrizes: matriz A (2x2) e matriz B (2x2).
 * O programa deve somar estas matrizes, armazenando o resultado na matriz S (2x2).
 * Em seguida, o programa deve imprimir a matriz S no formato linha x coluna;
 * a diagonal principal e a diagonal secundária da matriz S; a soma dos elementos da diagonal principal e a soma dos elementos da diagonal secundária da matriz S.
 * Entrada: Oito valores numéricos quaisquer.
 * Saída: Imprime os valores da matriz S no formato linha x coluna. Deixa uma linha em branco.
 * Imprime a diagonal principal em uma linha e a diagonal secundária na linha seguinte.
 * Na próxima linha, imprime a soma dos elementos da diagonal principal.
 * Na linha seguinte, imprime a soma dos elementos da diagonal secundária.
 * Os valores numéricos são separados por espaços em branco e possuem 2 casas decimais. */

#include <iostream>

int main() {
    int A[2][2];
    int B[2][2];
    int S[2][2];
    int somaPrincipal;
    int somaSecundaria;


    // Entrada
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "Digite um número para matriz A:" << std::endl;
            std::cin >> A[i][j];
            std::cout << "Digite um número para matriz B:" << std::endl;
            std::cin >> B[i][j];
        }
    }
    
    // Somando as matrizes e Imprimindo matriz S linha x coluna
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            S[i][j] = A[i][j] + B [i][j];
            std::cout << " " << S[i][j] << " ";
            if (j == 1) {
                std::cout << "\n";
            }
        }
    }

    std::cout << "\nValor Diagonal Principal =";
    for (int i = 0; i < 2; ++i) {
        std::cout << " " << S[i][i];
        somaPrincipal = S[i][i] + S[i][i];
    }

    std::cout << "\nValor Diagonal Secunrária =";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (i + j == 1) {
                std::cout << " " << S[j][i];
                somaSecundaria = S[j][i] + S[j][i];
            }
        }
    }

    std::cout << "\nSoma dos elementos da Diagonal Principal = " << somaPrincipal;
    std::cout << "\nSoma dos elementos da Diagonal Secundaria = " << somaSecundaria;

    system("PAUSE");
    return 0;
}
