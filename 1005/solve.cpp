#include<cstdio>

typedef long long int64;
#define LLD "%lld"

int main(){
	int64 n;
	while(scanf(LLD,&n)==1){
		int ans=0;n--;
		while(n){
			n>>=1;
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}

