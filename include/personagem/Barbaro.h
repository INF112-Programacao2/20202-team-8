#ifndef BARBARO_H
#define BARBARO_H

#include <string>
#include "Personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Barbaro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // BARBARO_H