/*#include <iostream>

struct node {
	//denna medlem håller varje nods data.
	int data;
	//dessa är pekare som pekar på andra noder.
	node *next;
	node *prev;
};

using namespace std;

int main() {
	//dessa är pekare som pekar på nån annan nod i minnet.
	node *n;
	//används för att länka alla olika noder.
	node *t;
	//h är vår head-pointer som pekar på det första elementet i listan.
	node *h;

	//använd värdeinitiering när ny instans av node skapas för att undvika minnesläckor.
	//int-medlemmar sätts till 0, och pointer-medlemmar sätts till nullptr.
	//n pekar nu på en nyskapad nod, och t och h sätts även till att peka på samma nod.
	n = new node();
	t = n;
	h = n;
	n->data = 1;

	n = new node();
	n->data = 2;
	t->next = n;
	t->prev = h;
	t = t->next;

	n = new node();
	n->data = 3;
	t->next = n;
	t->prev = h->next;
	t = t->next;
	//sista noden i listan pekar inte på något.
	n->next = nullptr;

	cout << h->data << " " << h->next->data << " " << h->next->next->data<<" "<<endl;
	return 0;
}
*/