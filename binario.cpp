/* Esta fun��o altera o valor de um bit de 0 para 1, e retorna o novo n�mero
correspondente*/
unsigned short ligarbit(unsigned short n1, int n2)
{
	int bit = n2;
	unsigned short mascara = 1 << bit;
	unsigned short valorretonado = n1;
	valorretonado = valorretonado | mascara;
	return(valorretonado);
}
/* Esta fun��o altera o valor de um bit de 1 para 0, e retorna o novo n�mero
correspondente*/
unsigned short desligarbit(unsigned short n1, int n2)
{
	int bit = n2;
	unsigned short mascara2 = ~(1 << bit);
	unsigned short valorretornado2 = n1;
	valorretornado2 = valorretornado2 & mascara2;
	return(valorretornado2);
}
/* Esta fun��o teste se um determinado bit � 0 ou 1, e retorna essa informa��o*/
bool testarbit(unsigned short n1, int n2)
{
	unsigned short mascara = 1 << n2;
	if (n1 & mascara)
		return true;
	else
		return false;
}
/* Esta fun��o realiza a opera��o "and" entre duas sequ�ncias de bits, e retorna o novo numero
correspondente*/
unsigned short opera�aoand(unsigned short n1, unsigned short n2)
{
	unsigned short valorand = n1 & n2;
	return(valorand);
}
/*Esta fun��o realiza a opera��o "or" entre duas sequ�ncias de bits, e retorna o novo numero
correspondente*/
unsigned short opera�aoor(unsigned short n1, unsigned short n2)
{
	unsigned short valoror = n1 | n2;
	return(valoror);
}
/* Esta fun��o "pega" apenas os 8 bits de mais baixa ordem
de um numero, e retorna um novo n�mero correspondente.*/
unsigned short bitsbaixo(unsigned short n1)
{
	unsigned short mascara = 255;
	unsigned short valorrecebido = n1;
	valorrecebido = valorrecebido & mascara;
	unsigned short valorfinal = valorrecebido;
	return(valorfinal);
}
/* Esta fun��o "pega" apenas os 8 bits de mais alta ordem
de um numero, e retorna um novo n�mero correspondente.*/
unsigned short bitsalto(unsigned short n1)
{
	unsigned char mascara = ~0;
	unsigned short valorrecebido = n1;
	valorrecebido = ((valorrecebido >> 8) & mascara);
	unsigned short valorfinal = (valorrecebido << 8);
	return(valorfinal);
}
