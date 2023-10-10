//PRN: 22070123102
//Program-2

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a){
        cout<<"\nERROR: Underage! ("<<age<<")"<<endl;
    }
}
/*OUTPUT
Case-1:
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp16_2.cpp -o exp16_2 } ; if ($?) { .\exp16_2 }
Enter age: 15

ERROR: Underage! (15)

Case-2:
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp16_2.cpp -o exp16_2 } ; if ($?) { .\exp16_2 }
Enter age: 19
Age: 19
APPROVED*/