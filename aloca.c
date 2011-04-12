#include <stdio.h>
#include <stdlib.h>

#typedef unsigned char byte;


struct Memo
{
	char aloc=0;
	int tam;
}memo

int *p;

//int main(int argc, char *argv[]
int main(void)
{
	int t;
	scanf("qual o tamanho de memória desejado? %d", t );
	aloca(t);
}

int aloca(int tamanho)
{
	
	memo leitor;
	leitor->tam = tamanho;
	leitor->aloc = 1;
	*p = *p + tamanho + sizeof(memo);
}
/*
int liberamemo(int *p)
{

}
*/
