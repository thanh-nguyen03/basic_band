#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main()
{
		int n;
		scanf("%d", &n);
		char a[100005];
		char b[100005];
		
		scanf("\n"); gets(a);
		scanf("\n"); gets(b);
		n = strlen(a);
		
		int cnt = 0;
		for(int i = 0; i < n; i++)
		{
			if(i == n-1)
			{
				if(a[i] != b[i]) cnt++;
				break;
			}
			if(a[i] != b[i])
			{
				if(a[i+1] != b[i+1])
				{
					i++;
				}
				cnt++;
			}
		}
		
		printf("%d", cnt);
	
}