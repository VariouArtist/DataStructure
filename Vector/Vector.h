#pragma once

// simple data structure
namespace SDS
{
	template <typename T>
	class Vector
	{
	public:
		Vector(int size = 8);
		Vector(const T* const datas, int size);
		Vector(const Vector<T>& v);
		Vector(const Vector<T>& v, int lo, int hi);
		Vector<T>& operator=(const Vector<T>& v);
		~Vector() { delete[] _data; }

		int size() { return size; }
		void insert(int index, const T& data);
		int find(const T& data);
		void remove(int index);
		void remove(int lo, int hi);
		T& operator[](int index);
	private:
		void copy(const T* const data, int lo, int hi);
		void expand();
		void shrink();
	private:
		unsigned int _size;
		unsigned int _capacity;
		T* _data;
	};
	template<typename T>
	inline Vector<T>::Vector(int size)
	{
	}
	template<typename T>
	inline Vector<T>::Vector(const T* const datas, int length)
	{
	}
	template<typename T>
	inline Vector<T>::Vector(Vector<T>& v)
	{
	}
	template<typename T>
	inline Vector<T>::Vector(Vector<T>& v, int lo, int hi)
	{
	}
	template<typename T>
	inline Vector<T>& Vector<T>::operator=(const Vector<T>& v)
	{
		// TODO: 在此处插入 return 语句
	}
	template<typename T>
	inline void Vector<T>::insert(int index, const T& data)
	{
	}
	template<typename T>
	inline int Vector<T>::find(const T& data)
	{
		return 0;
	}
	template<typename T>
	inline void Vector<T>::remove(int index)
	{
	}
	template<typename T>
	inline void Vector<T>::remove(int lo, int hi)
	{
	}
	template<typename T>
	inline T& Vector<T>::operator[](int index)
	{
		// TODO: 在此处插入 return 语句
	}
	template<typename T>
	inline void Vector<T>::copy(const T* const data, int lo, int hi)
	{
	}
	template<typename T>
	inline void Vector<T>::expand()
	{
	}
	template<typename T>
	inline void Vector<T>::shrink()
	{
	}
}