# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

## Níveis do Desafio

### 🏅 Nível Novato

const int CASAS_TORRE  = 5;
const int CASAS_BISPO  = 5;
const int CASAS_RAINHA = 8;

int main(void) {
    /* Variável de controle comum (inteiro), reaproveitada entre os loops */
    int passo = 0;

    /* --- Bloco: Torre (usa for) --------------------------------- */
    printf("=== Torre: movendo %d casas para a Direita ===\n", CASAS_TORRE);
    /* O for é ideal quando se conhece o número de iterações */
    for (passo = 0; passo < CASAS_TORRE; passo++) {
        /* Cada iteração representa uma casa percorrida */
        printf("Direita\n");
    }
    printf("\n"); /* linha em branco para separar blocos de saída */

    /* --- Bloco: Bispo (usa while) ------------------------------- */
    printf("=== Bispo: movendo %d casas diagonal (Cima, Direita) ===\n", CASAS_BISPO);
    passo = 0;
    /* while demonstra repetição baseada em condição; aqui repetimos enquanto houver casas */
    while (passo < CASAS_BISPO) {
        /* Para representar a diagonal, combinamos duas direções básicas */
        printf("Cima, Direita\n");
        passo++;
    }
    printf("\n");

    /* --- Bloco: Rainha (usa do...while) ------------------------ */
    printf("=== Rainha: movendo %d casas para a Esquerda ===\n", CASAS_RAINHA);
    passo = 0;
    /* do...while garante que o bloco execute pelo menos uma vez (útil para certos testes) */
    if (CASAS_RAINHA > 0) {
        do {
            printf("Direita\n");
            passo++;
        } while (passo < CASAS_RAINHA);
    } else {
        /* Caso a constante definisse 0 casas, deixamos explícito */
        printf("(nenhum movimento - 0 casas definidas)\n");
    }

    /* Fim do programa */
    return 0;
}

int main() {
    // Movimentos do cavalo: 2 para cima e 1 para a direita
    int movimentosCima = 2;
    int movimentosDireita = 1;

    // ------------------------------
    // Movimentos anteriores (exemplo)
    // ------------------------------
    printf("Movimentos anteriores:\n");
    printf("Direita\n");
    printf("Direita\n");

    printf("\n");

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosCima; i++) {
        printf("cima\n");
    }

    int contador = 0;
    while (contador < movimentosDireita) {
        printf("direita\n");
        contador++;
    }

    return 0;
}


#include <stdio.h>

const int ROOK_STEPS = 5;
const int BISHOP_VERT = 3;
const int BISHOP_HORZ = 3;
const int BISHOP_LOOP_VERT = 2;
const int BISHOP_LOOP_HORZ = 2;
const int QUEEN_STEPS = 4;
const int KNIGHT_MOVES = 3;

void printUp()    { printf("Cima\n"); }
void printDown()  { printf("Baixo\n"); }
void printLeft()  { printf("Esquerda\n"); }
void printRight() { printf("Direita\n"); }

void rook_recursive(int steps, int d) {
    if (steps <= 0) return;
    if (d == 0) printUp();
    else if (d == 1) printDown();
    else if (d == 2) printLeft();
    else printRight();
    rook_recursive(steps - 1, d);
}

void bishop_recursive(int v, int h) {
    if (v <= 0 && h <= 0) return;
    if (v > 0) { printUp(); v--; }
    for (int i = 0; i < h; i++) printRight();
    bishop_recursive(v, (h > 0 ? h - 1 : 0));
}

void bishop_with_nested_loops(int v, int h) {
    for (int i = 0; i < v; i++) {
        printUp();
        for (int j = 0; j < h; j++) printRight();
    }
}

void queen_recursive(int s) {
    if (s <= 0) return;
    rook_recursive(s, 3);
    printf("\n");
    bishop_recursive((s > 1 ? s - 1 : 1), (s > 1 ? 1 : 0));
    queen_recursive(s - 1);
}

void knight_complex_loops(int m) {
    for (int i = 0; i < m; i++) {
        int up = 2, right = 1;
        for (int v = 0; v < 5; v++) {
            if (up <= 0) break;
            if (v == 2) { v++; if (v >= 5) break; continue; }
            printUp();
            up--;
        }
        for (int h = 0; h < 3; h++) {
            if (right <= 0) break;
            if (h == 1) break;
            printRight();
            right--;
        }
        if (right > 0) { printRight(); right = 0; }
    }
}

int main() {
    printf("Torre Direita:\n");
    rook_recursive(ROOK_STEPS, 3);
    printf("\n\n");

    printf("Bispo Recursivo:\n");
    bishop_recursive(BISHOP_VERT, BISHOP_HORZ);
    printf("\n\n");

    printf("Bispo Loops:\n");
    bishop_with_nested_loops(BISHOP_LOOP_VERT, BISHOP_LOOP_HORZ);
    printf("\n\n");

    printf("Rainha:\n");
    queen_recursive(QUEEN_STEPS);
    printf("\n\n");

    printf("Cavalo:\n");
    knight_complex_loops(KNIGHT_MOVES);
    printf("\n\n");

    return 0;
}
