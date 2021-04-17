#include <iostream>
#include "binario.h"
#include "genetico.h"


/* usando estes códigos definidos pela ANSI
é possivel alterar as cores do terminal de comando.*/
#define green "\033[32m"
#define red "\033[4;31m"
#define default "\033[m"
using namespace std;


int main()
{
	cout << "Entre com 6 solucoes iniciais (numeros entre 0 e 65535):\n";
	unsigned short numero1, numero2, numero3, numero4, numero5, numero6;
	cin >> numero1;
	cin >> numero2;
	cin >> numero3;
	cin >> numero4;
	cin >> numero5;
	cin >> numero6;
	
	/* este comando limpa a tela após o usuário digitar as soluções iniciais*/
	system("cls");
	

	cout << "Resultado da avaliacao" << endl;
	cout << "-----------------------" << endl;

	/* Usando estes ifs para avaliar se o valor do peso é igual a 1(ou seja analisa se o retorno
	da função é verdadeira), se for o if retorna um OK na cor verde, caso contrário 
	retorna um X na cor vermelha.*/

	/* Os seis primeiros ifs avaliam as soluções iniciais fornecidas pelo usuário.*/
	if (funçãodeavaliação(numero1) == 1)
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(numero2) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}
	
	if (funçãodeavaliação(numero3) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(numero4) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(numero5) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(numero6) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	cout << "-----------------------" << endl;

	/* Os quatro ifs restantes, avaliam as novas soluções obtidas pelos procedimentos 
	realizados pelos operadores genéticos, a partir da soluções iniciais fornecidas.*/
	if (funçãodeavaliação(cruzamentodepontounico(numero1, numero2)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(cruzamentoaritmetico(numero3, numero4)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(mutaçãosimples(numero5)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funçãodeavaliação(mutaçãodupla(numero6)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}
}



