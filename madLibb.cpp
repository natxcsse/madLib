#include <iostream>
using namespace std;

int main() {

    cout << "This is a Madlib!" << endl;
    cout << "Please fill in the blanks." << endl;


    string sillyWord1, lastName, illness,nounPlural, adjOne,adjSecond,sillyWord2, place, num, adjThird;

    cout << endl;

    cout << "Enter an sillyWord: ";
    getline (cin, sillyWord1);
    cout << "Enter a last name: ";
    getline (cin, lastName);
    cout << "Enter an illness: ";
    getline (cin, illness);
    cout << "Enter a noun (plural): ";
    getline (cin, nounPlural);
    cout << "Enter an adjective: ";
    getline (cin, adjOne);
    cout << "Enter an adjective: ";
    getline (cin, adjSecond);
    cout << "Enter an sillyWord: ";
    getline (cin, sillyWord2);
    cout << "Enter an place: ";
    getline (cin, place);
    cout << "Enter an number: ";
    getline (cin, num);
    cout << "Enter an adjective: ";
    getline (cin, adjThird);

    cout << endl;

    cout << sillyWord1 << " " << lastName << " will not be attending school today." << endl;
    cout << "They have come down with a case of " << illness << " disorder." << endl;
    cout << "And they have horrible " << nounPlural << " and a " << adjOne << " fever."  << endl;
    cout << "We have made an appointment with the " << adjSecond << " Dr." << sillyWord2 << endl;
    cout << "That doctor has studied for many years in UIC in which he earned " << num << " degrees." << endl;
    cout << "Dr." << sillyWord2 << " will send you all the information you need." << endl;
    cout << "Thank you!" << endl;
    cout << "Sincerely," << endl;
    cout << "Mrs. " << adjThird << "." << endl;


   return 0;
}
