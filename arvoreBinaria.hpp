#include "NoArvoreBinaria.hpp"

class arvoreBinaria{
private:
    NoArvoreBinaria *raiz;

public:
    arvoreBinaria();

    //NoArvoreBinaria insere(int info);
    NoArvoreBinaria* insere(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir);

    bool vazia();
    bool pertence(int info);
    int pares();
    int folhas();
    int numNos();
    int altura();
    bool igual(arvoreBinaria alvo);

    friend std::ostream& operator<<(std::ostream& os, const arvoreBinaria arvore);
    friend std::ostream& operator<<(std::ostream& os, const arvoreBinaria* arvore);

private:
    void paresAUX(NoArvoreBinaria* no, int* num);
    bool pertenceAUX(NoArvoreBinaria* no, int info);
    void numNosAUX(NoArvoreBinaria* no, int* num);
    bool folhasAUX(NoArvoreBinaria* no, int* num);
    void alturaAUX(NoArvoreBinaria* no, int* level, int* levelAtual);
    bool igualAUX(NoArvoreBinaria* no1, NoArvoreBinaria* no2);
};