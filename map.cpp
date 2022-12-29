#include<iostream>
#include<map>
#include<string>


using namespace std;

int main(){

    typedef map<string,int> maptype;
    maptype pop;

    pop.insert(pair<string, int>("Maharashtra", 1235753346));
    pop.insert(pair<string, int>("Rajasthan", 75757565547));
    pop.insert(pair<string, int>("Gujrat", 65565667));
    pop.insert(pair<string, int>("Uttrakhund", 866165181));
    pop.insert(pair<string, int>("Haryana", 21654811));
    
    maptype::iterator iter;

    cout<<"* * * * * * *  * population of States in India* * * * *  * * \n";
    cout<<"\nSize of populationmap is "<<pop.size()<<endl;

    string state;
    cout<<"enter the name of state :";

    cin>>state;

    iter = pop.find(state);

    if (iter != pop.end())
    {
        cout<<state<<" population is"<<iter->second;
    }
    else
    cout<<"key is not in populaton "<<endl;

    pop.clear();
    



    return 0;
}
