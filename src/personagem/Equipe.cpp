#include <vector>
#include <iostream>
#include "../../include/personagem/Equipe.h"
#include "../../include/personagem/Personagem.h"

Equipe::Equipe(Personagem personagem1, Personagem personagem2, Personagem personagem3, Personagem personagem4){

    
    //Personagem* p1 = new Personagem(personagem1);
    //Personagem* p2 = new Personagem(personagem2);
    //Personagem* p3 = new Personagem(personagem3);
    //Personagem* p4 = new Personagem(personagem4);
    
    _equipe.push_back(personagem1);
    _equipe.push_back(personagem2);
    _equipe.push_back(personagem3);
    _equipe.push_back(personagem4);

    _tamanho = _equipe.size();
}

Equipe::~Equipe(){}

int Equipe::get_tamanho_equipe(){
    return _tamanho;
}

Personagem* Equipe::get_personagem(int ordem){
    Personagem* aux;
    
    if(ordem == 0){
        aux = &_equipe[0];
	return aux;
    }else if(ordem == 1){
        aux = &_equipe[1];
        return aux;
    }else if(ordem == 2){
        aux = &_equipe[2];
        return aux;
    }else{
        aux = &_equipe[3];
        return aux;
	}
}

void Equipe::IfPersonagem_morrer(){

    int cont=0;

    while (1){
        if(_equipe[0].get_vida_batalha() == 0){
           _equipe.erase(_equipe.begin()+0);
           _tamanho = _equipe.size();
        }

        if(_tamanho >=2){
            if(_equipe[1].get_vida_batalha() == 0){
                _equipe.erase(_equipe.begin()+1);
                _tamanho = _equipe.size();
            }
        }

        if(_tamanho >=3 ){
            if(_equipe[2].get_vida_batalha() == 0){
                _equipe.erase(_equipe.begin()+2);
                _tamanho = _equipe.size();
            }
        }

        if(_tamanho == 4){
            if(_equipe[3].get_vida_batalha() == 0){
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
