#include<stdio.h>

int findMax(int arr[],int size){
	int i;
	int max=0;
	for(i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}	
	}
	return max;
}




int main(){
  int arr[5]={2,3,5,8,1};
  int size=sizeof(arr)/sizeof(int);
  
  printf("so lon nhat trong mang la: %d", findMax(arr,size)); 	
	
	

   return 0;
}

