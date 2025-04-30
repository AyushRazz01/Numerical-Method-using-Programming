#include <iostream>
#include <math.h>
using namespace std;

/*equation f(x) */
float f(float x) {
  /* change the equation for solving another problem */
  return pow(x, 2) - 6;
}

/* derivative of equation i.e f'(x) */
float derivative(float x) {
  /* write the derivative of your equation */
  return 2 * x;
}

int main() {
  float x;
  int n, i;

  cout << "Enter initial guess value: ";
  cin >> x;

  cout <<"Enter number of iterations: ";
  cin >> n;
  
  for (i = 1; i <= n; i++) 
  {
    if (derivative(x) == 0) {
      // f'(x) should not be 0
      printf("Division by Zero is not allowed.");
      exit(0);
    }

    //Newton Raphson formula
    x = x - f(x) / derivative(x);

    cout <<"Iteration "<<i<< " and value "<<x<< endl;
  }
  
   cout <<"\n approximate root: "<<x<< endl;
  return 0;
}