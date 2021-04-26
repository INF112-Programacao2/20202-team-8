#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Guerreiro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // GUERREIRO_H
