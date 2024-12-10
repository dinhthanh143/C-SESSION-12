#include<stdio.h>

int fata(int a){
	if (a==0){
		return 1;
	}
	return a*fata(a-1);
}



int main(){
	int num;
	printf("moi nhap so nguyen to bat ki: ");
	scanf("%d", &num)
	printf("giai thua cua %d la: %d",num,fata(num));
	
	

   return 0;
}

