#include<iostream>
using namespace std;

template <typename T>
void sort (T a[],int n)
{
    int min_ind;
    T temp;
    cout<<"\nUnsorted array : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<"\t";
            }
    for(int i=0;i<n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_ind])
                min_ind=j;
        }
        if(min_ind!=i)
        {
            temp=a[i];
            a[i]=a[min_ind];
            a[min_ind]=temp;
        }
    }
    cout<<"\nSorted Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    //#define size 20;
    int ch,n;
    int x[20];
    float y[20];
    do
    {
        cout<<"\n------menu------\n";
        cout<<"1.int type "<<endl;
        cout<<"2.float type "<<endl;
        cout<<"3.Exit "<<endl;
        cout<<"----------------"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter no. of int numbers : ";
            cin>>n;
            cout<<"\nEnter int numbers : "<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>x[i];
            }
            //cout<<"\nUnsorted array : ";
            //for(int i=0;i<n;i++)
            //{
              //  cout<<x[i]<<"\t";
            //}
            sort<int>(x,n);
            break;
        case 2:
            cout<<"\nEnter no. of float numbers : ";
            cin>>n;
            cout<<"\nEnter float numbers : "<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>y[i];
            }
            //cout<<"\nUnsorted array : ";
            //for(int i=0;i<n;i++)
            //{
              //  cout<<y[i]<<"\t";
            //}
            sort<float>(y,n);
            break;
        case 3:
            exit(0);

        }
    }while(ch!=3);
    return 0;
}
