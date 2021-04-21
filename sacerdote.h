#ifndef SACERDOTE_H
#define SACERDOTE_H

#include "personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote();
    ~Sacerdote();
    void ataque_basico() override;
};

#endif // SACERDOTE_H
