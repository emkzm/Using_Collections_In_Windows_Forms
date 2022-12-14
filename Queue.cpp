#include "Queue.h"

//constructor
template <typename T> Queue<T>::Queue()
{
	this->head = this->tail = nullptr;
}

// push element to the queue
template <typename T> bool    Queue<T>::push(T elem)
{
	// if queue is empty
	if (this->head == nullptr && this->tail == nullptr)
	{
		this->head->value = elem;
		this->tail = this->head;

	}
	// if size has only one object
	else if (this->head == this->tail)
	{
		q_node* _temp = new q_node*;
		_temp->value = elem;

		this->head->next = _temp;
		_temp->next = nullptr;
	}
	// if queue has more the one objects
	else
	{

	}
	return false;
}

//pop out element form the queue
template <typename T> T       Queue<T>::pop()
{

}

//checkout the size of the queue
template <typename T> size_t  Queue<T>::size()
{

}