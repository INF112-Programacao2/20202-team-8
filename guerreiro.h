#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Guerreiro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // GUERREIRO_H
