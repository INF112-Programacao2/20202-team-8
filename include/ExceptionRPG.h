#include <iostream>
#include <exception>
using namespace std;

class ExcecaoRPG : public exception{
    public:
    //Escreve o erro para letras
    const void letra() const noexcept;

    //Escreve o erro para valor que nao esteja entre 1 a 8
    const void valor_personagem() const noexcept;

    //Escreve o erro para valor que nao esteja entre 1 e 4
    const void atributo_numero() const noexcept;

    //Escreve o erro para texto nao correspondente ao atributo
    const void atributo_texto() const noexcept;

    //Escreve o erro para texto
    const void acao_letra() const noexcept;

    //Escreve o erro para valores fora do intervalo de 1 a 4
    const void acao_numero() const noexcept;
};
