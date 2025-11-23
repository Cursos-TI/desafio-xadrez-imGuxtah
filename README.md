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

### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

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
