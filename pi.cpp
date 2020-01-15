#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=0;
    double pi=0.0;
    while (true){
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin>>n;
        if (n == -1){
            break;
        }
        int temp = n + 1;
        cout<<"The approximate value of pi using "<< temp;
        if(temp == 1){
            cout <<" term is: ";
        }else{
            cout <<" terms is: ";
        }

        for(n;n>=0;n--)
        {
            pi += 4*pow(-1,n)/(2*n+1);
        }
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout<<pi<<endl;
        pi = 0;
    }
    return 0;
}
