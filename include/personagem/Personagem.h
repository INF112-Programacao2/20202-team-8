#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem{
protected:
    // NOME
    std::string _nome;

    // CLASSE
    std::string _classe;

    // MODIFICADORES
    int _forca=0;
    int _destreza=0;
    int _constituicao=0;
    int _inteligencia=0;

    // STATS (OS STATS SAO INICIADOS NAS SUB-CLASSES DO PERSONAGEM)
    double _ataque=0.0;
    double _defesa=0.0;
    double _vida=0.0;
    double _mana=0.0;
    double _dano_magico=0.0;
    double _acerto=0.0;
    double _velocidade=0.0;

    // STATS (BASE)
    double _ataque_base=0.0;
    double _defesa_base=0.0;
    double _vida_base=0.0;
    double _mana_base=0.0;
    double _dano_magico_base=0.0;
    double _acerto_base=0.0;
    double _velocidade_base=0.0;

    // STATS (BATALHA)
    double _ataque_batalha=0.0;
    double _defesa_batalha=0.0;
    double _vida_batalha=0.0;
    double _mana_batalha=0.0;
    double _dano_magico_batalha=0.0;
    double _acerto_batalha=0.0;
    double _velocidade_batalha=0.0;
public:
    // CONSTRUTORES
    Personagem(){};
    Personagem(std::string nome);

    // DESTRUTOR
    ~Personagem();

    // GET NOME
    std::string get_nome();

    // GET CLASSE
    std::string get_classe();

    // GET & SET MODIFICADORES
    int get_forca();
    int get_destreza();
    int get_constituicao();
    int get_inteligencia();
    void set_forca(int forca);
    void set_destreza(int destreza);
    void set_constituicao(int constituicao);
    void set_inteligencia(int inteligencia);

    // GET & SET STATS
    double get_ataque();
    double get_defesa();
    double get_vida();
    double get_mana();
    double get_dano_magico();
    double get_acerto();
    double get_velocidade();
    void set_ataque(double ataque);
    void set_defesa(double defesa);
    void set_vida(double vida);
    void set_mana(double mana);
    void set_dano_magico(double dano_magico);
    void set_acerto(double acerto);
    void set_velocidade(double velocidade);

    // GET STATS (BASE)
    double get_ataque_base();
    double get_defesa_base();
    double get_vida_base();
    double get_mana_base();
    double get_dano_magico_base();
    double get_acerto_base();
    double get_velocidade_base();

    // GET & SET STATS (BATALHA)
    double get_ataque_batalha();
    double get_defesa_batalha();
    double get_vida_batalha();
    double get_mana_batalha();
    double get_dano_magico_batalha();
    double get_acerto_batalha();
    double get_velocidade_batalha();
    void set_ataque_batalha(double ataque_batalha);
    void set_defesa_batalha(double defesa_batalha);
    void set_vida_batalha(double vida_batalha);
    void set_mana_batalha(double mana_batalha);
    void set_dano_magico_batalha(double dano_magico_batalha);
    void set_acerto_batalha(double acerto_batalha);
    void set_velocidade_batalha(double velocidade_batalha);

    // METODOS PARA REALIZAR AS ACOES DE ATACAR E DEFENDER
    double atacar();
    void defender();

    // HABILIDADES ESPECIAIS
    virtual double ataque_1();
    virtual double ataque_2();
};

#endif //PERSONAGEM_H
