//THIS METHOD IS BETTER AND REQ LESS LINES OF COD
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    }//when no parameters passed, default gets called.

    student(string s, int a, int g){
        name = s;
        age=a;
        gender=g;
    }//parameterised constructor


    void printInfo(){//function to print the info of all, 
        cout<<"Name = ";//must be inside class
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl<<endl;
    }
};
int main(){
    //USING CONSTRUCTOR (less code, efficient):-
    //student a("Anish",18,1);
    string n;
    int ag;
    int gen;
    student sArr[3];
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>n;
        cout<<"Age: ";
        cin>>ag;
        cout<<"Gender: ";
        cin>>gen;
        sArr[i]=
    }
    cout<<endl;
    //a.printInfo();
    return 0;
}