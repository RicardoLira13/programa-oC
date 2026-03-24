#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portugues");
	
	//criação da matriz e declaração de variaveis
	int tabuleiro[10][10];
	int navio_horizontal1[3] = {3, 3, 3};
	int navio_diagonal1[3] = {3, 3, 3};
	int navio_diagonal2[3] = {3, 3, 3};
	int linha, coluna, direcao;
	int valido = 0;
	
    //"cabeçalho do jogo"
	printf("===========================\n");
	printf("\n");
	printf("    ***BATALHA NAVAL***   \n");
	printf("\n");
	printf("0 - Agua do Mar\n3 - Navio de Guerra\n ");
	printf("===========================\n");
	
	//FOR para atribuir o valor 0 para a matriz
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			tabuleiro[i][j] = 0;				
		}
	}
	
	printf("\n");
	
	//print do tabuleiro (sem posição dos navios)
	printf("    ");
	for(int i = 0; i < 10; i++){
		printf("%d ", i);
	}
	printf("\n");
	
	for(int i = 0; i < 10; i++){
		printf("%d - ", i);
		for(int j = 0; j < 10; j++){
			printf("%d ", tabuleiro[i][j]);				
		}
		printf("\n");
	}

	//posicionando 1 navio horizontal de forma manual
	tabuleiro[6][2] = navio_horizontal1[0];
    tabuleiro[6][3] = navio_horizontal1[1];
    tabuleiro[6][4] = navio_horizontal1[2];
	 
    //posicionando dois navios na diagonal
    tabuleiro[0][0] = navio_diagonal1[0];
    tabuleiro[1][1] = navio_diagonal1[1];
	tabuleiro[2][2] = navio_diagonal1[2];

	tabuleiro[9][0] = navio_diagonal2[0];
    tabuleiro[8][1] = navio_diagonal2[1];
	tabuleiro[7][2] = navio_diagonal2[2];
	
	//while que pergunta a posição do navio ate o usuario digitar um numero valido
	while(valido == 0){	

	//comando que pede para o usuario posicionar um navio
	printf("\n");
	printf("-Qual a posição do seu navio? (0 - Horizontal || 1 - Vertical) ");
	scanf("%d", &direcao);
	printf("-Em qual linha deseja iniciar o seu navio (Linha 0 - Linha 9) ");
	scanf("%d", &linha);
	printf("-Em qual coluna deseja iniciar o seu navio (Coluna 0 - Coluna 9) ");
	scanf("%d", &coluna);
	
	//comando que testa se o navio do usuario sobrepõe o navio da maquina e esta dentro do tabuleiro
	if(direcao == 0 && coluna+2 > 9){
		
		printf("\nValor Invalido! (navio saindo do tabuleiro)\n");
		
	}else if(direcao == 1 && linha+2 > 9){
		
		printf("\nValor invalido! (navio saindo do tabuleiro)\n");
		
	}else if(direcao == 0 && tabuleiro[linha][coluna] == 3 || direcao == 0 && tabuleiro[linha][coluna + 1] == 3 || direcao == 0 && tabuleiro[linha][coluna + 2] == 3){
       
        printf("\nPosição Invalida! (já existe um navio nessa posição)\n");

    }else if(direcao == 1 && tabuleiro[linha][coluna] == 3 || direcao == 1 && tabuleiro[linha + 1][coluna] == 3 || direcao == 1 && tabuleiro[linha + 2][coluna] == 3 ){
        printf("\nPosição Invalida! (já existe um navio nessa posição)\n");
    }
    else{

		//posicionando o navio do usuario 
		if(direcao == 0){
		tabuleiro[linha][coluna] = 3;
		tabuleiro[linha][coluna + 1] = 3;
		tabuleiro[linha][coluna + 2] = 3;
		}
		else{
		tabuleiro[linha][coluna] = 3;
		tabuleiro[linha + 1][coluna] = 3;
		tabuleiro[linha + 2][coluna] = 3;
		}
        
        valido = 1;
	}
   
}

	//print do tabuleiro
	printf("\n");
	printf("    ");
	for(int i = 0; i < 10; i++){
		printf("%d ", i);
	}
	printf("\n");
	
	for(int i = 0; i < 10; i++){
		printf("%d - ", i);
		for(int j = 0; j < 10; j++){
			printf("%d ", tabuleiro[i][j]);				
		}
		printf("\n");
	}
	
		
	return 0;
}