using namespace std;
#include <iostream>
#include "io.h"

namespace harjoitus {
    numbers input(){
        numbers nums;
        cout << "Sy\x94t\x84 ensimm\x84inen luku." << endl;
        cin >> nums.num1;
        cout << "Sy\x94t\x84 toinen luku." << endl;
        cin >> nums.num2;

        return nums;
    }

    int sum(numbers nums){
        return nums.num1 + nums.num2;
    }

    int sub(numbers nums){
        return nums.num1 - nums.num2;
    }

    void output(numbers nums){
        cout << "Lukujen summa on " << sum(nums) << endl;
        cout << "Lukujen erotus on " <<  sub(nums) << endl;
    }
}
