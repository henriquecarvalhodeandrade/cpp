#include <iostream>

int main(){
    std::cout<<"Hello World! 2\n";
    std::cout<<"Esta linha será lida, pois não é um comentário.\n";
    // Já esta linha NÃO será lida, pois não é um comando/declaraçao.
    
    // A declaração "\n" serve para pular uma linha, então nos a inserimos no final de cada print (std::cout<<) para que a próxima mensagem seja na linha de baixo. Veja:
    std::cout<<"Hello World! 2";
    std::cout<<"Hello World! 2";
    
    std::cout<<"Hello World! 2\n";
    std::cout<<"Hello World! 2";

    // Percebe que ele nao escreve literalmente o "\n"? isos porque o contra barra serve como comando dentro da string.

    // por fim, existem os comentários multi-line:

    /*
    
        oi,
            tudo 
                bem
        com 
            voce
                    ?
    
    viu só? voce abre o comentario com barra asterisco e fecha eles com asterisco barra, simples assim.

    */

    // Uma dica: podemos usar os comentarios para dizer ao compilador ignorar algum bloco de código, para nao ficar rodando ele toda vez que executarmos o programa. Fazemos isso para nao termos que ficar apagando e reescrevendo esses blocos toda vez, veja só:

    // std::cout << "oi";
    // std::cout << "oi";
    // std::cout << "oi";
    // std::cout << "oi";

    // Assim, quando apagarmos os comentarios, esse codigo voltara a compilar normalmente e nao tivemos que reescrever essas 4 linhas do zero.

    return 0;
}