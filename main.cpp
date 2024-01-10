#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "cabeca.h";

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

int opcao, soma;

do{
opcao = menu ();


    switch (opcao) {
//--------------------------------iniciar jogo
case 1:

        system("cls");

        mapa ();


        if (soma == 43)
        {
           ganhou();
        }

        else
        {
           perdeu();
        }

        system("cls");

break;

//--------------------------------instrucoes
case 2:
        system ( "cls");
        instrucoes ();
        system("pause");
break;

//--------------------------------creditos
case 3:
    creditos ();

break;

//------------------------------sair
case 4:
        system ( "cls");
        cout << "\n\n\t\tVoce escolheu sair!\n\n";
        return 0;
        break;
}

}while (opcao!=4);

    return 0;
}


