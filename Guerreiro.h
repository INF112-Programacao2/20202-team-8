#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "Personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Guerreiro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // GUERREIRO_H