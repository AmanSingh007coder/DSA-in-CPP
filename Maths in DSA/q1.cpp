                                                // to check prime number

#include <iostream>
using namespace std;

string isprime(int n){
    if(n <= 1){
      return "not prime";
    }

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return "not prime";
        }
    }
    return "prime";
}


int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;

    cout<<isprime(n);

  return 0;
}