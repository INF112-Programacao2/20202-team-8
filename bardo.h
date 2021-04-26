#ifndef BARDO_H
#define BARDO_H

#include <string>
#include "personagem.h"

class Bardo : public Personagem {
public:
    Bardo(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Bardo();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // BARDO_H
