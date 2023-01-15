#include<ctime>
#include<cstdio>
#include<cctype>
#define ll long long
using namespace std;
ll read() {
	char c;
	ll x=0,f=1;
	while(!isdigit(c=getchar()))
		f-=2*(c=='-');
	while (isdigit(c)){
		x=x*10+(c-48)*f;
		c=getchar();
	}
	return x;
}
ll T,a,b,n;
void solve(){
	n=read();
	a=read();
	b=read();
	ll t=1;
	if(a==1){
		if((n-1)%b==0)
			puts("Yes");
		else
			puts("No");
		return;
	}
	while(t<=n){
		if((n-t)%b==0){
			puts("Yes");
			return;
		}
		t*=a;
	}
	puts("No");
}
int main() {
	T=read();
	while(T--)
		solve();
	return 0;
}