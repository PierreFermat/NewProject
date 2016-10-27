//
//  main.cpp
//  1
//
//  Created by lê công thành on 10/24/16.
//  Copyright © 2016 lê công thành. All rights reserved.

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <alloca.h>
using namespace std;
class daydiem
{ public :
    int n;
    float *x, *y;
    float do_dai(int i, int j)
  { return sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
    }
    void nhapls(void);
};
void daydiem::nhapls(void)
{ int i,j;
    cout << " So diem N = " ;
    scanf("%d", &n);
    float *x = new float[n+1];
    for (i=1;i<=n;i++)
    { cout << "Nhap toa do cua x,y của diem thu : " << i;
        scanf("%f",x+i); }
    for ( i=1;i<=n;i++)
        for ( j=i+1;i<=n;j++)
            if (x[i]>x[j])
                { float tg = x[i];
                    x[i] = x[j];
                    x[j] = tg;
                    }
    cout << " Day sau khi sap xep ";
    for (i=1;i<=n;i++)
       cout << x[i];
    getchar();
}



