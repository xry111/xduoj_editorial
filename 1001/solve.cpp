#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

typedef vector<char> vch_t;
typedef vector<vch_t> d_t;

int main(){
	int n,m,T=0;
	while(scanf("%d%d",&n,&m)==2){
		printf("Case #%d:\n",++T);
		getchar();
		d_t d=d_t(n+1,vch_t(m+1));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				d[i][j]=getchar();
			}
			getchar();
		}
		vector<int> line(n+1),row(m+1);
		for(int i=1;i<=n;i++){line[i]=i;}
		for(int j=1;j<=m;j++){row[j]=j;}
		int q;scanf("%d",&q);
		while(q--){
			int op,a,b;
			scanf("%d%d%d",&op,&a,&b);
			if(op==1){
				char ans=d[line[a]][row[b]];
				if(ans=='T'){puts("Tree");}
				else if(ans=='i'){puts("Phone");}
				else {puts("Empty");}
			}else if(op==2){
				swap(line[a],line[b]);
			}else if(op==3){
				swap(row[a],row[b]);
			}
		}
	}
	return 0;
}

