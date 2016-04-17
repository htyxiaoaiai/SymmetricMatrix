#pragma once
template<class T>
class  SymmetricMatrix
{
public:
	SymmetricMatrix(T*a, size_t size)
		:_a(new T[size*(size+1)/2])
		,_size(size*(size + 1) / 2)
		,_n(size)
	{
		size_t index = 0;
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				if (i >= j)
				{
					_a[index++] = a[i*size + j];
				}
				else
				{
					break;
				}
			}
		}
	}

	~SymmetricMatrix()
	{
		delete[] _a;
	}
public:
	T& Acess(size_t i, size_t j)
	{
		i--; j--;
		if (i>=0 && i<_n
			&& j>=0 && j<_n)
		{
			if (i < j)
			{
				swap(i, j);
			}
			return _a[i*(i + 1) / 2 + j];
		}
		else
		{
			throw exception("参数错误");
		}
		
	}

	void Display()
	{
		for (size_t i = 0; i < _n; i++)
		{
			for (size_t j = 0; j < _n; j++)
			{
				if (i >= j)
				{
					cout << _a[i*(i + 1) / 2 + j] << " ";
				}
				else
				{
					cout << _a[j*(j + 1) / 2 + i] << " ";
				}
			}
			cout << endl;
		}
	}
private:
	T *_a;
	size_t _size;
	size_t _n;
};
