#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nomeJAVA;
    string nomeParaRodar = "RodadorBATCH";
    ofstream rodar(nomeParaRodar + ".bat");
    string rodarCOMANDO = "start " + nomeParaRodar + ".bat";

    cout << "Digite o nome do arquivo: ";
    cin >> nomeJAVA;

    if (rodar.is_open()) {
        rodar << "@echo off\n";
        rodar << "javac " + nomeJAVA + ".java\n";
        rodar << "java " + nomeJAVA + "\n";
        rodar << "pause";
        rodar.close();
        cout << "Sucesso!";
        system(rodarCOMANDO.c_str());
    } else {
        cout << "Erro!\n";
        cout << "Tente NÃO COLOCAR A EXTENÇÃO!\n";
        cout << "Verifique se a sua extenção é (.java)\n";
    }

    return 0;
}