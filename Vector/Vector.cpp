//
//  Vector.cpp
//  CPP
//
//  Created by 张木林 on 10/25/24.
//

//#include "Vector.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

//namespace bit {
//
//template<class T>
//class MyVector {  // 将类名从vector修改为MyVector
//public:
//    // MyVector的迭代器是一个原生指针
//    typedef T* iterator;
//    typedef const T* const_iterator;
//
//    iterator begin() { return _start; }
//    iterator end() { return _finish; }
//    const_iterator cbegin() const { return _start; }
//    const_iterator cend() const { return _finish; }
//
//    // 构造和析构函数
//    MyVector() : _start(nullptr), _finish(nullptr), _endOfStorage(nullptr) {}
//    MyVector(int n, const T& value = T()) {
//        _start = new T[n];
//        _finish = _start + n;
//        _endOfStorage = _start + n;
//        std::fill(_start, _finish, value);
//    }
//    template<class InputIterator>
//    MyVector(InputIterator first, InputIterator last) {
//        size_t n = last - first;
//        _start = new T[n];
//        _finish = _start + n;
//        _endOfStorage = _finish;
//        std::copy(first, last, _start);
//    }
//    MyVector(const MyVector<T>& v) {
//        size_t n = v.size();
//        _start = new T[n];
//        _finish = _start + n;
//        _endOfStorage = _finish;
//        std::copy(v._start, v._finish, _start);
//    }
//    MyVector<T>& operator=(MyVector<T> v) {
//        swap(v);
//        return *this;
//    }
//    ~MyVector() {
//        delete[] _start;
//    }
//
//    // 容量管理
//    size_t size() const { return _finish - _start; }
//    size_t capacity() const { return _endOfStorage - _start; }
//    void reserve(size_t n) {
//        if (n > capacity()) {
//            size_t sz = size();
//            iterator new_start = new T[n];
//            std::copy(_start, _finish, new_start);
//            delete[] _start;
//            _start = new_start;
//            _finish = _start + sz;
//            _endOfStorage = _start + n;
//        }
//    }
//    void resize(size_t n, const T& value = T()) {
//        if (n < size()) {
//            _finish = _start + n;
//        } else {
//            reserve(n);
//            std::fill(_finish, _start + n, value);
//            _finish = _start + n;
//        }
//    }
//
//    // 访问元素
//    T& operator[](size_t pos) { return _start[pos]; }
//    const T& operator[](size_t pos) const { return _start[pos]; }
//
//    // 修改操作
//    void push_back(const T& x) {
//        if (_finish == _endOfStorage) {
//            reserve(capacity() == 0 ? 1 : capacity() * 2);
//        }
//        *_finish++ = x;
//    }
//    void pop_back() {
//        if (_finish != _start) {
//            --_finish;
//        }
//    }
//    void swap(MyVector<T>& v) {
//        std::swap(_start, v._start);
//        std::swap(_finish, v._finish);
//        std::swap(_endOfStorage, v._endOfStorage);
//    }
//    iterator insert(iterator pos, const T& x) {
//        if (_finish == _endOfStorage) {
//            size_t new_capacity = capacity() == 0 ? 1 : capacity() * 2;
//            size_t pos_index = pos - _start;
//            reserve(new_capacity);
//            pos = _start + pos_index;
//        }
//        std::copy_backward(pos, _finish, _finish + 1);
//        *pos = x;
//        ++_finish;
//        return pos;
//    }
//    iterator erase(iterator pos) {
//        if (pos >= _start && pos < _finish) {
//            std::copy(pos + 1, _finish, pos);
//            --_finish;
//        }
//        return pos;
//    }
//
//private:
//    iterator _start;          // 指向数据块的开始
//    iterator _finish;         // 指向有效数据的尾
//    iterator _endOfStorage;   // 指向存储容量的尾
//};
//
//} // namespace bit
//
//int main() {
//    bit::MyVector<int> vec(5, 10); // 使用修改后的MyVector类
//    vec.push_back(20);
//    vec.push_back(30);
//    vec.insert(vec.begin() + 2, 15);
//    vec.erase(vec.begin() + 1);
//
//    for (int i = 0; i < vec.size(); ++i) {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//    return 0;
//}


namespace bit

{

  template<class T>

  class vector

  {

  public:

    // Vector的迭代器是一个原生指针

      typedef T* iterator;

      typedef const T* const_iterator;

    iterator begin()

    {

      return _start;

    }

    iterator end()

    {

      return _finish;

    }

    const_iterator cbegin()const

    {

      return _start;

    }

    const_iterator cend() const

    {

      return _finish;

    }



    // construct and destroy

    vector(): _start(nullptr), _finish(nullptr), _endOfStorage(nullptr)

    {}

    vector(int n, const T& value = T())

      : _start(nullptr), _finish(nullptr),_endOfStorage(nullptr)

    {

      reserve(n);

      while (n--)

      {

        push_back(value);

      }

    }

    template<class InputIterator>

    vector(InputIterator first, InputIterator last)

    {

      reserve(last - first);

      while (first != last)

      {

        push_back(*first);

        ++first;

      }

    }

    vector(const vector<T>& v)

      : _start(nullptr), _finish(nullptr), _endOfStorage(nullptr)

    {

      reserve(v.capacity());

      iterator it = begin();

      const_iterator vit = v.cbegin();

      while (vit != v.cend())

      {

          *it++ = *vit++;

      }

      _finish = _start + v.size();

      _endOfStorage = _start + v.capacity();

    }

    vector<T>& operator= (vector<T> v)

    {

      swap(v);

      return *this;

    }

    ~vector()

    {

      delete[] _start;

      _start = _finish = _endOfStorage = nullptr;

    }

    // capacity

    size_t size() const

    {

      return _finish - _start;

    }

    size_t capacity() const

    {

      return _endOfStorage - _start;

    }

    void reserve(size_t n)

    {

      if (n > capacity())

      {

        size_t oldSize = size();

        T* tmp = new T[n];

        if (_start)

        {

          for (size_t i = 0; i < oldSize; ++i)

          tmp[i] = _start[i];

        }

        _start = tmp;

        _finish = _start + size();

        _endOfStorage = _start + n;

      }

    }

    void resize(size_t n, const T& value = T())

    {

      // 1.如果n小于当前的size，则数据个数缩小到n

      if (n <= size())

      {

        _finish = _start + n;

        return;

      }

      // 2.空间不够则增容

      if (n > capacity())

          reserve(n);

      // 3.将size扩大到n

      iterator it = _finish;

      iterator _finish = _start + n;

      while (it != _finish)

      {

        *it = value;

        ++it;

      }

    }



    ///////////////access///////////////////////////////

    T& operator[](size_t pos)

    {

      return _start[pos];

    }

    const T& operator[](size_t pos)const

    {

      return _start[pos];

    }



    ///////////////modify/////////////////////////////

    void push_back(const T& x)

    {

      insert(end(), x);

    }

    void pop_back()

    {

      erase(--end());

    }

    void swap(vector<T>& v)

    {

      swap(_start, v._start);

      swap(_finish, v._finish);

      swap(_endOfStorage, v._endOfStorage);

    }

    iterator insert(iterator pos, const T& x)

    {

      assert(pos <= _finish);

      // 空间不够先进行增容

      if (_finish == _endOfStorage)

      {

          size_t current_size = size();

        size_t newCapacity = (0 == capacity())? 1 : capacity() * 2;

        reserve(newCapacity);

        // 如果发生了增容，需要重置pos

        pos = _start + current_size;

      }

      iterator end = _finish - 1;

      while (end >= pos)

      {

        *(end + 1) = *end;

        --end;

      }

      *pos = x;

      ++_finish;

      return pos;

    }

    // 返回删除数据的下一个数据

        // 方便解决:一边遍历一边删除的迭代器失效问题

    iterator erase(iterator pos)

    {

      // 挪动数据进行删除

      iterator begin = pos + 1;

      while (begin != _finish)

      {

        *(begin - 1) = *begin;

        ++begin;

      }

      --_finish;

      return pos;

    }

  private:

    iterator _start; // 指向数据块的开始

    iterator _finish; // 指向有效数据的尾

    iterator _endOfStorage; // 指向存储容量的尾

  };

}
