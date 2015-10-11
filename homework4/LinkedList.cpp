/*
 * Filename: homework4.cpp
 * Created by: Joe Pollard
 * Createdon: 10/11/15
 *Synopsis:
* Remove the maximum from a linked list. 
* The maximum is unique.
* I have added three test cases. please donot change them.
*/
#include <iostream>
using namespace std;

class node{
public:
	int val;
	node* pnext;
	node(int v=-1):val(v),pnext(NULL){};
};

//print
void print(node* head){
	if (!head) return;
	while (head){
		cout <<"["<<head->val<<"]";
		head=head->pnext;
	}
}
// Returns the head of the LL with the max deleted. 
void DeleteMax(node* &head){
  int max = head->val;
  node* curr = head;

  // Find max
  while(curr){
    if(max < curr->val)
      max = curr->val;
    curr = curr->pnext;
  }

  curr = head;
  if(max == curr->val){
    head = head->pnext;
  } else {
    while(max != curr->pnext->val){
      curr = curr->pnext;
    }
    if(curr->pnext){
      curr->pnext = curr->pnext->pnext;
    }
  }
}


void test1(){
	node* l1 = new node(30);
	node* l2 = new node(45);
	node* l3 = new node(48);
	node* l4 = new node(27);
	l1->pnext = l2; 
	l2->pnext = l3;
	l3->pnext = l4;
	cout <<"before: ";print(l1);cout <<endl;
	DeleteMax(l1);
	cout <<"after:  ";print(l1);cout <<endl;
}
void test3(){
	node* l1 = new node(30);
	cout <<"before: ";print(l1);cout <<endl;
	DeleteMax(l1);
	cout <<"after:  ";print(l1);cout <<endl;
}
void test2(){
	node* l1 = new node(30);
	node* l2 = new node(45);
	node* l3 = new node(48);
	node* l4 = new node(57);
	l1->pnext = l2; 
	l2->pnext = l3;
	l3->pnext = l4;
	cout <<"before: ";print(l1);cout <<endl;
	DeleteMax(l1);
	cout <<"after:  ";print(l1);cout <<endl;
}

int main (){
	test1();
	test2();
	test3();

	return 0;
}
/*
// output
before: [30][45][48][27]
after:  [30][45][27]
before: [30][45][48][57]
after:  [30][45][48]
before: [30]
after:  
*/
