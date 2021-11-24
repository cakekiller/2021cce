#include <stdio.h>
int b[10000000]={0};
int main()
{
	int m;
	scanf("%d",&m);

	for(int i=2;i<m;i++){
		if (b[i]==0){
			printf("%d ",i);
			for(int k=i+i;k<m;k+=i){

				b[k]=1;
			}

		}




	}





}
