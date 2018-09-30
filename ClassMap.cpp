#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <utility>

int start, stop, tempo_insercao, tempo_busca;

// typedef std::pair <std::string, std::string> pss;

int main(int argc, char const *argv[]) {
	
	// std::map <pss, int> mapa, it;
	std::map <std::string, int> mapa, it;
	std::string nome, sobrenome, nomecompleto;
	int id, contador;

	start = clock();

	std::cin >> contador;
	while(contador--){
		std::cin >> id >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		// mapa[make_pair(nome, sobrenome)] = id;
		mapa[nomecompleto] = id;
	}

	stop = clock();
	tempo_insercao = stop - start;

	start = clock();

	std::cin >> contador;
	while(contador--){
		std::cin >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		std::cout << mapa.find(nomecompleto)->second << '\n';
	}

	stop = clock();
	tempo_busca = stop - start;
	std::cout << "TEMPO INSERCAO= " << (tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA= " << (tempo_busca)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
	return 0;
}