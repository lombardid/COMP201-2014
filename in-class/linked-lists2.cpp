#include <iostream>
#include <string>
// #define NULL ((void *)0)
template <typename T>
class Node {
public:
<<<<<<< HEAD
	Node (T d, Node * n, Node * p) { data = d; next = n; prev = p;}
    Node(T d, Node<T> * n) { data = d; next = n; prev = NULL;}
    Node(T d)              { data = d; next = NULL; prev = NULL;}
    T data;
    Node<T> * next;
	Node * prev;
=======
    Node(T d, Node * n, Node * p) { data = d; next = n; prev = p; }
    Node(T d, Node * n) { data = d; next = n; prev = NULL; }
    Node(T d)           { data = d; next = NULL; prev = NULL; }
    T data;
    Node * next;
    Node * prev;
>>>>>>> 801b636d3a4fee1fc2bea35105b1693511e2a43c
};
template <typename T>
class List {
public:
    List() {
        head = NULL;
		tail = NULL;
    }
    void push_front (T data) {
        Node<T> * node = new Node<T>(data, head);
        head = node;
    }
	T peek_front(){
		return head->data;
	}
    void pop_front() {
        Node<T> * node;
		node = head->next;
        delete head;
        head = node;
    }
    T top() {
        return head->data;
    }
	void push_back(T element){
		Node<T> * node = new Node<T>(data, tail);
		tail = node;
	}
	T peek_back() {
		return tail->data;
	}
	void pop_back() {
		Node<T> * node;
		node = tail->next;
		delete tail;
		tail = node;
	}
    bool empty() {
        return head == NULL && tail == NULL;
    }
private:
    Node<T> * head;
	Node<T> * tail;
};

template <typename T>
class List {
public:
    List() {
        head = NULL;
        tail = NULL;
    }
    void push_front(T element) {
        Node<T> * node = new Node<T>(element, head);
        head = node;
    }
    T peek_front() {
        return head->data;
    }
    void pop_front() {
        Node<T> * node = head->next;
        delete head;
        head = node;
    }
    void push_back(T element) {
    
    }
    T peek_back() {
    
    }
    void pop_back() {
    
    }
    bool empty() {
        return head == NULL && tail == NULL;
    }
private:
    Node<T> * head;
    Node<T> * tail;
};

int main() {
<<<<<<< HEAD
	List<int> numbers;
	numbers.push_back(42);
	numbers.push_front(10);
	numbers.push_front(3);
	numbers.push_back(87);
	// 3 10 42 87
	std::cout << 3 == numbers.peek_front() << std::endl;
	std::cout << 87 == numbers.peek_back() << std::endl;
	numbers.pop_front();
	// 10 42 87
	std::cout << 10 == numbers.peek_front() << std::endl;
	numbers.pop_back();
	// 10 42
	std::cout << 42 == numbers.peek_back() << std::endl;
	std::cout << !numbers.empty() << std::endl;
	numbers.pop_front();
	numbers.pop_front();
	std::cout << numbers.empty() << std::endl;
=======
    List<int> numbers;
    numbers.push_back(42);
    // 42
    numbers.push_front(10);
    // 10, 42
    numbers.push_front(3);
    // 3, 10, 42
    numbers.push_back(87);
    // 3, 10, 42, 87
    std::cout << (3 == numbers.peek_front()) << std::endl;
    std::cout << (87 == numbers.peek_back()) << std::endl;
    numbers.pop_front();
    // 10, 42, 87
    std::cout << (10 == numbers.peek_front()) << std::endl;
    numbers.pop_back();
    // 10, 42
    std::cout << (42 == numbers.peek_back()) << std::endl;
    std::cout << !numbers.empty() << std::endl;
    numbers.pop_front();
    // 10
    numbers.pop_front();
    // Empty
    std::cout << numbers.empty() << std::endl;
/*
>>>>>>> 801b636d3a4fee1fc2bea35105b1693511e2a43c
    Stack<std::string> stack;
    stack.push("world");
    stack.push("cruel");
    stack.push("hello");
    std::cout << stack.top() << std::endl;
    
 /*   Node<std::string> * first = new Node<std::string>("hi");
    Node<std::string> * second = new Node<std::string>("world");
    first->next = second;
    
    for (Node<std::string> * pointer = first;
        pointer != NULL;
        pointer = pointer->next) {
        std::cout << pointer->data << std::endl;
<<<<<<< HEAD
    }*/
//    for (/* init */; /* condition */; /* update */) {
//    }
=======
    }
>>>>>>> 801b636d3a4fee1fc2bea35105b1693511e2a43c
    delete first;
    delete second;
    */
    return 0;
}


