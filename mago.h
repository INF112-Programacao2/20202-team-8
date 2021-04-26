#ifndef MAGO_H
#define MAGO_H

#include <string>
#include "personagem.h"

class Mago : public Personagem {
public:
    Mago(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Mago();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // MAGO_H
