// complex.cpp
//Author:  Stax The Engipreneur
//Date:    24 July 2018
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
using std::sqrt;

#include <cmath>
using std::cout;
using std::cin;
using std::endl;

using namespace std; // cout, endl, complex are all part of this namespace

//simple to be used as substitute for complex<vector>
using complexF = complex<float>;
  
int main()
{
    //initialize local variable
    //coeffs..
    complexF a,b,c;
    //these two variables are used to ensure that we multiply complex numbers with complex numbers 
    complexF four{4,0};
    complexF two{2,0};
    char reply;
    //declare roots as complex, both uninitialized
    complexF root1;
    complexF root2;
    complexF disc;
    
    //compute the following set of statements repeatedly until user quits
    do{
        //prompt user for input
        cout << "Enter coefficients: ";
        cin  >> a >> b >> c;
        
        disc = (b*b) - four*a*c;
        
        //compute roots of equation
        root1 = (-b + sqrt(disc))/(two*a);
        root2 = (-b + sqrt(disc)/(two*a));
        
        //display results
        cout << "Roots of equation:\n";
        cout << root1.real() << " + j" << root1.imag() << endl;
        cout << root2.real() << " + j" << root2.imag() << endl;
        
        //prompt user for reply
        cout << "\nPress q to quit|y to continue): " ;
        cin  >> reply;

    }while(reply != 'q');

    
    //indicate that main terminated successfully
    return 0;
}
