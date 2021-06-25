#include <iostream>
#include <iomanip>

using namespace std;


int endProgram(){
    cout << "Thank you";
    return -1;
}
void welcomeMessage(){
    const int STARS_LENGTH = 60;
    const int SIDE_STAR_LENGTH = 5;
    cout << setw(STARS_LENGTH) << setfill('*') << "" << endl;
    cout << setw(SIDE_STAR_LENGTH) << "" << " Welcome to my Johnny Utah's PointBreak Surf Shop " << setw(SIDE_STAR_LENGTH) << "" << endl;
    cout << setw(STARS_LENGTH) << "" << endl;
    cout << endl;
}
void ShowUsage() {
    cout << "To show program usage \'S\'" << endl;
    cout << "To purchase a surfboard press \'P\'" << endl;
    cout << "To display current purchases press \'C\'" << endl;
    cout << "To display total amount due press \'T\'" << endl;
    cout << "To quit the program press \'Q\'" << endl;
}
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge){
    int number;
    int letter;
    cout << "Please enter the quantity and type (S=Small, M=Medium, L=Large) of surfboard you would like to purchase:";
    cin >> number;
    cout << number;
}

void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
// function to show the number of surfboards of each size sold.
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
// a function to show the total amount of money made.


int main() {
    char decision = ' ';
    int iTotalSmall = 0;
    int iTotalMedium = 0;
    int iTotalLarge = 0;
    welcomeMessage();
    ShowUsage();
    while (decision != 'Q'){
        cout << endl;
        cout << "Please enter selection: ";
        cin >> decision;
        switch (decision) {
            case 'S':
            case 's':
                ShowUsage();
            case 'P':
            case 'p':
                MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge);
                break;
            case 'C':
            case 'c':
                //DisplayPurchase();
                break;
            case 'T':
            case 't':
                //DisplayTotal();
                break;
            case 'Q':
            case 'q':
                endProgram();
            default:
                return -1;
        }


    }
}
