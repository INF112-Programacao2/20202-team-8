#ifndef MAGO_H
#define MAGO_H

#include <string>
#include "Personagem.h"

class Mago : public Personagem {
public:
    Mago(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Mago();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // MAGO_H