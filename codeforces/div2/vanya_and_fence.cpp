#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n, h;
	int width = 0;
	int a;
	
	//recebendo n�mero de pessoas e altura da cerca
	scanf("%i", &n);
	scanf("%i", &h);
	
	//looping rodando com base na quantidade de pessoas
	for(int i = 0; i < n; i++){
		//recebendo valor da altura da pessoa X
		scanf("%i", &a);
		
		//verificando se a altura � maior que a cerca
		// se sim contar + 2 no tamanho da rua
		if(a > h){
			width = width + 2;
		}
		
		// se n�o contar + 1
		else{
			width++;
		}
	}
	
	// exibir o tamanho da rua necess�ria
	printf("%i", width);
	
	return 0;
}
