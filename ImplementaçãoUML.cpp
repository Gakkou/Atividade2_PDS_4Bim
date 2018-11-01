#include <iostream>
#include <string>
#include <list>

// Definições das classes:

class Estoque {
private:
  std::string empresa;
  std::list<Produto> produtos;
  std::list<Venda> vendas;
public:
  Estoque(std::string);
  void addProduto(Produto p);
  void addVenda(Venda v);
  void imprimeProdutos();
  void imprimeVendas();
  bool removeProduto(Produto p);
  bool removeVenda(Venda v);
};

class Venda {
private:
  int codigo;
  std::string data;
  std::string hora;
  std::list<ItemVenda> vendidos;
public:
  Venda(int c, std::string d, std::string h);
  ~Venda();
  void addItem(ItemVenda iv);
  void imprimeVenda();
  bool removeItem(ItemVenda iv);
};

class Produto {
private:
  int codigo;
  float preco;
  std::string nome;
  int quantidade;
  std::string unidade;
public:
  Produto(int c, std::string n, int qtd, std::string uni, float p);
  ~Produto();
  void imprimeProduto();
  void vendido(int qtd);
};

class ItemVenda {
private:
  std::string data;
  Produto item;
  int quantidade;
  Venda V;
public:

};

int main() {



  return 0;
}
