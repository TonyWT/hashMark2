//
//  main.cpp
//  hashMark2
//
//  Created by vivitanjing on 15-1-7.
//  Copyright (c) 2015年 vivitanjing. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    for(int i=0; i<8; i++)
    {
        //cal the num of space
        int spNum = 0;
        if(i < 4)
            spNum = i;
        else
            spNum = (4-(i-3));
        for(int k=spNum; k>0; k--)
            cout << " ";
        
        //cal the num of hashmark;
        int hsNum = 0;
        if(i > 3)
            hsNum = 2*i;
        else
            hsNum = 14-2*i;
        
        // output hashmark
        for(int j=hsNum; j>0; j--)
        {
            int begSpcNum = spNum+2;
            int endSpcNum = hsNum-(spNum+2)+1;
            if((begSpcNum < endSpcNum) && j>=begSpcNum && j<=endSpcNum)
            {
                cout << " ";
            }
            else
                cout << "#";
        }
        cout << endl;
    }
    return 0;
}
