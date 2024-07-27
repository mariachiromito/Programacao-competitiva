#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	int n;
	char s;
	int A = 0, D = 0;
	
	// looping para receber o número de partidas no intervalo que o problema definiu
	while(1){
		scanf("%i", &n);
		if(n >= 1 && n <= 100000){
			break;
		}
	}
	
	//looping para receber a letra do ganhador da partida
	for(int i = 0; i < n; i++){
		scanf(" %c", &s);
		
		// comparações para saber quem ganhou a partida
		//Se Anton ganhou é adiciona +1 na variavel A
		if(toupper(s) == 'A'){
			A++;
		}
		
		// Se Danik ganhou é adicionado +1 na variável D
		else if(toupper(s) == 'D'){
			D++;
		}
	}
	
	// Comparações para ver quem ganhou mais partidas
	if(A > D){
		printf("Anton");
	}
	else if(D > A){
		printf("Danik");
	}
	else{
		printf("Friendship");
	}
	
	return 0;
}
