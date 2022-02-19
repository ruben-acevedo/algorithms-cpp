#include <iostream>  
#include <iomanip>
#include <cmath>
 using namespace std; 
 
 struct Response {
     float r1, r2;
 };

Response bhaskara(float a,float b,float c) {
    float D = pow(b, 2) - 4*a*c;
    float r1,r2;
    if (a == 0 || D < 0) return Response {
        r1 = -1,
        r2 = -1
    };
    return Response {
        r1 = (-b + sqrt(D))/(2*a),
        r2 = (-b - sqrt(D))/(2*a)
    };

};

 int main() {
     float a,b,c;
     cin >> a >> b >> c;

    Response res = bhaskara(a,b,c);
     if ( res.r1 == -1) cout << "Impossivel calcular" << endl;
     else {
         cout << fixed << setprecision(5) << "R1 = " << res.r1 << endl;
         cout << fixed << setprecision(5) << "R2 = " << res.r2 << endl;
     }
}