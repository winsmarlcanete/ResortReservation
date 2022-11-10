#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void transaction();
   
int main()
{
    int choice;
    string resort1 = "Alpha", resort2 = "Beta";
    string resort3 ="Gamma", resort4 = "Delta";
    string resort5 = "Zeta", resort6 = "Eta";
    string resort7 = "Theta", resort8 = "Iota";
    string resort9 = "Kappa", resort10 = "Lambda";
   
    bool resort1arr[] = {true, true, true, true, true, true, false, false, true};
    bool resort2arr[] = {false, true, true, true, true, true, true, false, true};
    bool resort3arr[] = {false, false, true, true, true, true, false, true, true};
    bool resort4arr[] = {true, true, true, true, true, true, true, true, true};
    bool resort5arr[] = {true, false, true, false, true, true, true, false, true};
   
    string rate1 = "Location";
    string rate2 = "Services";
    string rate3 = "Value for money";
   
    string resortrev1arr[] = {"Excellent", "Good", "Good"};
    string resortrev2arr[] = {"Good", "Excellent", "Good"};
    string resortrev3arr[] = {"Good", "Excellent", "Excellent"};
    string resortrev4arr[] = {"Excellent", "Fair", "Good"};
    string resortrev5arr[] = {"Excellent", "Good", "Excellent"};
   
   
    string amenity1 = "WiFi Lobby", amenity2 = "Free Wifi";
    string amenity3 = "Pool", amenity4 = "Spa";
    string amenity5 = "Air Condition", amenity6 = "Bar";
    string amenity7 = "Parking", amenity8 = "Pets";
   
    double resortPrices[] = {2360.22, 2172.89 ,10856.50 , 3500.31, 4730.89};
 
    cout << "-----" << "Today is " <<__DATE__<< ", " <<__TIME__<< "-----" << endl;
   
    cout << "\nWELCOME TO BORACAY RESORT RESERVATION SYSTEM!\n";
    cout << "This program will help you find the right resort by\n";
    cout << "exploring from resorts' various features to price\n";
    cout << "ranges while also directly creating a transaction.\n";
    cout << "Please follow what is being instructed. Thankyou!\n";
   
    cout << "\nAvailable: " << resort1 << ", " << resort2 << ", " << resort3;
    cout << ", " << resort4 << ", " << resort5;
    cout << "\nFully Booked: " << resort6 << ", " << resort7 << ", " << resort8;
    cout << ", " << resort9 << ", " << resort10;
   
    cout << "\n-------------------------------------------------------------\n";
   
    do {
        cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
        cout << "\nType 1 to view Amenities" << "\nType 2 to view Price/Night";
        cout << "\nType 3 to view Customer Ratings\n";
               
        cout << "\nAnswer: ";
        cin >> choice;
        cout << "\n-------------------------------------------------------------\n";
        switch (choice) {
            case 1:
                cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
                cout << "\n" << "\t" << amenity1 << "\t" << amenity2 << "\t" << amenity3;
                cout << "\t" << amenity4 << "\t" << amenity5 << "\t" << amenity6;
                cout  << "\t" << amenity7 << "\t" << amenity8 << "\t"<< endl;
               
                cout << "\n" << resort1 << "\t" << resort1arr[0] << "\t\t" << resort1arr[1];
                cout << "\t\t" << resort1arr[2] << "\t" << resort1arr[3] << "\t" << resort1arr[4];
                cout  << "\t\t" << resort1arr[5] << "\t" << resort1arr[6] << "\t" << resort1arr[7];
               
                cout << "\n" << resort2 << "\t" << resort2arr[0] << "\t\t" << resort2arr[1];
                cout << "\t\t" << resort2arr[2] << "\t" << resort2arr[3] << "\t" << resort2arr[4];
                cout  << "\t\t" << resort2arr[5] << "\t" << resort2arr[6] << "\t" << resort2arr[7];
               
                cout << "\n" << resort3 << "\t" << resort3arr[0] << "\t\t" << resort3arr[1];
                cout << "\t\t" << resort3arr[2] << "\t" << resort3arr[3] << "\t" << resort3arr[4];
                cout  << "\t\t" << resort3arr[5] << "\t" << resort3arr[6] << "\t" << resort3arr[7];
               
                cout << "\n" << resort4 << "\t" << resort4arr[0] << "\t\t" << resort4arr[1];
                cout << "\t\t" << resort4arr[2] << "\t" << resort4arr[3] << "\t" << resort4arr[4];
                cout  << "\t\t" << resort4arr[5] << "\t" << resort4arr[6] << "\t" << resort4arr[7];
               
                cout << "\n" << resort5 << "\t" << resort5arr[0] << "\t\t" << resort5arr[1];
                cout << "\t\t" << resort5arr[2] << "\t" << resort5arr[3] << "\t" << resort5arr[4];
                cout  << "\t\t" << resort5arr[5] << "\t" << resort5arr[6] << "\t" << resort5arr[7];
                cout << "\n";
               
                cout << "\nType 4 to Go Back" << "\nType 5 to Proceed Transaction";
                cout << "\nType 6 to Exit the Program\n";
               
                cout << "\nAnswer: ";
                cin >> choice;
                cout << "\n-------------------------------------------------------------\n";
                if (choice == 5) {
                    transaction();
                    return 0;
                } else if (choice == 6) {
                    return 0;
                }
                break;
               
            case 2:
                cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
                cout << "\n\t\t" << resort2 << "\t\t" << resort1 << "\t\t" << resort4 << "\t\t";
                cout << resort5 << "\t\t" << resort3 << "\t\n\n";
               
                for(int i = 0; i<5; i++) {
                    for(int j = i+1; j<5; j++){      
                        if(resortPrices[j] < resortPrices[i]) {
                            int temp = resortPrices[i];
                            resortPrices[i] = resortPrices[j];
                            resortPrices[j] = temp;
                            }
                    }
                }
               
                for(int i = 0; i<5; i++) {
                cout << "\t\t" << resortPrices[i];
                }
               
                cout << "\n\nType 4 to Go Back" << "\nType 5 to Proceed Transaction";
                cout << "\nType 6 to Exit the Program\n";
               
                cout << "\nAnswer: ";
                cin >> choice;
                cout << "\n-------------------------------------------------------------\n";
                if (choice == 4) {
                    break;
                } if (choice == 5) {
                    transaction();
                    return 0;
                }
                break;
               
            case 3:
                cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
                cout << "\n" << "\t" << rate1 << "\t" << rate2 << "\t" << rate3;
               
                cout << "\n" << resort1 << "\t" << resortrev1arr[0] << "\t" << resortrev1arr[1];
                cout << "\t\t" << resortrev1arr[2];
               
                cout << "\n" << resort2 << "\t" << resortrev2arr[0] << "\t\t" << resortrev2arr[1];
                cout << "\t" << resortrev2arr[2];
               
                cout << "\n" << resort3 << "\t" << resortrev3arr[0] << "\t\t" << resortrev3arr[1];
                cout << "\t" << resortrev3arr[2];
               
                cout << "\n" << resort4 << "\t" << resortrev4arr[0] << "\t" << resortrev4arr[1];
                cout << "\t\t" << resortrev4arr[2];
               
                cout << "\n" << resort5 << "\t" << resortrev5arr[0] << "\t" << resortrev5arr[1];
                cout << "\t\t" << resortrev5arr[2];
               
                cout << "\n\nType 4 to Go Back" << "\nType 5 to Proceed Transaction";
                cout << "\nType 6 to Exit the Program\n";
               
                cout << "\nAnswer: ";
                cin >> choice;
                cout << "\n-------------------------------------------------------------\n";
                if (choice == 5) {
                    transaction();
                    return 0;
                } else if (choice == 6) {
                    return 0;
                }
               
            default:
            break;
        }
       
    } while (choice != 6);
   
   
 
    return 0;
}
 
void transaction() {
   
    string bguest, bfamily, cname, cfamily,email;
    string pNum, cNum, eDm, eDy;
    int choice2, choice3, cvv, pC;
    string resort1 = "Alpha";
    string resort2 = "Beta";
    string resort3 = "Gamma";
    string resort4 = "Delta";
    string resort5 = "Zeta";
    string chosen;
    double resortPrices[] = {2360.22, 2172.89 ,10856.50 , 3500.31, 4730.89};
    double price;
   
    cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
   
    cout << "\n\nYou are now in the Transaction Terminal!";
    cout << "\nPlease input the needed information\n";
    cout << "\n\nStep 1: Booking info";
    cout << "\nGuest Name: ";
    cin >> bguest;
    cout << "Family Name: ";
    cin >> bfamily;
    cout << "\nFirst Name: ";
    cin >> cname;
    cout << "Last Name: ";
    cin >> cfamily;
    cout << "Email Adress: ";
    cin >> email;
    cout << "Phone Number: ";
    cin >> pNum;
    cout << "\nPlease choose the selected resort: \n";
    cout << "1: Alpha\n";
    cout << "2: Beta\n";
    cout << "3: Gamma\n";
    cout << "4: Delta\n";
    cout << "5: Zeta\n";
    cout << "Answer: ";
    cin >> choice2;
   
    cout << "\n\nStep 2: Payment info";
    cout << "\nPlease choose the selected method: \n";
    cout << "1: In-Person\n";
    cout << "2: Credit/Debit Card";
    cout << "\n\nAnswer: ";
    cin >> choice3;
   
    if (choice3 == 2) {
        cout << "\nPlease input card details: ";
        cout << "\nCard Number: ";
        cin >> cNum;
        cout << "Expiration Date (Month): ";
        cin >> eDm;
        cout << "Expiration Date (Year): ";
        cin >> eDy;
        cout << "CVV: ";
        cin >> cvv;
        cout << "Postal Code: ";
        cin >> pC;
    }
   
    cout << "\n-------------------------------------------------------------\n";
    cout << "Updated as of " <<__DATE__<< ", " <<__TIME__<< endl;
   
    switch (choice2) {
        case 1:
            chosen = resort1;
            price = resortPrices[0];
            break;
        case 2:
            chosen = resort2;
            price = resortPrices[1];
            break;
        case 3:
            chosen = resort3;
            price = resortPrices[2];
            break;
        case 4:
            chosen = resort4;
            price = resortPrices[3];
            break;
        case 5:
            chosen = resort5;
            price = resortPrices[4];
            break;
       
    }
   
    cout << "\n\nTransaction Complete. Please check your details.\n\n";
    cout << "You have selected " << chosen << " as your booked resort.\n";
    cout << "Please pay PHP" << price << " using your selected payment method.";
    cout << "\nFor booking updates, we will contact: " << cname << ", " << cfamily;
    cout << "\nPhone Number: " << pNum;
    cout << "\nEmail Address: " << email;
   
    if (choice3 == 2) {
        cout << "\nPayment Method: Credit/Debit Card";
        cout << "\nYour Credit Card details are: ";
        cout << "\nCard Number: " << cNum;
        cout << "\nExpiration Date: " << eDm << " / " << eDy;
        cout << "\nCVV: " << cvv;
        cout << "\nPostal Code: " <<pC;
    } else {
        cout << "\nPayment Method: In-Person";
    }
   
    cout << "\n\nYour Boracay Resort Reservation System (BRRS) ID: " << rand();
    cout << "\nPlease present the BRRS ID to the receptionist for fast check-in.\n";
   
    cout << "\nThank you for trusting Boracay Resort Reservation System! Have a good day!";
}
