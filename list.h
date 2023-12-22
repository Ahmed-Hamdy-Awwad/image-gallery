struct Node
{
	int data;
	Node *next;
	Node *prev;
};

class List
{
	Node *last;
	Node *cursor;

public:
	List(int data);
	void add(int data);
	Node *getPrev();
	Node *getNext();
	int getData();
};