#include<cstdio>
#include<cctype>
#include<stack>

using namespace std;

typedef long long int64;

const char *num="0123456789ABCDEF";

int ch2int(char ch){
	if(isdigit(ch)){return ch-'0';}
	if(ch=='A'){return 10;}
	if(ch=='B'){return 11;}
	if(ch=='C'){return 12;}
	if(ch=='D'){return 13;}
	if(ch=='E'){return 14;}
	if(ch=='F'){return 15;}
	return -1;
}

int64 get_num(int b){
	int64 ans;
	while(-1==(ans=ch2int(getchar())));
	int t;
	while(~(t=ch2int(getchar()))){
		ans=ans*b+t;
	}
	return ans;
}

void put_num(int64 x,int b){
	stack<char> s;
	while(x){
		int bit=x%b;
		s.push(num[bit]);
		x/=b;
	}
	while(!s.empty()){
		putchar(s.top());
		s.pop();
	}
	putchar('\n');
}

int main(){
	int b;while(scanf("%d",&b)==1){
		int64 x,y;
		x=get_num(b);y=get_num(b);
		put_num(x+y,b);
	}
	return 0;
}

