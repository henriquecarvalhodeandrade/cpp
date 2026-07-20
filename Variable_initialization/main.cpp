#include <iostream>

int main () {

    // Isso é uma assinatura de variavel:
    int a;
    a = 5;

    // Isso é uma inicialização de variavel:
    int b = 5;

    // Forma recomendada de inicializar varaveis:
    int c { 5 };

    // E por que essa é a melhor forma? Veja o exemplo abaixo:
    int d { 5.5 }; // Dara erro de compilação.
    int e ( 5.5 ); // Irá compilar, mas o valor de e será 5, pois o valor 5.5 foi truncado para 5.
    // Truncado é quando a parte decimal do numero é jogada fora e apenas armazenada a parte inteira para ocupar o espaço de um tipo int.
    
    // Comente a linha 16 para continuar.

    int w2 { 2 };
    int w3 = { 3 }; // Redundante, aqui mais processos estao sendo feitos implicitamente.

    int w0 {}; // Aqui iniciamos uma variável sem valor algum, é esta a melhor prática para apenas iniciar uma variável, sem colocarmos valor nela.

    // Quando usar {} ou { 0 }?
    // A diferença é que quando usamos { 0 } estamos inicializando a variável com o valor 0, enquanto que quando usamos {} estamos apenas inicializando a variável sem valor algum.
    // Por isso use {} quando for pedir para o usuario infomar o valor.
    // E { 0 } para criar uma variavel mas com seu valor zerado.

    // Variaveis nao utlizadas dao avisos de nao utilização,, pode acabar dando erro em alguns compiladores.
    int variavel_nao_usada {};

    int variavel_utilizada { 5 };
    std::cout << variavel_utilizada;

    // comente a linha 33 para continuar.

    // Forma exata para criar variavel e nao usar elas, sem dar aviso ou erro do compilador.
    [[maybe_unused]] int variavel_nao_usada2 {};

    return 0;
}