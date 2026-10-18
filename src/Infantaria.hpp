#ifndef INFANTARIA_HPP
#define INFANTARIA_HPP

#include "Unidade.hpp"

#include <string>

/**
 * Unidade de infantaria: soldados a pé.
 * Atributos próprios: força (20 a 50) e velocidade (10 a 40).
 * O poderAtaque base (30 a 60) é herdado de Unidade.
 */
class Infantaria : public Unidade {
private:
    int forca;       // Força da unidade (20 a 50)
    int velocidade;  // Velocidade da unidade (10 a 40)

public:
    // Construtor: sorteia poderAtaque, forca e velocidade nas faixas do enunciado
    Infantaria();

    // Destrutor (sobrescreve o destrutor virtual da base)
    ~Infantaria() override;

    // Poder de ataque final:
    // ((poderAtaque*5) + (forca*3) + (velocidade*2)) / 10
    int getPoderAtaque() const override;

    // Retorna "Infantaria"
    std::string getTipo() const override;
};

#endif // INFANTARIA_HPP