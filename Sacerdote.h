#ifndef SACERDOTE_H
#define SACERDOTE_H

#include <string>
#include "Personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Sacerdote();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // SACERDOTE_H