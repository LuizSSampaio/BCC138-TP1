# BCC138 - Programação Orientada a Objetos (Trabalho Prático 1)

Simulação de campanha militar em C++ utilizando os princípios fundamentais da Programação Orientada a Objetos: classes abstratas, herança, polimorfismo dinâmico, encapsulamento e gerenciamento moderno de memória com ponteiros inteligentes (*Smart Pointers* / RAII).

---

## 📋 Requisitos de Sistema

- **Compilador C++** com suporte a **C++23**:
  - `clang++` (versão 16+) ou
  - `g++` (versão 13+)
- **GNU Make** (opcional, para automação do build)
- *(Opcional)* **Devenv** / **Nix** (para ambiente de desenvolvimento reproduzível)

---

## 🛠 Como Compilar

### Opção 1: Via Makefile (Recomendado)

Na raiz do projeto, execute:

```bash
make
```

O binário executável será gerado em `build/game`.

**Outros comandos úteis do Makefile:**
- `make clean`: Remove os diretórios e arquivos de compilação intermediários (`obj/`, `build/`).
- `make re`: Executa uma limpeza completa e recompila todo o projeto (`clean` seguido de `all`).
- `make compiledb`: Gera o arquivo `compile_commands.json` para suporte a LSP/IDEs.

---

### Opção 2: Compilação Direta via Linha de Comando

Caso não tenha o utilitário `make` instalado, compile diretamente utilizando o compilador de sua preferência:

- **Com G++:**
  ```bash
  mkdir -p build
  g++ -std=c++23 -Wall -Wextra -Wpedantic src/*.cpp -o build/game
  ```

- **Com Clang++:**
  ```bash
  mkdir -p build
  clang++ -std=c++23 -Wall -Wextra -Wpedantic src/*.cpp -o build/game
  ```

---

### Opção 3: Via Devenv / Nix

Caso utilize o ambiente hermético configurado no repositório:

```bash
devenv shell make
```

---

## 🚀 Como Executar

Após a compilação, execute o binário gerado a partir da raiz do repositório:

```bash
./build/game
```

---

## 📊 Funcionamento e Saídas Geradas

Ao executar, o programa realiza as seguintes etapas:

1. **Exibição do Exército**: Apresenta as unidades militares cadastradas de um dos exércitos no terminal (Infantarias, Veículos e Aeronaves).
2. **Simulação da Campanha**: Executa confrontos em rodada dupla entre todos os exércitos participantes.
3. **Classificação Final**:
   - Exibe a tabela de posições no console com pontuação, vitórias, empates e derrotas.
   - Salva a mesma classificação no arquivo de texto [`tabela.txt`](./tabela.txt).
4. **Destaque Individual**: Identifica e exibe a unidade militar mais destrutiva de toda a campanha.

Para conferir o arquivo gerado:

```bash
cat tabela.txt
```
