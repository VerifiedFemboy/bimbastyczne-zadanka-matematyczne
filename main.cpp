#include <iostream>
#include "cmath"

using namespace std;


void fluffy(const int* L, const double* degrees){
    double r = *L / ((*degrees/360.0) * 2 * M_PI);
    cout << "r wynosi: " << r << endl;
    cout << "Srednica jeziorka wynosi: " << 2 * r << endl;
    double PW = (*degrees/360) * (M_PI * (r * r));
    cout << "Pole wycinka wynosi: " << PW << endl;
    double PC = M_PI * r * r;

    double percent = (PW/PC) * 100.0;
    cout << "Procent jaki przebiegła wynosi: " << percent << "%" << endl;
}

double f(const double* a, const double * b, const double * c, const double* x){
    double delta = *b * *b - (4* *a* *c);
    if(delta > 0){
        double x1, x2;
        x1 = (-*b - sqrt(delta)) / 2* *a;
        x2 = (-*b + sqrt(delta)) / 2* *a;

        return *a * (*x - x1)*(*x - x2);
    }else if(delta == 0){
        double x0 = (-*b - sqrt(delta)) / 2* *a;
        return x0;
    }

    cout << "Delta nie może wynosić ujemna!" << endl;
    return 0;
}

int main() {
    setlocale(LC_ALL, "");

    int L = 2;
    double degrees = 60;
//    fluffy(&L, &degrees);
    double a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    cout << f(&a, &b, &c, &x);
    return 0;
}


