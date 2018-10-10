#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <utility>
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

int main(int argc, char const *argv[]) {
	
	// std::map <pss, int> mapa, it;
	std::map <std::string, int> mapa, it;
	std::string nome, sobrenome, nomecompleto;
	int id, contador, temp_imprimir;

	std::cout << std::endl;
	std::cout << "-------- ARVORE --------" << std::endl;

	iCronometro();

	std::cin >> contador;
	while(contador--){// 									O(contador1)
		std::cin >> id >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		mapa[nomecompleto] = id;	//						O(1)
	}

	stop = pCronometro();
	tempo_insercao = stop - start;

	iCronometro();

	std::cin >> contador;
	while(contador--){ // 									O(contador2)
		std::cin >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		temp_imprimir = mapa.find(nomecompleto)->second;// 	O(log contador1)
		// std::cout << temp_imprimir << std::endl;
	}

	stop = pCronometro();
	tempo_busca = stop - start;
	
	std::cout << "TEMPO INSERCAO= " << (tempo_insercao) << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA= " << (tempo_busca) << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao) << " segundos" << std::endl;
	std::cout << "------------------" <<std::endl;
	std::cout << std::endl;
	return 0;
}

/*

Complexidade Tempo

O = O(contador1) + O(contador2 * log contador1) + O(1)

Complexidade Espaço

O(log contador1)

*/