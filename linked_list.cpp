//
// Created by visse on 2025-03-29.
//
#include "linked_list.h"

//scope operatorn :: talar om för kompilatorn vilken klass medlemmen hör till.
linked_list::linked_list() {
	head = nullptr;
	tail = nullptr;
}
linked_list::linked_list(const linked_list &src) { //tror detta är en copy constructor
	linked_list() = src; //funkar detta?
}
linked_list::~linked_list() { //deallocate the memory of an object.

}