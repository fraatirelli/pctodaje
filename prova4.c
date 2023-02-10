#include <stdio.h>
void funzione_fattoriale(float x, float y)
{	
	printf("scrivi un numero\n");
	scanf("%f", &x);
	while(x > 0)
	{   
    	y= x * y;
    	x= x - 1;
  
	}      
	printf("%f\n",y);  
}
void funzione_potenza(float a, float b, float z)
{
	if(b>0)
      	{
    		while (b!=0)
    		{
			z =a * z;
			b= b - 1;
			}
  		printf("%f\n", z );
	  	}
    	else if ( b < 0 )
	  	{
			while(b!=0)
			{
				z=z/a;
				b=b+1;
			}
  		printf("%f",z);
	 	}
		else 
		{
			{
			printf("1\n");
			}
		}
}
\
int check_se_uguali(char stringa1[], char stringa2[])
{
    int i=0;
    while (stringa1[i] != '\0' && stringa2[i] != '\0' && stringa1[i] == stringa2[i])
    {
        i++;
        if (stringa1[i] != stringa2[i])
            return (0);
    }
	if (stringa1[i] != stringa2[i])
		return (0); 
    return (1);
}

int main()
{   
	float x;   
	float y=1;
	float a;
	float b;
	float z=1;
	char operazione[256];
	char somma[] = "somma";
	char differenza[] = "differenza";
	char moltiplicazione[] = "moltiplicazione";
	char frazione[] = "frazione";
    char potenze[] = "potenza";
	char fattoriale[] ="fattoriale";
	printf("scrivi l'operazione da fare:\n");
	scanf(" %s", operazione);
	if (check_se_uguali(fattoriale, operazione)==1)
		{
			funzione_fattoriale(x,y);
		}
	else
	{
	printf("scrivi due numeri\n");
	scanf("%f %f", &a, &b);

	if(check_se_uguali(somma, operazione) == 1)
	{
		printf("la somma dei numeri è %f\n", a + b );
	}
	else if(check_se_uguali(differenza, operazione) == 1)
	{
		printf("la differenza è %f\n", a - b);
	}
	else if (check_se_uguali(moltiplicazione, operazione)== 1)
	{
		printf("la moltiplicazione fa %f\n", a * b);
	}
	else if (check_se_uguali(frazione, operazione)== 1)
	{ 
		if (b==0)
		{
			printf("impossibile\n");
		}
		else
			printf("il quoziente è %f\n", a/b );
	}
	else if (check_se_uguali(potenze, operazione)== 1)
	{
		funzione_potenza(a ,b ,z);
	}
	else 
	{
		printf("scemo\n");
	}
	}
}