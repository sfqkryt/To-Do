#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
char cined;
int main()
{
    int count;
    int choice;
    int del=0;
    vector <string> tusks;
    string tusk;
    int blya=1;
    bool flag=true;
    while (flag)
    {
    
        cout <<"To-Do List"<<endl;
        cout << "1. Add Task"<<endl;
        cout << "2. Delete all task"<<endl;
        cout << "3. Display Tasks"<<endl;
        cout<<"4.Exit"<<endl;
    cin>>cined;
    cin.ignore();
        /////
    switch (cined)
    {
    case '1':
    
    cout<<"Write tusk:";
    getline(cin,tusk);
    tusks.push_back(tusk);

    break;
    case '2':
    if(tusks.empty())
    {
        cout<<"eblan?";
    }
    else
    {
       tusks.clear();
       cout<<"All tasks deleted!"<<endl;
    
    }
        break;

    case '3':
        cout<<"Tusks:"<<endl;
        for(int i=0;i<tusks.size();i++)
        {
            cout<<blya++<<'.'<<tusks[i]<<endl;
        }
        if (tusks.empty())
        {
            cout<<"No more tasks!"<<endl;
        }
        
        break;
     case '4':
        return flag=false;
        break;
    
    default:
    cout<<"to 0xTunay";
        break;
    }
}
return 0;
}
    


