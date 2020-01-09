#include "myArray.h"

Array::Array()
{
}

Array::Array(int length)
{
	if (length < 0) {
		length = 0;
		m_space = new int[m_length];
	}
	m_length = length;
	m_space = new int[m_length];
}

Array::Array(const Array & obj)
{
	this->m_length = obj.m_length;
	this->m_space = new int[this->m_length];
	for (int i = 0;i < this->m_length;i++) {
		this->m_space[i] = obj.m_space[i];
	}
}

Array::~Array()
{
	if (m_space != NULL) {
		delete[]m_space;
		m_length = 0;
	}
}

void Array::setData(int index, int value)
{
	m_space[index] = value;
}

int Array::getData(int index)
{
	return m_space[index];
}

int Array::length()
{
	return m_length;
}
