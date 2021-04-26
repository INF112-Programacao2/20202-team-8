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

    for(int i=0;i<equipe1._equipe.size();i++){
        // modificadores base/batalha
        std::cout << "forca base: " << equipe1._equipe[i]->forca_base() << std::endl << "destreza base: " << equipe1._equipe[i]->destreza_base() << std::endl;
        std::cout << "constituicao base: " << equipe1._equipe[i]->constituicao_base() << std::endl << "inteligencia base: " << equipe1._equipe[i]->inteligencia_base() << std::endl;
        std::cout << "forca batalha: " << equipe1._equipe[i]->forca_batalha() << std::endl << "destreza batalha: " << equipe1._equipe[i]->destreza_batalha() << std::endl;
        std::cout << "constituicao batalha: " << equipe1._equipe[i]->constituicao_batalha() << std::endl << "inteligencia batalha: " << equipe1._equipe[i]->inteligencia_batalha() << std::endl;
        // stats base
        std::cout << "ataque base: " << equipe1._equipe[i]->ataque_base() << std::endl << "defesa base: " << equipe1._equipe[i]->defesa_base() << std::endl;
        std::cout << "vida base: " << equipe1._equipe[i]->vida_base() << std::endl << "mana base: " << equipe1._equipe[i]->mana_base() << std::endl;
        std::cout << "dano magico base: " << equipe1._equipe[i]->dano_magico_base() << std::endl << "acerto base: " << equipe1._equipe[i]->acerto_base() << std::endl;
        std::cout << "velocidade base: " << equipe1._equipe[i]->velocidade_base() << std::endl;
        // stats batalha
        std::cout << "ataque batalha: " << equipe1._equipe[i]->ataque_batalha() << std::endl << "defesa batalha: " << equipe1._equipe[i]->defesa_batalha() << std::endl;
        std::cout << "vida batalha: " << equipe1._equipe[i]->vida_batalha() << std::endl << "mana batalha: " << equipe1._equipe[i]->mana_batalha() << std::endl;
        std::cout << "dano magico batalha: " << equipe1._equipe[i]->dano_magico_batalha() << std::endl << "acerto batalha: " << equipe1._equipe[i]->acerto_batalha() << std::endl;
        std::cout << "velocidade batalha: " << equipe1._equipe[i]->velocidade_batalha() << std::endl;
    }

    std::cout << std::endl;

    for(int i=0;i<equipe2._equipe.size();i++){
        // modificadores base/batalha
        std::cout << "forca base: " << equipe2._equipe[i]->forca_base() << std::endl << "destreza base: " << equipe2._equipe[i]->destreza_base() << std::endl;
        std::cout << "constituicao base: " << equipe2._equipe[i]->constituicao_base() << std::endl << "inteligencia base: " << equipe2._equipe[i]->inteligencia_base() << std::endl;
        std::cout << "forca batalha: " << equipe2._equipe[i]->forca_batalha() << std::endl << "destreza batalha: " << equipe2._equipe[i]->destreza_batalha() << std::endl;
        std::cout << "constituicao batalha: " << equipe2._equipe[i]->constituicao_batalha() << std::endl << "inteligencia batalha: " << equipe2._equipe[i]->inteligencia_batalha() << std::endl;
        // stats base
        std::cout << "ataque base: " << equipe2._equipe[i]->ataque_base() << std::endl << "defesa base: " << equipe2._equipe[i]->defesa_base() << std::endl;
        std::cout << "vida base: " << equipe2._equipe[i]->vida_base() << std::endl << "mana base: " << equipe2._equipe[i]->mana_base() << std::endl;
        std::cout << "dano magico base: " << equipe2._equipe[i]->dano_magico_base() << std::endl << "acerto base: " << equipe2._equipe[i]->acerto_base() << std::endl;
        std::cout << "velocidade base: " << equipe2._equipe[i]->velocidade_base() << std::endl;
        // stats batalha
        std::cout << "ataque batalha: " << equipe2._equipe[i]->ataque_batalha() << std::endl << "defesa batalha: " << equipe2._equipe[i]->defesa_batalha() << std::endl;
        std::cout << "vida batalha: " << equipe2._equipe[i]->vida_batalha() << std::endl << "mana batalha: " << equipe2._equipe[i]->mana_batalha() << std::endl;
        std::cout << "dano magico batalha: " << equipe2._equipe[i]->dano_magico_batalha() << std::endl << "acerto batalha: " << equipe2._equipe[i]->acerto_batalha() << std::endl;
        std::cout << "velocidade batalha: " << equipe2._equipe[i]->velocidade_batalha() << std::endl;
    }

    return 0;
}
