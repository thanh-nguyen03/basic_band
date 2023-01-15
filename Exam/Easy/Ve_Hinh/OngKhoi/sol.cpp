#include<stdio.h>

int main() {
	int n;scanf("%d",&n);
	for (int i=1;i<=n-2;i++) {
		for (int j=1;j<=n;j++) {
			if (i==n-2 && (j>2 && j<n-1)) printf("  ");
			else if (i==1 || i==n-2 || j==1 || j==n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	for (int i=1;i<=n-1;i++) {
		printf("  ");
		for (int j=1;j<=n-2;j++) {
			if (i==1 && j!=1 && j!=n-2) printf("  ");
			else if (i==1 || j==n-2 || j==1 || i==n-1)printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}

// Giáng sinh sắp đến, ông già Noel lại chuẩn bị lên đường phát quà cho những
// đứa trẻ ngoan trong cả năm vừa qua, nhưng ông lại không tìm thấy ống khói 
// khi đến nhà bé Bìu. Ông không muốn bỏ lỡ phần quà đặc biệt này vì Bìu là đứa
// trẻ ngoan nhất trong cả năm qua. Các bạn hãy giúp ông vẽ ống khói để đưa được 
// quà cho Bìu nhé. 