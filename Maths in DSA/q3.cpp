                                // C++ program to check if a number is an Armstrong number or not

#include<iostream>
using namespace std;


bool isarmstrong(int n){
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
    }
    return sum == n;
}

int main(){
  int n = 153;
  if(isarmstrong(n)){
      cout << "The number is an Armstrong number." << endl;
  } else {
      cout << "The number is not an Armstrong number." << endl;
  }
  return 0;
}