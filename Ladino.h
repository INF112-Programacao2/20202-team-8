#ifndef LADINO_H
#define LADINO_H

#include <string>
#include "Personagem.h"

class Ladino : public Personagem {
public:
    Ladino(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Ladino();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // LADINO_H