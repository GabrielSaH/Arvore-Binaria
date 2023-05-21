#include "NoArvoreBinaria.hpp"




NoArvoreBinaria::NoArvoreBinaria(int info ,NoArvoreBinaria *esquerda, NoArvoreBinaria *direita):
esquerda(esquerda),
direita(direita),
info(info)
{

};

NoArvoreBinaria::NoArvoreBinaria():
info(NULL),
direita(nullptr),
esquerda(nullptr)
{

};


NoArvoreBinaria *NoArvoreBinaria::getDireita(){
    return direita;
};

NoArvoreBinaria *NoArvoreBinaria::getEsquerda(){
    return esquerda;
};

int NoArvoreBinaria::getInfo(){
    return info;
};

void NoArvoreBinaria::setInfo(int info){
    this->info = info;
    return;
};

void NoArvoreBinaria::setEsquerda(NoArvoreBinaria *esquerda){
    this->esquerda = esquerda;
    return;
}

void NoArvoreBinaria::setDireita(NoArvoreBinaria *direita){
    this->direita = direita;
    return;
}

void NoArvoreBinaria::print(std::ostream& os){
    os << getInfo();

    os << "<";

    if (getEsquerda() != nullptr){
        getEsquerda()->print(os);
    }

    os << ">";


    os << "<";
    if (getDireita() != nullptr){
        getDireita()->print(os);
    }
    os << ">";



}
