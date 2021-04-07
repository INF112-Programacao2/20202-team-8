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

    std::cout << std::endl << "CLASSES HERDADAS:" << std::endl << std::endl;

    std::vector <Personagem*> lista_personagens;

    Personagem *p2 = new Arqueiro;
    Personagem *p3 = new Barbaro;
    Personagem *p4 = new Bardo;
    Personagem *p5 = new Guerreiro;
    Personagem *p6 = new Ladino;
    Personagem *p7 = new Mago;
    Personagem *p8 = new Paladino;
    Personagem *p9 = new Sacerdote;

    lista_personagens.push_back(p2);
    lista_personagens.push_back(p3);
    lista_personagens.push_back(p4);
    lista_personagens.push_back(p5);
    lista_personagens.push_back(p6);
    lista_personagens.push_back(p7);
    lista_personagens.push_back(p8);
    lista_personagens.push_back(p9);

    for(int i=0;i<lista_personagens.size();i++){
        std::cout << "level: " << lista_personagens[i]->get_level() << std::endl << "forca base: " << lista_personagens[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << lista_personagens[i]->get_constituicao_base() << std::endl << "inteligencia base: " << lista_personagens[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << lista_personagens[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << lista_personagens[i]->get_destreza_base() << std::endl << "forca na batalha: " << lista_personagens[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << lista_personagens[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << lista_personagens[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << lista_personagens[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << lista_personagens[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0; i<lista_personagens.size();i++){
        lista_personagens[i]->level_up();
        lista_personagens[i]->add_pontos_extra(10.0,10.0,10.0,10.0,10.0);
    }

    for(int i=0;i<lista_personagens.size();i++){
        std::cout << "level: " << lista_personagens[i]->get_level() << std::endl << "forca base: " << lista_personagens[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << lista_personagens[i]->get_constituicao_base() << std::endl << "inteligencia base: " << lista_personagens[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << lista_personagens[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << lista_personagens[i]->get_destreza_base() << std::endl << "forca na batalha: " << lista_personagens[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << lista_personagens[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << lista_personagens[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << lista_personagens[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << lista_personagens[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0;i<lista_personagens.size();i++){
        lista_personagens[i]->set_level(100);
        lista_personagens[i]->set_forca_base(100.0);
        lista_personagens[i]->set_constituicao_base(100.0);
        lista_personagens[i]->set_inteligencia_base(100.0);
        lista_personagens[i]->set_velocidade_base(100.0);
        lista_personagens[i]->set_destreza_base(100.0);
    }

    for(int i=0;i<lista_personagens.size();i++){
        std::cout << "level: " << lista_personagens[i]->get_level() << std::endl << "forca base: " << lista_personagens[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << lista_personagens[i]->get_constituicao_base() << std::endl << "inteligencia base: " << lista_personagens[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << lista_personagens[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << lista_personagens[i]->get_destreza_base() << std::endl << "forca na batalha: " << lista_personagens[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << lista_personagens[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << lista_personagens[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << lista_personagens[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << lista_personagens[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    for(int i=0;i<lista_personagens.size();i++){
        lista_personagens[i]->set_forca_batalha(150.0);
        lista_personagens[i]->set_constituicao_batalha(150.0);
        lista_personagens[i]->set_inteligencia_batalha(150.0);
        lista_personagens[i]->set_velocidade_batalha(150.0);
        lista_personagens[i]->set_destreza_batalha(150.0);
    }

    for(int i=0;i<lista_personagens.size();i++){
        std::cout << "level: " << lista_personagens[i]->get_level() << std::endl << "forca base: " << lista_personagens[i]->get_forca_base() << std::endl;
        std::cout << "constituicao base: " << lista_personagens[i]->get_constituicao_base() << std::endl << "inteligencia base: " << lista_personagens[i]->get_inteligencia_base() << std::endl;
        std::cout << "velocidade base: " << lista_personagens[i]->get_velocidade_base() << std::endl;
        std::cout << "Destreza base: " << lista_personagens[i]->get_destreza_base() << std::endl << "forca na batalha: " << lista_personagens[i]->get_forca_batalha() << std::endl;
        std::cout << "constituicao na batalha: " << lista_personagens[i]->get_constituicao_batalha() << std::endl << "inteligencia na batalha: " << lista_personagens[i]->get_inteligencia_batalha() << std::endl;
        std::cout << "velocidade na batalha: " << lista_personagens[i]->get_velocidade_batalha() << std::endl << "Destreza na batalha: " << lista_personagens[i]->get_destreza_batalha() << std::endl << std::endl;
    }

    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete p9;

    return 0;
}
