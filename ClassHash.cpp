#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include <utility>
#include <chrono>

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
	std::vector<std::map<std::string, int> > vetor (MODE);
	std::map<std::string, int> mapaTemp;
	int contador, id, temp_imprimir;
	std::string nome, sobrenome, nomecompleto;

	std::cout << std::endl;
	std::cout << "-------- VETOR DE HASH --------" << std::endl;
	
	iCronometro();

	std::cin >> contador;
	while(contador--){ // 								O(contador1)
		std::cin >> id >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		vetor[gerarHash(nomecompleto)][nomecompleto] = id; // O(len(nomecompleto))
	}
	stop = pCronometro();
	tempo_insercao = stop - start;

	// --------- Parte para imprimir a ocupacao por pos do vetor ------
	// for(contador = 0; contador < MODE; contador++){
	// 	std::cout << contador << " "<< vetor[contador].size() << std::endl;
	// }
	// -----------------------------------------------------------------

	iCronometro();

	std::cin >> contador;
	std::cout << "busca - " << contador << std::endl;
	while(contador--) {//								O(contador2)
		std::cin >> nome >> sobrenome;
		nomecompleto = nome + sobrenome;
		temp_imprimir = vetor[gerarHash(nomecompleto)][nomecompleto]; // O(len(nomecompleto))
		// std::cout << temp_imprimir << std::endl;
	}

	stop = pCronometro();

	tempo_busca = stop - start;

	
	std::cout << "TEMPO INSERCAO = " << (tempo_insercao) << " segundos" << std::endl;
	std::cout << std::endl;
	std::cout << "TEMPO BUSCA = " << (tempo_busca) << " segundos" << std::endl;
    std::cout << std::endl;
    std::cout << "TEMPO TOTAL = " << (tempo_busca + tempo_insercao) << " segundos" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;


	return 0;
}


/*

Complexidade Tempo

O = O(contador1 * len(nomecompleto)) + O(contador2 * len(tamanhocompelto)) + O(1)

como o len(nomecompleto) neste caso de teste é quase constante podemos desconsiderar

O = O(contador1) + O(contador2) + O(1)

O(contador1 + contador2)

Complexidade Espaço

O(MODE)


*/