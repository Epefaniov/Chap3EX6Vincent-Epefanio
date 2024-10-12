#include <iostream>
using namespace std;


int main() {
    
    const int originalCookies = 48;
    const double sugarPerBatch = 1.5; 
    const double butterPerBatch = 1.0; 
    const double flourPerBatch = 2.75; 

    
    int desiredCookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    
    double scaleFactor = static_cast<double>(desiredCookies) / originalCookies;

    
    double requiredSugar = sugarPerBatch * scaleFactor;
    double requiredButter = butterPerBatch * scaleFactor;
    double requiredFlour = flourPerBatch * scaleFactor;

    
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << requiredSugar << " cups of sugar" << endl;
    cout << requiredButter << " cups of butter" << endl;
    cout << requiredFlour << " cups of flour" << endl;

    return 0;
}
