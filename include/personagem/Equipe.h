#ifndef EQUIPE_H
#define EQUIPE_H

#include <vector>
#include <string>
#include "Personagem.h"

class Equipe{
private:
    // QUANTIDADE DE PERSONAGENS
    int _tamanho;

    // METODOS PRIVADOS PRA DIMINUIR A QUANTIDADE DE CODIGO
    void cria_personagem(int personagem, std::string nome);
    void realoca(const Equipe& eq);
public:
    // VECTOR PARA ARMAZENAR A EQUIPE
    std::vector<Personagem *> _equipe;

    // CONSTRUTORES
    Equipe(){};
    Equipe(int personagem1,std::string nome1,int personagem2,std::string nome2,int personagem3,std::string nome3,int personagem4,std::string nome4);
    Equipe(const Equipe& eq);

    // DESTRUTORES
    ~Equipe();

    // SOBRECARREGANDO O OPERADOR = PRA FAZER UMA COPIA MAIS ELABORADA
    Equipe& operator=(const Equipe &eq);

    // GETS
    int get_tamanho_equipe();
    Personagem* get_personagem(int ordem);

    // CHECA SE ALGUM PERSONAGEM MORREU
    void IfPersonagem_morrer();
};

#endif // EQUIPE_H
