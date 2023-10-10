//PRN: 22070123102
//Program-1

#include<iostream>
using namespace std;

int main(){
    float n1, n2, ans;
    cout<<"Enter values of numbers 1 & 2: ";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch(float num){
        cout<<"\nERROR: Division by "<<num<<endl;
    }
}
/*OUTPUT
Case-1:
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp16_1.cpp -o exp16_1 } ; if ($?) { .\exp16_1 }
Enter values of numbers 1 & 2: 3 5
Answer = 0.6

Case-2:
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp16_1.cpp -o exp16_1 } ; if ($?) { .\exp16_1 }
Enter values of numbers 1 & 2: 3 0

ERROR: Division by 0*/