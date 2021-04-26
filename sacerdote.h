#ifndef SACERDOTE_H
#define SACERDOTE_H

#include <string>
#include "personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Sacerdote();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // SACERDOTE_H
