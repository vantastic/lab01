#include <iostream>
using namespace std;

int main(){
    int r,c,cc,i;
    for (;;i++){

        cout<<"Enter number of rows and columns:"<<endl;
        cin>>r>>c;
        cc=c;
        
        if(r == 0 || c == 0)
            break;

        for(r;r>0;r--)
        {
            for(c;c>0;c--)
            {
                cout<<"X.";
            }
                c=cc;
            cout<<endl;
        }
    }
    return 0;
}