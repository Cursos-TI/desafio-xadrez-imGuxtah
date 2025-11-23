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
            printf("Esquerda\n");
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
    // Movimentos do cavalo: 2 para baixo e 1 para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // ------------------------------
    // Movimentos anteriores (exemplo)
    // ------------------------------
    printf("Movimentos anteriores:\n");
    printf("Direita\n");
    printf("Direita\n");

    // Linha em branco para separar do Cavalo
    printf("\n");

    // --------------------------------------------
    // Movimento do Cavalo em L
    // 2 casas para BAIXO (loop for)
    // 1 casa para ESQUERDA (loop while)
    // --------------------------------------------

    printf("Movimento do Cavalo:\n");

    // Primeiro movimento: duas casas para baixo
    // Usando o loop FOR
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo movimento: uma casa para a esquerda
    // Usando loop WHILE para cumprir loops aninhados
    int contador = 0;
    while (contador < movimentosEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck
