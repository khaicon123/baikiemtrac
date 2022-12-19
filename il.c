#include<stdio.h>
#include<stdbool.h>
//bai 3
void bai3.1(int a[],int n){}
int bai3.2(int a[],int n){}
void bai3.3(int& x,int& y){}
int bai3.4(int a[],int n,int b[],int m){}
int bai3.5(int x,int n){}
bool bai 3.6(int a){}
int bai3.7(double a[],int n){}
int 3.8(int x,int a[],int n){}

int nhap(){
	int a;scanf("%d",&a);
	return a;
}
int xuly(int n){
	int b=n,c=0;
	while(b>0){
		c=c*10+b%10;
		b/=10;
	}
	if(c==n) return n;
	return 0;
}
void hienthi(int n){
	printf("%d",n);
}
void main(){
	//bai 1
	int a=10;
	double b=100.5E+2;
	char c='x';
	printf("%d\n%lf\n%c",a,b,c);
	//bai 2
	int bai2[10]={1,2,3,4,5,6,7,8,9,10};
	printf("\ncac phan tu trong mang la:");
	for(int i=0;i<10;i++){
		printf("%d ",bai2[i]);
	}
	printf("\ncac phan tu chan trong mang la:");
	for(int i=0;i<10;i++){
		if(bai2[i]%2==0) printf("%d ",bai2[i]);
	}
	printf("\ncac phan tu chia het cho 3 hoac 5 trong mang la:");
	for(int i=0;i<10;i++){
		if(bai2[i]%3==0||bai2[i]%5==0) printf("%d ",bai2[i]);
	}
	//bai 4 chon C
	//bai 5 chon C
	//bai 6 chon A
	//bai 7 chon C
	//bai 8
	int n; n=nhap();
	int sum=0;
	int bai8[n];for(int i=0;i<n;i++) bai8[i]=nhap();
	for(int i=0;i<n;i++) sum+=xuly(bai8[i]);
	hienthi(sum);
	//bai 9
	char bai9[10]={'a','b','1','c','2','3','d','4','5','e'};
	int tong=0;
	for(int i=0;i<10;i++){
		if(bai9[i]>='1'&&bai9[i]<='9'){
			printf("%c+",bai9[i]);
			int a=bai9[i]-'0';
			tong+=a;
		}
	}
	printf("=%d",tong);	
	
}
