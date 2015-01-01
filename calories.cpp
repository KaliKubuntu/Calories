# include <iostream>
int menu();
void DoTask();

    using namespace std;

int main()
    {
    float weight;
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
        bool exit = false;
        for(;;)
        {

        int choice = menu();
        switch(choice)
        {
        case (1):
            DoTask();
            break;
        case(2):
            exit=true;
        default:
            cout << "Please select again!" << endl;
            break;
        }

        if (exit == true)
            break;
        }
    return 0;
    }

    int menu()
    {
        int choice;

    cout << " *** Menu *** " << endl << endl;
    cout << "(1) Check your BMI." << endl;
    cout << "(2) Quit" << endl << endl;
    cout << ": ";
    cin >> choice;
    return choice;
    }

    void DoTask()
    {
        cout << "Check your BMI!" << endl;
    }
