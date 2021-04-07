#ifndef SACERDOTE_H
#define SACERDOTE_H

#include "personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote();
    ~Sacerdote();
    void ataque1_sacerdote();
    void ataque2_sacerdote();
};

#endif // SACERDOTE_H
