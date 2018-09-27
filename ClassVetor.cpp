#include "Arquivos.hpp"

void Vetor::insercaoVetor(istream& arquivo, vector<vetorNomes>& vetor){
    vetorNomes temp;
    while (arquivo.eof()) {
        arquivo >> temp.id >> temp.nome >> temp.sobrenome;
        vetor.push_back(temp);
    }
}
