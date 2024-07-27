#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n, h;
	int width = 0;
	int a;
	
	//recebendo número de pessoas e altura da cerca
	scanf("%i", &n);
	scanf("%i", &h);
	
	//looping rodando com base na quantidade de pessoas
	for(int i = 0; i < n; i++){
		//recebendo valor da altura da pessoa X
		scanf("%i", &a);
		
		//verificando se a altura é maior que a cerca
		// se sim contar + 2 no tamanho da rua
		if(a > h){
			width = width + 2;
		}
		
		// se não contar + 1
		else{
			width++;
		}
	}
	
	// exibir o tamanho da rua necessária
	printf("%i", width);
	
	return 0;
}
