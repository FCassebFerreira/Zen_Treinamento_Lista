#include <stdio.h>
#include <math.h>


	float soma(float a, float b, float c){
			float soma;
			soma = a + b + c;
			return soma;
		}

	float media(float a, float b, float c){
			float media;
			media = (a + b + c)/3;
			return media;
		}
		
	float absf(float x){

			if (x > 0)
				return x;
			if (x < 0)
				return -x;
		}
		
	float desvio(float a, float b, float c){
		    float desvio, med;
		    med = media(a, b, c);
		    desvio = sqrt(((absf(a - med)*absf(a - med)) + (absf(b - med)*absf(b - med)) + (absf(c - med)*absf(c - med)))/2);
		    return desvio;
		}


int main(){
	
	FILE *novo;  
	FILE *teste;
	float tabela[3][10], som[10], med[10], des[10];	
	int i, j;

	teste = fopen("dados1.csv", "r");
	
	for(j = 0; j < 10; j++){
		for(i = 0; i < 3; i++){
		fscanf(teste,"%f,", &tabela[i][j]);	
		}
	}

	printf("Os dados do arquivo foram gravados com sucesso.\n");
	
	fclose(teste);


	for(j = 0; j < 10; j++)
	med[j] = media(tabela[0][j], tabela[1][j], tabela[2][j]);

	for(j = 0; j < 10; j++)
	som[j] = soma(tabela[0][j], tabela[1][j], tabela[2][j]);

	for(j = 0; j < 10; j++)
	des[j] = desvio(tabela[0][j], tabela[1][j], tabela[2][j]);


	novo = fopen("resultados.csv","w");

	for(j = 0; j < 10; j++)
	fprintf(novo, "%f, %f, %f\n", som[j], med[j], des[j]);

	fclose(novo);

	if(teste == NULL)
		printf("Ocorreu um erro na abertura do aruivo\n"); 
	else
	  	printf("O arquivo foi aberto com sucesso!\n");


	return 0;
}