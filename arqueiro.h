#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <string>
#include "personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Arqueiro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // ARQUEIRO_H
