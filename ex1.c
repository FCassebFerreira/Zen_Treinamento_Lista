#include <stdio.h>
#include <math.h>

		float absf(float x){

			

			if (x > 0)
				return x;
			if (x < 0)
				return -x;
		}



		int main()
		{
			float a, b , c, soma, a1, b1, c1;
			float media, desvio;

			printf("Entre tres numeros:\n");
			scanf("%f %f %f", &a, &b, &c);
			printf("Os numeros sao %f, %f e %f.\n", a, b, c);
			soma = a + b + c;	
			media = soma/3;	
			a1 = absf(media - a);
			b1 = absf(media - b);
			c1 = absf(media - c);
			desvio = sqrt(((a1 * a1) + (b1 * b1) + (c1 * c1))/2);
			printf("A soma dos valores eh %f, a media dos valores eh %f e o desvio padrao dos valores eh %f.\n", soma, media, desvio);

            printf("O valor da diferenca eh %f e seu valor absoluto eh %f", media -c, c1);
			return 0;
		}
