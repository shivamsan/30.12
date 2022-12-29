#include<iostream>
using namespace std;
class studata;
class student
{
    string name;
    int roll_no;
    string cls;
    char* div;
    string dob;
    char* bg;
    static int count;
public:
    student()
    {
        name="ABC";
        roll_no=00;
        cls="0";
        div= new char;
        dob="dd/mm/yy";
        bg=new char[4];
    }
    static int getcount()
    {
        return count;
    }
    void getdata(studata*);
    void dispdata(studata*);
};
class studata
{
    string address;
    long int* teleno;
    long int* dlno;
    friend class student;
public:
    studata()
    {
        address="----";
        teleno=new long;
        dlno=new long;
    }
    void getstudata()
    {
        cout<<"\nEnter address: ";
        cin.get();
        getline(cin,address);
        cout<<"\nEnter telephone no.: ";
        cin>>*teleno;
        cout<<"\nEnter driver lincense no.: ";
        cin>>*dlno;
    }
    void dispstudata()
    {
        cout<<"\nAddress             : "<<address;
        cout<<"\nTelephone no.       : "<<*teleno;
        cout<<"\nDriver Lincense no. : "<<*dlno;
    }
};
inline void student::getdata(studata* st)
{
    cout<<"\nEnter name: ";
    getline(cin,name);
    cout<<"\nEnter roll no.: ";
    cin>>roll_no;
    cout<<"\nEnter class: ";
    cin.get();
    getline(cin,cls);
    cout<<"\nEnter division: ";
    cin>>div;
    cout<<"\nEnter dob: ";
    cin.get();
    getline(cin,dob);
    cout<<"\nEnter bloodgroup: ";
    cin>>bg;
    st->getstudata();
    count++;
}
inline void student::dispdata(studata* st)
{
    cout<<"\nName                : "<<name<<endl;
    cout<<"Class               : "<<cls<<endl;
    cout<<"Div.                : "<<div<<endl;
    cout<<"Rollno.             : "<<roll_no<<endl;
    cout<<"DoB                 : "<<dob<<endl;
    cout<<"Bloodgroup          : "<<bg<<endl;
    st->dispstudata();
}
int student::count;
int main()
{
    student* stud1[100];
    studata* stud2[100];
    int n=0;
    char ch;
    do{
       stud1[n]=new student;
       stud2[n]=new studata;
       stud1[n]->getdata(stud2[n]);
       n++;
       cout<<"Do u want to add another student(y/n): ";
       cin>>ch;
       cin.get();
    }while (ch == 'y' || ch == 'Y');

    for(int i=0;i<n;i++)
    {
        cout<<"\n---------------------------------------";
        stud1[i]->dispdata(stud2[i]);
    }
    cout<<"\n---------------------------------------"<<endl;
    cout<<"Total count: "<<student::getcount()<<endl;
    cout<<"-----------------------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
        delete stud1[i];
        delete stud2[i];
    }
    return 0;
}

