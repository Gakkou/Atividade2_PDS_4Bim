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
  std::list<preco>
public:

};

class Preco {
private:

public:

};

class ItemVenda {
private:

public:

};

int main() {



  return 0;
}
