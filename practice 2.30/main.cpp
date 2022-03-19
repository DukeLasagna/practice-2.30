#include <iostream>

using namespace std;

int main()
{
    float weight;
    float height;
    float BMI;



    cout << "Please insert Weight(Kg)" << endl;
    cin >> weight;

    cout << "Please insert Height (m)" << endl;
    cin >> height;

    BMI = weight / ( height * height );

    cout << "Your BMI is: " << BMI << endl;

    if ( BMI < 18.5 )
      cout << "Underweight" << endl;
        else
         {
           if ( BMI >= 18.5 && BMI <= 24.9 )
            cout << "Normal" << endl;
               else
               {
                 if ( BMI >=25 && BMI <= 29.9 )
                   cout << "Overweight" << endl;
                    else
                     {
                       if ( BMI >= 30  )
                        cout << "Obese" << endl;
                     }
               }

         }

    return 0;
}
