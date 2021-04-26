#include "equipe.h"
#include "personagem.h"
#include "arqueiro.h"
#include "barbaro.h"
#include "bardo.h"
#include "guerreiro.h"
#include "ladino.h"
#include "mago.h"
#include "paladino.h"
#include "sacerdote.h"

#include <string>
#include <vector>

Equipe::Equipe(unsigned int personagem_1, std::string nome_personagem1, long double forca_base_personagem1, long double destreza_base_personagem1, long double constituicao_base_personagem1,
               long double inteligencia_base_personagem1, unsigned int personagem_2, std::string nome_personagem2, long double forca_base_personagem2, long double destreza_base_personagem2,
               long double constituicao_base_personagem2, long double inteligencia_base_personagem2, unsigned int personagem_3, std::string nome_personagem3, long double forca_base_personagem3,
               long double destreza_base_personagem3, long double constituicao_base_personagem3, long double inteligencia_base_personagem3, unsigned int personagem_4, std::string nome_personagem4,
               long double forca_base_personagem4, long double destreza_base_personagem4, long double constituicao_base_personagem4, long double inteligencia_base_personagem4){

    // inserindo o primeiro membro
    if(personagem_1 == 1){
        Personagem* p1 = new Arqueiro(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 2){
        Personagem* p1 = new Barbaro(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 3){
        Personagem* p1 = new Bardo(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 4){
        Personagem* p1 = new Guerreiro(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 5){
        Personagem* p1 = new Ladino(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 6){
        Personagem* p1 = new Mago(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 7){
        Personagem* p1 = new Paladino(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 8){
        Personagem* p1 = new Sacerdote(nome_personagem1,forca_base_personagem1,destreza_base_personagem1,constituicao_base_personagem1,inteligencia_base_personagem1);
        _equipe.push_back(p1);
    }

    //inserindo o segundo membro
    if(personagem_2 == 1){
        Personagem* p2 = new Arqueiro(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 2){
        Personagem* p2 = new Barbaro(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 3){
        Personagem* p2 = new Bardo(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 4){
        Personagem* p2 = new Guerreiro(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 5){
        Personagem* p2 = new Ladino(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 6){
        Personagem* p2 = new Mago(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 7){
        Personagem* p2 = new Paladino(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 8){
        Personagem* p2 = new Sacerdote(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p2);
    }

    //inserindo o terceiro membro
    if(personagem_3 == 1){
        Personagem* p3 = new Arqueiro(nome_personagem3,forca_base_personagem3,destreza_base_personagem3,constituicao_base_personagem3,inteligencia_base_personagem3);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 2){
        Personagem* p3 = new Barbaro(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 3){
        Personagem* p3 = new Bardo(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 4){
        Personagem* p3 = new Guerreiro(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 5){
        Personagem* p3 = new Ladino(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 6){
        Personagem* p3 = new Mago(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 7){
        Personagem* p3 = new Paladino(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 8){
        Personagem* p3 = new Sacerdote(nome_personagem2,forca_base_personagem2,destreza_base_personagem2,constituicao_base_personagem2,inteligencia_base_personagem2);
        _equipe.push_back(p3);
    }

    //inserindo o quarto membro
    if(personagem_4 == 1){
        Personagem* p4 = new Arqueiro(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 2){
        Personagem* p4 = new Barbaro(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 3){
        Personagem* p4 = new Bardo(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 4){
        Personagem* p4 = new Guerreiro(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 5){
        Personagem* p4 = new Ladino(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 6){
        Personagem* p4 = new Mago(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 7){
        Personagem* p4 = new Paladino(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 8){
        Personagem* p4 = new Sacerdote(nome_personagem4,forca_base_personagem4,destreza_base_personagem4,constituicao_base_personagem4,inteligencia_base_personagem4);
        _equipe.push_back(p4);
    }
}

Equipe::~Equipe(){
    for(int i=0;i<_equipe.size();i++)
        delete _equipe[i];
}
