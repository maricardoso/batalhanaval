#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "cabeca.h"

using namespace std;

int menu (){

 system("cls");
 int opcaomenu;

    cout << "\t|****************************************************************|\n";
    cout << "\t|******************BATALHA NAVAL- UNIARARS***********************|\n";
    cout << "\t|*****************         O BESOURINHO        ******************|\n";
    cout << "\t|****************************************************************|\n";


cout << "\n\t\t[1]- Inicio";
cout << "\n\t\t[2]- Instrucoes";
cout << "\n\t\t[3]- Creditos";
cout << "\n\t\t[4]- Sair\n";

cout << "\n\t\t Digite a opcao desejada:";
cin>> opcaomenu;

return opcaomenu;

}
char instrucoes (){

    cout << "\t|****************************************************************|\n";
    cout << "\t|****************************Instruções**************************|\n";
    cout << "\t|****************************************************************|\n";
    cout << "\t|                                                                |\n";
    cout << "\t|   Batalha naval consiste em afundar todas as embarcações       |\n";
    cout << "\t|                     presentes no tabuleiro.                    |\n";
    cout << "\t|                                                                |\n";
    cout << "\t|            O contador no canto superior da tela                |\n";
    cout << "\t| mostra sempre a quantidade de tentativas restantes ao jogador. |\n";
    cout << "\t|                                                                |\n";
    cout << "\t|   O jogador tem um numero determinado de tentativas (tiros)    |\n";
    cout << "\t|   que varia de acordo com o grau de dificuldade escolhido.     |\n";
    cout << "\t|                                                                |\n";
    cout << "\t|                                                                |\n";
    cout << "\t|                                                                |\n";
    cout << "\t| ENTER -> Para Voltar                                           |\n";
    cout << "\t|                                                                |\n";
    cout << "\t|****************************************************************|\n";
    cout << "\t|****************************************************************|\n";
    cout << "\t|****************************************************************|\n\n\n";

}

int mapa (){

    char mapaescondido[16][26]=
  {

    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}};


    char mapareal[16][26]={
      {'~','E','E','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','S','~','~','~','~','P','P','P','P','P','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','H','H','H','H','~','~','~','~','~'},
      {'~','~','~','~','~','~','~','E','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','C','~','~','~','E','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','C','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','C','~','~','~','~','~','~','~','~','~','~','~','S','~','~','~','~','~','~','H','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','H','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','H','H','H','H','~','~','~','~','~','H','~','~'},
      {'~','~','~','~','~','~','~','S','~','~','~','~','~','~','~','~','~','~','~','~','~','~','H','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','C','C','C','~','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','E','E','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','~','~','H','H','H','H','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~'},
      {'P','P','P','P','P','~','~','~','~','~','~','~','C','C','C','~','~','~','~','~','~','~','~','~','~'}};

    /*Legenda:
  1 Casa  = S = Submarino = 1
  2 Casas = E = Encouracado = 2
  3 Casas = C = Cruzador = 3
  4 Casas = H = Hidro Avião = 4
  5 5asas = P = Porta Aviao = 2
  */

    cout << "\t|****************************************************************|\n";
    cout << "\t|******************BATALHA NAVAL- UNIARARS***********************|\n";
    cout << "\t|*****************         O BESOURINHO        ******************|\n";
    cout << "\t|****************************************************************|\n\n\n";

  int x,y, tiros, sub=0, enc=0,cruz=0,hidro=0,porta=0, linha, coluna, soma=0;

   for ( linha=0;linha<16;linha++)
    {
      cout <<"\t\t\t    ";
      for( coluna=0;coluna<26;coluna++) {
        cout <<mapaescondido[linha][coluna];
      }
      cout <<"\n";
    }

  cout << "\n\tContém 3 Submarinos(S)= 1 casa | Total Destruido:"<< sub << "\n\tContém 3 Encouracados(E)= 2 casas | Total Destruido:"<< enc << " \n\tContém 3 Cruzadores(C) = 3 casas | Total Destruido:"<< cruz << "\n\tContém 4 Hidros Aviões(H) = 4 casas | Total Destruido:"<< hidro << " \n\tContém 5 Portas Aviões(P) = 2 casas| Total Destruido:"<< porta << "\n";

  for (tiros = 1; tiros <100; tiros ++)
  {
    cout << "\nDigite Coordenadas X:";
    cin >> x;
    cout << "\nDigite Coordenadas Y:";
    cin >> y;

    x=x-1;

    y=y-1;


    // tiro no submarino----------------------------------------------------------------------------

    if (mapareal[x][y]=='S')
    {
      cout << "\nVoce acertou um Submarino - 1 casa \n";
      sub ++;
      mapaescondido[x][y]='S';
      cout << "Voce destruiu: " << sub << " Total de Submarino: 3";
      if (sub == 3)
      {
        cout << "\n Voce destruiu todos submarinos! \n";
      }

    }

    // tiro no Encouracado--------------------------------------------------------------------------

    else if (mapareal[x][y]=='E')
    {
      cout << "\nVoce acertou um Encouracado - 2 casas\n";
      enc ++;
      mapaescondido[x][y]='E';
      cout << "Voce destruiu: " << enc << " Total de Encouracado: 3";
      if (enc == 6)
      {
        cout << "\n Voce destruiu todos Encouraçado! \n";
      }
    }

    // tiro no Cruzador----------------------------------------------------------------------

    else if (mapareal[x][y]=='C')
    {
      cout << "\nVoce acertou um Cruzador - 3 casas\n";
      cruz ++;
      mapaescondido[x][y]='C';
      cout << "Voce destruiu: " << cruz << " Total de Cruzador: 3";
      if (cruz == 9)
      {
        cout << "\n Voce destruiu todos Cruzadores! \n";
      }
    }

    // tiro no hidro avião-------------------------------------------------------------------

    else if (mapareal[x][y]=='H')
    {
      cout << "\nVoce acertou um Hidro Avião - 4 casas\n";
      hidro ++;
      mapaescondido[x][y]='H';
      cout << "Voce destruiu: " << hidro << " Total de Hidro Aviao: 4";

      if (hidro == 16)
      {
        cout << "\n Voce destruiu todos Hidro Aviao! \n";
      }
    }

    // tiro no porta avião-------------------------------------------------------------------


    else if (mapareal[x][y]=='P')
    {
      cout << "\nVoce acertou um Porta Avião - 5 casas\n";
      porta ++;

      mapaescondido[x][y]='P';

      cout << "Voce destruiu: " << porta << " Total de Porta Aviao: 2";
      if (porta == 10)
      {
        cout << "\n\n Voce destruiu todos Porta Aviao! \n";
      }
    }    // tiro dentro da aguá-------------------------------------------------------------------

    else
    {
      cout << "\n\t\t\t Voce Acertou na agua!\n\n\n";
      mapaescondido[x][y]='~';
    }

    system("cls");

    cout << "\t|****************************************************************|\n";
    cout << "\t|******************BATALHA NAVAL- UNIARARS***********************|\n";
    cout << "\t|*****************         O BESOURINHO        ******************|\n";
    cout << "\t|****************************************************************|\n\n\n";
       for ( linha=0;linha<16;linha++)
    {
      cout <<"\t\t\t    ";
      for( coluna=0;coluna<26;coluna++) {
        cout <<mapaescondido[linha][coluna];
      }
      cout <<"\n";
    }
  cout << "\n\tContém 3 Submarinos(S)= 1 casa | Total Destruido:"<< sub << "\n\tContém 3 Encouracados(E)= 2 casas | Total Destruido:"<< enc << " \n\tContém 3 Cruzadores(C) = 3 casas | Total Destruido:"<< cruz << "\n\t Contém 4 Hidros Aviões(H) = 4 casas | Total Destruido:"<< hidro << " \n\tContém 5 Portas Aviões(P) = 2 casas| Total Destruido:"<< porta << "\n";


    // hidro = 16 | porta = 10 | enc = 6 | cruz = 9 | sub = 2
    soma = hidro + porta + enc + sub + cruz;
    cout << "\nTIROS:" << tiros <<"/100\n\n";

// system ( "cls");


}
system( "pause");

return soma;

}

    void ganhou(){
system("cls");
    for(;;){
    cout <<"\t\t     VOCE GANHOU!PARABENS!      \n";
    cout <<"\t\t     ____________________       \n";
    cout <<"\t\t   /|                    |\\    \n";
    cout <<"\t\t /  |                    | \\   \n";
    cout <<"\t\t |  |                    |  |   \n";
    cout <<"\t\t  \\ |                    | /   \n";
    cout <<"\t\t   \\|                    |/    \n";
    cout <<"\t\t    |                    |      \n";
    cout <<"\t\t     \\                  /      \n";
    cout <<"\t\t      \\                /       \n";
    cout <<"\t\t       \\              /        \n";
    cout <<"\t\t        |            |          \n";
    cout <<"\t\t         |          |           \n";
    cout <<"\t\t          |        |            \n";
    cout <<"\t\t           |      |             \n";
    cout <<"\t\t           |      |             \n";
    cout <<"\t\t      _____|      |_____        \n";
    system("pause");
    }
}
void perdeu(){
    system("cls");
    cout <<"\t\t    VOCE GANHOU! SO QUE NAO!    \n";
    cout <<"\t\t     ____________________       \n";
    cout <<"\t\t   /|                    |\\    \n";
    cout <<"\t\t /  |     --      --     | \\   \n";
    cout <<"\t\t |  |                    |  |   \n";
    cout <<"\t\t  \\ |      ______        | /   \n";
    cout <<"\t\t   \\|                    |/    \n";
    cout <<"\t\t    |                    |      \n";
    cout <<"\t\t     \\   VOCE PERDEU   //      \n";
    cout <<"\t\t      \\   ILUDIDO     //       \n";
    cout <<"\t\t       \\             //        \n";
    cout <<"\t\t        |            |          \n";
    cout <<"\t\t         |          |           \n";
    cout <<"\t\t          |        |            \n";
    cout <<"\t\t           |      |             \n";
    cout <<"\t\t           |      |             \n";
    cout <<"\t\t      _____|      |_____        \n";
    system("pause");

}
char creditos (){
    system ("cls");
        cout << "\n\t\t *************Creditos*************";

        cout << "\n\n\t\t ---------------GRUPO--------------";
        cout << "\n\t\t Jheniffer Ferreira ";
        cout << "\n\t\t Mariana Cardoso";
        cout << "\n\t\t Sergio Nascimento";
        cout << "\n\t\t Eliel Paulo Nascimento";
        cout << "\n\t\t Joao Zorzo";

        cout << "\n\n\t\t ------------PROFESSORA------------";
        cout <<" \n\t\t Suzete";

        cout << "\n\n\n\t Turma A - Noturno\n\n\n";
        system("pause");
return 0;

}









