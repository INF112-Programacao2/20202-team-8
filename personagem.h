#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem{
protected:
    // NOME
    std::string _nome;
    // NIVEL
    unsigned long long int _nivel;
    // MODIFICADORES (BASE)
    long double _forca_base;
    long double _destreza_base;
    long double _constituicao_base;
    long double _inteligencia_base;
    // MODIFICADORES (BATALHA)
    long double _forca_batalha;
    long double _destreza_batalha;
    long double _constituicao_batalha;
    long double _inteligencia_batalha;
    // STATS (BASE)
    long double _ataque_base;
    long double _defesa_base;
    long double _vida_base;
    long double _mana_base;
    long double _dano_magico_base;
    long double _acerto_base;
    long double _velocidade_base;
    // STATS (BATALHA)
    long double _ataque_batalha;
    long double _defesa_batalha;
    long double _vida_batalha;
    long double _mana_batalha;
    long double _dano_magico_batalha;
    long double _acerto_batalha;
    long double _velocidade_batalha;
public:
    // CONSTRUTOR
    Personagem(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    // DESTRUTOR
    ~Personagem();
    // GET/SET NOME
    std::string& nome();
    // GET/SET NIVEL
    unsigned long long int& nivel();
    // GET/SET MODIFICADORES (BASE)
    long double& forca_base();
    long double& destreza_base();
    long double& constituicao_base();
    long double& inteligencia_base();
    // GET/SET MODIFICADORES (BATALHA)
    long double& forca_batalha();
    long double& destreza_batalha();
    long double& constituicao_batalha();
    long double& inteligencia_batalha();
    // GET/SET STATS (BASE)
    long double& ataque_base();
    long double& defesa_base();
    long double& vida_base();
    long double& mana_base();
    long double& dano_magico_base();
    long double& acerto_base();
    long double& velocidade_base();
    // GET/SET STATS (BATALHA)
    long double& ataque_batalha();
    long double& defesa_batalha();
    long double& vida_batalha();
    long double& mana_batalha();
    long double& dano_magico_batalha();
    long double& acerto_batalha();
    long double& velocidade_batalha();

    // LEVEL UP
    void level_up(long double forca_extra, long double destreza_extra, long double constituicao_extra, long double inteligencia_extra);

    // ATACAR
    virtual int atacar();
    // DEFENDER
    virtual int defender();
};

#endif // PERSONAGEM_H
