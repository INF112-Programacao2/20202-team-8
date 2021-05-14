#include "../../include/inimigo/EquipeInimiga.h"
#include "../../include/inimigo/Inimigo.h"

EquipeInimiga::EquipeInimiga(Inimigo inimigo1, Inimigo inimigo2, Inimigo inimigo3, Inimigo inimigo4){

    _equipe_inimiga.push_back(inimigo1);
    _equipe_inimiga.push_back(inimigo2);
    _equipe_inimiga.push_back(inimigo3);
    _equipe_inimiga.push_back(inimigo4);

    _tamanho = _equipe_inimiga.size();
}

EquipeInimiga::~EquipeInimiga(){}

int EquipeInimiga::get_tamanho_equipe_inimiga(){
    return _tamanho;
}

Inimigo* EquipeInimiga::get_inimigo(int ordem){

    Inimigo* aux;
  
    if(ordem == 0){
        aux = &_equipe_inimiga[0];
        return aux;
    }else if(ordem == 1){
        aux = &_equipe_inimiga[1];
        return aux;
    }else if(ordem == 2){
        aux = &_equipe_inimiga[2];                                                                                                                                                            
        return aux;
    }else{
        aux = &_equipe_inimiga[3];                                                                                                                                                         
        return aux;
    }
}

void EquipeInimiga::IfInimigo_morrer(){

    int cont=0;

    while (1){
        if(_equipe_inimiga[0].get_vida() == 0){
           _equipe_inimiga.erase(_equipe_inimiga.begin()+0);
           _tamanho = _equipe_inimiga.size();
        }

        if(_tamanho >=2){
            if(_equipe_inimiga[1].get_vida() == 0){
                _equipe_inimiga.erase(_equipe_inimiga.begin()+1);
                _tamanho = _equipe_inimiga.size();
            }
        }

        
        if(_tamanho >=3 ){
            if(_equipe_inimiga[2].get_vida() == 0){
                _equipe_inimiga.erase(_equipe_inimiga.begin()+2);
                _tamanho = _equipe_inimiga.size();
            }
        }

        if(_tamanho == 4){
            if(_equipe_inimiga[3].get_vida() == 0){
                _equipe_inimiga.erase(_equipe_inimiga.begin()+3);
                _tamanho = _equipe_inimiga.size();
            }
        }
        cont++;
        if(cont==4){
            break;
        }
    }
}
