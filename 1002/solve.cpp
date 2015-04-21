#include<cstdio>
#include<algorithm>

using namespace std;

typedef long long int64;

#define LLD "%lld"

int64 f[101][101][101];

int main(){
	int64 n,x,y,z,t;
	while(scanf(LLD""LLD""LLD""LLD""LLD,&n,&x,&y,&z,&t)==5){
		int64 ans=0;
		for(int64 i=0;i<=n;i++){
			for(int64 j=0;j<=n-i;j++){
				for(int64 k=0;k<=n-i-j;k++){
					int64 t1=i?f[i-1][j][k]+(i-1)*y*(t+j*z):0;
					int64 t2=j?f[i][j-1][k]+i*y*(t+(j-1)*z):0;
					int64 t3=k?f[i][j][k-1]+(i*y+x)*(t+j*z):0;
					f[i][j][k]=max(t1,max(t2,t3));
				}
				ans=max(ans,f[i][j][n-i-j]);
			}
		}
		printf(LLD"\n",ans);
	}
	return 0;
}

