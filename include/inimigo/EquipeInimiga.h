#ifndef EQUIPEINIMIGA_H
#define EQUIPEINIMIGA_H

#include <vector>
#include "Inimigo.h"

class EquipeInimiga{
private:
    // QUANTIDADE DE INIMIGOS
    int _tamanho;
public:
    // VECTOR PARA ARMAZENAR OS INIMIGOS
    std::vector<Inimigo> _equipe_inimiga;

    // CONSTRUTORES
    EquipeInimiga(){};
    EquipeInimiga(Inimigo inimigo1,Inimigo inimigo2,Inimigo inimigo3,Inimigo inimigo4);

    // DESTRUTOR
    ~EquipeInimiga();

    // GETS
    int get_tamanho_equipe_inimiga();
    Inimigo* get_inimigo(int ordem);

    // VERIFICA SE ALGUM INIMIGO MORREU
    void IfInimigo_morrer();
};

#endif // EQUIPEINIMIGA_H
