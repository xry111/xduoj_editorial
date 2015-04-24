#include<cstdio>

int a[100001];
int n;
double ansand,ansxor,ansor;

inline int bit(int a, int b){
	return (a>>b)&1;
}

void proc_one_bit(int b){
	int len1=0,len0=0,cnt=0;
	for(int i=1;i<=n;i++){
		len1=bit(a[i],b)?len1+1:0;
		ansand+=((double)len1*2-bit(a[i],b))*(1<<b)/n/n;
		len0=bit(a[i],b)?0:len0+1;
		if(i-len0)ansor+=((double)(i-len0)*2-bit(a[i],b))*(1<<b)/n/n;
		if(bit(a[i],b)){cnt=i-cnt;}
		if(cnt)ansxor+=((double)cnt*2-bit(a[i],b))*(1<<b)/n/n;
	}
}

int main(){
	while(scanf("%d",&n)==1){
		for(int i=1;i<=n;i++){scanf("%d",a+i);}
		ansand=ansxor=ansor=0.0;
		for(int i=0;i<30;i++){
			proc_one_bit(i);
		}
		printf("%.3lf %.3lf %.3lf\n",ansxor,ansand,ansor);
	}
	return 0;
}

