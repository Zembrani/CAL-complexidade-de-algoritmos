#include <iostream>
#include <vector>
#include <string>
#include <ctime>


int start, stop, tempo_insercao, tempo_busca;

struct vetorNomes {
    int id;
    std::string nome;
    std::string sobrenome;
};

int main(){

	std::vector<vetorNomes> vetor;
    vetorNomes temp;
    int contador;
    std::string nome, sobrenome;

// //////INSERCAO//////

    start = clock();

    std::cin >> contador;
    while(contador--){
    	std::cin >> temp.id >> temp.nome >> temp.sobrenome;
        vetor.push_back(temp);
    }

    stop = clock();
    tempo_insercao = stop - start;

// //////FIM INSERCAO/////////
// //////BUSCA/////////
	start = clock();

	int i;
    std::cin >> contador;
    while(contador--){
    	std::cin >> nome >> sobrenome;
    	for(i = 0; i<vetor.size(); i++){
    		if (vetor[i].nome.compare(nome)==0 and vetor[i].sobrenome.compare(sobrenome)==0) {
    			std::cout << vetor[i].id << std::endl;
    			i = vetor.size();
    		}
    	}
    }
    			
    stop = clock();

// //////FIM BUSCA/////////
    
    tempo_busca = stop - start;
    std::cout << "TEMPO INSERCAO = " << (tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA = " << (tempo_busca)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
    std::cout << std::endl;
    std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;

	return 0;
}	 