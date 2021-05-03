#include "EquipeInimiga.h"

EquipeInimiga::EquipeInimiga(Inimigo inimigo1, Inimigo inimigo2, Inimigo inimigo3, Inimigo inimigo4){

    
    Inimigo* i1 = new Inimigo(inimigo1);
    Inimigo* i2 = new Inimigo(inimigo2);
    Inimigo* i3 = new Inimigo(inimigo3);
    Inimigo* i4 = new Inimigo(inimigo4);

    _equipe_inimiga.push_back(i1);
    _equipe_inimiga.push_back(i2);
    _equipe_inimiga.push_back(i3);
    _equipe_inimiga.push_back(i4);

    _tamanho = _equipe_inimiga.size();
}

EquipeInimiga::~EquipeInimiga(){
    for(int i=0; i<4; i++){
        delete[] _equipe_inimiga[i];
    }
}

int EquipeInimiga::get_tamanho_equipe_inimiga(){
    return _tamanho;
}

Inimigo* EquipeInimiga::get_inimigo(int ordem){
    
    if(ordem == 0){
        return _equipe_inimiga.at(0);
    }else if(ordem == 1){
        return _equipe_inimiga[1];
    }else if(ordem == 2){
        return _equipe_inimiga[2];
    }else{
        return _equipe_inimiga[3];
    }
}

void EquipeInimiga::IfInimigo_morrer(){

    int cont=0;

    while (1){
        if(_equipe_inimiga.at(0)->get_vida() == 0){
           _equipe_inimiga.erase(_equipe_inimiga.begin()+0);
           _tamanho = _equipe_inimiga.size();
        }

        if(_tamanho >=2){
            if(_equipe_inimiga.at(1)->get_vida() == 0){
                _equipe_inimiga.erase(_equipe_inimiga.begin()+1);
                _tamanho = _equipe_inimiga.size();
            }
        }

        
        if(_tamanho >=3 ){
            if(_equipe_inimiga.at(2)->get_vida() == 0){
                _equipe_inimiga.erase(_equipe_inimiga.begin()+2);
                _tamanho = _equipe_inimiga.size();
            }
        }

        if(_tamanho == 4){
            if(_equipe_inimiga.at(3)->get_vida() == 0){
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