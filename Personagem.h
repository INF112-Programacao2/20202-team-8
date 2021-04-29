#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem{
protected:
    // NOME
    std::string _nome;

    // MODIFICADORES
    int _forca;
    int _destreza;
    int _constituicao;
    int _inteligencia;

    // STATS (OS STATS SAO INICIADOS NA CLASSE DO PERSONAGEM)
    double _ataque=0;
    double _defesa=0;
    double _vida=0;
    double _mana=0;
    double _dano_magico=0;
    double _acerto=0;
    double _velocidade=0;

    // STATS (BASE)
    double _ataque_base=0;
    double _defesa_base=0;
    double _vida_base=0;
    double _mana_base=0;
    double _dano_magico_base=0;
    double _acerto_base=0;
    double _velocidade_base=0;

    // STATS (BATALHA)
    double _ataque_batalha=0;
    double _defesa_batalha=0;
    double _vida_batalha=0;
    double _mana_batalha=0;
    double _dano_magico_batalha=0;
    double _acerto_batalha=0;
    double _velocidade_batalha=0;

public:
    //CONSTRUTOR E DESTRUTOR
    Personagem(std::string nome, int forca, int destreza, int constituicao, int inteligencia);
    ~Personagem();

    //GET NOME
    std::string get_nome();

    //GET & SET MODIFICADORES
    int get_forca();
    int get_destreza();
    int get_constituicao();
    int get_inteligencia();
    void set_forca(int forca);
    void set_destreza(int destreza);
    void set_constituicao(int constituicao);
    void set_inteligencia(int inteligencia);

    //GET & SET STATS
    int get_ataque();
    int get_defesa();
    int get_vida();
    int get_mana();
    int get_dano_magico();
    int get_acerto();
    int get_velocidade();
    void set_ataque(double ataque);
    void set_defesa(double defesa);
    void set_vida(double vida);
    void set_mana(double mana);
    void set_dano_magico(double dano_magico);
    void set_acerto(double acerto);
    void set_velocidade(double velocidade);

    //GET STATS (BASE)
    int get_ataque_base();
    int get_defesa_base();
    int get_vida_base();
    int get_mana_base();
    int get_dano_magico_base();
    int get_acerto_base();
    int get_velocidade_base();

    //GET & SET STATS (BATALHA)
    int get_ataque_batalha();
    int get_defesa_batalha();
    int get_vida_batalha();
    int get_mana_batalha();
    int get_dano_magico_batalha();
    int get_acerto_batalha();
    int get_velocidade_batalha();
    void set_ataque_batalha(double ataque_batalha);
    void set_defesa_batalha(double defesa_batalha);
    void set_vida_batalha(double vida_batalha);
    void set_mana_batalha(double mana_batalha);
    void set_dano_magico_batalha(double dano_magico_batalha);
    void set_acerto_batalha(double acerto_batalha);
    void set_velocidade_batalha(double velocidade_batalha);

    //COMANDO PARA REALIZAR ACAO ATACAR E DEFENDER
    /*int acao();*/
    virtual int atacar();
    virtual int defender();

};

#endif //PERSONAGEM_H