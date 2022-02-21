#include<iostream>
using namespace std;

int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(n == 0) return 1;
    if(x == 0) return 0;
    int smallOutput = power(x,n-1);
    int output = x * smallOutput;
    return output;
}



int main(){
    int x,n;
    cin >> x >> n;
    int out = power(x,n);
    cout << out << endl;
   return 0;
}