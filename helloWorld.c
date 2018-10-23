#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n;// n是*最多的那一行的行数
    printf("Enter n:");
    scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
			printf("\n");
	}
	
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
			printf("\n");
	}
	printf("结束\n");
    system("pause");
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world C++!"<<endl;
//     system("pause");
//     return 0;
// }