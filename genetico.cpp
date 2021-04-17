#include <iostream>
#include "binario.h"
using namespace std;

/* esta função irá receber um valor inteiro vindo da função principal, e das
funções de operações genéticas. e retornará um valor boolenao, o valor e o peso da solução.*/
bool funçãodeavaliação(unsigned short n1)
{
	/* Estas variáveis contêm o peso de cada um dos objetos*/
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

	/* Estas variáveis contêm o valor de cada um dos objetos*/
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
	 /* Inicialmente, por meio da função "testarbit" será realizado um teste
	 em cada um dos bits correspondete ao número fornecido à "funçãodeavaliação"
	 cada resultado será armazenado em uma variável diferente que sera usado
	 para definir se o objeto está ou não na mochila*/
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

	/* Como ainda não se sabe quais obejtos estão ou não na mochila
	assumimos que os valores iniciais para o peso e o valor são 0*/
	int peso = 0;
	int valor = 0;
	 
	/* Estes ifs usam o resultado da função "testarbit" que foram armazenadas
	nas variáveis "resultado(x)" de modo que, se o valor da variável for 
	igual a 1, então o objeto está na mochila e dessa forma o valor do peso
	vai ser somado com o valor correspondete ao peso armazenado ao bit que foi testado.
	Como o valor incial do peso é 0, após a operação de adição, o peso receberá um novo valor
	caso o objeto esteja na mochila, caso ele não esteja o peso continuará sendo 0, até que
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
	porém neste caso, é usado para definir o valor total de todos os objetos.*/
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

	/* Este "cout" mostrará o número passado para a função, o valor total e o peso total
	dos objetos que estão na mochila, e a função retornará um valor em booleano
	que será usado na função principal, para saber se a combinação de bits referente
	ao numero passado para a função, de acordo com os precedimentos realizados anteriormente,
	extrapola ou não o peso que a mochila suporta.*/
	cout << valor1 << " - $" << valor << " - " << peso << "Kg - ";
	if (peso <= 20)
		return 1;
	else
		return 0;
}
 
//----------------------------------------------------------------------------------------------------

/* esta função irá receber dois valores inteiros da função principal e
retornará um novo valore a partir do cruzamento entre os dois primeiros.*/
unsigned short cruzamentodepontounico(unsigned short n1, unsigned short n2)
{
	unsigned short valor1 = n1;
	unsigned short valor2 = n2;

	/* Utilizando as funções "bitsalto" e "bitsbaixo" obtemos metade dos bits
	de um valor inicial, e outra metade dos bits de outro valor inicial*/
	unsigned short valorrecebido1 = bitsalto(valor1);
	unsigned short valorrecebido2 = bitsbaixo(valor2);

	/* Utilizando a função "operaor" obtemos o resultado final da junção de metade
	dos bits de um numero, e a metade dos bits de outro numero.*/
	unsigned short valorentre1e2 = operaçaoor(valorrecebido1, valorrecebido2);
	return(valorentre1e2);

}

//------------------------------------------------------------------------------------------------------

/* esta função irá receber dois valores inteiros da função principal e
retornará um novo valor a partir do cruzamento entre os dois primeiros.*/
unsigned short cruzamentoaritmetico(unsigned short n3, unsigned short n4)
{
	unsigned short valor1 = n3;
	unsigned short valor2 = n4;

	/* Utilizando a função "operaçãoand" garantimos que teremos uma nova solução,
	pois os bits dessa nova solução somente serão 1, nas posições em que ambas a soluções
	iniciais também eram 1.*/
	unsigned short valorentre1e2 = operaçaoand(valor1, valor2);
	return(valorentre1e2);
}

//--------------------------------------------------------------------------------------------------------

/* Esta função modifica um bit específico de uma solução incial, obtendo assim uma nova solução.*/
unsigned short mutaçãosimples(unsigned short n5)
{
	unsigned short valor5 = n5;
	
	/* Usamos a função "testarbit" para avaliar se o bit que será modificado é 1 ou 0.*/
	int resultadoteste = testarbit(valor5, 9);
	
	/* Após obter o resultado do teste, caso o bit que será modificado seja igual a 1,
	usaremos a função "desligarbit" para mudar ele para 0, caso contrário, ou seja, o bit
	que será modificado seja igual 0, usaremos a função "ligarbit" para mudar o seu valor para 1.*/
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

/* Esta função também modifica bits específicos de uma solução inicial, porém ao contrário da função
"mutaçãosimples" que modifica um bit, esta função modifica dois bits de uma mesma solução, obtendo assim
uma nova solução.*/
unsigned short mutaçãodupla(unsigned short n6)
{
	unsigned short valor6 = n6;
	
	/* Usamos a função "testarbit" para avaliar se os bits que serão modificados são 1 ou 0*/
	int resultadoteste1 = testarbit(valor6, 3);
	int resultadoteste2 = testarbit(valor6, 12);
	
	/* Após obter o resultado dos testes, teremos as seguintes situações*/
	
	/* Caso os dois bits que serão modificados sejam iguais a 1, usaremos a função "deslgiarbit"
	em ambos, para mudar os valores para 0 */
	if (resultadoteste1 == 1)
	{
		if (resultadoteste2 == 1)
		{
			unsigned short valordoteste1 = desligarbit(valor6, 3);
			unsigned short valordoteste2 = desligarbit(valor6, 12);

			/*Utilizando a função "operaçaandr" obtemos uma nova solução a partir
			da mutação sofrida pelos bits da solução inicial.*/
			unsigned valorfinal = operaçaoand(valordoteste1, valordoteste2);
			return(valorfinal);
		}
		/* Caso o primeiro bit testado seja igual a 1 e o segundo bit testado seja igual a 0,
		usaremos a função "desligarbit" no primeiro bit testado para ele mudar para 0, e usaremos
		a função "ligarbit" no segundo bit testado para ele mudar para 1.*/
		else
		{
			unsigned short valordoteste3 = desligarbit(valor6, 3);
			unsigned short valordoteste4 = ligarbit(valordoteste3, 12);
			return(valordoteste4);
		}

	}

	/* Caso o primeiro bit testado seja igual a 0 e o segundo bit testado seja igual a 1,
	usaremos a função "ligarbit" no primeiro bit testado para ele mudar para 1,e usaremos
	a função "desligarbit" no segundo bit testado para ele mudar para 0.*/
	else
	{
		if (resultadoteste2 == 1)
		{
			unsigned short valordoteste5 = ligarbit(valor6, 3);
			unsigned short valordoteste6 = desligarbit(valordoteste5, 12);

			return(valordoteste6);
		}

		/* Caso os dois bits que serão modificados sejam iguais 0, usaremos a função "ligarbit"
		em ambos, para mudar os valores para 1.*/
		else
		{
			unsigned short valordoteste7 = ligarbit(valor6, 3);
			unsigned short valordoteste8 = ligarbit(valor6, 12);
			
			/*Utilizando a função "operaçaoor" obtemos uma nova solução a partir
			da mutação sofrida pelos bits da solução inicial.*/
			unsigned valorfinal = operaçaoor(valordoteste7, valordoteste8);
			return(valorfinal);
		}

	}

}