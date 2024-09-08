#include<iostream>
#include<vector>
using namespace std;
mergesort(int arr[],int low,int high,int mid)
{
    vector<int>temp(high-low+1);
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
else
        {
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
     while(j<=high){
        temp[k++]=arr[j++];
    }
    for(int s=0;s<temp.size();s++)
    {
        arr[low+s]=temp[s];
    }
}
merge(int arr[],int low,int high)
{
    if(low<high){
    int mid=(low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
    mergesort(arr,low,high,mid);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
