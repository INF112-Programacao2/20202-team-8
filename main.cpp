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

int main(int argc, char *argv[]) {

    // soh pra testar se os objetos estao funcionando corretamente

    std::cout << std::endl << "PERSONAGEM:" << std::endl << std::endl;

    Personagem p1;
    std::cout << "level: " << p1.get_level() << std::endl << "forca base: " << p1.get_forca_base() << std::endl;
    std::cout << "constituicao base: " << p1.get_constituicao_base() << std::endl << "inteligencia base: " << p1.get_inteligencia_base() << std::endl;
    std::cout << "velocidade base: " << p1.get_velocidade_base() << std::endl;
    std::cout << "Destreza base: " << p1.get_destreza_base() << std::endl << "forca na batalha: " << p1.get_forca_batalha() << std::endl;
    std::cout << "constituicao na batalha: " << p1.get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << p1.get_inteligencia_batalha() << std::endl;
    std::cout << "velocidade na batalha: " << p1.get_velocidade_batalha() << std::endl << "Destreza na batalha: " << p1.get_destreza_batalha() << std::endl << std::endl;

    p1.level_up();
    p1.add_pontos_extra(10.0,10.0,10.0,10.0,10.0);

    std::cout << "level: " << p1.get_level() << std::endl << "forca base: " << p1.get_forca_base() << std::endl;
    std::cout << "constituicao base: " << p1.get_constituicao_base() << std::endl << "inteligencia base: " << p1.get_inteligencia_base() << std::endl;
    std::cout << "velocidade base: " << p1.get_velocidade_base() << std::endl;
    std::cout << "Destreza base: " << p1.get_destreza_base() << std::endl << "forca na batalha: " << p1.get_forca_batalha() << std::endl;
    std::cout << "constituicao na batalha: " << p1.get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << p1.get_inteligencia_batalha() << std::endl;
    std::cout << "velocidade na batalha: " << p1.get_velocidade_batalha() << std::endl << "Destreza na batalha: " << p1.get_destreza_batalha() << std::endl << std::endl;

    p1.set_level(100);
    p1.set_forca_base(100.0);
    p1.set_constituicao_base(100.0);
    p1.set_inteligencia_base(100.0);
    p1.set_velocidade_base(100.0);
    p1.set_destreza_base(100.0);

    std::cout << "level: " << p1.get_level() << std::endl << "forca base: " << p1.get_forca_base() << std::endl;
    std::cout << "constituicao base: " << p1.get_constituicao_base() << std::endl << "inteligencia base: " << p1.get_inteligencia_base() << std::endl;
    std::cout << "velocidade base: " << p1.get_velocidade_base() << std::endl;
    std::cout << "Destreza base: " << p1.get_destreza_base() << std::endl << "forca na batalha: " << p1.get_forca_batalha() << std::endl;
    std::cout << "constituicao na batalha: " << p1.get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << p1.get_inteligencia_batalha() << std::endl;
    std::cout << "velocidade na batalha: " << p1.get_velocidade_batalha() << std::endl << "Destreza na batalha: " << p1.get_destreza_batalha() << std::endl << std::endl;

    p1.set_forca_batalha(150.0);
    p1.set_constituicao_batalha(150.0);
    p1.set_inteligencia_batalha(150.0);
    p1.set_velocidade_batalha(150.0);
    p1.set_destreza_batalha(150.0);

    std::cout << "level: " << p1.get_level() << std::endl << "forca base: " << p1.get_forca_base() << std::endl;
    std::cout << "constituicao base: " << p1.get_constituicao_base() << std::endl << "inteligencia base: " << p1.get_inteligencia_base() << std::endl;
    std::cout << "velocidade base: " << p1.get_velocidade_base() << std::endl;
    std::cout << "Destreza base: " << p1.get_destreza_base() << std::endl << "forca na batalha: " << p1.get_forca_batalha() << std::endl;
    std::cout << "constituicao na batalha: " << p1.get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << p1.get_inteligencia_batalha() << std::endl;
    std::cout << "velocidade na batalha: " << p1.get_velocidade_batalha() << std::endl << "Destreza na batalha: " << p1.get_destreza_batalha() << std::endl << std::endl;

    std::cout << std::endl << "Testando 1 equipe1:" << std::endl << std::endl;

    Equipe equipe1(1,2,3,4);

    for(int i=0;i<equipe1._equipe.size();i++){
        std::cout << "level: " << equipe1._equipe[i]->get_level() << std::endl << "forca base: " << equipe1._equipe[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << equipe1._equipe[i]->get_constituicao_base() << std::endl << "inteligencia base: " << equipe1._equipe[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << equipe1._equipe[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << equipe1._equipe[i]->get_destreza_base() << std::endl << "forca na batalha: " << equipe1._equipe[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << equipe1._equipe[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << equipe1._equipe[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << equipe1._equipe[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << equipe1._equipe[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0; i<equipe1._equipe.size();i++){
        equipe1._equipe[i]->level_up();
        equipe1._equipe[i]->add_pontos_extra(10.0,10.0,10.0,10.0,10.0);
    }

    for(int i=0;i<equipe1._equipe.size();i++){
        std::cout << "level: " << equipe1._equipe[i]->get_level() << std::endl << "forca base: " << equipe1._equipe[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << equipe1._equipe[i]->get_constituicao_base() << std::endl << "inteligencia base: " << equipe1._equipe[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << equipe1._equipe[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << equipe1._equipe[i]->get_destreza_base() << std::endl << "forca na batalha: " << equipe1._equipe[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << equipe1._equipe[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << equipe1._equipe[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << equipe1._equipe[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << equipe1._equipe[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0;i<equipe1._equipe.size();i++){
        equipe1._equipe[i]->set_level(100);
        equipe1._equipe[i]->set_forca_base(100.0);
        equipe1._equipe[i]->set_constituicao_base(100.0);
        equipe1._equipe[i]->set_inteligencia_base(100.0);
        equipe1._equipe[i]->set_velocidade_base(100.0);
        equipe1._equipe[i]->set_destreza_base(100.0);
    }

    for(int i=0;i<equipe1._equipe.size();i++){
        std::cout << "level: " << equipe1._equipe[i]->get_level() << std::endl << "forca base: " << equipe1._equipe[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << equipe1._equipe[i]->get_constituicao_base() << std::endl << "inteligencia base: " << equipe1._equipe[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << equipe1._equipe[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << equipe1._equipe[i]->get_destreza_base() << std::endl << "forca na batalha: " << equipe1._equipe[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << equipe1._equipe[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << equipe1._equipe[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << equipe1._equipe[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << equipe1._equipe[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0;i<equipe1._equipe.size();i++){
        equipe1._equipe[i]->set_forca_batalha(150.0);
        equipe1._equipe[i]->set_constituicao_batalha(150.0);
        equipe1._equipe[i]->set_inteligencia_batalha(150.0);
        equipe1._equipe[i]->set_velocidade_batalha(150.0);
        equipe1._equipe[i]->set_destreza_batalha(150.0);
    }

    for(int i=0;i<equipe1._equipe.size();i++){
        std::cout << "level: " << equipe1._equipe[i]->get_level() << std::endl << "forca base: " << equipe1._equipe[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << equipe1._equipe[i]->get_constituicao_base() << std::endl << "inteligencia base: " << equipe1._equipe[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << equipe1._equipe[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << equipe1._equipe[i]->get_destreza_base() << std::endl << "forca na batalha: " << equipe1._equipe[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << equipe1._equipe[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << equipe1._equipe[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << equipe1._equipe[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << equipe1._equipe[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    return 0;
}
