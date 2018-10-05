#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <chrono>


double start, stop, tempo_insercao, tempo_busca;

auto stt = std::chrono::high_resolution_clock::now();
void iCronometro(void) {
    stt = std::chrono::high_resolution_clock::now();
}

double pCronometro(void) {
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - stt;
    return elapsed.count();
}

struct vetorNomes {
    int id;
    std::string nome;
    std::string sobrenome;
};

int main(){

	std::vector<vetorNomes> vetor;
    vetorNomes temp;
    int contador, temp_imprime;
    std::string nome, sobrenome;

    std::cout << std::endl;
    std::cout << "--------- VETOR --------" << std::endl;

// //////INSERCAO//////

    iCronometro();

    std::cin >> contador;
    std::cout << "Insercao - " << contador << std::endl;
    while(contador--){
    	std::cin >> temp.id >> temp.nome >> temp.sobrenome;
        vetor.push_back(temp);
    }

    stop = pCronometro();
    tempo_insercao = stop - start;

// //////FIM INSERCAO/////////
// //////BUSCA/////////
	iCronometro();

	int i;
    std::cin >> contador;
    std::cout << "Busca - " << contador << std::endl;
    while(contador--){
    	std::cin >> nome >> sobrenome;
    	for(i = 0; i<vetor.size(); i++){
    		if (vetor[i].nome.compare(nome)==0 and vetor[i].sobrenome.compare(sobrenome)==0) {
                temp_imprime = vetor[i].id;
    			// std::cout << temp_imprime << std::endl;
    			i = vetor.size();
    		}
    	}
    }
    			
    stop = pCronometro();

// //////FIM BUSCA/////////
    
    tempo_busca = stop - start;
    
    std::cout << "TEMPO INSERCAO = " << (tempo_insercao)<< " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA = " << (tempo_busca) << " segundos" << std::endl;
    std::cout << std::endl;
    std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao) << " segundos" << std::endl;
    std::cout << "------------------" <<std::endl;
    std::cout << std::endl;

	return 0;
}	 