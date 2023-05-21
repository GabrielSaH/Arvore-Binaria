#include <iostream>

class NoArvoreBinaria{
private:
    int info;
    NoArvoreBinaria *esquerda;
    NoArvoreBinaria *direita;

public:
    NoArvoreBinaria(int info, NoArvoreBinaria *esquerda = nullptr, NoArvoreBinaria *direita = nullptr);
    NoArvoreBinaria();
    

    NoArvoreBinaria *getEsquerda();
    NoArvoreBinaria *getDireita();
    int getInfo();

    void setInfo(int info);
    void setEsquerda(NoArvoreBinaria *esquerda);
    void setDireita(NoArvoreBinaria *direita);

    void print(std::ostream& os);

};