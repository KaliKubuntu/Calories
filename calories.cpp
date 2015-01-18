# include <iostream>

int main()
    {
    using namespace std;
    float weight;
    float length;
    float BMI;
    float ideal_weight_down;
    float ideal_weight_up;
for(;;){
    cout<<"To get your BMI according to W. H. O's defined criteria,\n";
    cout<<"you'll be asked for your weight and height.\n\n";

    cout<<"Enter your weight in kilograms: \n";
    cin>>weight;

    cout<<"Enter your height by meter: \n";
    cin>>length;

    BMI=weight/ (length * length);
    ideal_weight_down=18.5 * (length * length);
    ideal_weight_up=24.99 * (length * length);

    cout << endl;

    if (BMI<16.00)
    {
        cout<<"SEVERE THINNESS!!!\n";
    }
    else
        if (16.00<=BMI&&BMI<=16.99)
        {
            cout<<"MODERATE THINNESS!!\n";
        }
        else
            if (17.00<=BMI&&BMI<=18.49)
            {
                cout<<"MILD THINNESS!\n";
            }
            else
                if (18.50<=BMI&&BMI<=24.99)
                {
                    cout<<"Normal Range\n";
                }
                else
                    if (25<=BMI&&BMI<=29.99)
                    {
                        cout<<"Pre-obese!\n";
                    }
                    else
                        if (30<=BMI&&BMI<=34.99)
                        {
                            cout<<"Obese Class I!\n";
                        }
                        else
                            if (35<=BMI&&BMI<=39.99)
                            {
                                cout<<"Obese Class II!!\n";
                            }
                            else
                                if (40<=BMI)
                                {
                                    cout<<"Obese Class III!!!\n";
                                }
    cout << endl;
    cout<< "Your ideal weight is between " << ideal_weight_down <<" and "<< ideal_weight_up<<".\n\n";
    cout << endl << endl;
}
    return 0;
    }
