#include <iostream>
#include <vector>

#include "personagem.h"

#include "arqueiro.h"
#include "barbaro.h"
#include "bardo.h"
#include "guerreiro.h"
#include "ladino.h"
#include "mago.h"
#include "paladino.h"
#include "sacerdote.h"

#include "equipe.h"

#include <iostream>

int main(int argc, char **argv) {
    // main para testar as classes
    Equipe equipe1(1,"arqueiro",1.0,1.0,1.0,1.0,2,"barbaro",1.0,1.0,1.0,1.0,3,"bardo",1.0,1.0,1.0,1.0,4,"guerreiro",1.0,1.0,1.0,1.0);
    Equipe equipe2(5,"ladino",1.0,1.0,1.0,1.0,6,"mago",1.0,1.0,1.0,1.0,7,"paladino",1.0,1.0,1.0,1.0,8,"sacerdote",1.0,1.0,1.0,1.0);

    return 0;
}
