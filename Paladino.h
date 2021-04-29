#ifndef PALADINO_H
#define PALADINO_H

#include <string>
#include "Personagem.h"

class Paladino : public Personagem {
public:
    Paladino(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Paladino();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

};

#endif // PALADINO_H