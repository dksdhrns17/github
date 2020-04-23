#ifndef __STACK_H__
#define __STACK_H__
#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//delete함수를 통해 맨 뒤의 원소 제거
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음
template <typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element);
                
};
template <typename T>
bool Stack<T>::Delete(T &element){
			//first가 0이면 false반환
			if(this ->first==NULL)
                                return false;
                        element=this->first->data;
                        Node<T> *sub=this->first;
                        this->first = this->first->link;
                        delete sub;
                        this->current_size--;
			return true;
			}
#endif
