#include<bits/stdc++.h>
using namespace std;
void SpiralPrint(int arr[][1000],int m,int n)
{
    int topRow=0,bottomRow=m-1,leftCol=0,rightCol=n-1;
    while(topRow<=bottomRow && leftCol<=rightCol)
    {
        for(int i=leftCol;i<=rightCol;i++)
        {
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;
        for(int i=topRow;i<=bottomRow;i++)
        {
            cout<<arr[i][rightCol];
        }
        rightCol--;
        for(int i=rightCol;i>=leftCol;i--)
        {
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[1000][1000];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }  
    }
    return 0;
}