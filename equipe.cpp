#include "equipe.h"
#include <vector>

Equipe::Equipe(unsigned int personagem_1, unsigned int personagem_2, unsigned int personagem_3, unsigned int personagem_4){

    // inserindo o primeiro membro
    if(personagem_1 == 1){
        Personagem* p1 = new Arqueiro;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 2){
        Personagem* p1 = new Barbaro;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 3){
        Personagem* p1 = new Bardo;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 4){
        Personagem* p1 = new Guerreiro;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 5){
        Personagem* p1 = new Ladino;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 6){
        Personagem* p1 = new Mago;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 7){
        Personagem* p1 = new Paladino;
        _equipe.push_back(p1);
    }
    else if(personagem_1 == 8){
        Personagem* p1 = new Sacerdote;
        _equipe.push_back(p1);
    }

    //inserindo o segundo membro
    if(personagem_2 == 1){
        Personagem* p2 = new Arqueiro;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 2){
        Personagem* p2 = new Barbaro;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 3){
        Personagem* p2 = new Bardo;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 4){
        Personagem* p2 = new Guerreiro;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 5){
        Personagem* p2 = new Ladino;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 6){
        Personagem* p2 = new Mago;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 7){
        Personagem* p2 = new Paladino;
        _equipe.push_back(p2);
    }
    else if(personagem_2 == 8){
        Personagem* p2 = new Sacerdote;
        _equipe.push_back(p2);
    }

    //inserindo o terceiro membro
    if(personagem_3 == 1){
        Personagem* p3 = new Arqueiro;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 2){
        Personagem* p3 = new Barbaro;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 3){
        Personagem* p3 = new Bardo;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 4){
        Personagem* p3 = new Guerreiro;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 5){
        Personagem* p3 = new Ladino;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 6){
        Personagem* p3 = new Mago;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 7){
        Personagem* p3 = new Paladino;
        _equipe.push_back(p3);
    }
    else if(personagem_3 == 8){
        Personagem* p3 = new Sacerdote;
        _equipe.push_back(p3);
    }

    //inserindo o quarto membro
    if(personagem_4 == 1){
        Personagem* p4 = new Arqueiro;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 2){
        Personagem* p4 = new Barbaro;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 3){
        Personagem* p4 = new Bardo;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 4){
        Personagem* p4 = new Guerreiro;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 5){
        Personagem* p4 = new Ladino;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 6){
        Personagem* p4 = new Mago;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 7){
        Personagem* p4 = new Paladino;
        _equipe.push_back(p4);
    }
    else if(personagem_4 == 8){
        Personagem* p4 = new Sacerdote;
        _equipe.push_back(p4);
    }
}

Equipe::~Equipe(){
    for(int i=0;i<_equipe.size();i++)
        delete _equipe[i];
    /*(if(aux == 1)
        delete p1;
    else if(aux == 2){
        delete p1;
        delete p2;
    }
    else if(aux == 3){
        delete p1;
        delete p2;
        delete p3;
    }
    else if(aux == 4){
        delete p1;
        delete p2;
        delete p3;
        delete p4;
    }*/
}
