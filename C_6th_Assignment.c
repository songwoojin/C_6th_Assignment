#include <stdio.h>
int main(void){
int i;
char ch;
while((ch=getchar())!='z'){
	printf("\n");
		for(i=0;i<ch-48;i++){
			printf("%d",ch-48);
		}
}
return 0;
}
