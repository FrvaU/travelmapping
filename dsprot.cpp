#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Destination class
class Destination {
public:
    string name;
    vector<string> interests;

    Destination(string n, vector<string> i) {
        name = n;
        interests = i;
    }
};

int main() {

    // Set of destinations (T)
    vector<Destination> destinations;

    destinations.push_back(Destination("Paris", {"Culture", "Food"}));
    destinations.push_back(Destination("Bali", {"Beaches", "Adventure"}));
    destinations.push_back(Destination("Everest", {"Mountains", "Adventure"}));
    destinations.push_back(Destination("Cairo", {"Culture", "History"}));

    // Project heading
    cout << "=============================================\n";
    cout << "   TRAVEL DESTINATION INTEREST MAPPING SYSTEM \n";
    cout << "=============================================\n\n";

    cout << "Available Interests:\n";
    cout << "- Beaches\n";
    cout << "- Mountains\n";
    cout << "- Culture\n";
    cout << "- Food\n";
    cout << "- Adventure\n\n";

    string userInterest;
    cout << "Enter your preferred interest: ";
    cin >> userInterest;

    cout << "\n---------------------------------------------\n";
    cout << " DESTINATIONS MATCHING YOUR INTEREST\n";
    cout << "---------------------------------------------\n";

    bool matchFound = false;

    // Relation checking R ⊆ T × I
    for (int i = 0; i < destinations.size(); i++) {
        for (int j = 0; j < destinations[i].interests.size(); j++) {
            if (destinations[i].interests[j] == userInterest) {
                cout << "✔ " << destinations[i].name << endl;
                matchFound = true;
                break;
            }
        }
    }

    if (!matchFound) {
        cout << "✖ No destination found for this interest.\n";
    }

    cout << "\n=============================================\n";
    cout << " Thank you for using the recommendation system\n";
    cout << "=============================================\n";

    return 0;
}
