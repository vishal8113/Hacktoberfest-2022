#include <iostream>
using namespace std;
void perculate_max(int H[],int i)
{
	if(H[i]>H[(i-1)/2] && i!=0)
	{
		swap(H[i],H[(i-1)/2]);
		perculate_max(H,(i-1)/2);
	}
}
void perculate_min(int H[],int i)
{
	if(H[i]<H[(i-1)/2] && i!=0)
	{
		swap(H[i],H[(i-1)/2]);
		perculate_min(H,(i-1)/2);
	}
}
void check_max(int H[],int s,int i)
{
	if((H[2*i+1]>H[i]||H[2*i+2]>H[i])&&i<(s-1)/2)
	{
		if(H[2*i+1]>H[2*i+2])
		{
			swap(H[2*i+1],H[i]);
			check_max(H,s,2*i+1);
		}
		else
		{
			swap(H[2*i+2],H[i]);
			check_max(H,s,2*i+2);
		}
	}
}
void check_min(int H[],int s,int i)
{
	if((H[2*i+1]<H[i]||H[2*i+2]<H[i])&&i<(s-1)/2)
	{
		if(H[2*i+1]<H[2*i+2])
		{
			swap(H[2*i+1],H[i]);
			check_min(H,s,2*i+1);
		}
		else
		{
			swap(H[2*i+2],H[i]);
			check_min(H,s,2*i+2);
		}
	}
}
void delete_node(int minH[],int &i,int k)
{
	minH[0]=minH[i-1];
	i--;
	if(k==0)
		check_min(minH,i,0);
	else
		check_max(minH,i,0);
}
void operation(int minH[],int maxH[],int &minval,int &maxval,int &median,int &i,int &j,int n,int k)
{
	minH[i]=n;
	if(k==0)
		perculate_min(minH,i);
	else
		perculate_max(minH,i);
	i++;
	if((i-j)<=1 || (i-j)==-1)  //checking if both the heaps sizes differ by at most 1
	{
		minval=minH[0];
		if(i==j)
		{
			median=(minval+maxval)/2;
		}
		else
		{
			median=minval;
		}
	}
	else
	{
		delete_node(minH,i,k);
	
	maxH[j]=minval;
		if(k==1)
			perculate_min(maxH,j);
		else
			perculate_max(maxH,j);
		j++;
		minval=minH[0];
		maxval=maxH[0];
		median=(minval+maxval)/2;
	}
}
void find_median(int minH[],int maxH[],int &maxval,int &minval,int &median,int &i,int &j,int n)
{
	if(i==0)
	{
		minH[i]=n;
		minval=minH[0];
		i++;
		median=minval;
	}
	else
	{
		if(n>median)
		{
			operation(minH,maxH,minval,maxval,median,i,j,n,0);
		}
		else if(n<median)
		{
			operation(maxH,minH,maxval,minval,median,j,i,n,1);
		}
		else
		{
			minH[i]=n;
			perculate_min(minH,i);
			minval=minH[0];
			i++;
		}
	}
}
int main()
{
    int minH[50],maxH[50];
    int maxval,minval,median;
    int i=0,j=0;
    int n;
    cin>>n;
    while(n!=-1)
    {
    	find_median(minH,maxH,maxval,minval,median,i,j,n);
    	cout<<median<<" ";
    	cin>>n;
    }
    return 0;
}
// 5 9 7 2 16 11 1 -1
// 2 5 8 1 7 9 -1
