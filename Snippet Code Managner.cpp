#include<bits/stdc++.h>
using namespace std;
class codesnippetmanager{
    private:
    map<string,string>snip;
    public:
    void addsnippet(string &n,string &code){
        snip[n]=code;
        cout<<"Add the Snippet Code Successfully"<<endl;
    }
    void viewsnippet(string &n){
        if(snip.find(n)!=snip.end()){
            cout<<"Snippet's code: "<<char(23)<<snip[n]<<endl;
        }
        else{
            cout<<"Invalid the Snippet "<<endl;
        }
    }
    void Removesnip(string &remove ){
        if(snip.find(remove)!=snip.end()){
            cout<<snip.erase(remove)<<endl;
            cout<<"Snippet Removed"<<endl;
        }
        else{
            cout<<"Invalid the Snippet "<<endl;
        }
    }
    void SnipList(){
        for(auto s:snip){
            cout<<s.first<<endl;
        }
    }

};
int main(){
    codesnippetmanager manage;
    int choice;
    string n ,code;
    while(true){
        cout<<"\n";
        cout<<"1. Add the snippet"<<endl;
        cout<<"2. View the snippet"<<endl;
        cout<<"3. Remove the snippet"<<endl;
        cout<<"4. List the snippets"<<endl;
        cout<<"5. Exit"<<endl; 
    cout<<"Enter the Number"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Add the snippet"<<endl;
        cin>>n;
        cout<<"Enter the snippet code: "<<endl;
        cin.ignore();
        getline(cin,code);
        manage.addsnippet(n,code);
        break;
    case 2:
        cout<<"View the Snippet code: "<<endl;
        cin>>n;
        manage.viewsnippet(n);
        break;
    case 3:
        cout<<"Remove the Snippet: "<<endl;
        cin>>n;
        manage.Removesnip(n);
    case 4:
        cout<<"List of the Snippet: "<<endl;
        manage.SnipList();
    case 5:
        cout<<"Thank you for using the Code Snippet Manager. Goodbye!\n";   
        break;
    default:
        cout<<"Invalid the choice";
    }
    }
}
