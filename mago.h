#ifndef MAGO_H
#define MAGO_H

#include <string>
#include "personagem.h"

class Mago : public Personagem {
public:
    Mago(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Mago();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // MAGO_H
