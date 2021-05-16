#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>

class Inimigo{
protected:
    // NOME
    std::string _nome;

    //NIVEL
    int _nivel;

    // STATS
    double _ataque=0;
    double _defesa=0;
    double _vida=0;
    double _mana=0;
    double _dano_magico=0;
    double _acerto=0;
    double _velocidade=0;

public:
    //CONSTRUTOR E DESTRUTOR
    Inimigo(int nivel);
    ~Inimigo();

    //GET NOME
    std::string get_nome();

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

    //COMANDO PARA REALIZAR ACAO ATACAR E DEFENDER
        virtual int atacar();
        virtual int defender();

        //COMANDOS PARA HABILIDADES ESPECIAIS
        virtual double ataque_1();
        virtual double ataque_2();
        virtual double ataque_3();
        virtual double ataque_4();

};

#endif //INIMIGOS_H
