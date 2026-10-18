#ifndef VEICULO_HPP
#define VEICULO_HPP

#include "Unidade.hpp"

#include <string>

/**
 * Unidade de veículo: tanques, blindados e similares.
 * Atributos próprios: blindagem (30 a 70) e potenciaDeFogo (20 a 50).
 * O poderAtaque base (40 a 80) é herdado de Unidade.
 */
class Veiculo : public Unidade {
private:
    int blindagem;       // Resistência do veículo (30 a 70)
    int potenciaDeFogo;  // Capacidade de fogo do veículo (20 a 50)

public:
    // Construtor: sorteia poderAtaque, blindagem e potenciaDeFogo nas faixas do enunciado
    Veiculo();

    // Destrutor (sobrescreve o destrutor virtual da base)
    ~Veiculo() override;

    // Poder de ataque final:
    // ((poderAtaque*5) + (blindagem*4) + (potenciaDeFogo*1)) / 10
    int getPoderAtaque() const override;

    // Retorna "Veiculo"
    std::string getTipo() const override;
};

#endif // VEICULO_HPP