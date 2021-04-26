#ifndef BARDO_H
#define BARDO_H

#include <string>
#include "personagem.h"

class Bardo : public Personagem {
public:
    Bardo(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Bardo();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // BARDO_H
