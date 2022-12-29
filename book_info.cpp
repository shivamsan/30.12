#include<iostream>
using namespace std;

class publication
{
private:
string title;
float price;
public:
void add()
{
cout<<"\nEnter Publication Information\n";
cout<<"Enter the Title:\n";
cin>>title;
cout<<"Enter the price:\n";
cin>>price;
}
void display()
{
cout<<"\n************************\n";
cout<<"Title is : \n"<<title;
cout<<"\nPrice is : \n"<<price;
}
};

class book:public publication
{
private:
int page_count;
public:
void add_book()
{
try
{
add();
cout<<"Enter the page count of the book:\n";
cin>>page_count;
if(page_count<=0)
throw page_count;
}
catch(...)
{
cout<<"Invalid page count\n";
page_count=0;
}
}
void display_book()
{
display();
cout<<"\n Page Count of the entered book is :\n"<<page_count;
cout<<"\n************************\n";
}
};

class tape:public publication
{
private:
float mins;
public:
void add_tape()
{
try
{
add();
cout<<"Enter the play time of the tape:\n";
cin>>mins;
if(mins<=0)
throw mins;
}
catch(...)
{
cout<<"Invalid Playtime\n";
mins=0;
}
}
void display_tape()
{
display();
cout<<"\nPlay time of the entered tape is:\n";
cout<<mins;
cout<<"\n************************\n";
}
};

int main()
{
book b1[10];
tape t1[10];
int ch,b_count=0,t_count=0;
do
{
cout<<"\n************************\n";
cout<<"\nMENU\n";
cout<<"1.Add information to books \n2.Add information to tapes \n3.Display information of books \n4.Displayinformation of tape \n5.Exit \n";
cout<<"\nEnter your choice:\n";
cin>>ch;
switch(ch)
{
case 1:
b1[b_count].add_book();
b_count++;
break;
case 2:
t1[t_count].add_tape();
t_count++;
break;
case 3:
cout<<"\n***PUBLICATION INFORMATION SYSTEM(BOOKS)***\n";
for(int j=0;j<b_count;j++)
{
b1[j].display_book();
}
break;
case 4:
cout<<"\n***PUBLICATION INFORMATION SYSTEM(TAPE)***\n";
for(int j=0;j<t_count;j++)
{
t1[j].display_tape();
}
break;
case 5:
cout<<"\nThe programme has been ended by you\n";
break;
default:
cout<<"\nInvalid Choice!!!\n";
break;
}
cout<<"\nDo you want to continue?(1/0):\n";
cin>>ch;
}
while(ch!=0);
return 0;
}
