#include <stdio.h>
#include <stdlib.h>




struct grille
{
	int size;
	int* contenu;
};
typedef struct grille grille;

struct piece
{
	int hauteur;
	int largeur;
	char form[3][3];
};
typedef struct piece piece;

grille CreerGrille(int S)
{
	grille G;
	G.size = S;
	G.contenu = (int*)malloc(S*S*sizeof(int)) ;
	for (int i = 0; i < S*S; i++)
	{
	 	G.contenu[i] = 0;
	}
	return G;
}


void PrintGrille(grille G)
{
	for (int i = 0; i < G.size*G.size; i++)
	{	
		if (i%G.size == 0)
		{
			printf("\n");
		}
		printf("%d ", G.contenu[i]);
	}
	for (int j = 0; j < G.size; j++)
	{
		if (j == 0)
		{
			printf("\n");
		}
		printf("%d ",j);
	}
	
	return;
}

piece CreerPiece()
{
	piece P1;
	P1.hauteur = 2;
	P1.largeur = 2;
	int * forme = (int*)malloc(4*sizeof(int));
	for (int i = 0; i<4; i++)
	{
		forme[i] = 1;
	}
}


int main(int argc, char const *argv[])
{
	char pieces[] = {"*00\n*00\n**0\n\n000\n0**\n0**\n\n"}

	grille G = CreerGrille(10);
	PrintGrille(G);
	return 0;
}



