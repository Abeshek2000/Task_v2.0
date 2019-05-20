// program implementing quick sort and sorting according to first key 
#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int partition (int arr[][2], int l, int h) 
{ 
    int p = arr[h][0];     
    int i = (l - 1);  
  
    for (int j = l; j <= h- 1; j++) 
    { 
        if (arr[j][0] <= p) 
        { 
            i++;    
            swap(&arr[i][0], &arr[j][0]); 
        } 
    } 
    swap(&arr[i + 1][0], &arr[h][0]); 
    return (i + 1); 
} 

void quicksort(int arr[][2], int l, int h) 
{ 
    if (l < h) 
    { 
        
        int p= partition(arr, l, h); 
  
        quicksort(arr, l, p - 1); 
        quicksort(arr, p + 1, h); 
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
 quicksort(a,0,n-1);
 cout<<"pair after sort"<<endl;
  for( i=0;i<n;i++)
 { for(int j=0;j<2;j++)
 {cout<<a[i][j]<<" ";
	 }
	 cout<<endl;	
	 
 }
 
 return 0;
}
