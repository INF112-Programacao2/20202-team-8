#ifndef WITCHER_H
#define WITCHER_H

#include "Inimigo.h"

class Witcher : public Inimigo {
public:
    // CONSTRUTOR E DESTRUTOR
    Witcher(int nivel);
    ~Witcher();
};

#endif // WITCHER_H
