#ifndef ARQUIVOS_HPP
#define ARQUIVOS_HPP

#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Strutura que será usada no vetor
struct vetorNomes {
    int id;
    string nome;
    string sobrenome;
};

// Classe da implementação utilizando vetor
class Vetor {

public:
    void insercaoVetor(istream& arquivo, vector<vetorNomes>& vetor);
    void buscaVetor(string nomeArquivo);
};
#endif
