#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <string>
#include "Personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Arqueiro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // ARQUEIRO_H