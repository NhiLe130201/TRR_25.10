//Author: Le Thi Nhi_BDATTT

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	FILE *in, *out;
	int n, m,x,y,s;
	int a[10][10];
	in = fopen("input1_2.txt", "r");
	out = fopen("output1_2.txt", "w");
	fscanf(in,"%d",&n);
	fscanf(in,"%d",&m);
	
	cout<<"CHUYEN TU DANH SACH CANH SANG MA TRAN KE\n"<<n<<" "<<m<<endl;
	fprintf(out,"%d ",n);
	fprintf(out,"%d\n",m);
	//gan mang ban dau bang 0
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			a[i][j] = 0;
		}
	}
	//gan bang 1
	for(int i = 1; i <= m;i++)
	{
		fscanf(in,"%d",&x);
		fscanf(in,"%d",&y);
		a[x][y] = a[y][x] = 1;
	}
	
	//in ra va ghi vao file ma tran ke
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			fprintf(out,"%d ",a[i][j]);
			cout<<a[i][j]<<" ";
			
		}
		fprintf(out,"\n");
		cout<<endl;
	}
	//in ra va ghi vao file ds ke
	int t[100];
	cout<<"\nCHUYEN TU DANH SACH CANH SANG DS KE\n"<<n<<" "<<m<<endl;;
	fprintf(out,"%d ",n);
	fprintf(out,"%d\n",m);
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                t[j]=1;
            }
        }
        fprintf(out,"%d\t",i);
        printf("%d\t ",i);
        for(int a=1;a<=n;a++)
        {
            if(t[a]==1)
            {
                fprintf(out,"%d ",a+1);
                printf("%d ",a);
                t[a]=0;
            }
        }
        fprintf(out,"\n");
        printf("\n");
    }

	for(int i = 1; i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			
			s += a[i][j];
			
		}
		fprintf(out,"\nBac cua dinh %d la: %d",i,s);
		cout<<"\nBac cua dinh "<<i<<" la: "<<s<<endl;
		s=0;
		
	}
	
	fclose(in);
	fclose(out);

	return 0;
}





