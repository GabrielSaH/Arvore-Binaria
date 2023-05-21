#include "arvoreBinaria.hpp"

arvoreBinaria::arvoreBinaria():
raiz(nullptr)
{

};

//NoArvoreBinaria arvoreBinaria::insere(int info){}


NoArvoreBinaria* arvoreBinaria::insere(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir){

    NoArvoreBinaria *no = new NoArvoreBinaria(info, esq, dir);
    raiz = no;
    return no;
}


bool arvoreBinaria::vazia() {
    return (raiz == nullptr);
}

bool arvoreBinaria::pertence(int info) {
    return pertenceAUX(raiz, info);
}

bool arvoreBinaria::pertenceAUX(NoArvoreBinaria* no, int info) {
    if (no == nullptr) {
        return false;
    };

    return ((no->getInfo() == info) || pertenceAUX(no->getEsquerda(), info) || pertenceAUX(no->getDireita(), info));
}


int arvoreBinaria::pares() {
    int ret = 0;

    int* num = &ret;

    paresAUX(raiz, num);

    return ret;
};

void arvoreBinaria::paresAUX(NoArvoreBinaria* no, int* num) {
    if (no == nullptr) {
        return;
    };

    if ((no->getInfo() % 2) == 0) {
        *num = *num + 1;
    }

    paresAUX(no->getEsquerda(), num);
    paresAUX(no->getDireita(), num);

}


int arvoreBinaria::folhas() {

    int retorno = 0;

    int* num = &retorno;

    int folha = 0;

    if (folhasAUX(raiz->getEsquerda(), num)) {
        folha++;
    };

    if (folhasAUX(raiz->getDireita(), num)) {
        folha++;
    };

    if (folha == 2) {
        retorno++;
    }

    return retorno;
}

bool arvoreBinaria::folhasAUX(NoArvoreBinaria* no, int* num) {
    if (no == nullptr) {
        return true;
    };

    int folha = 0;

    if (folhasAUX(no->getEsquerda(), num)) {
        folha++;
    };

    if (folhasAUX(no->getDireita(), num)) {
        folha++;
    };

    if (folha == 2) {
        *num += 1;
    }

    return false;
}


int arvoreBinaria::numNos() {
    int retorno = 0;

    int* num = &retorno;

    numNosAUX(raiz, num);

    return retorno;

}

void arvoreBinaria::numNosAUX(NoArvoreBinaria* no, int* num) {
    if (no == nullptr) {
        return;
    };

    *num = *num + 1;

    numNosAUX(no->getEsquerda(), num);
    numNosAUX(no->getDireita(), num);

}


int arvoreBinaria::altura() {
    int level(0), levelAtt(0);

    int* levelP = &level;
    int* levelAttP = &levelAtt;

    alturaAUX(raiz->getEsquerda(), levelP, levelAttP);
    alturaAUX(raiz->getDireita(), levelP, levelAttP);

    return level;

}

void arvoreBinaria::alturaAUX(NoArvoreBinaria* no, int* max, int* level) {
    if (no == nullptr) {
        return;
    };

    *level += 1;

    if (*level > *max) {
        *max = *level;
    };

    alturaAUX(no->getEsquerda(), max, level);
    alturaAUX(no->getDireita(), max, level);

    *level -= 1;

}


bool arvoreBinaria::igual(arvoreBinaria alvo) {

    return igualAUX(raiz, alvo.raiz);

}

bool arvoreBinaria::igualAUX(NoArvoreBinaria* no1, NoArvoreBinaria* no2) {
    if (no1 == nullptr) {
        return (no2 == nullptr);
    };

    if (no1->getInfo() != no2->getInfo()) {
        return false;
    }

    return ((igualAUX(no1->getEsquerda(), no2->getEsquerda())) && (igualAUX(no1->getDireita(), no2->getDireita())));
}


// Funcoes amigas

std::ostream& operator<<(std::ostream& os, const arvoreBinaria arvore) {
    arvore.raiz->print(os);

    return os;
};

std::ostream& operator<<(std::ostream& os, const arvoreBinaria* arvore) {
    arvore->raiz->print(os);

    return os;
}
