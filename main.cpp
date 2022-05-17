#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//function Principal accepts no parameters and returns the entered principal
double Principal(void)
{
        double p;
        cout << "Enter the principal. ";
        cin >> p;
        return p;
}
//-----------------------------------------------------------------------
//function Interest accepts no parameters and returns the monthly interest rate using the entered APR
double Interest(void)
{
        double apr;
        cout << "Enter the APR. ";
        cin >> apr;
        //divides APR by 1200 to calculate monthly interest rate
        return apr/1200;
}
//-------------------------------------------------------------------------
//function monthly accepts no parameters and returns the amount of the monthly payment of the loan
int Monthly(void)
{
        double m;
        cout << "Enter the monthly payment. ";
        cin >> m;
        cout << m << endl;
        return m;
}
//function Term accepts parameters for the principle, monthly interest rate, and the monthly payment and returns the number of months needed to pay the loan
double Term(double P, double i, double m)
{
        return (log( (m/i)/((m/i) - P) )/log(1 + i))/12.0;
}

int main()
{
        double P=Principal();
        double m=Monthly();
        double i=Interest();
        double n=Term(P,i,m);
        double years=n*12;
        cout << "You must make payments for " << fixed << setprecision(2) << years << " months or " << fixed << setprecision(2) << n << " years.";
        cout <<endl;
        return 0;
}

