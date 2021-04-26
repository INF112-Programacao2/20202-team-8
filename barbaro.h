#ifndef BARBARO_H
#define BARBARO_H

#include <string>
#include "personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Barbaro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // BARBARO_H
