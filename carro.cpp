// corrida maluca
#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

//identificando a funcao criada
void imprimir_espacos(int total1);


int main(int argc, char* args[]) // função principal do programa 
{

	bool sair = false;	//declarando as variaveis

	string piloto1, piloto2; // para o usuario da o nome a variavel


	int total1 = 0, total2 = 0;

	// imprimindo na tela o nome dos jogadores
	cout << "Digite o nome do piloto1:" << endl;
	cin >> piloto1;

	cout << "Digite o nome do piloto2:" << endl;
	cin >> piloto2;


	while (sair == false)
	{
		// mostrando a quantidade de espaço do carro
		int total_espacos = 70;


		srand((int)time(0));

		//gerando numero aleatorio de um, tres e quatro 
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//gerando numero aleatorio de um, tres e quatro
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;


		//imprimindo na tela o nome do jogo a largada e a chegada 
		cout << "corrida maluca:" << endl;

		cout << "largada:" << endl;
		cout << "chegada:" << endl;

		//imprimindo o nome do jogador 1
		cout << "Piloto 1:" << piloto1 << endl;

		//mostrando os espaços que o carro vai andar
		imprimir_espacos(total1);

		//imprimindo o carro na tela
		cout << "-|o=o>" << endl;


		//imprimindo na tela quanto o primeiro carro andou
		cout << "Valor que andou: " << total1 << endl;


		cout << "Piloto 2:" << piloto2 << endl;

		// Definindo a quantidade de espaços
		imprimir_espacos(total2);

		//imprimindo o carrinho na tela
		cout << " -|o=o> " << endl;

		//mostrando os espaços que o carro vai andar
		cout << "valor que o carrro andou: " << total2 << endl;


		system("cls"); // limpa a tela


					   //mostrando a condicao 
		if (total1 >= 60 || total2 >= 60)
		{
			sair = true;

		}


		else system("cls");


	}

	//indicando o termino do jogo
	cout << "Fim da corrida!" << endl;

	//imprindo na tela quem ganhou, e perdeu
	if (total1 >= 70) cout << piloto1 << "arrasou, voce venceu  " << piloto2 << ",que pena, voce perdeu " << endl;

	else if (total2 >= 60) cout << piloto2 << ", arrasou, voce venceu " << piloto1 << ", que pena, voce perdeu " << endl;
	else cout << "arrazaram, venceu os dois" << endl;

	//fim da função main
	return 0;

}



void imprimir_espacos(int total)
{
	// 
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";


	}
}