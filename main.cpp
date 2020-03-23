#include <ctime>
#include <iostream>

using namespace std;

int main() {
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t); // Just a reference variable for use to get the year, month and date
    std::cout << "Today is ";
    std::cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n \n";
    // If today is the end of the month, like the 28 or 29 or 30 or 31. Then remind that
    // if you have time. You better spend these day for friends!

    int day = now->tm_mday;
    // If it is the first half beginning of the month, then say that you should focus on study, work, and your habits

    if(day < 16){
         cout << "Today is in the first half of the month, be happy with what you have and fully focus on things you like/ want to do. Relax ^^ \n";
    }
    if( day > 16 && day < 28){
        cout << "Today is the second half of the month, always be happy and remember to ask about your friends soon! \n";
    }

    if (day >= 28 && day <= 31){
        cout << "Your life will be meaningful when you take care of others. Family and Friends!. Go talk to them and have fun a little bit!";
    }

}
