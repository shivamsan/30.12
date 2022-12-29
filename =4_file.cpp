#include<iostream>
#include<fstream>
using namespace std;
class file
{
    string filename;
    string info;
public:
    string getfilename()
    {
        cout<<"\nEnter Filename : ";
        getline(cin,filename);
        return filename;
    }
    void filecreate(string);
    void fileread(string);
};
void file::filecreate(string fname)
{
    ofstream ost(fname,ios::out);
    if(!ost)
    {
        cout<<"\nFile creation failed..!!"<<endl;
    }
    else
    {
        cout<<"File created sucessfully.."<<endl;
        char ch;
        do
        {
            cout<<"Enter information : "<<endl;
            getline(cin,info);
            ost<<info<<"\n";
            cout<<"\nWhether u want to enter more(y/n) : ";
            cin.get(ch);
            cin.get();
        }while(ch=='y'||ch=='Y');
        ost.close();
    }
}
void file::fileread(string fname)
{
    string line;
    ifstream ist(fname,ios::in);
    if(!ist)
    {
        cout<<"\nFile not found..."<<endl;
    }
    else
    {
        cout<<"\nFile name : "<<fname<<endl;
        cout<<"Entered info: "<<endl;
        while(!ist.eof())
        {
            getline(ist,line);
            cout<<line<<endl;
        }
        ist.close();
    }
}

int main()
{
    file f;
    string fname;
    while(true)
    {
        int choice;
        cout<<"\n------Menu------"<<endl;
        cout<<"1.Create File."<<endl;
        cout<<"2.Read File."<<endl;
        cout<<"3.Exit."<<endl;
        cout<<"----------------"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.get();
        switch(choice)
        {
        case 1:
            fname=f.getfilename();
            f.filecreate(fname);
            break;
        case 2:
            fname=f.getfilename();
            f.fileread(fname);
            break;
        case 3:
            exit(0);
        default:
            cout<<"\nInvalid input."<<endl;
        }
    }
    return 0;
}
