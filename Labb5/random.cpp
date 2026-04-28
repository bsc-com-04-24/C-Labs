#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dist(0,11);

    int daysUntilExpiration = dist(gen);

      cout << "The days until expiration is: " << daysUntilExpiration << endl;

    if(daysUntilExpiration >=6 || daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon. Renew now! " << endl;
    
    } else if (daysUntilExpiration >= 2 || daysUntilExpiration <= 5 ){
        cout << "Your subscription expires in " << daysUntilExpiration << " Renew now and save 10%! " << endl;
    
    } else if (daysUntilExpiration == 1){
        cout << "Your subscription expires within a day! Renew now and save 20%! " << endl;
    
    } else if (daysUntilExpiration == 0){
        cout << "Your subscription has expired. " << endl;
    
    } else {
        cout << "You have an active subscription. " << endl;
    }

         //cout << "The days until expiration is: " << daysUntilExpiration << endl;
    

    return 0;
}
