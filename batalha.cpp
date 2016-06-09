#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[]) // função principal do seu programa 
{
	bool sair = false; // usando o laço para sair
	string jog1, jog2; // salvando o nome dos jogadores
	int vida1 = 20, vida2 = 20; // quantidade de vida do jogador no inicio
	int A = 4, D = 2; // defesa e o ataque dos jogaderes


	cout << "Digite o nome do jogador 1:" << endl; // para o 1 primerio jogador digita o nome 
	cin >> jog1; // salvando o nome do jogado 

				 // Mesma coisa do primeiro jogador
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	// inicia a variavel
	while (sair == false) {

		// imprimindo os personagens, o nome e a vida, o ataque e a defesa 

		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;

		// dar uma pausa para imprimir os personagem na tela 
		system("pause");

		// indica a quantidade o jogador deve jogar o dado 
		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//Gera um número aletorio
		dado6 = rand() % 6 + 1;

		//Execultando comandos, Gera um dano no jogador se o numero for > 4
		if (dado6 > 4)
		{
			// a indicando o dano que o jogado causou, se ele acertou, e vai para a jogada
			vida1 = vida1 - dado6;
			cout << jog1 << "Dano:" << -dado6 << endl; // a vida do jogador 
			cout << jog2 << "Acertou!" << endl; // se o jogador acertou
			cout << "Proxima jogada (Digite enter):" << endl; // imprimir na tela enter para o jogado ir para proxima jogada
			cin.get();
		}

		else if (dado6 <= 4) //  sequencia de execução do programa
		{

			// indicando se o jogador errou e vai aperta enter para ir pra proxima jogada	
			cout << jog2 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}
		//Mesma coisa para o jogador 2, mesmo comentario do jogador 1
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{

			vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls");

		// se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela
		else system("cls");
	}


	cout << "Fim de jogo!" << endl; // mopstra na tela que o jogo acabou

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl; // imprimir na tela se o jogador ganhou
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl; // a quantidade de vida
	else cout << "Os dois perderam!" << endl; // imprimir na tela que os dois jogadores perderam

	return 0; // retorna para o inicio


}