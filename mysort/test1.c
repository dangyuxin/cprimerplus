#include <stdio.h>
int main(){
	int n;
	printf("请输入数组的长度\n");
	scanf("%d",&n);
	int arr[n];
	printf("请依次输入数组的每个值\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	/* 冒泡排序
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	*/
	/*  插入排序
	   for(int i=1;i<n;i++){
		int j=i-1;
		int t=arr[i];
		while(j>=0&&arr[j]>t){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=t;
	}
	*/
	printf("这是完成排序后的数组\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		if(i<n-1)
		printf(",");
	}
	printf("\n");
	return 0;
}
