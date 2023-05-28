#include<bits/stdc++.h>
using namespace std;
class taskManager{
    private:
    struct task{
    string description;
    bool completed;
    };
    vector<task>tasks;
    public:
    void print(){
        if(tasks.size()==0){
            cout<<"Empty Task"<<endl;
        }
        for(int i=0;i<tasks.size();i++){
        cout<<"Tasks"<<endl;
            cout<<(tasks[i].completed ?"[x]":"[]")<<tasks[i].description<<endl;
        }
    }
    void add(){
       cout<<"Enter the description"<<endl;
       string description;
       cin>>ws;
       getline(cin,description);
       tasks.push_back({description,false});
       cout<<"task added"<<endl;
    }
    void mark(){
        cout<<"Enter the task to marks as completed"<<endl;
        int num;
        cin>>num;
        
        if(num>=1 && num<=tasks.size()){
            tasks[num-1].completed=true;
            cout<<"Task marked as completed";
        }
        else{
            cout<<"Invalid";
        }
    }
    void del(){
        cout<<"Enter Delete task:";
        int num;
        cin>>num;
        if(num>=1&&num<=tasks.size()){
            tasks.erase(tasks.begin()+num);
            cout<<"the task deleted"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }    
};
int main(){
    taskManager t;
    while(true){
        cout<<"Menu"<<endl;
        cout<<"1.Add task"<<endl;
        cout<<"2.see task"<<endl;
        cout<<"3.mark as task completed"<<endl;
        cout<<"4.delete task"<<endl;
        cout<<"5.quit"<<endl;
        cout<<"Enter the choice:"<<endl;
    int a;
    cin>>a;
    switch(a){
        case 1:
        cout<<"Add task"<<endl;
        t.add();
        break;
        case 2:
        cout<<"See task"<<endl;
        t.print();
        break;
        case 3:
        t.mark();
        break;
        case 4:
        cout<<"Delete task"<<endl;
        t.del();
        break;
        case 5:
        cout<<"Exit"<<endl;
        return 0;
        default:
        cout<<"Invalid the choice.Please try ";
    }
   }
}
