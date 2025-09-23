#include <iostream>

using namespace std;

int main()
{
    //declare
    string fn,ln,bmi_stat;
    int age, weight;
    char gen;
    float height;

    //inputs
    cout << "Enter First name: " ; cin >> fn;
    cout << "Enter Last name: " ; cin >> ln;
    cout << "Enter Age: "; cin >> age;
    cout << "Enter Gender (M/F): ";cin >> gen;
    cout << "Enter Weight(kg): "; cin >>  weight;
    cout << "Enter Height(m): "; cin >> height;

    //cal
    float bmi = (weight/(height*height));
    if (bmi>=40){
        string bmi_stat = "Class 3 Obesity (Severe Obesity)";

            cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }
    else if (bmi>=35){
        string bmi_stat = "Class 2 Obesity";

            cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }
    else if (bmi>=30){
        string bmi_stat = "Class 1 Obesity";

    cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }
    else if (bmi>=25){
        string bmi_stat = "Overweight";

    cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }
    else if (bmi>=18.5){
        string bmi_stat = "Normal";

    cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }
    else{
        string bmi_stat = "Underweight";

            cout << "Member: " << ln << ',' << fn << "\n";
    cout << "Age/Gender: " << age << ',' << gen<< "\n";
    cout << "Weight: " << weight<< "\n";
    cout << "Height: " << height<< "\n";
    cout << "BMI: "    << bmi<< "\n";
    cout << "Remark: "  << bmi_stat<< "\n";

    }



    return 0;
}
