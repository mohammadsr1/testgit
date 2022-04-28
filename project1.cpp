// Mohammad Safaeirad, Project 1, 22/3/22
#include <iostream>
using namespace std;
void zodiacSign(int day, int month);
int main()
{
    while (true) // Creat the menu
    {
        int day, month;
        string zodiac, element;
        char ans;
        cout << "If you want to see your Horoscope sign and your element enter any charachter: \n";
        cout << "If you want to quit enter 0: ";
        cin >> ans;
        if (ans == '0')
        {
            break;
        }
        cout << "Enter day of your birth: ";
        cin >> day;
        cout << "Enter month of your birth: ";
        cin >> month;
        zodiacSign(day, month); // Function call
    }

    return 0;
}

void error() // Function for error massege
{
    cout << "The data that you entered is invalid\n";
}

void zodiacSign(int day, int month)
{
    string zodiac, element;
    if ((month > 12 || month < 1) || (day > 31 || day < 1))
    {
        error();
        zodiac = "Invalid";
        element = "Invalid";
    }
    else if ((month == 1 && (day >= 28 && day <= 31)) || (month == 2 && (day >= 1 && day <= 18)))
    {
        zodiac = "Aquarius";
        element = "AIR and you are most compatible with (Gemini, Libra, Aquarius) elements";
    }
    else if ((month == 2 && (day >= 19 && day <= 29)) || (month == 3 && (day >= 1 && day <= 20)))
    {
        zodiac = "Pisces";
        element = "WATER and you are most compatible with (Cancer, Scorpio, Pisces) elements";
    }
    else if ((month == 3 && (day >= 21 && day <= 31)) || (month == 4 && (day >= 1 && day <= 19)))
    {
        zodiac = "Aries";
        element = "FIRE and you are most compatible with (Aries, Leo, Sagittarius) elements";
    }
    else if ((month == 4 && (day >= 20 && day <= 30)) || (month == 5 && (day >= 1 && day <= 20)))
    {
        zodiac = "Taurus";
        element = "EARTH and you are most compatible with (Taurus, Virgo, Capricorn) elements";
    }
    else if ((month == 5 && (day >= 21 && day <= 31)) || (month == 6 && (day >= 1 && day <= 21)))
    {
        zodiac = "Gemini";
        element = "AIR and you are most compatible with (Gemini, Libra, Aquarius) elements";
    }
    else if ((month == 6 && (day >= 22 && day <= 30)) || (month == 7 && (day >= 1 && day <= 22)))
    {
        zodiac = "Cancer";
        element = "WATER and you are most compatible with (Cancer, Scorpio, Pisces) elements";
    }
    else if ((month == 7 && (day >= 23 && day <= 31)) || (month == 8 && (day >= 1 && day <= 22)))
    {
        zodiac = "Leo";
        element = "FIRE and you are most compatible with (Aries, Leo, Sagittarius) elements";
    }
    else if ((month == 8 && (day >= 23 && day <= 31)) || (month == 9 && (day >= 1 && day <= 22)))
    {
        zodiac = "Virgo";
        element = "EARTH and you are most compatible with (Taurus, Virgo, Capricorn) elements";
    }
    else if ((month == 9 && (day >= 23 && day <= 30)) || (month == 10 && (day >= 1 && day <= 22)))
    {
        zodiac = "Libra";
        element = "AIR and you are most compatible with (Gemini, Libra, Aquarius) elements";
    }
    else if ((month == 10 && (day >= 23 && day <= 31)) || (month == 11 && (day >= 1 && day <= 21)))
    {
        zodiac = "Scorpio";
        element = "WATER and you are most compatible with (Cancer, Scorpio, Pisces) elements";
    }
    else if ((month == 11 && (day >= 22 && day <= 30)) || (month == 12 && (day >= 1 && day <= 21)))
    {
        zodiac = "Sagittarius";
        element = "FIRE and you are most compatible with (Aries, Leo, Sagittarius) elements";
    }
    else if ((month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day >= 1 && day <= 19)))
    {
        zodiac = "Capricorn";
        element = "EARTH and you are most compatible with (Taurus, Virgo, Capricorn) elements";
    }
    cout << "Your zodiac sign is " << zodiac << endl;
    cout << "Your Horoscope element is " << element << endl;

} // end of void function

/*
If you want to see your Horoscope sign and your element enter any charachter:
If you want to quit enter 0: y
Enter day of your birth: 16
Enter month of your birth: 9
Your zodiac sign is Virgo
Your Horoscope element is EARTH and you are most compatible with (Taurus, Virgo, Capricorn) elements
*/