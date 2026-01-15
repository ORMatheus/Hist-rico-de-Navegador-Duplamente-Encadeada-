#include <iostream>
#include <limits>
#include "HistoryList.h"
using namespace std;
int main()
{
    HistoryList historico;
    int opcao = -1;

    while (opcao != 0)
    {
        cout << "Digite um valor para prosseguirmos:" << endl;
        cout << "1 - Visitar Site" << endl;
        cout << "2 - Voltar" << endl;
        cout << "3 - Avancar" << endl;
        cout << "4 - Mostrar Historico" << endl;
        cout << "0 - Encerrar Programa" << endl;
        cin >> opcao;
        if (opcao == 1)
        {
            string url;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite a URL do Site:";
            getline(cin, url);
            historico.visit(url);
        }
        else if (opcao == 2)
        {
            if (historico.back())
            { // estou tendo um retorno true
                cout << "Voltando para o site anterior:";
            }
            else
            {
                cout << "Impossivel voltar , pois nenhum endereco foi encontrado.";
            }
        }
        else if (opcao == 3)
        {
            if (historico.forward())
            { // significa que eu posso avançar
                cout << "Avancar para o proximo site do historico." << endl;
            }
            else
            {
                cout << "Impossivel avacar para o proximo site" << endl;
            }
        }
        else if (opcao == 4)
        {
            historico.printHistory();
        }
    }
}