#ifndef BARBARO_H
#define BARBARO_H

#include "personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro();
    ~Barbaro();
    void ataque1_barbaro();
    void ataque2_barbaro();
};

#endif // BARBARO_H
