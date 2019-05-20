//randomised quick sort
#include<bits/stdc++.h>
using namespace std;
int part(int b[][2], int l, int h) 
{ 
    int p = b[l][0]; 
    int i = l - 1, j = h + 1; 
  
    while (true) { 
  
        do { 
            i++; 
        } while (b[i][0] < p); 
  
        do { 
            j--; 
        } while (b[j][0] > p); 
  
       
        if (i >= j) 
            return j; 
  
        
        int t=b[i][0];
        b[i][0]=b[j][0];
        b[j][0]=t;
    } 
} 
  

int part2(int b[][2], int l, int h) 
{ 
    
     
    int randomno = l + rand() % (h - l); 
  
   
   
    int t=b[randomno][0];
    b[randomno][0]=b[l][0];
    b[l][0]=t;
  
    return part(b, l, h); 
} 
  

void randquicksort(int b[][2], int l, int h) 
{ 
    if (l< h) { 
       
        int p = part2(b, l, h); 
  
        
        randquicksort(b, l, p); 
        randquicksort(b, p + 1, h); 
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
 randquicksort(a,0,n-1);
 cout<<"pair after sort"<<endl;
  for( i=0;i<n;i++)
 { for(int j=0;j<2;j++)
 {cout<<a[i][j]<<" ";
	 }
	 cout<<endl;	
	 
 }
 
 return 0;
}
