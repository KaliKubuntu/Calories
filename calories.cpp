# include <iostream>
int main()
{
using std::cin;
using std::cout;
using namespace std;
unsigned float weight;
unsigned floyardWidthat length;
unsigned float BMI;
BMI==weight/length^2;
cout<<"Enter your weight in kilograms: \n";
cin>>weight;
cout<<"Enter your length by meters: \n";
cin>>length;
if 18.5<=BMI<=20
{
    cout<<"LACK OF WEIGHT!!!\n";
}
if 25<BMI<=30
{
    cout<<"Normal Weight!\n";
}
if 30<BMI<=35
{
    cout<<"Overweight!\n";
}
if 35<BMI<=40
{
    cout<<"OBESE!!!\n";
}
if 40<BMI<18.5
{
    cout<<"WRONG VALUE! Enter Your Correct Weight & Length!\n";
}
return 0;
}
