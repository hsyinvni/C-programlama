#include<stdio.h>

int main()
{
	 
	float vize,final,ort;
	printf("******NOT HESAPLAMA****** \n\n");
	printf("Vize notunuzu giriniz: ");
	scanf("%f", &vize);
	printf("Final notunuzu giriniz: ");
	scanf("%f", &final);
	
	ort =vize*40/100 + final*60/100;

	
	if (ort<=100 && ort>=90)
	{
		printf("Ortalama %f harf notu =AA",ort);
		
	}
		else if(ort<=89 && ort >= 86)
	{
		printf("Ortalama %f harf notu= AB");	
	}	
		else if (ort<=85 && ort>=81)
	{
		printf("Ortalama %f harf notu =BA",ort);
		
	}
	
		else if (ort<=80 && ort>=76)
	{
		printf("Ortalama %f harf notu =BB",ort);
		
	}
	
		else if (ort<=75 && ort>=70)
	{
		printf("Ortalama %f harf notu =BC",ort);
		
	}
	
		else if (ort<=69 && ort>=65)
	{
		printf("Ortalama %f harf notu =CB",ort);
		
	}

		else if (ort<=64 && ort>=60)
	{
		printf("Ortalama %f harf notu =CC",ort);
		
	}
	
		else if (ort<=59 && ort>=57)
	{
		printf("Ortalama %f harf notu =CD",ort);
		
	}
	
		else if (ort<=56 && ort>=54)
	{
		printf("Ortalama %f harf notu =DC",ort);
		
	}
	
		else if (ort<=53 && ort>=50)
	{
		printf("Ortalama %f harf notu =DD",ort);
		
	}


		else 
		
	{
		printf("Maalesef kaldiniz :D ");
		
	}
	
	
	
	
	return 0;
}
