#include<iostream>
using namespace std;
template<typename t>

void selection(t array[],int n)
{
    int min;
    for (int i = 0; i < n;i++)
    {
        min=i;
        for (int j = i+1; j < n;j++)
        {
            if (array[j]<array[min])
            {
                min=j;
            }
        t temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    
    }
    cout<<"array after sorting "<<endl;
    for (int i = 0; i < n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cout<<"Enter the array length: "<<endl;
    cin>>n;
    int array[n];
    float arr[n];
    cout<<"Enter the INT array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element at "<<i<<" index"<<endl;
        cin>>array[i];
    }
    cout<<"Enter the FLOAT array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element at "<<i<<" index"<<endl;
        cin>>arr[i];
    }
    selection(array,n);
    selection(arr,n);
    return 0;
}
