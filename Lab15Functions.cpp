#include <iostream>

/*******************************************************************
* getInfo *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
*******************************************************************/
void getInfo(int & pickFrom, int & numPicks);
double computeWays(int n, int k);
double factorial(int n);

int main() {
    int pickFrom, numPicks;
    getInfo(pickFrom, numPicks);
    double ways = computeWays(pickFrom, numPicks);
    std::cout << "Number of possible combinations: " << ways << std::endl;
    return 0;
}
void getInfo(int &pickFrom, int &numPicks){
    std::cout << "Enter the total number of numbers to pick from: ";
    std::cin >> pickFrom;
    std::cout << "Enter the number of numbers to pick: ";
    std::cin >> numPicks;
}
double computeWays(int n, int k){
    double ways = factorial(n) / factorial(k) * factorial(n-k);
    return ways;
}

double factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

