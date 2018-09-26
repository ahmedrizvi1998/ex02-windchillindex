//
// Created by ahmed on 9/24/2018.
#include <iostream>
#include <cmath>
//
namespace edu{
    namespace vcccd {
        namespace vc{
            namespace csv13 {
                double computeWindChillIndex(double t, double v){

                using namespace std;
                    double w;
                    if (t > 10){
                        return -1;
                    }

                    w = 33 - ((10 * sqrt(v) - v + 10.5) * (33 - t)) / 23.1;
                    return w;


            }}}}}