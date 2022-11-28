#include<stdio.h>
double Jchen(int n);
double LJchen(int n);

int main(){
	int i;
	double Ps,Pi=0,eps;
	
	scanf("%le", &eps);		//%le意思是用科学计数法输出的double数据。
	
	for(i=1;;i++){
		Ps = Jchen(i-1) / LJchen(i);
		Pi = Pi + Ps;
		if(Ps < eps)
			break;
	}
	printf("PI = %.5lf\n",Pi * 2);
	
	//printf("%lf %lf",Jchen(3),LJchen(3));
	return 0;
}

double Jchen(int n){	//求阶乘
	int i;
	double sum=1.0;
	for(i = 1;i<=n;i++){
		sum = sum * i;
	}
	return sum;
} 

double LJchen(int n){	//求分母
	int i;
	double sum = 1.0;
	for(i=1;i<=n;i++){
		sum = sum * (i*2 - 1);
	}
	return sum;
}
