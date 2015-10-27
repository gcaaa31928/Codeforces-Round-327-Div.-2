// Created by gca on 15/10/26

#include  <bits/stdc++.h>

using namespace std;
#define PII pair<int, int>

int main() {
    double l, p, q;
    scanf("%lf %lf %lf", &l, &p, &q);
    double x=l/(p+q);
    printf("%.4f", p*x);

}