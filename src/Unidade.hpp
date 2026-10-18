#ifndef UNIDADE_HPP
#define UNIDADE_HPP

#include <string>

/**
 * Classe abstrata que representa uma unidade militar genérica.
 * Serve de base para Infantaria, Veiculo e Aeronave.
 */
class Unidade {
protected:
    int poderAtaque;  // Poder de ataque base (sorteado pela subclasse)

private:
    int destruicoes;  // Quantidade de oponentes destruídos em batalha

public:
    // Construtor: recebe o poder de ataque base e zera as destruições
    explicit Unidade(int poderAtaque);

    // Destrutor virtual: necessário para destruir objetos derivados
    // corretamente através de ponteiros Unidade*
    virtual ~Unidade();

    // Retorna o poder de ataque final (0 a 100).
    // Virtual puro: cada subclasse aplica sua própria fórmula.
    virtual int getPoderAtaque() const = 0;

    // Retorna o nome do tipo da unidade (ex.: "Infantaria").
    // Usado na impressão das unidades do exército.
    virtual std::string getTipo() const = 0;

    // Soma uma destruição ao registro da unidade
    void somaDestruicao();

    // Retorna o total de destruições da unidade
    int getDestruicoes() const;

protected:
    // Sorteia um inteiro aleatório no intervalo [minimo, maximo].
    // Centralizado aqui para evitar código repetido nas subclasses.
    static int sorteiaValor(int minimo, int maximo);
};

#endif // UNIDADE_HPP