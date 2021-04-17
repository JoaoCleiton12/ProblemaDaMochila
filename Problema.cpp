#include <iostream>
#include "binario.h"
#include "genetico.h"


/* usando estes c�digos definidos pela ANSI
� possivel alterar as cores do terminal de comando.*/
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
	
	/* este comando limpa a tela ap�s o usu�rio digitar as solu��es iniciais*/
	system("cls");
	

	cout << "Resultado da avaliacao" << endl;
	cout << "-----------------------" << endl;

	/* Usando estes ifs para avaliar se o valor do peso � igual a 1(ou seja analisa se o retorno
	da fun��o � verdadeira), se for o if retorna um OK na cor verde, caso contr�rio 
	retorna um X na cor vermelha.*/

	/* Os seis primeiros ifs avaliam as solu��es iniciais fornecidas pelo usu�rio.*/
	if (fun��odeavalia��o(numero1) == 1)
	{
		cout << green << "OK" << default << endl;

	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(numero2) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}
	
	if (fun��odeavalia��o(numero3) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(numero4) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(numero5) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(numero6) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	cout << "-----------------------" << endl;

	/* Os quatro ifs restantes, avaliam as novas solu��es obtidas pelos procedimentos 
	realizados pelos operadores gen�ticos, a partir da solu��es iniciais fornecidas.*/
	if (fun��odeavalia��o(cruzamentodepontounico(numero1, numero2)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(cruzamentoaritmetico(numero3, numero4)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(muta��osimples(numero5)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (fun��odeavalia��o(muta��odupla(numero6)) == 1)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}
}



