//
//  main.cpp
//  2016 Hàm
//
//  Created by lê công thành on 10/26/16.
//  Copyright © 2016 lê công thành. All rights reserved.
//

#include <iostream>
using namespace std;
struct TS { char ht[25];
float t,l,h,td;
} ;
int main ()
{ TS ts[25],&h=ts[1];
cout <<"Họ và tên :" << endl;
    cin.get(h.ht,25);
    cout << " Các điểm toán, lý, hoá : ";
    cin >> h.t >> h.l >> h.h;
    h.td = h.t + h.l + h.h ;
    cout << " Họ và tên " << ts[1].ht<< endl;
    cout << " Tổng điểm : " << ts[1].td<< endl;
    getchar();
}
