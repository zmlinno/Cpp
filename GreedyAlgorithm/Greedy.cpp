//
//  Greedy.cpp
//  CPP
//
//  Created by 张木林 on 11/18/24.
//

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//定义一个活动结构
struct Activity
{
    int start;  //开始时间
    int end;    //结束时间
};

//比较函数，用于按活动的结束时间排序
bool compare(Activity a,Activity b)
{
    return a.end<b.end;
}
int main()
{
    //活动集合(start,end)
    vector<Activity>activity = {{1, 3}, {2, 5}, {4, 6}, {6, 7}, {5, 9}, {8, 9}};
    //按结束时间排序
    sort(activity.begin(),activity.end(),compare);
    
    //贪心选择活动
    int count = 1;//选中第一个活动
    int lastEnd = activity[0].end;//保存上一个选中活动的结束时间
    cout<<"Selected activities: "<<endl;
    cout << "(" << activity[0].start << ", " << activity[0].end << ")" << endl;
    
    for(int i = 1;i<activity.size();++i)
    {
        if(activity[i].start >= lastEnd) //如果活动不冲突
        {
            cout << "(" << activity[i].start << ", " << activity[i].end << ")" << endl;
            lastEnd = activity[i].end;
            count++;
        }
    }
    cout<<"Maximum number of activity: "<<cout<<endl;

    return 0;
}
