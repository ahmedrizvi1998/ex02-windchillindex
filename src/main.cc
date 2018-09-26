//
// Created by ahmed on 9/24/2018.
//

#include <iostream>
#include "windchillindex.h"

using namespace std;
using edu::vcccd::vc::csv13::computeWindChillIndex;


int main(int argc, char *argv[]) {
    cout << computeWindChillIndex(5,2);
    return 0;

}