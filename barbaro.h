#ifndef BARBARO_H
#define BARBARO_H

#include "personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro();
    ~Barbaro();
    void ataque_basico() override;
};

#endif // BARBARO_H
