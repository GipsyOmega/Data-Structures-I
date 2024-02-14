#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;

// Structure for storing the personal information of the user
struct personal_info
{
    string name;
    int age;
    long int aadhar_no;
    char dob[20];
    string address;
    long int phone_no;
    string cur_date;   // Registration Date
    string final_date; // Appointment Date
    int amount;
    long int upi;
    int dose;
};

// Structure for storing wallet information
struct wallet
{
    long int acc_no;
    string exp;
    int cvv;
    int amt;
};

// Show Wallet Function
// Function for displaying the wallet
// Return wallet amount + (discount*cost)
int show_wallet(personal_info p, wallet w)
{
    cout << endl;
    cout << endl;
    cout << "                  Welcome to our Smart-Wallet Features!         " << endl;
    cout << "  \" Our Smart-Wallet stores your payment information for future payments!\" " << endl;
    cout << "    \"It gives you tremendous discounts on Vaccines & Medicine Purchases!\"  " << endl;
    cout << "            \"Online Payment can now be made by just ONE Click!\"    " << endl;
    cout << endl;
    cout << setw(20) << "Enter your Card Details: " << endl;
    cout << "Enter Account Number      :     ";
    cin >> w.acc_no;
    cout << "Enter Expiration Month    :     ";
    cin >> w.exp;
    cout << "Enter your CVV            :     ";
    cin >> w.cvv;
    cout << "Enter Amount in Card      :     ";
    cin >> w.amt;
    cout << endl;

    float discount = 0;
    if (p.amount <= 1500)
    {
        discount = 0.2;
    }
    else if (p.amount <= 2500 && p.amount > 1500)
    {
        discount = 0.4;
    }
    else
    {
        discount = 0.5;
    }
    cout << setw(56) << "DISPLAYING WALLET" << endl;
    cout << endl;
    cout << "       --------------------------------------------------------------------------------------------\n";
    cout << setw(56) << "WALLET" << endl;
    cout << "       --------------------------------------------------------------------------------------------\n";
    cout << setw(46) << "     |      Account Number                : " << setw(40) << w.acc_no << "            |" << endl;
    cout << setw(46) << "     |      Name on Card                  : " << setw(40) << p.name << "            |" << endl;
    cout << setw(46) << "     |      Expiration Month (MM/YY)      : " << setw(40) << w.exp << "            |" << endl;
    cout << setw(46) << "     |      CVV                           : " << setw(40) << w.cvv << "            |" << endl;
    cout << setw(46) << "     |      Amount                        : " << setw(40) << w.amt << "            |" << endl;
    cout << setw(46) << "     |      Discount Available            : " << setw(40) << (discount * 100) << "%"
         << "           |" << endl;
    cout << "       --------------------------------------------------------------------------------------------\n";
    // cout << setw(14) << "                 |" << endl;
    cout << "             \"CAUTION: Discount only available if you pick WALLET as a Payment Option! :)\" " << endl;
    cout << endl;
    return w.amt + (discount * p.amount);
}

// Billing Function
// Displays the billing output for Cash, UPI and Wallet
void billing(personal_info p, int cash, string s)
{
    cout << endl;
    cout << "Choose the Billing Option: \n";
    cout << "1: UPI\n";
    cout << "2: Cash\n";
    cout << "3. Wallet (Credit/Debit Card)\n";
    cout << "Enter your choice: \n";
    int mode;
    cin >> mode;
    // int left = cash - (p.amount * disc);
    int left = cash - p.amount;
    switch (mode)
    {
    case 1:
        cout << endl;
        cout << endl;
        cout << "   ******************************** BILLING SLIP ********************************\n";
        cout << "   **************************                           ************************* \n";
        cout << "   *****************                                            ***************** \n";
        cout << "   *********                                                           ********** \n";
        cout << "   ***                                                                        *** \n";
        cout << "   *                                                                            * \n";

        cout << "   Name                        :             " << p.name << "                         \n";
        cout << "   Phone Number                :             " << p.phone_no << "                     \n";
        cout << "   Date of billing             :             " << p.cur_date << "                     \n";
        cout << "   Mode of payment             :             UPI "
             << "                              \n";
        cout << "   Doctor                      :             " << s << "                              \n";
        cout << "   Amount Paid                 :             " << p.amount << "                       \n";
        cout << "   UPI ID                      :             " << p.upi << "                           \n";
        cout << "   *****************************************************************************\n";
        cout << endl;
        cout << "  ************          *    THANK YOU FOR VISITING US   *        *************\n";
        cout << "  ***************    * ARPAN GOYAL SUPER SPECIALITY HOSPITAL  *    *************\n";
        cout << endl;
        break;

    case 2:
        cout << endl;
        cout << endl;
        cout << "   ******************************** BILLING SLIP ********************************\n";
        cout << "   **************************                           ************************* \n";
        cout << "   *****************                                            ***************** \n";
        cout << "   *********                                                           ********** \n";
        cout << "   ***                                                                        *** \n";
        cout << "   *                                                                            * \n";
        cout << "   Name                        :             " << p.name << "                        \n";
        cout << "   Phone Number                :             " << p.phone_no << "                    \n";
        cout << "   Date of billing             :             " << p.cur_date << "                    \n";
        cout << "   Mode of payment             :             Cash"
             << "                       \n";
        cout << "   Doctor                      :             " << s << "                             \n";
        cout << "   Amount Paid                 :             " << p.amount << "                      \n";

        cout << "   ******************************************************************************\n";
        cout << endl;
        cout << "  ************         *    THANK YOU FOR VISITING US   *         ***************\n";
        cout << "  ****************     * ARPAN GOYAL SUPER SPECIALITY HOSPITAL  *  ***************\n";
        cout << endl;
        break;

    case 3:
        cout << endl;
        cout << endl;
        cout << "   ******************************** BILLING SLIP ********************************\n";
        cout << "   **************************                           ************************* \n";
        cout << "   *****************                                            ***************** \n";
        cout << "   *********                                                           ********** \n";
        cout << "   ***                                                                        *** \n";
        cout << "   *                                                                            * \n";
        cout << "   Name                        :             " << p.name << "                         \n";
        cout << "   Phone Number                :             " << p.phone_no << "                     \n";
        cout << "   Date of billing             :             " << p.cur_date << "                     \n";
        cout << "   Mode of payment             :             Wallet "
             << "                              \n";
        cout << "   Doctor                      :             " << s << "                              \n";
        cout << "   Amount Paid                 :             " << p.amount << "                       \n";
        cout << "   Amount Left                 :             " << left << "                \n";
        cout << "   *****************************************************************************\n";
        cout << endl;
        cout << "  ************          *    THANK YOU FOR VISITING US   *        *************\n";
        cout << "  ***************    * ARPAN GOYAL SUPER SPECIALITY HOSPITAL  *    *************\n";
        cout << endl;
        break;

    default:
        cout << "The payment option doesn't match with our given option";
    }
}

// Appointment Function
// Decides the date for the appointment
string appointment(personal_info p)
{
    string date = p.cur_date;
    int first_digit;
    int last_digit;
    first_digit = date[3];
    last_digit = date[4];
    string final;

    // 0--48   1--49  2--50  9---57

    //12-06-2021
    if (date[3] < 49)
    {
        last_digit++;
        date[4] = last_digit;
        final = date;
    }

    if (date[3] == 49)
    {
        if (date[4] == 50) //12-December
        {
            first_digit = 48;
            last_digit = 49;
            date[3] = first_digit;
            date[4] = last_digit;
            date[9]++;
            final = date;
        }

        else
        {
            if (date[4] < 50)
            {
                last_digit++;
                date[4] = last_digit;
            }
            final = date;
        }
    }
    return final;
    //p.final_date = final;
}

// Receipt Function
// Displays the appointment slip
void receipt(personal_info p, string s)
{
    cout << endl;
    cout << endl;
    cout << "                 Here is your Vaccination Appointment Slip!!\n";
    cout << endl;
    cout << "   *************************** APPOINTMENT SLIP ********************************\n";
    cout << "   ******                                                                 ******\n";
    cout << "   Name                             :             " << p.name << "                        \n";
    cout << "   Age                              :             " << p.age << "                         \n";
    cout << "   Aadhar Number                    :             " << p.aadhar_no << "                   \n";
    cout << "   Date of Birth                    :             " << p.dob << "               \n";
    cout << "   Address                          :             " << p.address << "                     \n";
    cout << "   Phone Number                     :             " << p.phone_no << "                    \n";
    cout << "   Date of Registration             :             " << p.cur_date << "                    \n";
    cout << "   Date of Appointment              :             " << p.final_date << "                    \n";
    if (p.dose != 0)
    {
        cout << "   Dose                             :             " << p.dose << "                      \n";
    }
    cout << "   Doctor                           :             " << s << "                             \n";
    cout << "   Amount Paid                      :             " << p.amount << "                      \n";
    cout << "   *****************************************************************************  \n";
    cout << endl;
    cout << "                        *   Stay Safe, Get Vaccinated!   *\n";
    cout << "                         *  Issued in Public Interest  *\n";
    cout << endl;
    cout << "  ************          *    THANK YOU FOR VISITING US          *  **************\n";
    cout << "  ******************    * ARPAN GOYAL SUPER SPECILITY HOSPITAL  *  **************\n";
    cout << endl;
}

// Main Function
int main()
{
    struct personal_info p1;
    struct wallet w1;
    p1.dose = 0;
    string doc1 = "Dr. Habibi Jain";
    string doc2 = "Dr. Shruti Aggarwal";
    string doc3 = "Dr. Honda Kakkar";
    string doc4 = "Dr. Mohit Dickwella";
    string doc5 = "Dr. Virat Kohli";
    string doc6 = "Dr. Anushka Sharma";
    string doc7 = "Dr. Jitesh Goyal";
    string doc8 = "Dr. Juhi";
    string doc9 = "Dr. CP Singh";

    cout << "       -----------------------------------------------------------------------------------------------------------------------------------\n";
    cout << endl;
    cout << "      *************************************************** VACCINATION MANAGEMENT SYSTEM ***************************************************\n";
    cout << endl;
    cout << "                                                 $$$  ARPAN GOYAL SUPER SPECIALITY HOSPTITAL  $$$                     \n";
    cout << "                                                     ---        WELCOME, EVERYONE!       ---                        \n";
    cout << endl;
    cout << "       -----------------------------------------------------------------------------------------------------------------------------------\n";
    cout << endl;
    cout << "Enter your Personal Details: ";
    cout << endl;
    cout << endl;
    cout << "Enter your Name: ";
    getline(cin, p1.name);
    cout << "Enter your Current Address: ";
    getline(cin, p1.address);
    cout << "Enter the Date of Registration: ";
    getline(cin, p1.cur_date);
    cout << "Enter your age: ";
    cin >> p1.age;
    cout << "Enter your Date of Birth: ";
    cin >> p1.dob;
    cout << "Enter your Aadhar Number: ";
    cin >> p1.aadhar_no;
    cout << "Enter your Phone Number: ";
    cin >> p1.phone_no;
    cout << "Enter your UPI number: ";
    cin >> p1.upi;
    cout << endl;

    cout << "Your details have been sucessfully registered!! " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    int token;
    cout << "Which type of Vaccination do you want ?: " << endl;
    cout << "1: Covid-19";
    cout << "  **IN DEMAND** " << endl;
    cout << "2: Dengue" << endl;
    cout << "3: Polio" << endl;
    cout << "4: Rabies" << endl;
    cout << "5: Hepatitis-A" << endl;
    cout << "6: Hepatitis-B" << endl;
    cout << "Select the option code:-> ";
    cin >> token;
    cout << endl;
    switch (token)
    {
    case 1:
        cout << "You have picked COVID-19!" << endl;
        cout << "Here is some information provided about COVID-19 vaccine :" << endl;
        cout << endl;
        cout << "\"COVISHIELD is the Indian-made version of AstraZeneca's Vaxzevria jab, which has been authorised in the EU.\nThe vaccines currently eligible for the green pass have all been approved by the European Medicines Agency (EMA).\"" << endl;
        cout << endl;
        cout << "\"Bharat Biotech’s COVAXIN (BBV152) is an inactivated COVID-19 vaccine that uses adjuvant Alhydroxiquim-II to boost immune response longer-lasting immunity. \"" << endl;
        cout << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Covishield";
        cout << "  *POPULAR* " << endl;
        cout << "2: Covaxin   ";
        cout << "  *POPULAR*" << endl;
        cout << "3: Sputnik V " << endl;
        cout << "4: Pfizer    " << endl;
        cout << "Enter your choice of vaccine:->   ";
        cout << endl;
        int vaccine_number;
        cin >> vaccine_number;
        char ch;
        cout << endl;
        switch (vaccine_number)
        {
        case 1:
            cout << "You have picked the Covishield vaccine" << endl
                 << endl;
            cout << "The Price of Covishield is:  1000 rupees" << endl;
            cout << endl;
            cout << "Which dose are you applying for? (Dose 1 or Dose 2)\n";
            cout << "Enter the number: \n";
            cin >> p1.dose;
            p1.amount = (p1.dose) * 1000;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc1);
                receipt(p1, doc1);
            }
            else
            {
                _Exit(0);
            }

            break;

        case 2:
            cout << "You have picked the Covaxin vaccine" << endl
                 << endl;
            cout << "The Price of Covaxin is:   1200 rupees" << endl;
            cout << endl;
            cout << "Which dose are you applying for? (Dose 1 or Dose 2)\n";
            cout << "Enter the number: \n";
            cin >> p1.dose;
            p1.amount = (p1.dose) * 1200;
            cout << "Are you sure want to take this vaccine? (Y/N) " << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc2);
                receipt(p1, doc2);
            }
            else
            {
                cout << "Thank you choosing our hospital" << endl;
                _Exit(0);
            }

            break;

        case 3:
            cout << "You have picked the Sputnik Vaccine" << endl
                 << endl;
            cout << "The Price of Sputnik V is:   1500 rupees" << endl;
            cout << endl;
            cout << "Which dose are you applying for? (Dose 1 or Dose 2)\n";
            cout << "Enter the number: \n";
            cin >> p1.dose;
            p1.amount = (p1.dose) * 1500;
            cout << "Are you sure want to take this vaccine? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc7);
                receipt(p1, doc7);
            }
            else
            {
                cout << "Thank you choosing our hospital" << endl;
                _Exit(0);
            }

            break;

        case 4:
            cout << "You have picked the Pfizer Vaccine" << endl
                 << endl;
            cout << "The Price of Pfizer is:   2000 rupees" << endl;
            cout << endl;
            cout << "Which dose are you applying for? (Dose 1 or Dose 2)\n";
            cout << "Enter the number: \n";
            cin >> p1.dose;
            p1.amount = (p1.dose) * 2000;
            cout << "Are you sure want to take this vaccine? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc8);
                receipt(p1, doc8);
            }
            else
            {
                cout << "Thank you choosing our hospital" << endl;
                _Exit(0);
            }

            break;
        }
        break;

    case 2:
        cout << "You have picked Dengue!" << endl;
        cout << "Here is some information provided about COVID-19 vaccine" << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Dengvaxia" << endl;
        cout << "2: DengiGo" << endl;
        cout << "Enter your choice of vaccine: " << endl;
        int dengue;
        cin >> dengue;
        switch (dengue)
        {
        case 1:
            cout << "You have picked the Dengaxia vaccine" << endl
                 << endl;
            cout << "The Price of Dengaxia is:  500 rupees" << endl;
            p1.amount = 500;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc2);
                receipt(p1, doc2);
            }
            else
            {
                _Exit(0);
            }
            break;

        case 2:
            cout << "You have picked the DengiGo vaccine" << endl
                 << endl;
            cout << "The Price of DengiGo is:  768 rupees" << endl;
            p1.amount = 768;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc2);
                receipt(p1, doc2);
            }
            else
            {
                _Exit(0);
            }
            break;
        }
        break;

    case 3:
        cout << "You have picked Polio!" << endl;
        cout << "Here is some information provided about Polio vaccine" << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Ipol" << endl;
        cout << "2: Kinrix" << endl;
        cout << "Enter your choice of vaccine: " << endl;
        int polio;
        cin >> polio;
        switch (polio)
        {
        case 1:
            cout << "You have picked the Ipol vaccine" << endl
                 << endl;
            cout << "The Price of Ipol is:  250 rupees" << endl;
            p1.amount = 250;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc3);
                receipt(p1, doc3);
            }
            else
            {
                _Exit(0);
            }
            break;

        case 2:
            cout << "You have picked the Kinrix vaccine" << endl
                 << endl;
            cout << "The Price of Kinrix is:  350 rupees" << endl;
            p1.amount = 350;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc3);
                receipt(p1, doc3);
            }
            else
            {
                _Exit(0);
            }
            break;
        }

        break;

    case 4:
        cout << "You have picked Rabies!" << endl;
        cout << "Here is some information provided about Rabies vaccine" << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Abhayrab" << endl;
        cout << "2: Imovax" << endl;
        cout << "Enter your choice of vaccine: " << endl;
        int Rabies;
        cin >> Rabies;
        switch (Rabies)
        {
        case 1:
            cout << "You have picked the Abhayrab vaccine" << endl
                 << endl;
            cout << "The Price of Abhayrab is:  250 rupees" << endl;
            p1.amount = 250;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc4);
                receipt(p1, doc4);
            }
            else
            {
                _Exit(0);
            }
            break;

        case 2:
            cout << "You have picked the Imovax vaccine" << endl
                 << endl;
            cout << "The Price of Imovax is:  300 rupees" << endl;
            p1.amount = 300;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc4);
                receipt(p1, doc4);
            }
            else
            {
                _Exit(0);
            }
            break;
        }

        break;

    case 5:
        cout << "You have picked Hepatitis-A!" << endl;
        cout << "Here is some information provided about Hepatitis-A vaccine" << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Avaxim" << endl;
        cout << "2: Biovac-A" << endl;
        cout << "Enter your choice of vaccine: " << endl;
        int Hepatitis_A;
        cin >> Hepatitis_A;
        switch (Hepatitis_A)
        {
        case 1:
            cout << "You have picked the Avaxim vaccine" << endl
                 << endl;
            cout << "The Price of Avaxim is:  350 rupees" << endl;
            p1.amount = 350;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc1);
                receipt(p1, doc5);
            }
            else
            {
                _Exit(0);
            }
            break;

        case 2:
            cout << "You have picked the Biovac-A vaccine" << endl
                 << endl;
            cout << "The Price of Biovac-A is:  400 rupees" << endl;
            p1.amount = 400;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc1);
                receipt(p1, doc5);
            }
            else
            {
                _Exit(0);
            }
            break;
        }

        break;

    case 6:
        cout << "You have picked Hepatitis-B!" << endl;
        cout << "Here is some information provided about Hepatitis-B vaccine" << endl;
        //net copy paste
        cout << "Please choose from the vaccines given below: " << endl;
        cout << "1: Comvax" << endl;
        cout << "2: ComBE-5" << endl;
        cout << "Enter your choice of vaccine: " << endl;
        int hepatits_b;
        cin >> hepatits_b;
        switch (hepatits_b)
        {
        case 1:
            cout << "You have picked the Comvax vaccine" << endl
                 << endl;
            cout << "The Price of Comvax is:  350 rupees" << endl;
            p1.amount = 350;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc6);
                receipt(p1, doc6);
            }
            else
            {
                _Exit(0);
            }
            break;

        case 2:
            cout << "You have picked the ComBE-5 vaccine" << endl
                 << endl;
            cout << "The Price of ComBE-5 is:  550 rupees" << endl;
            p1.amount = 550;
            cout << "Are you sure want to take this vaccine ? (Y/N)" << endl;
            cin >> ch;
            cout << endl;
            if (ch == 'Y')
            {
                cout << "Thank you choosing our hospital" << endl;
                cout << "Your Vaccine Receipt will be printed and provided to you!" << endl;
                p1.final_date = appointment(p1);
                int val = show_wallet(p1, w1);
                billing(p1, val, doc6);
                receipt(p1, doc6);
            }
            else
            {
                _Exit(0);
            }
            break;
        }

        break;
    }

    return 0;
}