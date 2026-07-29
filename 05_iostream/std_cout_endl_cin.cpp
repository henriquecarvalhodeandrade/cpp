# include <iostream>

int main(){

    /* Como vimos anteriormente, para poder "conversar" com o usuario, nos usamos funçoes da biblioteca padrao do c++, a iostream. 
    
    Para exibir informaçoes no console, usamos o cout, comando para informar ao sistema que iremos mostrar algo.

    depois usamos o operador "<<" para dizer o que literalmente queremos exibir, veja o exemplo abaixo.
    */
    std::cout << "Hello" << "World!";

    /* o cin serve para capturar os dados do nosso teclado, e podemos informar o que queremos que o usuario digite, veja:
    */

    std::cout << "Digite um valor para a variavel x: ";
    int x{};
    std::cin >> x; // neste caso usamos o operador ">>", pois ele esta querendo receber e nao enviar algo na tela.
    std:: cout << "O valor de x é: " << x;


    // Para pularmos uma linha abaixo, no console podemos usar o endl ou o \n, no caso, o \n é mais eficiente, pois realiza menos processos internamente. Mas nos pcs de hoje em dia essa diferença quase nao existe. Veja:

    std::cout << "Hello, World!";
    std::cout << "Hello";
    std::cout << "World!";
    std::cout << "";

    // Ate agora tudo foi escrito na mesma linha, certo?

    std::cout << "01 Hello, World!" << std::endl;
    std::cout << "02 Hello "<< std::endl;
    std::cout << "03 World! "<< std::endl;


    std::cout << "04 Hello, World! \n";
    std::cout << "05 Hello\n";
    std::cout << "06 World!\n";
    

    // Perceba que o 01 Hello World continuou na mesma linha e antes? isso aconteceu pq antes dele nao havia uma declaraçao pedindo que uma linha fosse pulada, viu?

    
    return 0;
}