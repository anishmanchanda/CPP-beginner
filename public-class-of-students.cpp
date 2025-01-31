#include <iostream>
#include <string>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

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
    student arr[3];//array of students
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}