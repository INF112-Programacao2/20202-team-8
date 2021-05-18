#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>

class Inimigo{
protected:
    // NOME
    std::string _nome;

    // NIVEL
    int _nivel;

    // STATS
    double _ataque=0.0;
    double _defesa=0.0;
    double _vida=0.0;
    double _mana=0.0;
    double _dano_magico=0.0;
    double _acerto=0.0;
    double _velocidade=0.0;

public:
    // CONSTRUTOR E DESTRUTOR
    Inimigo(int nivel);
    ~Inimigo();

    // GET NOME
    std::string get_nome();

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

    // ATAQUES
    double atacar();
    double ataque_especial();
};

#endif //INIMIGOS_H
