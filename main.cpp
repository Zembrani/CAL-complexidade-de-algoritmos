#include "Arquivos.hpp"
#include <ctime>

void menu();
string imprimeEscolhaArq();

int start, stop;

int main(int argc, char const *argv[]) {

    cout << "Trabalho CAL : Buscas e Inserções" << endl;
    menu();
    cout << "Fechando.." << endl;

    return 0;
}

void menu() {
    int escolha;

    do {

        cout << "Escolha uma das opções" << endl;
		cout << "1 - Inserir" << endl;
		cout << "2 - Buscar" << endl;
		cout << "0 - Sair" << endl;
        cout << endl;
        cin >> escolha;

        switch(escolha){
            case 1: {
                cout << "Escolha o algoritmo:" << endl;
        		cout << "1 - Vetor" << endl;
        		cout << "2 - Árvore" << endl;
        		cout << "3 - Hash" << endl;
                cout << "4 - Voltar" << endl;
                cout << endl;
                cin >> escolha;
                switch (escolha) {
                    case 1: {
                        string nomeArquivo;
                        nomeArquivo = imprimeEscolhaArq();
                        ifstream arquivo;
                        arquivo.open(nomeArquivo);
                        vector<vetorNomes> vetor;

                        start = clock();
                            Vetor *vetorAlg = new Vetor();
                            vetorAlg -> insercaoVetor(arquivo, vetor);
                        stop = clock();
                        cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
                        for (int i = 0; i < vetor.size(); i++) {
                            cout << "vetor = " << vetor.id << "nome = " << vetor.nome << "sobrenome = " << vetor.sobrenome;
                        }
                        arquivo.close();
						break;
                    }
                    case 2: {
                        cout << "ainda não faz nada!";
                    }
                    case 3: {
                        cout << "ainda não faz nada!";
                    }
                }
            }
            case 2: {
                cout << "ainda não faz nada!";

            }
        }
        system("clear");

    }while( escolha != 0 );

}

string imprimeEscolhaArq(){
    int escolha = 0;
    cout << "Escolha o arquivo:" << endl;
    cout << "1 : 5000" << endl;
    cout << "2 : 25000" << endl;
    cout << "3 : 50000" << endl;
    cout << "4 : 100000" << endl;
    switch(escolha){
        case 1: return "5000.txt";
        case 2: return "25000.txt";
        case 3: return "50000.txt";
        case 4: return "100000.txt";
    }
}
