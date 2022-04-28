// Mohammad Safaeirad, 2133075, 13.04.2022
#include <iostream>
#include <vector>
using namespace std;

void PoundToKilo()
{
    vector<float> inputs;
    char inputType;
    double input, result = 0, min = 9999, max = -9999, sum = 0, avg;
    int count = 0;
    do
    {
        if (inputs.size() >= 15)
        {
            cout << "\nYou reached the maximum of 15 conversions";
            break;
        }
        cout << "Enter your input type ('p' for pounds, 'o' for ounces)\nOr 0 for display minimum and maximum and average of values: ";
        cin >> inputType;
        if (inputType == 'p')
        {
            cout << "Enter value in pounds: ";
            cin >> input;
            result = (input / 2.2046);
            inputs.push_back(result);
            count++;
            sum = sum + result;
            cout << "The result is: " << result << endl;
            if (result < min)
            {
                min = result;
            }
            if (result > max)
            {
                max = result;
            }
        }
        else if (inputType == 'o')
        {
            cout << "Enter value in ounces: ";
            cin >> input;
            result = (input / 16) / 2.2046;
            inputs.push_back(result);
            count++;
            sum = sum + result;
            cout << "The result is: " << result << endl;
            if (result < min)
            {
                min = result;
            }
            if (result > max)
            {
                max = result;
            }
        }
        else if (inputType == '0')
        {
            avg = (sum / count);
            cout << "Minimum value is: " << min << "\tMaximum value is: " << max << "\tAverage is: " << avg;
        }

        else
        {
            cout << "Input type invalid try again\n";
        }
    } while (inputType != '0');
}
void KiloToPound()
{
    vector<float> inputs;
    char inputType;
    double input, result = 0, min = 9999, max = -9999, sum = 0, avg;
    int count = 0;
    do
    {
        if (inputs.size() >= 15)
        {
            cout << "\nYou reached the maximum of 15 conversions";
            break;
        }
        cout << "Enter your input type ('k' for kilogram, 'g' for gram)\nOr 0 for display minimum and maximum and average of values: ";
        cin >> inputType;
        if (inputType == 'k')
        {
            cout << "Enter value in kilogram: ";
            cin >> input;
            result = (input * 2.2046);
            inputs.push_back(result);
            count++;
            sum = sum + result;
            cout << "The result is: " << result << endl;
            if (result < min)
            {
                min = result;
            }
            if (result > max)
            {
                max = result;
            }
        }
        else if (inputType == 'g')
        {
            cout << "Enter value in gram: ";
            cin >> input;
            result = (input / 1000) * 2.2046;
            inputs.push_back(result);
            count++;
            sum = sum + result;
            cout << "The result is: " << result << endl;
            if (result < min)
            {
                min = result;
            }
            if (result > max)
            {
                max = result;
            }
        }
        else if (inputType == '0')
        {
            avg = (sum / count);
            cout << "Minimum value is: " << min << "\tMaximum value is: " << max << "\tAverage is: " << avg;
        }
        else
        {
            cout << "Input type invalid try again\n";
        }
    } while (inputType != '0');
}

int main()
{
    char opt;
    cout << "Choose one of the conversion options" << endl;
    cout << "1- Pound or Ounces to Kilogram\n2- Kilogram or Gram to Pound\n0- Exit: ";
    cin >> opt;
    switch (opt)
    {
    case '1':
        PoundToKilo();
        break;
    case '2':
        KiloToPound();
        break;
    case '0':
        cout << "BYE!";
        break;
    default:
        cout << "Invalid input, try again";
        break;
    }

    return 0;
}