//
//  STL.hpp
//  C++
//
//  Created by 张木林 on 1/15/25.
//

#ifndef STL_hpp
#define STL_hpp

#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class STLUtils
{
public:
    //打印vector内容
    template<typename T>
    static void printVector(vector<T>& vec)
    {
        for(T& v:vec)
        {
            cout<<v<<" ";
        }
    }
    
    //打印set内容
    template<typename T>
    static void printSet(set<T>& s)
    {
        for(T&v:s)
        {
            cout<<v<<" ";
        }
    }
    
    //打印map内容
    template<typename K,typename V>
    static void printMap(map<K,V>&m)
    {
        for(auto &pair: m)
        {
            cout<<pair.first<<": "<<pair.second<<endl;
        }
    }
    
    //排序vector
    template<typename T>
    static void sortVector(vector<T>& vec)
    {
        sort(vec.begin(),vec.end());
    }
    
    //查找元素
    template<typename T>
    static bool findInVector(vector<T>& vec,T& value)
    {
        return find(vec.begin(),vec.end(),value) != vec.end();
    }
    
    //二分查找
    template<typename T>
    static bool binarySearchInVector(vector<T>& vec,T& value)
    {
        return binary_search(vec.begin(),vec.end(),value);
    }
};

#endif /* STL_hpp */
