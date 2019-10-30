#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <assert.h>
using namespace std;
namespace lth
{
	template <class T>
	class vector
	{
	public:
		typedef T* Iterator;
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _end_of_storage(nullptr)
		{

		}
		vector(const vector<T>& v)
		{
			_start = new T[v.size()]; //创建一个与v空间一样空间
			memcpy(_start, v._start, sizeof(T)*v.size()); // 将v空间上的值拷贝到_start
			_finish = _start + v.size(); // 置于末位置
			_end_of_storage = _start + v.size(); // 容量位置
		}
		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _end_of_storage = nullptr;
			}
		}
		//v1 = v2
		vector<T>& operator=(vector<T> v)
		{
			//this->swap(v)
			swap(v);
			return *this;
		}

		// v1.swap(v2)
		void swap(vector <T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_end_of_storage, v._end_of_storage);
		}

		Iterator begin() // T* begin()
		{
			return _start;
		}
		Iterator end() // T* end()
		{
			return _finish;
		}
		size_t size() const
		{
			return _finish - _start;
		}
		void resize(size_t n, const T& val = T())
		{

		}

		void reserve(size_t n)
		{
			//assert(n > capacity());
			if (n > capacity())
			{
				//size_t sz = size();
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T)*size());
					delete[] _start;
				}
				_start = tmp;
				_finish = _start +size();
				_end_of_storage = _start + n;

			}
		}
		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
			}
			
			_start[size()] = x;
			_finish++;
			//*_finish = x;
			
			
		}
		size_t size() 
		{
			return _finish - _start; //数据尾指针 - 数据头指针 
		}
		size_t capacity()
		{
			return _end_of_storage - _start; // 数据容量指针 - 数据头指针
		}
		T& operator[] (size_t pos)
		{
			return _start[pos];        // 返回容器数组 某个位置元素
		}
		const T& operator[] (size_t pos) const  // const ??
		{
			return _start[pos];
		}
	private:
		Iterator _start;           //指向数据块的开始
		Iterator _finish;		   //指向有效数据的尾
		Iterator _end_of_storage;  //指向存储容量的尾
	};
}
int main()
{
	lth::vector <int> v1;
	lth::vector <int> v2;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	system("pause");


}