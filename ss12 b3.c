#include<stdio.h>

int fata(int a){
	if (a==0){
		return 1;
	}
	return a*fata(a-1);
}



int main(){
	printf("giai thua cua 5 la: %d", fata(6));
	
	

   return 0;
}

