#ifndef BARDO_H
#define BARDO_H

#include <string>
#include "Personagem.h"

class Bardo : public Personagem {
public:
    Bardo(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Bardo();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // BARDO_H