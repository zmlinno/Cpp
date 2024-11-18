//
//  Maths.cpp
//  CPP
//
//  Created by 张木林 on 11/15/24.
//

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

long long solution(int r1,int r2)
{
    long long answer = 0;
    
    for(int i = 1;i<r2;++i)
    {
        int h2 = floor(sqrt(pow(r2,2)-pow(i,2)));
        int h1 = (i<r1)?ceil(sqrt(pow(r1,2)-pow(i,2))):0;
        
        answer += h2-h1+1;
    }
    return 4*answer;
}
int main()
{
    int r1,r2;
    
    //输入测试数据
    cout<<"请输入内圆半径 r1 和外圆半径 r2:";
    cin>>r1>>r2;
    
    long long result = solution(r1,r2);
    cout<<"整点数: "<<result<<endl;
    return 0;
}
