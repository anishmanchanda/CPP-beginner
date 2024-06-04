//patterns with c++
#include <iostream>
using namespace std;

int main(){
    
    //RECTANGLE

    /*
    int length,breadth;
    cout<<"enter length";
    cin>>length;
    cout<<"enter breadth";
    cin>>breadth;
    string star="* ";
    for(int i=1;i<=length;i++){
        for(int j=1;j<=breadth;j++){
            cout<<star;

        } 
        cout<<endl;
    }
    */


   //HOLLOW RECTANGLE

    /*
   int rows,collumns;
   cout<<"enter no. of rows";
   cin>>rows;
   cout<<"enter no. of collumns";
   cin>>collumns;
   string star=" *";
   for(int rowno=1;rowno<=rows;++rowno){
        for(int colno=1;colno<=collumns;++colno){
            if(rowno==1 or rowno==rows){
                cout<<star;
            }
            else{
                if(colno==1 or colno==collumns){
                    cout<<star;
                }
                else{
                    cout<<" ";
                }
            }
            } 
        cout<<endl;
        }
    */


    //INVERTED HALF PYRAMID

    int n;
    cout<<"enter n: ";
    string star="*";
    cin>>n;
    for(int rowno=n;rowno>=1;rowno--){
        for(int i=1;i<=rowno;i++){
            cout<<star;
        }     
        cout<<endl;
        
    } 

}   

