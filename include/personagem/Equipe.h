#ifndef EQUIPE_H
#define EQUIPE_H

#include <vector>
#include "Personagem.h"

class Equipe{
private:
    int _tamanho;
public:
    std::vector<Personagem*> _equipe;
    Equipe(Personagem personagem1, Personagem personagem2, Personagem personagem3, Personagem personagem4);
    ~Equipe();

    int get_tamanho_equipe();
    Personagem* get_personagem(int ordem);
    void IfPersonagem_morrer();
};

#endif // EQUIPE_H