#include<iostream>
#include<string>

using namespace std;

class Human{
    private:
    string m_name;
    public:
    Human(const string &name): m_name(name){}

    string name() const{
        return m_name;
    }

    void talk_to(const Human &person) const{
        cout<<m_name<<" says: Hello, "<<person.name()<<"!"<<endl;
    }
};


int main(){
    Human joe("Joe");
    Human jennie("Jennie");
    joe.talk_to(jennie);
    jennie.talk_to(joe);
    cout<<endl<<"Press Enter to exit.";
    cin.ignore();
    return 0;
}