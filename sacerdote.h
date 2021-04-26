#ifndef SACERDOTE_H
#define SACERDOTE_H

#include <string>
#include "personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Sacerdote();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // SACERDOTE_H
