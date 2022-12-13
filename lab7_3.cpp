#include<iostream>

using namespace std;
#include<cmath>

int adiff(int a, int b){
   int X = abs(a-b);
   while(X>=360){
    X=X-360;
   }
  if (X>180){
    X=360-X;
  }

  return X;
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
