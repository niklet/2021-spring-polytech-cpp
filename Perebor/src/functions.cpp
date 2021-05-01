#include "functions.h"
#include <cmath>
int full_enumeration(int number,double maxWeight,double Weight[],double Cost[]) {
    double maxCost=0;
    for (int nabor=0; nabor<pow(2,number);nabor++){
        double tmpWeight=0;
        double tmpCost=0;
        for (int i = 0;i<number;i++){
            int mask = 1 << i;
            if((nabor & mask)>0)
            {
                tmpCost+=Cost[i];
                tmpWeight+=Weight[i];
            }
        }
        if(tmpWeight<=maxWeight and tmpCost>maxCost){
            maxCost=tmpCost;
        }
    }
    return maxCost;
}







