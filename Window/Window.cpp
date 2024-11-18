//
//  Window.cpp
//  CPP
//
//  Created by 张木林 on 11/16/24.
//
//关于滑动窗口算法的一个题目
//LV1. 연속된 부분 수열의 합
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

vector<int>solution(vector<int>sequence,int k)
{
    int start = 0,sum = 0;
    int min_length = sequence.size()+1;
    vector<int>result(2,-1);//用于存储最优子序列的开始和结束索引
    
    for(int end = 0;end<sequence.size();++end)
    {
        sum += sequence[end];
        
        //收缩窗口
        while(sum>k && start <=end)
        {
            sum -= sequence[start];
            ++start;
        }
        
        //检查当前窗口是否满足 sum == k
        if(sum == k)
        {
            int current_length = end - start+1;
            if(current_length < min_length)
            {
                min_length = current_length;
                result[0] = start;
                result[1] = end;
                
            }
        }
    }
    return result;
}
int main()
{
    int n,k;
    cout<<"请输入序列的长 n: ";
    cin>>n;
    
    vector<int>sequence(n);
    cout<<"请输入序列的元素(空格分隔): ";
    for(int i = 0;i<n;i++)
    {
        cin>>sequence[i];
    }
    
    cout<<"请输入子序列的目标和 k: ";
    cin>>k;
    
    //调用solution函数
    vector<int>result = solution(sequence,k);
    
    //输出结果
    if(result[0] != -1)
    {
        cout<<"满足条件的最短子序列索引范围: ["<<result[0] <<","<<result[1]<<"]\n";
        
    }
    else
    {
        cout<<"未找到满足条件的子序列。\n";
    }
    return 0;
}
