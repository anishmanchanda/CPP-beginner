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

    /*
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
    */
   
    //HALF PYRAMID AFTER 180 DEG
    /*
    int n;
    cout<<"enter n: ";
    cin>>n;
    string star="*";
    for(int rowno=1;rowno<=n;rowno++){
        for(int colno=1;colno<=n;colno++){
            if(colno<=n-rowno){
                cout<<" ";
            }
            else{
                cout<<star;
            }
        }
        cout<<endl;
    }
    */

   //HALF PYRAMID USING NUMBERS
    /*
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    for(int rowno=1;rowno<=n;rowno++){
        for(int j=1;j<=rowno;j++){
            cout<<rowno<<" ";
        }
        cout<<endl;
    }
    */
   //FLOYDS TRIANGLE
    /*
   int n;
   cout<<"enter no of rows: ";
   cin>>n;
   int counter=1;
   for(int rowno=1;rowno<=n;rowno++){
        for(int colno=1;colno<=rowno;colno++){
            cout<<counter<<" ";
            counter+=1;

        }
        cout<<endl;

   }*/
   
   //BUTTERFLY PATTERN
   /*
   int n;
   cout<<"enter n: ";                           
   cin>>n;                                      
   string star="*";                             
   for(int rowno=1;rowno<=n;rowno++){           
        for(int j=1;j<=rowno;j++){              
            cout<<star;                         
        }                                       
        int numspaces=(2*n)-(2*rowno);          
        for(int j=1;j<=numspaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=rowno;j++){
            cout<<star;
        }
        cout<<endl;}
    for(int rowno=n;rowno>=1;rowno--){
        for(int j=1;j<=rowno;j++){
            cout<<star;
        }
        int numspaces=(2*n)-(2*rowno);
        for(int j=1;j<=numspaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=rowno;j++){
            cout<<star;
        }
        cout<<endl;
        

   }*/

   //INVERTED PATTERN
   /*
   int n;
   cout<<"enter n: ";
   cin>>n;
   for(int rowno=n;rowno>=1;rowno--){
        int counter=1;
        for(int colno=1;colno<=rowno;colno++){
            cout<<counter<<" ";
            counter+=1;
        }
        cout<<endl;
   }*/

   //0-1 PATTERN
   /*int n;
   cout<<"enter n: ";
   cin>>n;
   for(int rowno=1;rowno<=n;rowno++){
        for(int colno=1;colno<=rowno;colno++){
             if((rowno+colno)%2==0){
                cout<<"1 ";
             }
             else{
                cout<<"0 ";
             }
        }
        cout<<endl;
   }*/

   //RHOMBUS PATTERN
   int n;
   cout<<"enter n: ";
   cin>>n;
   for(int rowno=1;rowno<=n;rowno++){
        int numspace=n-rowno;
        for(int colno=1;colno<=numspace;colno++){
            cout<<" ";
        }
        for(int colno=1; colno<=n;colno++){
            cout<<"* ";
        }
        cout<<endl;
   
    
   }

}   
