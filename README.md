# Trabalho M1 - Sistema de Avaliação de Bolsa Universitária

Projeto desenvolvido para a disciplina de Lógica de Programação da Universidade do Vale do Itajaí (UNIVALI).

## Sobre o Projeto

O sistema foi desenvolvido em linguagem C com o objetivo de simular um processo de avaliação de bolsas universitárias, analisando informações acadêmicas e socioeconômicas do candidato.

O programa realiza a coleta de dados do usuário, calcula a média final e a renda per capita familiar, e determina se o aluno possui direito a:

- Bolsa de 100%
- Bolsa de 50%
- Ou reprovação no processo

Além disso, o sistema informa os motivos caso o candidato não seja aprovado.

---

# Objetivos da Atividade

O trabalho teve como objetivo aplicar conceitos fundamentais de lógica de programação, utilizando:

- Estruturas condicionais (`if`, `else`)
- Operadores lógicos
- Entrada e saída de dados
- Variáveis
- Validação de dados
- Cálculos matemáticos
- Fluxo de decisão

---

# Regras de Avaliação

## Bolsa de 100%

O candidato deve:

- Possuir renda per capita menor ou igual a R$800
- Média final maior ou igual a 8.0
- Ter estudado em escola pública
- Não possuir familiares bolsistas

---

## Bolsa de 50%

O candidato deve:

- Possuir renda per capita menor ou igual a R$1600
- Possuir no máximo 1 familiar bolsista

### Caso possua benefício social:
(Escola pública ou deficiência)

- Média final maior ou igual a 6.0

### Caso não possua benefício social:

- Média final maior ou igual a 7.5

---

# Funcionalidades

- Cadastro do candidato
- Cálculo de renda per capita
- Cálculo de média final ponderada
- Verificação automática das bolsas
- Validação de entradas inválidas
- Exibição dos motivos de reprovação

---

# Fórmula da Média Final

A média final é calculada utilizando pesos diferentes:

- Processo seletivo → 40%
- ENEM → 30%
- Ensino médio → 30%

```txt
Média Final = (PS × 0.4) + (ENEM × 0.3) + (EM × 0.3)
```

---

# Tecnologias Utilizadas

- Linguagem C
- GCC
- Visual Studio Code

---

# Conceitos Aplicados

- Lógica proposicional
- Estruturas de condição
- Validação de dados
- Operadores relacionais
- Operadores lógicos
- Fluxogramas
- Organização de código

---

# Integrantes

- Vinicyus Gabriel Delfino
- Pedro Vitorino

---

# Como Executar

## Compilar

```bash
gcc TrabalhoM1.c -o app.exe
```

## Executar

```bash
./app.exe
```

---

# Resultado Esperado

O sistema exibirá:

- Dados do candidato
- Média final
- Renda per capita
- Resultado da bolsa
- Motivos da reprovação (caso aplicável)

---

# Universidade

Universidade do Vale do Itajaí - UNIVALI
Disciplina de Algoritmos e Lógica de Programação