#include <vector>
#include <iostream>
#include "Equipe.h"

Equipe::Equipe(Personagem personagem1, Personagem personagem2, Personagem personagem3, Personagem personagem4){

    
    Personagem* p1 = new Personagem(personagem1);
    Personagem* p2 = new Personagem(personagem2);
    Personagem* p3 = new Personagem(personagem3);
    Personagem* p4 = new Personagem(personagem4);

    _equipe.push_back(p1);
    _equipe.push_back(p2);
    _equipe.push_back(p3);
    _equipe.push_back(p4);

    _tamanho = _equipe.size();
}

Equipe::~Equipe(){
    for(int i=0; i<4; i++){
        delete[] _equipe[i];
    }
}

int Equipe::get_tamanho_equipe(){
    return _tamanho;
}

Personagem* Equipe::get_personagem(int ordem){
    
    if(ordem == 0){
        return _equipe.at(0);
    }else if(ordem == 1){
        return _equipe[1];
    }else if(ordem == 2){
        return _equipe[2];
    }else{
        return _equipe[3];
    }
}

void Equipe::IfPersonagem_morrer(){

    int cont=0;

    while (1){
        if(_equipe.at(0)->get_vida_batalha() == 0){
           _equipe.erase(_equipe.begin()+0);
           _tamanho = _equipe.size();
        }

        if(_tamanho >=2){
            if(_equipe.at(1)->get_vida_batalha() == 0){
                _equipe.erase(_equipe.begin()+1);
                _tamanho = _equipe.size();
            }
        }

        if(_tamanho >=3 ){
            if(_equipe.at(2)->get_vida_batalha() == 0){
                _equipe.erase(_equipe.begin()+2);
                _tamanho = _equipe.size();
            }
        }

        if(_tamanho == 4){
            if(_equipe.at(3)->get_vida_batalha() == 0){
                _equipe.erase(_equipe.begin()+3);
                _tamanho = _equipe.size();
            }
        }
        cont++;
        if(cont==4){
            break;
        }
    }
}