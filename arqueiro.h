#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <string>
#include "personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Arqueiro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // ARQUEIRO_H
