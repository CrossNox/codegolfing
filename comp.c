#include <stdio.h>
#include <stdbool.h>

int failure_count = 0;

#define print_test(message, test, expected) do { \
	int result = (test);   \
    bool ok= (result==expected); \
    failure_count += !ok; \
    printf("%s... %s\n", message, ok ? "OK" : "ERROR"); \
    if(!ok) \
    	printf("expected:%d and got:%d\n",expected,result); \
} while(0);

extern int failure_count;

#define M (~0U>>1)
int comparar(int x, int y) {
	x-=y;y=M;
	for(;x&&y;x--,y--);
	return(!x&&!(y-M)?0:x?1:-1);
}

int main() {
	print_test("Test0a", comparar(0,-1),-1);
	print_test("Test0b", comparar(-1,0),1);
	print_test("Test1", comparar(1,2),1);
	print_test("Test2", comparar(2,1),-1);
	print_test("Test3", comparar(1,1),0);
	print_test("Test4", comparar(-1,2),1);
	print_test("Test5", comparar(1,-2),-1);
	print_test("Test6", comparar(-1,-1),0);
	print_test("Test7", comparar(0,1),1);
	print_test("Test8", comparar(1,0),-1);
	print_test("Test9", comparar(0,0),0);
	return failure_count > 0;}
