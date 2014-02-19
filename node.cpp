
class List;

class ListNode
{
friend class List;
private:
	int data;
	ListNode *next;
};

class List
{
private:
	ListNode *first, *current;
};