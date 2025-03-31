//
// Created by visse on 2025-03-29.
//
#include "linked_list.h"


/*
 *DETTA ÄR JAG FRÅN MIN LAPTOP - GITHUB MANNEN
 */

//scope operatorn :: talar om för kompilatorn vilken klass medlemmen hör till.
linked_list::linked_list() {
	head = nullptr;
	tail = nullptr;
}

linked_list::linked_list(const linked_list &src) {
	//detta är en copy constructor
	linked_list() = src; //funkar detta?
}

linked_list::~linked_list() {
	//deallocate the memory of an object.
	delete head;
	delete tail;
}

double linked_list::front() const {
	return head->value;
}

double linked_list::back() const {
	return tail->value;
}

double linked_list::at(size_t pos) const {
}

//scope operator för att structen inte är global, som i labb 1, utan är inkapslad i linked_list-klassen.
//måste säga till kompilatorn vart structen finns.
linked_list::node::node(double value) {
	this->value = value;
	next = nullptr;
	prev = nullptr;
}

void linked_list::push_back(double value) {
	node *n = new node(value);
	tail = head;
	if (head != nullptr) {
		while (tail -> next != nullptr) {
			tail = tail->next;
		}
		tail -> next = n;
		n -> prev = tail;
		tail = n;
	} else {
		head = n;
		tail = n;
	}
}
