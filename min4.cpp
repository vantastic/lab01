#include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_four(int num1, int num2, int num3, int num4){
    int min;
    int min12 = num1;
    int min34 = num3;
    if (num2<=min12){
        min12 = num2;
    }
    if (num4<=min34){
        min34 = num4;
    }
    if (min12<=min34){
        min = min12;
    }
    if (min12>min34){
        min = min34;
    }
    return min;
}


int main(int argc, char *argv[])  {
  if (argc != 5) {
     cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
     cerr << " Prints smallest of the four numbers" << endl;
     exit(1);
   }
 
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   int c = atoi(argv[3]);
   int d = atoi(argv[4]);

   cout << smallest_of_four(a,b,c,d) << endl;
 
   return 0;
 }
