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

    if (BMI < 16.0)
    {
        cout<<"SEVERE THINNESS!!!\n";
    }
    else
        if (BMI < 17.0)
        {
            cout<<"MODERATE THINNESS!!\n";
        }
        else
            if (BMI < 18.5)
            {
                cout<<"MILD THINNESS!\n";
            }
            else
                if (BMI < 25.0)
                {
                    cout<<"Normal Range\n";
                }
                else
                    if (BMI < 30.0)
                    {
                        cout<<"Pre-obese!\n";
                    }
                    else
                        if (BMI < 35.0)
                        {
                            cout<<"Obese Class I!\n";
                        }
                        else
                            if (BMI < 40.0)
                            {
                                cout<<"Obese Class II!!\n";
                            }
                            else
                                {
                                    cout<<"Obese Class III!!!\n";
                                }
    cout << endl;
    cout<< "Your ideal weight is between " << ideal_weight_down <<" and "<< ideal_weight_up<<".\n\n";
    cout << endl << endl;

    std::string cont;
    cout << "Do you want to continue (y/N): ";
    cin >> cont;
    cout << endl;

    if (cont.empty() || cont[0] == 'n' || cont[0] == 'N') break;
}
    return 0;
    }
