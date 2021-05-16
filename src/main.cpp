#include <iostream>
#include <vector>

#include "../include/jogo.h"

#include "../include/personagem/Personagem.h"
#include "../include/personagem/Arqueiro.h"
#include "../include/personagem/Barbaro.h"
#include "../include/personagem/Bardo.h"
#include "../include/personagem/Guerreiro.h"
#include "../include/personagem/Ladino.h"
#include "../include/personagem/Mago.h"
#include "../include/personagem/Paladino.h"
#include "../include/personagem/Sacerdote.h"
#include "../include/personagem/Equipe.h"

#include "../include/inimigo/Inimigo.h"
#include "../include/inimigo/Slime.h"
#include "../include/inimigo/Skull.h"
#include "../include/inimigo/Troll.h"
#include "../include/inimigo/Witcher.h"
#include "../include/inimigo/EquipeInimiga.h"

int main(int argc, char** argv){

    Jogo a;
    a.iniciar();
    a.pre_batalha();
    a.pre_batalha();

    return 0;
}
