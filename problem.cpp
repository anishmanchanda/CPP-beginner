//Simple Calculator
#include <iostream>
using namespace std;

int func(int numin){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    if (numin==1){
        return n1+n2;
    }
    else if (numin==2){
        return n1-n2;
    }
    else if(numin==3){
        return n1*n2;
    }
    else if(numin==4){
        return n1/n2;
    }
    else if(numin==5){
        return n1%n2;
    }
    else{
        return 0.0;
    }
}
int main(){
    bool flag=true;
    int num;
    string arr[15];
    int count=0;
    while(flag==true){
        cin>>num;
        if(num>0 && num<6){
            int val=func(num);
            arr[count]=to_string(val);
        }
        else if (num==6){
            break;
            flag=false;
        }
        else{
            arr[count]="Invalid Operation";
        }
        count+=1;
    }
    cout<<endl;
    for(int i=0;i<count;i++){
        cout<<arr[i]<<endl;
    }

}