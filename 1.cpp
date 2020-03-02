/**
 *
 * Create stack, queue and some memory stuff, pointers arithmetic
 */

#include <iostream>

template<typename T>
struct Node {
	struct Node *next;
	T value;
};
template<class T>
using Node = struct Node<T>;

template<typename T>
class Stack {
	Node<T> *head;
public:
	Stack(T headValue) {
		head = new Node<T>();
		head->next = NULL;
		head->value = headValue;
	}

	Node<T>* getHead() {
		return head;
	}
};

int main() {
	Stack<int> *stack = new Stack<int>(3);

	std::cout << stack->getHead()->value << std::endl;

	return 0;
}
