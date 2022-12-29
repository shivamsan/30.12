#include<iostream>
using namespace std;

class publication
{
    string title;
    float price;
public:
    publication()
    {
        title="";
        price=0.0;
    }
    void getdata()
    {
        cout<<"\nEnter Title : ";
        cin.ignore();
        getline(cin,title);
        cout<<endl;
        cout<<"Enter price : ";
        cin>>price;
        cout<<endl;
    }
    void putdata()
    {
        //cout<<"\n======Details======";
        cout<<"\nTitle : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class book:public publication
{
private:
    int pages;
public:
    book()
    {
        pages=0;
    }
    void getdata()
    {
        publication::getdata();
        cout<<"Enter no. of pages : ";
        cin>>pages;
        cout<<endl;
    }
    void putdata()
    {
        publication::putdata();
        try
        {
            if(pages<=0)
                throw pages;
        }
        catch(int f)
        {
            cout<<"Error:pages not valid: "<<f<<endl;
            pages=0;
        }
        cout<<"Pages count : "<<pages<<endl;
    }
};

class tape:public publication
{
private:
    int playtime;
public:
    tape()
    {
        playtime=0;
    }
    void getdata()
    {
        publication::getdata();
        cout<<"Enter playtime (in mins) : ";
        cin>>playtime;
        cout<<endl;
    }
    void putdata()
    {
        publication::putdata();
        try
        {
            if(playtime<=0)
                throw playtime;
        }
        catch(int f)
        {
            cout<<"Error:playtime not valid: "<<f<<endl;
            playtime=0;
        }
        cout<<"Playtime : "<<playtime<<endl;
    }
};

int main()
{
    int ch;
    book b[20];
    tape t[20];
    int bkcount=0,tapecount=0;
    do
    {
    cout<<"\n======MENU======\n";
    cout<<"1.Add book"<<endl;
    cout<<"2.Add tape"<<endl;
    cout<<"3.Display book"<<endl;
    cout<<"4.Display tape"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>ch;
    cout<<endl;

    //do
    //{
        switch(ch)
        {
            case 1:
                cout<<"\n------Add Book Details------\n";
                b[bkcount].getdata();
                bkcount++;
                cout<<endl;
                break;
            case 2:
                cout<<"\n------Add Tape Details------\n";
                t[tapecount].getdata();
                tapecount++;
                cout<<endl;
                break;
            case 3:
                cout<<"\n******BOOK DETAILS ******\n";
                for(int j=0;j<bkcount;j++)
                {
                    cout<<endl<<j+1<<".";
                    b[j].putdata();
                    cout<<endl;
                }
                cout<<"---------------------------";
                cout<<"\nTotal count : "<<bkcount<<endl;
                cout<<"---------------------------";
                cout<<"\n**************************"<<endl;
                break;
            case 4:
                cout<<"\n******TAPE DETAILS ******\n";
                for(int j=0;j<tapecount;j++)
                {
                    cout<<endl<<j+1<<".";
                    t[j].putdata();
                    cout<<endl;

                }
                cout<<"---------------------------";
                cout<<"\nTotal count : "<<tapecount<<endl;
                cout<<"---------------------------";
                cout<<"\n**************************"<<endl;
                break;
            //default:
              //  cout<<"\nInvalid input "<<endl;

        }
    }while(ch!=5);
    return 0;
}

