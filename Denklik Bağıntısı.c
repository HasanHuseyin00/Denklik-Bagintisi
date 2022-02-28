#include<stdio.h>
main()
{
	int 	a [6]= {1,2,3,4,5,6};//Ana küme
	int R[13][2]={{1,1},{1,3},{1,5},{3,1},{3,3},{3,5},{5,1},{5,3},{5,5},{2,2},{2,6},{6,2},{6,6}};// bagıntımızı dizi ile olusturduk
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("alt kume %d %d\n",a[i],a[j]);// alt kume olusturma
		
		}
	}
	for(i=0;i<13;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("  %d ",R[i][j]);
			
		}
		printf("\n");
		
	}
	if(R[i][j]!=R[j][i] )//simetri kontolu yapıyoruz.
			{
				printf("denklik bagintisidir\n");
			}
			else
			{
				if(R[i][j]==R[j][i])//ters simetri kontorlu
				{
					printf("Siralama bagintisidir\n");
				}
			}
		
		
}
