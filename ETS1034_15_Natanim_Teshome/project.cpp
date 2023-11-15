//calculates BMI of a person
#include <iostream>
using namespace std;
int main(){
   int weight;
   int height;
   //promot the user to enter their weight
       cout<<"Please Enter Your wight in kilograms"<<endl;
       cin>>weight;
   //promot the user to enter their height
       cout<<"Please Enter your height in metres"<<endl;
       cin>>height;
   // calculates the BMI
       int bmi = weight/(height * height);
   // prints the BMI
    cout<<"your BMI is" << bmi << endl;
    return 0;
}


  //the number mmiles automobil can be driven without refueling
#include <iostream>
using namespace std;
int main(){
   int fuleTank;
   int milePerGallons;
   cout<<"Please Enter the capacity of fule tank in gallons" <<endl;
   cin>>fuleTank;
   cout<<"Please Enter the mile per gallon the automobile can be driven" <<endl;
   cin>>milePerGallons;
   cout<<"Automobile can be driven without refuiling"  << fuleTank * milePerGallons <<endl;
    return 0;
}






