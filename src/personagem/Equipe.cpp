#include <vector>
#include "../../include/personagem/Equipe.h"
#include "../../include/personagem/Personagem.h"
#include "../../include/personagem/Arqueiro.h"
#include "../../include/personagem/Barbaro.h"
#include "../../include/personagem/Bardo.h"
#include "../../include/personagem/Guerreiro.h"
#include "../../include/personagem/Ladino.h"
#include "../../include/personagem/Mago.h"
#include "../../include/personagem/Paladino.h"
#include "../../include/personagem/Sacerdote.h"

void Equipe::cria_personagem(int personagem, std::string nome){

    if(personagem==0){
        Personagem a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Arqueiro a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Barbaro a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Bardo a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Guerreiro a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Ladino a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Mago a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Paladino a(nome);
        _equipe.push_back(a);
    }
    else if(personagem==1){
        Sacerdote a(nome);
        _equipe.push_back(a);
    }
}

Equipe::Equipe(int personagem1,std::string nome1,int personagem2,std::string nome2,int personagem3,std::string nome3,int personagem4,std::string nome4){

    cria_personagem(personagem1,nome1);
    cria_personagem(personagem1,nome2);
    cria_personagem(personagem1,nome3);
    cria_personagem(personagem1,nome4);

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
