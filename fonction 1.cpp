#include<stdio.h>
#include<stdlib.h>
void signe (int A, int B){
	if(A*B)
		printf("les valeurs de A et B on le meme signe \n");
	else
		printf("Les valeurs de A et B on des signes differents \n");
}	
	int minimuim (int A,int B){
		int min ;
		if(A>B)
			min = B ;
		else
			min	= A ;
		return min ;
	}
	int maximuim (int A, int B){
	
		int max ;
		if (A>B)
			max = A;
		else 
			max = B;
		return max ; 
	}

int main ()
{
	int min, max ;
	int A, B;
	printf("veuillez entrez la somme de A :");
	scanf("%d",&A);
	printf("veuillez entrez la somme de B :");
	scanf("%d",&B);
	min = minimuim(A,B);
	max = maximuim(A,B);
	printf("la valeur minimale est : %d \n",min);
	printf("la valeur maximale est : %d \n",max);

	return 0 ;
}
