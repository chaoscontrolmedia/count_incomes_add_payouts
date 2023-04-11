//A program for adding bimonthly payments from multiple income sources. Adds the total and assesses financial situation with a message.

#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;



int main(){
    //float a, b, c, d;

    float n;
    int count = 0;
    float num = 0;
    int i  = 0;


      /* code */
    

    cout << "Number of income sources: ";
    cin >> n;
    cout << "Enter " << n << " numbers: " << endl;

    for (i=0; i<n; i++)


    {
        cin >> num;
        count = count + num;
        count++;
    }


    cout << "Total Pay: $" << count <<" bimonthly.";

    if( count >= 4000){
        cout << "\nAt least 106k/year on average with this rate. You're making 6 figures!" << endl;
    }

    if( count >= 3500){
        cout << "/nAround 93k/year. I could easily live off this!" << endl;
    }

    if( count >= 3000){
        cout << "Around 79k/yr on average. This is satisfactory but could we make more?" << endl;
    }

   else if (count >=2600){
        cout <<"\nAround 69k on average. You can say you're middle class with this rate." << endl;
    }

    else if (count >=2100){
        cout <<"\nAround 56k/year. That's about the average American salary. Not bad. " << endl;
    }

 
    else if (count >=1800){
        cout <<"\n Around 48k/year. That's OK. I can make some serious moves with this." << endl;
    }


    else if (count >=1400){
        cout <<"\nAround 37k/yr on average. This isn't that bad if I keep costs low." << endl;
    }

    else if (count >=1000){
        cout <<"\nNot that great. Around 26k/yr on average. I could still make more working FT at minimum wage." << endl;
    }

    else if (count >=750){
        cout <<"\nNot good. Around 19k/yr on average. I can't make any real moves with this." << endl;
    }

    
    else
        cout << "\nLess than 19k/yr.This pay sucks. I'm gonna struggle for a while with this rate." <<endl;
    



    return 0;
}









