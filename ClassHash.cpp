#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include <utility>
#include <bits/stdc++.h>

#define MODE 5000

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

int gerarHash(std::string str){
    std::hash<std::string> hash_fn;
    size_t str_hash = hash_fn(str);
    return str_hash % MODE;
}

int main(int argc, char const *argv[]){
	std::vector<std::map<std::string, int> > mapa (MODE);
	std::map<std::string, int> mapaTemp;
	int contador, id;
	std::string nome, sobrenome, nomecompleto;

	iCronometro();

	std::cin >> contador;
	while(contador--){
		std::cin >> id >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		mapa[gerarHash(nomecompleto)][nomecompleto] = id;
	}
	stop = pCronometro();
	tempo_insercao = stop - start;


	iCronometro();

	std::cin >> contador;
	while(contador--) {
		std::cin >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		std::cout << mapa[gerarHash(nomecompleto)][nomecompleto] << std::endl;
	}

	stop = pCronometro();

	tempo_busca = stop - start;

	std::cout << "TEMPO INSERCAO = " << (tempo_insercao) << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA = " << (tempo_busca) << " segundos" << std::endl;
    std::cout << std::endl;
    std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao) << " segundos" << std::endl;


	return 0;
}
