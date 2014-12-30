    # include <iostream>

    int main()
    {
    using namespace std;
    unsigned short int weight;
    float length;
    int BMI;

    cout<<"Enter your weight in kilograms: \n";
    cin>>weight;

    cout<<"Enter your height by meter: \n";
    cin>>length;

    BMI=weight/ (length * length);

    if (18.5<=BMI&&BMI<=20)
    {
        cout<<"LACK OF WEIGHT!!!\n";
    }
    else
    if (25<BMI&&BMI<=30)
    {
        cout<<"Normal Weight!\n";
    }
    else
    if (30<BMI&&BMI<=35)
    {
        cout<<"Overweight!\n";
    }
    else
    if (35<BMI&&BMI<=40)
    {
        cout<<"OBESE!!!\n";
    }
    else
    if (40<BMI||BMI<18.5)
    {
        cout<<"WRONG VALUE! Enter Your Correct Weight and Height!\n";
    }
    cout << endl << endl;
    return 0;
    }
