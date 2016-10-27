//
//  main.cpp
//  Training1
//
//  Created by lê công thành on 10/10/16.
//  Copyright © 2016 lê công thành. All rights reserved.
// integer increaser
#include <iostream>
using namespace std;
struct TS { char ht[25];
    float t,l,h,td;
} ;
int main ()
{ TS ts[25],&x=ts[1];
    cout <<"Họ và tên :" << endl;
    cin.get(x.ht,25);
    cout << " Các điểm toán, lý, hoá : ";
    cin >> x.t >> x.l >> x.h;
    x.td = x.t + x.l + x.h ;
    cout << " Họ và tên " << ts[1].ht<< endl;
    cout << " Tổng điểm : " << ts[1].td<< endl;
    getchar();
}
