#include "../../include/inimigo/EquipeInimiga.h"
#include "../../include/inimigo/Inimigo.h"

// CONSTRUTOR
EquipeInimiga::EquipeInimiga(Inimigo inimigo1,Inimigo inimigo2,Inimigo inimigo3,Inimigo inimigo4){
    _equipe_inimiga.push_back(inimigo1);
    _equipe_inimiga.push_back(inimigo2);
    _equipe_inimiga.push_back(inimigo3);
    _equipe_inimiga.push_back(inimigo4);

    _tamanho=_equipe_inimiga.size();
}

// DESTRUTOR
EquipeInimiga::~EquipeInimiga(){}

// GETS
int EquipeInimiga::get_tamanho_equipe_inimiga(){
    return this->_tamanho;
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

// CHECA SE ALGUM INIMIGO MORREU
void EquipeInimiga::IfInimigo_morrer(){
    int cont=0;
    std::vector<Inimigo> aux;

    for (Inimigo ini : _equipe_inimiga) {
        if (ini.get_vida()>0)
            aux.push_back(ini);
    }

    _equipe_inimiga = aux;
    _tamanho = _equipe_inimiga.size();
}
