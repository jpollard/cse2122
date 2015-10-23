#ifndef MATH_TREE_H
#define MATH_TREE_H

#include <string>

class Tree
{
public:
    std::string op;
    double val;
    Tree *left;
    Tree *right;
	Tree(std::string _op,double _val=0.0):op(_op), val(_val){right=NULL; left=NULL;};
	Tree(){};
};

extern void print_ascii_tree(Tree * t);

#endif

