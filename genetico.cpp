#include <iostream>
#include "binario.h"
using namespace std;

/* esta fun��o ir� receber um valor inteiro vindo da fun��o principal, e das
fun��es de opera��es gen�ticas. e retornar� um valor boolenao, o valor e o peso da solu��o.*/
bool fun��odeavalia��o(unsigned short n1)
{
	/* Estas vari�veis cont�m o peso de cada um dos objetos*/
	int pesoA = 12;
	int pesoB = 3;
	int pesoC = 5;
	int pesoD = 4;
	int pesoE = 9;
	int pesoF = 1;
	int pesoG = 2;
	int pesoH = 3;
	int pesoI = 4;
	int pesoJ = 1;
	int pesoK = 2;
	int pesoL = 4;
	int pesoM = 5;
	int pesoN = 2;
	int pesoO = 4;
	int pesoP = 1;

	/* Estas vari�veis cont�m o valor de cada um dos objetos*/
	int valorA = 4;
	int valorB = 4;
	int valorC = 8;
	int valorD = 10;
	int valorE = 15;
	int valorF = 3;
	int valorG = 1;
	int valorH = 1;
	int valorI = 2;
	int valorJ = 10;
	int valorK = 20;
	int valorL = 15;
	int valorM = 10;
	int valorN = 3;
	int valorO = 4;
	int valorP = 12;


	unsigned short valor1 = n1;
	 /* Inicialmente, por meio da fun��o "testarbit" ser� realizado um teste
	 em cada um dos bits correspondete ao n�mero fornecido � "fun��odeavalia��o"
	 cada resultado ser� armazenado em uma vari�vel diferente que sera usado
	 para definir se o objeto est� ou n�o na mochila*/
	int resultado1 = testarbit(valor1, 0);
	int resultado2 = testarbit(valor1, 1);
	int resultado3 = testarbit(valor1, 2);
	int resultado4 = testarbit(valor1, 3);
	int resultado5 = testarbit(valor1, 4);
	int resultado6 = testarbit(valor1, 5);
	int resultado7 = testarbit(valor1, 6);
	int resultado8 = testarbit(valor1, 7);
	int resultado9 = testarbit(valor1, 8);
	int resultado10 = testarbit(valor1, 9);
	int resultado11 = testarbit(valor1, 10);
	int resultado12 = testarbit(valor1, 11);
	int resultado13 = testarbit(valor1, 12);
	int resultado14 = testarbit(valor1, 13);
	int resultado15 = testarbit(valor1, 14);
	int resultado16 = testarbit(valor1, 15);

	/* Como ainda n�o se sabe quais obejtos est�o ou n�o na mochila
	assumimos que os valores iniciais para o peso e o valor s�o 0*/
	int peso = 0;
	int valor = 0;
	 
	/* Estes ifs usam o resultado da fun��o "testarbit" que foram armazenadas
	nas vari�veis "resultado(x)" de modo que, se o valor da vari�vel for 
	igual a 1, ent�o o objeto est� na mochila e dessa forma o valor do peso
	vai ser somado com o valor correspondete ao peso armazenado ao bit que foi testado.
	Como o valor incial do peso � 0, ap�s a opera��o de adi��o, o peso receber� um novo valor
	caso o objeto esteja na mochila, caso ele n�o esteja o peso continuar� sendo 0, at� que
	um dos bits seja igual a 1, ou seja, ate que um dos objeto esteja na mochila. Fazendo
	esses procedimentos para todos os resultados dos teste, obtemos o peso total dos objetos na mochila.*/
	if (resultado1 == 1)
	{
		peso += pesoP;
	}
	if (resultado2 == 1)
	{
		peso += pesoO;
	}
	if (resultado3 == 1)
	{
		peso += pesoN;
	}
	if (resultado4 == 1)
	{
		peso += pesoM;
	}
	if (resultado5 == 1)
	{
		peso += pesoL;
	}
	if (resultado6 == 1)
	{
		peso += pesoK;
	}
	if (resultado7 == 1)
	{
		peso += pesoJ;
	}
	if (resultado8 == 1)
	{
		peso += pesoI;
	}
	if (resultado9 == 1)
	{
		peso += pesoH;
	}
	if (resultado10 == 1)
	{
		peso += pesoG;
	}
	if (resultado11 == 1)
	{
		peso += pesoF;
	}
	if (resultado12 == 1)
	{
		peso += pesoE;
	}
	if (resultado13 == 1)
	{
		peso += pesoD;
	}
	if (resultado14 == 1)
	{
		peso += pesoC;
	}
	if (resultado15 == 1)
	{
		peso += pesoB;
	}
	if (resultado16 == 1)
	{
		peso += pesoA;
	}
	
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	/* Estes ifs usam exatamente a mesma premissa dos ifs do peso,
	por�m neste caso, � usado para definir o valor total de todos os objetos.*/
	if (resultado1 == 1)
	{
		valor += valorP;
	}
	if (resultado2 == 1)
	{
		valor += valorO;
	}
	if (resultado3 == 1)
	{
		valor += valorN;
	}
	if (resultado4 == 1)
	{
		valor += valorM;
	}
	if (resultado5 == 1)
	{
		valor += valorL;
	}
	if (resultado6 == 1)
	{
		valor += valorK;
	}
	if (resultado7 == 1)
	{
		valor += valorJ;
	}
	if (resultado8 == 1)
	{
		valor += valorI;
	}
	if (resultado9 == 1)
	{
		valor += valorH;
	}
	if (resultado10 == 1)
	{
		valor += valorG;
	}
	if (resultado11 == 1)
	{
		valor += valorF;
	}
	if (resultado12 == 1)
	{
		valor += valorE;
	}
	if (resultado13 == 1)
	{
		valor += valorD;
	}
	if (resultado14 == 1)
	{
		valor += valorC;
	}
	if (resultado15 == 1)
	{
		valor += valorB;
	}
	if (resultado16 == 1)
	{
		valor += valorA;
	}
	
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	/* Este "cout" mostrar� o n�mero passado para a fun��o, o valor total e o peso total
	dos objetos que est�o na mochila, e a fun��o retornar� um valor em booleano
	que ser� usado na fun��o principal, para saber se a combina��o de bits referente
	ao numero passado para a fun��o, de acordo com os precedimentos realizados anteriormente,
	extrapola ou n�o o peso que a mochila suporta.*/
	cout << valor1 << " - $" << valor << " - " << peso << "Kg - ";
	if (peso <= 20)
		return 1;
	else
		return 0;
}
 
//----------------------------------------------------------------------------------------------------

/* esta fun��o ir� receber dois valores inteiros da fun��o principal e
retornar� um novo valore a partir do cruzamento entre os dois primeiros.*/
unsigned short cruzamentodepontounico(unsigned short n1, unsigned short n2)
{
	unsigned short valor1 = n1;
	unsigned short valor2 = n2;

	/* Utilizando as fun��es "bitsalto" e "bitsbaixo" obtemos metade dos bits
	de um valor inicial, e outra metade dos bits de outro valor inicial*/
	unsigned short valorrecebido1 = bitsalto(valor1);
	unsigned short valorrecebido2 = bitsbaixo(valor2);

	/* Utilizando a fun��o "operaor" obtemos o resultado final da jun��o de metade
	dos bits de um numero, e a metade dos bits de outro numero.*/
	unsigned short valorentre1e2 = opera�aoor(valorrecebido1, valorrecebido2);
	return(valorentre1e2);

}

//------------------------------------------------------------------------------------------------------

/* esta fun��o ir� receber dois valores inteiros da fun��o principal e
retornar� um novo valor a partir do cruzamento entre os dois primeiros.*/
unsigned short cruzamentoaritmetico(unsigned short n3, unsigned short n4)
{
	unsigned short valor1 = n3;
	unsigned short valor2 = n4;

	/* Utilizando a fun��o "opera��oand" garantimos que teremos uma nova solu��o,
	pois os bits dessa nova solu��o somente ser�o 1, nas posi��es em que ambas a solu��es
	iniciais tamb�m eram 1.*/
	unsigned short valorentre1e2 = opera�aoand(valor1, valor2);
	return(valorentre1e2);
}

//--------------------------------------------------------------------------------------------------------

/* Esta fun��o modifica um bit espec�fico de uma solu��o incial, obtendo assim uma nova solu��o.*/
unsigned short muta��osimples(unsigned short n5)
{
	unsigned short valor5 = n5;
	
	/* Usamos a fun��o "testarbit" para avaliar se o bit que ser� modificado � 1 ou 0.*/
	int resultadoteste = testarbit(valor5, 9);
	
	/* Ap�s obter o resultado do teste, caso o bit que ser� modificado seja igual a 1,
	usaremos a fun��o "desligarbit" para mudar ele para 0, caso contr�rio, ou seja, o bit
	que ser� modificado seja igual 0, usaremos a fun��o "ligarbit" para mudar o seu valor para 1.*/
	if (resultadoteste == 1)
	{
		unsigned short valorfinal = desligarbit(valor5, 9);
		return(valorfinal);
	}
	else
	{
		unsigned short valorfinal2 = ligarbit(valor5, 9);
		return(valorfinal2);
	}
}

//---------------------------------------------------------------------------------------------------------

/* Esta fun��o tamb�m modifica bits espec�ficos de uma solu��o inicial, por�m ao contr�rio da fun��o
"muta��osimples" que modifica um bit, esta fun��o modifica dois bits de uma mesma solu��o, obtendo assim
uma nova solu��o.*/
unsigned short muta��odupla(unsigned short n6)
{
	unsigned short valor6 = n6;
	
	/* Usamos a fun��o "testarbit" para avaliar se os bits que ser�o modificados s�o 1 ou 0*/
	int resultadoteste1 = testarbit(valor6, 3);
	int resultadoteste2 = testarbit(valor6, 12);
	
	/* Ap�s obter o resultado dos testes, teremos as seguintes situa��es*/
	
	/* Caso os dois bits que ser�o modificados sejam iguais a 1, usaremos a fun��o "deslgiarbit"
	em ambos, para mudar os valores para 0 */
	if (resultadoteste1 == 1)
	{
		if (resultadoteste2 == 1)
		{
			unsigned short valordoteste1 = desligarbit(valor6, 3);
			unsigned short valordoteste2 = desligarbit(valor6, 12);

			/*Utilizando a fun��o "opera�aandr" obtemos uma nova solu��o a partir
			da muta��o sofrida pelos bits da solu��o inicial.*/
			unsigned valorfinal = opera�aoand(valordoteste1, valordoteste2);
			return(valorfinal);
		}
		/* Caso o primeiro bit testado seja igual a 1 e o segundo bit testado seja igual a 0,
		usaremos a fun��o "desligarbit" no primeiro bit testado para ele mudar para 0, e usaremos
		a fun��o "ligarbit" no segundo bit testado para ele mudar para 1.*/
		else
		{
			unsigned short valordoteste3 = desligarbit(valor6, 3);
			unsigned short valordoteste4 = ligarbit(valordoteste3, 12);
			return(valordoteste4);
		}

	}

	/* Caso o primeiro bit testado seja igual a 0 e o segundo bit testado seja igual a 1,
	usaremos a fun��o "ligarbit" no primeiro bit testado para ele mudar para 1,e usaremos
	a fun��o "desligarbit" no segundo bit testado para ele mudar para 0.*/
	else
	{
		if (resultadoteste2 == 1)
		{
			unsigned short valordoteste5 = ligarbit(valor6, 3);
			unsigned short valordoteste6 = desligarbit(valordoteste5, 12);

			return(valordoteste6);
		}

		/* Caso os dois bits que ser�o modificados sejam iguais 0, usaremos a fun��o "ligarbit"
		em ambos, para mudar os valores para 1.*/
		else
		{
			unsigned short valordoteste7 = ligarbit(valor6, 3);
			unsigned short valordoteste8 = ligarbit(valor6, 12);
			
			/*Utilizando a fun��o "opera�aoor" obtemos uma nova solu��o a partir
			da muta��o sofrida pelos bits da solu��o inicial.*/
			unsigned valorfinal = opera�aoor(valordoteste7, valordoteste8);
			return(valorfinal);
		}

	}

}