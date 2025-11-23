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
