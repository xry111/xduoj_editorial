#include<cstdio>

const int opp[]={0,
12,7,8,9,10,11,2,3,4,5,6,1};

const int five[][10]={{0},
	{2,3,4,5,6,2,3,4,5,6},
	{1,6,9,10,3,1,6,9,10,3},
	{1,2,10,11,4,1,2,10,11,4},
	{1,3,11,7,5,1,3,11,7,5},
	{1,4,7,8,6,1,4,7,8,6},
	{1,5,8,9,2,1,5,8,9,2},
	{5,4,11,12,8,5,4,11,12,8},
	{6,5,7,12,9,6,5,7,12,9},
	{2,6,8,12,10,2,6,8,12,10},
	{3,2,9,12,11,3,2,9,12,11},
	{3,10,12,7,4,3,10,12,7,4},
	{7,11,10,9,8,7,11,10,9,8}
};

int a[2][20];

int main(){
	int T;scanf("%d",&T);
	while(T--){
		for(int k=0;k<2;k++){
			for(int i=1;i<=12;i++){
				scanf("%d",&a[k][i]);
			}
		}

		for(int i=1;i<=12;i++){ //TOP POINT
			if(a[0][1]!=a[1][i]){continue;}
			if(a[0][12]!=a[1][opp[i]]){continue;}

			for(int j=0;j<5;j++){  //ROTATE
				int flag=0;
				for(int k=0;k<5;k++){  //COMPARE ONE BY ONE
					if(flag=a[0][five[1][k]]!=a[1][five[i][j+k]]){break;}
					if(flag=a[0][five[12][k]]!=a[1][five[opp[i]][5-j+k]]){break;}
				}
				if(!flag){goto IDENT;}
			}
		}
		puts("Different");
		continue;
IDENT:
		puts("Identical");
	}
	return 0;
}

