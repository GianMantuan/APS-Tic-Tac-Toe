#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int jogo[TAM][TAM];

void tela(){///Faz o print da Matriz do Jogo da Velha

	printf(" %c | %c | %c \n",jogo[0][0],jogo[0][1],jogo[0][2]);
	printf("------------\n");
	printf(" %c | %c | %c \n",jogo[1][0],jogo[1][1],jogo[1][2]);
	printf("------------\n");
	printf(" %c | %c | %c \n",jogo[2][0],jogo[2][1],jogo[2][2]);

	return;

}
/*
Recebe uma posicao como parametro e verifica se ela esta vazia(Preenchica com um espaço). Se esta vazia 
permite o jogador escrever na matriz, caso contrario ele chama a mesma funcao passando outra posicao como parametro,
e assim verificando novamente ate uma posicao vazia ser encontrada.
*/
int valida(int pos){
	int i;
	i=pos;
	switch(i){
		case 1:
			if(jogo[0][0]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 2:
			if(jogo[0][1]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 3:
			if(jogo[0][2]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 4:
			if(jogo[1][0]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 5:
			if(jogo[1][1]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 6:
			if(jogo[1][2]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}[0][0]=
			break;
		case 7:
			if(jogo[2][0]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 8:
			if(jogo[2][1]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
		case 9:
			if(jogo[2][2]==' '){
				return i;
			}
			else{
				printf("Posicao ja Preenchida!\n");
				printf("Digite nova posicao: ");
				scanf("%d",&i);
				valida(i);
			}
			break;
	}
}

/*
Verifica cada linha da matriz a cada jogada feita pelo jogador, observando se,
em toda a linha existe um caracter de mesmo tipo, caso sim, retorna o valor 1,
referente a vez de quem estava jogando.
*/
int verLinha(int flag){
	
	if((jogo[0][0]==jogo[0][1])&&(jogo[0][1]==jogo[0][2])&&(jogo[0][0]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[0][0]==jogo[0][1])&&(jogo[0][1]==jogo[0][2])&&(jogo[0][0]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
		}
		return 1;
	}
	else if((jogo[1][0]==jogo[1][1])&&(jogo[1][1]==jogo[1][2])&&(jogo[1][0]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
		}
		return 1;
	}
	else if((jogo[1][0]==jogo[1][1])&&(jogo[1][1]==jogo[1][2])&&(jogo[1][0]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[2][0]==jogo[2][1])&&(jogo[2][1]==jogo[2][2])&&(jogo[2][0]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[2][0]==jogo[2][1])&&(jogo[2][1]==jogo[2][2])&&(jogo[2][0]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
}
/*
Verifica cada coluna da matriz a cada jogada feita pelo jogador, observando se,
em toda a coluna existe um caracter de mesmo tipo, caso sim, retorna o valor 1,
referente a vez de quem estava jogando.
*/
int verColuna(int flag){
	
	if((jogo[0][0]==jogo[1][0])&&(jogo[1][0]==jogo[2][0])&&(jogo[0][0]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[0][0]==jogo[1][0])&&(jogo[1][0]==jogo[2][0])&&(jogo[0][0]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
		}
		return 1;
	}
	else if((jogo[0][1]==jogo[1][1])&&(jogo[1][1]==jogo[2][1])&&(jogo[0][1]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
		}
		return 1;
	}
	else if((jogo[0][1]==jogo[1][1])&&(jogo[1][1]==jogo[2][1])&&(jogo[0][1]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[0][2]==jogo[1][2])&&(jogo[1][2]==jogo[2][2])&&(jogo[0][2]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	else if((jogo[0][2]==jogo[1][2])&&(jogo[1][2]==jogo[2][2])&&(jogo[0][2]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
}
/*
Verifica a diagonal primaria e secundaria da matriz a cada jogada feita pelo jogador, observando se,
em toda a diagonal existe um caracter de mesmo tipo, caso sim, retorna o valor 1,
referente a vez de quem estava jogando.
*/
int verDiag(int flag){
	if((jogo[0][0]==jogo[1][1])&&(jogo[1][1]==jogo[2][2])&&(jogo[0][0]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	if((jogo[0][0]==jogo[1][1])&&(jogo[1][1]==jogo[2][2])&&(jogo[0][0]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	if((jogo[0][2]==jogo[1][1])&&(jogo[1][1]==jogo[2][0])&&(jogo[0][2]=='X')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
	if((jogo[0][2]==jogo[1][1])&&(jogo[1][1]==jogo[2][0])&&(jogo[0][2]=='O')){
		if(flag==1){
			printf("\n---- Jogador P1 Ganhou ----\n");
			return 1;
		}
		else{
			printf("\n---- Jogador P2 Ganhou ----\n");
			return 1;
		}
	}
}
/*
Se após todas as veridicacoes de linha, coluna e diagonal forem feitas e nao retornarem 1,
o programa entende que o jogo de Velha, quando nao existe nanhum linha ou coluna ou diagonal
por inteiro com o mesmo caracter, retornando 1 para a funcao.
*/
int verVelha(int fim){
	if(fim==10){
		printf("\n---- Deu Velha ----\n");
	}
	return 1;
}
/*
Rotina das jogadas. Inicializa a funcao recebendo o char referente a escolha do jogador P1 e P2
e tambem o sorteio de quem começara a jogada
*/
void jogada(char p1, char p2, int flag){
	int certo=1,fim=1,pos,c=0,d=0,l=0,pos1;

	printf("Escolham as posicoes de acordo com a matriz abaixo\n\n");//Imprime somente uma vez para conhecimento dos jogadores
	printf(" 1 | 2 | 3 \n");
	printf("------------\n");
	printf(" 4 | 5 | 6 \n");
	printf("------------\n");
	printf(" 7 | 8 | 9 \n");

	while(fim!=10){//Começa o While ja chamando as funcoes de verificacao de ganhador (linha,coluna,diagonal).
		c=verColuna(flag);
		d=verDiag(flag);
		l=verLinha(flag);
		if(c==1 || d==1 || l==1)//SE algum dos retornos forem 1, o programa é encerrado porque obteve um ganhador
			break;
		if(flag==0){//Flag 0 = Jogada começa com o jogador P1
			while(certo==1){
				printf("\nP1 -- Selecione a posicao: ");
				scanf("%d",&pos);
				printf("\n");
				pos1=valida(pos);//valida a posicao
				switch(pos1){//verifica a posicao e insere o caracter de escolha do jogador na posicao referente a escolha
					case 1:
						jogo[0][0]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 2:
						jogo[0][1]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 3:
						jogo[0][2]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 4:
						jogo[1][0]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 5:
						jogo[1][1]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 6:
						jogo[1][2]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 7:
						jogo[2][0]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 8:
						jogo[2][1]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					case 9:
						jogo[2][2]=p1;
						certo=0;
						flag=1;
						fim++;
						break;
					default:
						printf("\nJogada Invalida\n\n");
						break;
				}
				tela();
			}
		}
		else if(flag==1){//Flag 1 = Jogada começa com o jogador P2
			certo=0;
			while(certo==0){
				printf("\nP2 -- Selecione a posicao: ");
				scanf("%d",&pos);
				pos1=valida(pos);//Valida a posicao
				printf("\n");
				switch(pos1){//verifica a posicao e insere o caracter de escolha do jogador na posicao referente a escolha
					case 1:
						jogo[0][0]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 2:
						jogo[0][1]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 3:
						jogo[0][2]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 4:
						jogo[1][0]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 5:
						jogo[1][1]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 6:
						jogo[1][2]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 7:
						jogo[2][0]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 8:
						jogo[2][1]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					case 9:
						jogo[2][2]=p2;
						certo=1;
						flag=0;
						fim++;
						break;
					default:
						printf("\nJogada Invalida\n\n");
						break;
				}
				tela();//Para cada jogada feita a funcao tela é chamada, onde imprimi a Matriz com os caracteres ja inseridos
			}
		}//Caso a ultima jogada for a que define o ganhador, uma nova verificacao é realizada, pois ja nao estamos mais dentro do laço de repeticao
		c=verColuna(flag);
		d=verDiag(flag);
		l=verLinha(flag);
		if(c==1 || d==1 || l==1){//SE algum dos retornos forem 1, o programa é encerrado porque obteve um ganhador
			break;
		}
		verVelha(fim);//SE nao obteve nenhum retorno 1, entao o programa chama a funcao velha, entende-se que nao tivemos ganhadores
	}
	printf("\n");
	tela();
}
//Funcao para "Zerar" o tabuleiro, inserindo ESPAÇOS como forma de zerar
void zeraTabuleiro(){
    int linha, coluna, i=0;

    for(linha = 0 ; linha < TAM ; linha++){
        for(coluna = 0 ; coluna < TAM ; coluna++){
            jogo[linha][coluna] = ' ';
        }
    }
}
//Recebe a escola do jogador P1 e P2 e realiza o sortei de quem irá comecar as jogodas
int sorteio(char p1, char p2){
	int f1=0,flag;

	srand(time(NULL));
	flag=rand()%2;
	if(f1==flag){
		printf("\nVencedor do Sorteio: P1 comeca\n\n");
		jogada(p1,p2,flag);
	}
	else{
		printf("\nVencedor do Sorteio: P2 comeca\n\n");
		jogada(p1,p2,flag);
	}
}
//Recebe a escolha feita pelo jogado P1 e atribui automaticamente o outro caracter ao jogador P2
void escolha(char p1){
	char p2;
	switch(p1){
		case 'X': 
			printf("Jogador P2: 0\n");
			p2='O';
			sorteio(p1,p2);
			break;
		case 'O': 
			printf("Jogador P2: X\n");
			p2='X';
			sorteio(p1,p2);
			break;
		default: 
			printf("Escolha Invalida!\nJogador P1: ");
			scanf(" %c",&p1);
			escolha(p1);
			break;
	}
}

void main(){
	char p1;

	zeraTabuleiro();
	
	printf("Jogador P1: ");
	scanf("%c", &p1);
	escolha(p1);
	
}
