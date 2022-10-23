//Author: Le Thi Nhi_BDATTT :> 3) S2
//MA TRAN ke trong file input1
/* a b c d e f
 a 0 1 0 1 1 0
 b 1 0 1 0 1 1
 c 0 1 0 1 0 1
 d 1 0 1 0 1 0
 e 1 1 0 1 0 1
 f 0 1 1 0 1 0
 */

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	
	FILE *in, *out1, *out2;
	int n,sum;
	int a[10][10];
	in = fopen("input1.txt", "r");
	out1 = fopen("input1_1.txt", "w");
	out2 = fopen("input1_2.txt", "w");

	fscanf(in,"%d",&n);
	for(int i = 0; i<n;i++){
		
		for(int j = 0;j<n;j++){
			
			fscanf(in, "%d",&a[i][j]);
		}
		
	}
	for(int i = 0; i<n;i++){
		
		for(int j = 0;j<n;j++){
			
			 sum += a[i][j];
		}
		
	}
	cout<<n<<" ";
	cout<<sum/2<<endl;
	fprintf(out2,"%d ",n);
	fprintf(out2,"%d\n",sum/2);
	cout<<"DANH SACH CANH: \n";
	for(int i = 0; i<n;i++)
	{
		for(int j = i;j<n;j++)
		{
			if(a[i][j] == 1)
			{
				
				fprintf(out2,"\t%d\t%d\n",i+1,j+1);
				printf("\t%d\t%d\n",i+1,j+1);
			}
		}
	}
	
	cout<<"--------------------------------------------\n";
	int t[10];
	cout<<n<<" ";
	cout<<sum/2<<endl;
	fprintf(out1,"%d",n);
	//fprintf(out1,"%d\n",sum/2);
    printf("DANH SACH KE\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                t[j]=1;
            }
        }
        fprintf(out1,"\n%d ",i+1);
        printf("\t%d\t ",i+1);
        for(int a=0;a<n;a++)
        {
            if(t[a]==1)
            {
                fprintf(out1,"%d",a+1);
                printf("%d ",a+1);
                t[a]=0;
            }
        }
        printf("\n");
    }

	fclose(in);
	fclose(out1);
	fclose(out2);
 return 0;
}


 
