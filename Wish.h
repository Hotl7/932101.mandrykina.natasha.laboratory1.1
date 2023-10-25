#pragma once

template<class T>
class Wish
{
private:
	T value;
	float priority;
public:
	void SetValue(T input);
	T GetValue();
	void SetPriority(float input);
	float GetPriority();
	Wish();
	~Wish();
};

template<class T>
inline void Wish<T>::SetValue(T input)
{
	value = input;
}

template<class T>
inline T Wish<T>::GetValue()
{
	return value;
}

template<class T>
inline void Wish<T>::SetPriority(float input)
{
	priority = input;
}

template<class T>
inline float Wish<T>::GetPriority()
{
	return priority;
}

template<class T>
inline Wish<T>::Wish()
{
}

template<class T>
inline Wish<T>::~Wish()
{
}
