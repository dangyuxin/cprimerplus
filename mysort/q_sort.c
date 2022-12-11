#include <stdio.h>
void sort(int arr[],int left,int right){
	if(left>=right)
		return ;
	int t=arr[left];
	int a=left,b=right;
	while(a<=b){
		while(a<=b&&arr[b]>=t){
			b--;
		}
		if(a<=b)
			arr[a]=arr[b];
		while(a<=b&&arr[a]<=t){
			a++;
		}
		if(a<=b)
			arr[b]=arr[a];
	}
	arr[a]=t;
	sort(arr,left,a-1);
	sort(arr,a+1,right);
}
int main(){
	int arr[]={2,7,1,9,3};
	sort(arr,0,4);
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
		if(i<4)
		printf(",");
	}
	printf("\n");
}
