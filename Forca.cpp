#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <clocale>
#include <windows.h>

/*
Autor: Gabriel Azevedo Silva (Nanno)
Versão: 2.0
*/

using namespace std;

void mostra_erros(int erros){

    cout << "\n";

    switch(erros){
        case 0:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 1:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 2:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+-----+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|\033[0m            |  \n";
            wcout<<L"         \033[1;33m|\033[0m            |  \n";
            wcout<<L"        \033[1;33m/|\\\033[0m           | \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 3:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+---+-+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"        \033[1;33m/|\\ /|\\\033[0m       |\n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 4:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m+--+       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m|  |       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m|  |       |\033[0m      |  \n";
            wcout<<L"   \033[1;33m/|\\ |       |\033[0m      | \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+---+-+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"        \033[1;33m/|\\ /|\\\033[0m       |\n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 5:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      +---------+     |                   \n";
            wcout<<L"       \033[1;33m+-------+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m+--+       +--+\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"   \033[1;33m/|\\ |       | /|\\\033[0m  |\n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+---+-+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"        \033[1;33m/|\\ /|\\\033[0m       |\n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 6:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |         |     |                   \n";
            wcout<<L"      |    \033[1;33m|\033[0m    |     |  \n";
            wcout<<L"      +----\033[1;33m|\033[0m----+     |  \n";
            wcout<<L"       \033[1;33m+---+---+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m+--+       +--+\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"   \033[1;33m/|\\ |       | /|\\\033[0m  |\n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+---+-+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"        \033[1;33m/|\\ /|\\\033[0m       |\n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;

        case 7:
            wcout<<L"           +----------+                   \n";
            wcout<<L"           |          |                   \n";
            wcout<<L"      +----+----+     |                   \n";
            wcout<<L"      | \033[1;33m+-----+\033[0m |     |  \n";
            wcout<<L"      | \033[1;33m| X X |\033[0m |     |  \n";
            wcout<<L"      | \033[1;33m| --- |\033[0m |     |  \n";
            wcout<<L"      | \033[1;33m+--+--+\033[0m |     |  \n";
            wcout<<L"      +----\033[1;33m|\033[0m----+     |  \n";
            wcout<<L"       \033[1;33m+---+---+\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"    \033[1;33m+--+       +--+\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"    \033[1;33m|  |       |  |\033[0m   |  \n";
            wcout<<L"   \033[1;33m/|\\ |       | /|\\\033[0m  |\n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m|       |\033[0m      |  \n";
            wcout<<L"       \033[1;33m+-+---+-+\033[0m      |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"         \033[1;33m|   |\033[0m        |  \n";
            wcout<<L"        \033[1;33m/|\\ /|\\\033[0m       |\n";
            wcout<<L"                      |                   \n";
            wcout<<L"                      |                   \n";
            wcout<<L"                   ---+---                \n";
            break;
    }
}

void mostra_status(vector<string> errado, string resposta){
    int i;

    cout << "\n   Palpites errados (" << errado.size() << "/7): \n";
    for(i = 0; i < errado.size(); i++){
        cout << "      " << i+1 << " - \33[1;31m" << errado[i] << "\33[0m\n";
    }
    cout << "\n   Palavra:\n      ";
    for(i = 0; i < resposta.length(); i++){
        if(resposta[i] != '_'){
            cout << "\033[1;32m" << resposta[i] << "\033[0m" << " ";
        }
        else {
            cout << resposta[i] << " ";
        }
    }
}

void fim(string resposta, string palavra_chave){
    if(resposta == palavra_chave){
        wcout << L"\033[1;32m\n\n   PARABÉNS! VOCÊ FOI SALVO!\033[0m\n";
    }
    else {
        wcout << L"\033[1;31m\n\n   VOCÊ FOI ENFORCADO!\033[0m\n";
        wcout << L"   A palavra correta era: ";
        cout << palavra_chave << "\n";
    }
}

bool invalido(string chute, vector<string> &chutados) {
    int i;
    char c;

    if(find(chutados.begin(), chutados.end(), chute) != chutados.end()) {
        wcout << L"\a\n   Você já fez esse palpite. Tente novamente.\n";
        Sleep(1000);
        return true;
    }

    for (i = 0; i < chute.length(); i++) {
        c = chute[i];
        if (!isalpha(c)) {
            wcout << L"\a\n   Apenas letras ou palavras são permitidas. Tente novamente.\n";
            Sleep(1000);
            return true;
        }
    }

    chutados.push_back(chute);
    return false;
}

bool reiniciar(int erros, vector<string> &errado, string &resposta, string &palavra_chave){
    char escolha;

    system("cls");

    mostra_erros(erros);
    mostra_status(errado, resposta);

    fim(resposta, palavra_chave);

    cout << "   Deseja jogar novamente? (S/N): ";
    cin >> escolha;
    if(toupper(escolha) == 'S') {
        return true;
    }
    else if(toupper(escolha) == 'N') {
        cout << "\n   Obrigado por jogar!\n";
        return false;
    }
    else {
        wcout << L"\n   Opção inválida. Tente novamente.";
        Sleep(1000);
        return reiniciar(erros, errado, resposta, palavra_chave);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    vector<string> palavras;

    //Vetor de palavras do jogo
    //***AQUI DÁ PARA ADICIONAR MAIS PALAVRAS***
    palavras.push_back("ABACATE");
    palavras.push_back("BICICLETA");
    palavras.push_back("CACHORRO");
    palavras.push_back("DINAMITE");
    palavras.push_back("ELEFANTE");
    palavras.push_back("FLAMENGO");
    palavras.push_back("GIRASSOL");
    palavras.push_back("HOSPITAL");
    palavras.push_back("IMPRESSORA");
    palavras.push_back("JANELA");
    palavras.push_back("KIWI");
    palavras.push_back("LIMONADA");
    palavras.push_back("MONTANHA");
    palavras.push_back("NAVIO");
    palavras.push_back("OCEANO");
    palavras.push_back("PANTERA");
    palavras.push_back("QUEIJO");
    palavras.push_back("RINOCERONTE");
    palavras.push_back("SAPATO");
    palavras.push_back("TARTARUGA");
    palavras.push_back("UNIVERSO");
    palavras.push_back("VITAMINA");
    palavras.push_back("XADREZ");
    palavras.push_back("IOGURTE");
    palavras.push_back("ZEBRA");
    palavras.push_back("ABACAXI");
    palavras.push_back("BOLA");
    palavras.push_back("CARRO");
    palavras.push_back("DADO");
    palavras.push_back("ELETRICIDADE");
    palavras.push_back("FOGO");
    palavras.push_back("GATO");
    palavras.push_back("HAMBURGUER");
    palavras.push_back("IGREJA");
    palavras.push_back("JARDIM");
    palavras.push_back("CANGURU");
    palavras.push_back("LARANJA");
    palavras.push_back("MELANCIA");
    palavras.push_back("NARIZ");
    palavras.push_back("OVO");
    palavras.push_back("PIZZA");
    palavras.push_back("ASTRONAUTA");
    palavras.push_back("BORBOLETA");
    palavras.push_back("RATO");
    palavras.push_back("SALADA");
    palavras.push_back("TOMATE");
    palavras.push_back("UVA");
    palavras.push_back("VACA");
    palavras.push_back("XICARA");
    palavras.push_back("YAKISOBA");
    palavras.push_back("ZOOLOGICO");
    palavras.push_back("ABELHA");
    palavras.push_back("BANANA");
    palavras.push_back("CAMA");
    palavras.push_back("DENTISTA");
    palavras.push_back("ESTRELA");
    palavras.push_back("FLORESTA");
    palavras.push_back("GELATINA");
    palavras.push_back("HAMBURGUERIA");
    palavras.push_back("ISQUEIRO");
    palavras.push_back("JORNAL");
    palavras.push_back("KETCHUP");
    palavras.push_back("LIVRO");
    palavras.push_back("MACACO");
    palavras.push_back("NOZ");
    palavras.push_back("OCULOS");
    palavras.push_back("PREGO");
    palavras.push_back("QUEIMADA");
    palavras.push_back("RUA");
    palavras.push_back("SACOLA");
    palavras.push_back("TATU");
    palavras.push_back("UNICORNIO");
    palavras.push_back("VITROLA");
    palavras.push_back("XEROX");
    palavras.push_back("IOGA");
    palavras.push_back("ZUMBI");

    bool recomecar = true;
    while(recomecar) {
        string palavra_chave = palavras[rand() % palavras.size()];
        string resposta = string(palavra_chave.length(), '_');
        int i;
        int erros = 0;
        vector<string> errado;
        bool chute = false;
        string chute_dado;
        vector<string> chutados;
        char letra;
        char opcao;

        while(resposta != palavra_chave && erros < 7){
            system("cls");

            mostra_erros(erros);
            mostra_status(errado, resposta);

            cout << "\n\n   Por favor, digite seu palpite ou a palavra inteira (0 - sair): ";
            cin >> chute_dado;

            if(chute_dado == "0"){
                cout << "\n   Obrigado por jogar!\n";
                return 0;
            }

            for(i = 0; i < chute_dado.length(); i++){
                chute_dado[i] = toupper(chute_dado[i]);
            }

            if(invalido(chute_dado, chutados)) {
                continue;
            }

            if(chute_dado.length() > 1){
                if(chute_dado == palavra_chave){
                    resposta = palavra_chave;
                    break;
                }
                else {
                    errado.push_back(chute_dado);
                    erros++;
                    continue;
                }
            }
            else {
                letra = toupper(chute_dado[0]);
            }

            for(i = 0; i<palavra_chave.length(); i++){
                if(letra == palavra_chave[i]){
                    resposta[i] = letra;
                    chute = true;
                }
            }

            if(chute){
                cout<<"\033[1;32m\n   Correto!\033[0m\n";
                Sleep(1000);
            }
            else{
                cout<<"\033[1;31m\n   Incorreto! Outra parte sua foi desenhada.\033[0m\n";
                errado.push_back(string(1, letra));
                erros++;
                Sleep(1000);
            }
            chute = false;
        }
        recomecar = reiniciar(erros, errado, resposta, palavra_chave);
    }
    return 0;
}
