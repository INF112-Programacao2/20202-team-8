#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem{
protected:
    // NOME
    std::string _nome;
    // NIVEL
    unsigned long long int _nivel;
    // MODIFICADORES
    long double _forca;
    long double _destreza;
    long double _constituicao;
    long double _inteligencia;
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
    Personagem(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    // DESTRUTOR
    ~Personagem();
    // GET/SET NOME
    std::string get_nome();
    void set_nome(std::string nome);
    // GET/SET NIVEL
    unsigned long long int get_nivel();
    void set_nivel(unsigned long long int nivel);
    // GET/SET MODIFICADORES
    long double get_forca();
    long double get_destreza();
    long double get_constituicao();
    long double get_inteligencia();
    void set_forca(long double forca);
    void set_destreza(long double destreza);
    void set_constituicao(long double constituicao);
    void set_inteligencia(long double inteligencia);
    // GET/SET STATS (BASE)
    long double get_ataque_base();
    long double get_defesa_base();
    long double get_vida_base();
    long double get_mana_base();
    long double get_dano_magico_base();
    long double get_acerto_base();
    long double get_velocidade_base();
    void set_ataque_base(long double ataque_base);
    void set_defesa_base(long double defesa_base);
    void set_vida_base(long double vida_base);
    void set_mana_base(long double mana_base);
    void set_dano_magico_base(long double dano_magico_base);
    void set_acerto_base(long double acerto_base);
    void set_velocidade_base(long double velocidade_base);
    // GET/SET STATS (BATALHA)
    long double get_ataque_batalha();
    long double get_defesa_batalha();
    long double get_vida_batalha();
    long double get_mana_batalha();
    long double get_dano_magico_batalha();
    long double get_acerto_batalha();
    long double get_velocidade_batalha();
    void set_ataque_batalha(long double ataque_batalha);
    void set_defesa_batalha(long double defesa_batalha);
    void set_vida_batalha(long double vida_batalha);
    void set_mana_batalha(long double mana_batalha);
    void set_dano_magico_batalha(long double dano_magico_batalha);
    void set_acerto_batalha(long double acerto_batalha);
    void set_velocidade_batalha(long double velocidade_batalha);

    // LEVEL UP
    void level_up(long double forca_extra, long double destreza_extra, long double constituicao_extra, long double inteligencia_extra);

    // ATACAR
    virtual int atacar();
    // DEFENDER
    virtual int defender();
};

#endif // PERSONAGEM_H
