/* #define ile daire alaný
#include <stdio.h>
#define DISC_AREA(r) 3.14*r*r
int main()
{	float r, a;
	printf("Yaricap :");
    scanf("%f", &r);
	a= DISC_AREA(r) ;	
  	printf("Alan: %f",a); 
  }
*/

/* normal daire alaný
#include <stdio.h>
int main()
{   float pi = 3.14, r ,alan ;
    printf("Yaricap:");
    scanf("%f", &r);
    alan = pi*r*r;
    printf ("Alan: %f"  ,alan );
	}
*/


/*#define ile 2 sayýdan küçük olaný bulma
#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
void main () 
  { int a,b;
    printf("a ve b sayilarini girin:");
    scanf("%d%d", &a, &b);
    printf ("%d kucuk", MIN(a, b)); 
  }
*/

/* 2 sayýdan küçük olaný bulma
#include <stdio.h> 
int main()
{   int a,b;
    printf("a ve b sayilarini girin:");
    scanf("%d%d", &a, &b);
    if(a<b) 
	printf("%d kucuk", a);
    else 
	printf("%d kucuk", b);
}
*/


/*
#include <stdio.h> 
int main()
{	char x;
	printf("Karakter Giriniz:");
	scanf("%c", &x);
	if (x>0)
	printf("%c isaretsiz \n",x);
	else 
	printf("%c isaretli \n",x);
}
*/

/*
#include <stdio.h>
#define p_uchar_d unsigned char*
int main()
{	*char ;
	printf("Karakter Giriniz:");
	scanf("%c", &*char);
	if()
	printf("%c iþaretli", p_uchar_d)
		
}
*/


#include <stdio.h>

int main (void)
{
  char c ;
  printf("Karakter Giriniz:");
  scanf("%c", &c);
  if (-128 >= c >= 127) 
  printf ("isaretli (c =%d)", decimal(c));
  else 
  printf ("isaretsiz (c =%d) ", decimal(c));
  
  return 0;
  
  
}


