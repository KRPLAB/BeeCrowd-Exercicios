#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main() {
    char meses[12][15] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    
    int valor;
    
    scanf("%d", &valor);
    
    std::printf("%s\n", meses[valor-1]);

    return 0;
}