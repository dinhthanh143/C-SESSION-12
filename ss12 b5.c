#include<stdio.h>

int prime(int a){
	int i;
	if(a<=1){
		return 0;
	}
	for(i=2;i*i<=a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}



int main(){
	int firstNum;
	int secondNum;
	
	printf("moi nhap so nguyen thu nhat: ");
	scanf("%d",&firstNum);
	printf("moi nhap so nguyen thu hai: ");
	scanf("%d",&secondNum);
	
	if (prime(firstNum)){
		printf("%d la so nguyen to \n",firstNum);
	}else{
		printf("%d ko la so nguyen to \n",firstNum);
	}
	
	
	

   return 0;
}

