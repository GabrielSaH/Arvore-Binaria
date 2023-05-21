#include "arvoreBinaria.hpp"
#include <iostream>


int main(){

    arvoreBinaria a = arvoreBinaria();


    a.insere(1,
                a.insere(2, nullptr,
                            a.insere(4,nullptr,nullptr)),
                a.insere(3,
                            a.insere(5, nullptr, nullptr),
                            a.insere(6, nullptr, nullptr)));

    arvoreBinaria b = arvoreBinaria();


    b.insere(1,
        b.insere(2, nullptr,
            b.insere(4, nullptr, nullptr)),
        b.insere(3,
            b.insere(5, nullptr, nullptr),
            b.insere(6, nullptr, 
                b.insere(7,nullptr,nullptr))));

    std::cout << "ATENCAO: a arvore 'A' esta igual ao exemplo no slide." << std::endl << std::endl << std::endl;

    std::cout << "A == " << a << std::endl;
    std::cout << "B == " << b << std::endl;
    
    
    std::cout << "A vazia ? " << a.vazia() << std::endl;
    std::cout << "7 pertence a A ? " << a.pertence(7) << std::endl;
    std::cout << "7 pertence a B ? " << b.pertence(7) << std::endl;
    std::cout << "Pares em A : " << a.pares() << std::endl;
    std::cout << "Folhas em A : " << a.folhas() << std::endl;
    std::cout << "Numero de Nos em A : " << a.numNos() << std::endl;
    std::cout << "Altura de A : " << a.altura() << std::endl;
    std::cout << "A == B ? " << a.igual(b) << std::endl;


    return 0;
};