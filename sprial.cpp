#include<bits/stdc++.h>
using namespace std;
void spialfind(int arr[1000][1000],int n,int m){
    int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=m-1;
    while(startRow<=endRow&&startCol<=endCol){
        
    
    for(int i=startCol;i<=endCol;i++){
        cout<<arr[startRow][i]<<" ";
    }
    startRow++;
     
     for(int i=startRow;i<=endRow;i++){
        cout<<arr[i][endCol]<<" ";
     }
     endCol--;
     for(int i=endCol;i>=startCol;i--){
        cout<<arr[endRow][i]<<" ";
     }
     endRow--; 
     for(int i=endRow;i>=startRow;i++){
        cout<<arr[i][startCol]<<" ";
     }
     startCol++;
}
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[1000][1000]={0};
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=val;
            val++;
        }
    }

    spialfind(arr,n,m);
   
    
    return 0;
}