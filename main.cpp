 /*
    Glenn Ahearne
    06/11/17
    Exercise 10
    555 timer
  */

    /**Preprocessive Directives*/
#include <iostream>

using namespace std;

    /**function prototype*/
void timer555(double, double, double, double*, double*);

    /**Main Function*/
int main()
{

    /**Variable Declarations*/
   double r1=0, r2=0, c1=0, outfreq, dutycycle;
   double *outfreq_ptr, *dutycycle_ptr;

    /**assigning pointer to address*/
   outfreq_ptr = &outfreq;
   dutycycle_ptr = &dutycycle;

    /**while loop to ensure R1 greater than zero*/
   while (r1 <=0)

   {
   cout<< "\t\t\nEnter Value For Resistor 1 Greater than Zero : ";
   cin >> r1;

   }
   /**while loop to ensure R2 greater than zero*/
   while (r2<=0)
   {
   cout<< "\t\t\nEnter Value For Resistor 2 Greater than Zero : ";
   cin >> r2;
   }
   /**while loop to ensure C1 greater than zero*/
   while (c1<=0)
   {

    cout<< "\t\t\nEnter Value For Capacitor 1 Greater than Zero : ";
    cin >> c1;

   }

    /**Calling 555 timer function*/
  timer555(r1, r2, c1, outfreq_ptr, dutycycle_ptr);

      /**outputing results to user*/
   cout << "\t\t\nOutput Frequency is :"<< outfreq << " Hz" << endl;
   cout<< "\t\t\nDuty Cycle is : " << dutycycle << "%" <<endl;

 return 0;
}

    /**555 function calculations*/
   void timer555(double r1, double r2, double c1, double*outfreq_ptr, double*dutycycle_ptr)

     /**calculating output frequency and duty cycle to user*/
   {
       *outfreq_ptr = 1.44 / ((r1 + (2.0*r2))*c1);

       *dutycycle_ptr = (r1 + r2) / (r1 + (2.0*r2));

   }
