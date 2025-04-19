#include <stdio.h>

int main(void){
	char a = 100;
	printf("gia tri cua a:%d\n",a);
	printf("dia chi cua a:%p\n",(void*)&a);
	char*ptr = &a;
	char data = *ptr;
	printf("du lieu doc tu co tro:%d\n",data);
	*ptr = 65;
	printf("gia tri moi cua  a:%d\n",a);
	getchar();
	getchar();

	return 0;
}
