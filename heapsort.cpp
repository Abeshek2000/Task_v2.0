//heap sort
#include<bits/stdc++.h>
using namespace std;

void heap2(int b[][2], int n, int i) 
{ 
    int max = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
   
    if (l < n && b[l][0] > b[max][0]) 
        max = l; 
  
    
    if (r < n && b[r][0] > b[max][0]) 
        max = r; 
  
   
    if (max != i) 
    { 
      
		 int t=b[i][0];
		 b[i][0]=b[max][0];
		 b[max][0]=t;
  
        
        heap2(b, n, max); 
    } 
} 
  

void heapsort(int b[][2], int n) 
{ 
     
    for (int i = n / 2 - 1; i >= 0; i--) 
        heap2(b, n, i); 
  
    
    for (int i=n-1; i>=0; i--) 
    {
       
     
		int t=b[0][0];
		b[0][0]=b[i][0];
		b[i][0]=t;
  
        
        heap2(b, i, 0); 
    } 
} 





int main()
{ int n,i;

 
 cout<<"Enter the total number of pairs you have to sort";
 cin>>n;
 int a[n][2];
 cout<<"Enter the elements of the  of the pairs";
 for( i=0;i<n;i++)
 { for(int j=0;j<2;j++)
 {cin>>a[i][j];
	 }	
 }
 cout<<"given pair"<<endl;
 
 
 
 for( i=0;i<n;i++)
 { for(int j=0;j<2;j++)
 {cout<<a[i][j]<<" ";
	 }
	 cout<<endl;	}
 heapsort(a,n);
 cout<<"pair after sort"<<endl;
  for( i=0;i<n;i++)
 { for(int j=0;j<2;j++)
 {cout<<a[i][j]<<" ";
	 }
	 cout<<endl;	
	 
 }
 
 return 0;
}
