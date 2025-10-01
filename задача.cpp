#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
  float x, y;
  cin >> x >> y;

  float R = sqrt(x * x + y * y) / exp(log(x)); 
  float S = pow(cos(( 3.14159/ 4) * x), 2);
  cout << R << endl;
  cout << S << endl;

  float C = max(R, S);
  cout << C;
  

    return 0;
}