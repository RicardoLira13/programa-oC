#include <stdio.h>

//recursiva do movimento da torre	
void movimentoTorre(int numeroMovimentos){
	if(numeroMovimentos <= 5){
		printf("Movimento %d - Direita\n", numeroMovimentos);
		
		movimentoTorre(numeroMovimentos + 1);
	}
}//<-- Fim da Recursiva	


//recursiva do movimento do Bispo
void movimentoBispo(int numeroMovimentos){
	if(numeroMovimentos <= 5){
		printf("Movimento %d - Cima/Direita\n", numeroMovimentos);
		
		movimentoBispo(numeroMovimentos + 1);	
	}
}//<-- Fim da Recursiva


//recursiva do movimento da Rainha
void movimentoRainha(int numeroMovimentos){
	if(numeroMovimentos <= 8){
		printf("Movimento %d - Cima/Direita\n", numeroMovimentos);
		
		movimentoRainha(numeroMovimentos + 1);
	}
}//<-- Fim da Recursiva
		
int main(){
	
	int torre = 1;
	int bispo = 1;
	int rainha = 1;
	
	printf("*Movimentos da Torre*\n\n");
	movimentoTorre(torre);
	
	printf("-----------------------\n");
	
	printf("*Movimentos do Bispo*\n\n");
	movimentoBispo(bispo);
	
	printf("-----------------------\n");

	printf("*Movimentos da Rainha*\n\n");
	movimentoRainha(rainha);

    printf("-----------------------\n");

	printf("*Movimentos do Cavalo*\n\n");

    //movimento do cavalo
    int cavalo = 1;

   do{
        //for com mais de uma variavel declarada
		for(int i = 1, j = 3; i <= j; i++, j--){
			printf("Movimento %d: Cima!\n", i);
		} 
		printf("Movimento 3: Direita!\n");
		cavalo++;
		
	}while(cavalo <= 1);

   printf("\n\n\n");

	return 0;
} 