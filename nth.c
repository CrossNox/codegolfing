#include <stdio.h>

/*JAVI*/
int f(int i){int n=2,d=2,j=1;for(;j<i;j+=n==d)n%d<1?n++,d=2:d++;return n;} /*74*/

int g(int i){int n=2,d=2,j=1;for(;j<i;j+=n==d)n%d?d++:(n++,d=2);return n;}

/*Dami*/
int p(int i){int n=2,d=2;for(;i>1;i-=n==d)n%d==0?n++,d=2:d++;return n;} /*71*/
/*OPTIMIZADO*/
int q(int i){int n=2,d=2;for(;i>1;i-=n==d)n%d<1?n++,d=2:d++;return n;} /*70*/

/*INTERNET*/
int w(int n){int m=2,i=2;for(;--i>1||--n>0;)if(m%i<1)i=++m;return m;} /*69*/

int h(int i){int n=2,d=2;for(;i-=n==d;)n%d<1?n++,d=2:d++;return n;}

int main() {
	printf("Ingrese el n° de primo\n");
	int n;
	scanf("%d", &n);
	printf("%i° primo es f: %i\n",n,f(n));
	printf("%i° primo es p: %i\n",n,p(n));
	printf("%i° primo es q: %i\n",n,q(n));
	printf("%i° primo es w: %i\n",n,w(n));
	printf("%i° primo es g: %i\n",n,g(n));
	printf("%i° primo es h: %i\n",n,h(n));
	return 0;
}