Histórico de Navegador (Duplamente Encadeada)

**O Conceito:**
Simular os botões "Voltar" e "Avançar" de um navegador web. Para isso, você precisa ir para trás e para frente na estrutura, o que exige uma **Lista Duplamente Encadeada** (ponteiros `prev` e `next`).

**Desafios Técnicos:**
* Gerenciar ponteiros duplos (`prev` e `next`) sem perder a referência.
* Implementar a lógica de que, se você voltar 3 páginas e visitar uma nova, todo o histórico "futuro" deve ser apagado (branching).
* Visualizar a "Página Atual" destacada na lista.

**Conteúdo do README.md (Copie o código abaixo):**

```markdown
# 🌐 Browser History Simulator

Simulação da lógica de histórico de um navegador web. Este projeto implementa uma **Lista Duplamente Encadeada** para permitir a navegação bidirecional (Voltar/Avançar) eficiente entre URLs visitadas.

## 💻 Sobre o Projeto

Diferente de uma lista simples, este projeto permite o tráfego nos dois sentidos dos nós. O foco principal é a lógica de gerenciamento de ponteiros `prev` e `next` para garantir a integridade do histórico.

## ✨ Funcionalidades

- **Visitar URL:** Adiciona uma nova página ao histórico.
  - *Nota:* Se o usuário estiver no meio do histórico e visitar uma nova página, o histórico futuro é descartado.
- **Voltar (Back):** Retorna à página anterior.
- **Avançar (Forward):** Vai para a próxima página (se houver).
- **Visualizar Histórico:** Mostra a lista completa indicando a página atual.

## 🛠️ Estrutura de Dados

Utiliza uma **Doubly Linked List** onde cada nó contém:
- `string url`
- `Node* next`
- `Node* prev`

## 🚀 Como Executar

```bash
# Compilar
g++ main.cpp HistoryList.cpp -o browser

# Executar
./browser
