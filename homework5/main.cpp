#include <iostream>
#include <string>
#include <cmath>
#include "math_tree.h"
#include "calc_parser.h"
using namespace std;

double evalOp(string op, double val)
{
    // for evaluating functions like sin, cos, etc.
	
	return 0; // Default return
}

double evalOp(string op, double val1, double val2)
{
    // for evaluating operators like +, -, etc.
	return 0; // Default return 
}

double eval(Tree *root)
{
    // for (recursively) evaluating a tree; this function will refer
    // back to itself (for evaluating subtrees) and will use the
    // evalOp() functions

	return 0; // default return
}

// this is a global variable used by the parser
Tree* math_tree;

int main()
{ 
	// hand-code a tree for this expression:
	//3.4-(2.6+5.0) test 1
	Tree* test1_root = new Tree("-");
	Tree* test1_r1 = new Tree("+");
	Tree* test1_r1_r1 = new Tree("",5.0);
	Tree* test1_r1_l1 = new Tree("",2.6);
	Tree* test1_l1 = new Tree("",3.4);

	test1_root->right = test1_r1;
	test1_root->left = test1_l1;

	test1_r1->right = test1_r1_r1;
	test1_r1->left = test1_r1_l1;

	//here we print your hand-coded tree
	print_ascii_tree(test1_root);
	// and evaluate the hand-coded tree (should equal -0.25)
    cout << "Result: " << eval(test1_root) << endl << endl << endl;

    // this is the user-input loop; there is no need to change it
    while(true)
    {
        Parser parser;
        cout << "Enter expression: ";

        // this function gets the input and does the parsing
        parser.yyparse();

        // the yyparse() function sets the global variable math_tree
        // to a new tree; if that tree is NULL (no tree), just quit
        if(math_tree == NULL)
            break;

        // otherwise, print the tree
        print_ascii_tree(math_tree);

        // and evaluate it
        cout << "Result: " << eval(math_tree) << endl << endl;

        // reset the tree back to NULL before looping
        math_tree = NULL;
    }

    return 0;
}
