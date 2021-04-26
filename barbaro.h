#ifndef BARBARO_H
#define BARBARO_H

#include <string>
#include "personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Barbaro();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // BARBARO_H
