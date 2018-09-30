#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include <utility>

#define MODE 5000

int start, stop, tempo_insercao, tempo_busca;

int gerarHash(std::string str){
    std::hash<std::string> hash_fn;
    size_t str_hash = hash_fn(str);
    return str_hash % MODE;
}

int main(int argc, char const *argv[]){
	std::vector<std::map<std::string, int>> mapa (MODE);
	std::map<std::string, int> mapaTemp; 
	int contador, id;
	std::string nome, sobrenome, nomecompleto;

	start = clock();

	std::cin >> contador;
	while(contador--){
		std::cin >> id >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		mapa[gerarHash(nomecompleto)][nomecompleto] = id;
	}
	stop = clock();
	tempo_insercao = stop - start;

	
	start = clock();

	std::cin >> contador;
	while(contador--) {
		std::cin >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		std::cout << mapa[gerarHash(nomecompleto)][nomecompleto] << std::endl;
	}

	stop = clock();

	tempo_busca = stop - start;

	std::cout << "TEMPO INSERCAO = " << (tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA = " << (tempo_busca)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;
    std::cout << std::endl;
    std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao)*1000/(double) CLOCKS_PER_SEC << " segundos" << std::endl;


	return 0;
}