#include <iostream>
using namespace std;
int main()
{
    float num , sum=0;
    string option;
    while(1)
    {
        cout << "Enter your numbers: ";
        cin >> num;
        sum += num;
        cout <<"Wanna continue ? (yes / exit)";
        cin >> option;
        if (option == "yes")
            continue;
        if (option == "exit")
            break;
    }
    cout << "\nsum is : " << sum << endl;
    return 0;
}
