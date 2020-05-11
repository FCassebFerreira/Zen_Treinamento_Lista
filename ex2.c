#include <math.h>
#include <stdio.h>

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

int main()
{
    float a, b, c;  
    

    printf("Entre tres numeros:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A soma dos valores eh %f\n", soma(a, b, c));
    printf("A media dos valores eh %f\n", media(a, b, c));
    printf("O desvio dos valores eh %f\n", desvio(a, b, c));

    return 0;
}
