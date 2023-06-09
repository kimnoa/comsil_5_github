#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음


template <typename U>
class Stack : public LinkedList<U> {
	public:
		bool Delete (U &element){
			//first가 0이면 false반환

			if (this->first == 0  ) //아무것도 없을 때
				return 0; //삭제 실패

			else
			{
				Node<U>* current = this->first;
				this->first = this->first->link;
				element = current->data; //print
				delete current; 			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제

				//이 문장은 내부의 변수를 사용한다는 의미이다.
				this->current_size--;
				return true;

			}

			
		}
	};
