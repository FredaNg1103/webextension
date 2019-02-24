
#include <iostream>
using namespace std;

class BinTreeNode{

public:

	BinTreeNode(int value){

		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}

	int value;
	BinTreeNode* left;
	BinTreeNode* right;


};

BinTreeNode* tree_insert(BinTreeNode* tree, int item){

	if (tree == NULL)
		tree = new BinTreeNode(item);
	else
		if (item< tree->value)
			if (tree->left == NULL)
				tree->left = new BinTreeNode(item);
			else
				tree_insert(tree->left, item);
		else
			if (tree->right == NULL)
				tree->right = new BinTreeNode(item);
			else
				tree_insert(tree->right, item);
	return tree;
}

void postorder(BinTreeNode* tree){

if (tree != NULL){
	postorder(tree->left);
	postorder(tree->right);
	cout << tree->value << " ";
}

}

	
//bool search_node (BinTreeNode* tree, int target){

	//while (tree != NULL){
		//if (tree->value == target)
			//break;


		//if (target > tree->value)
			//tree = tree->right;
		//else
		//if (target < tree->value)
			//tree = tree->left;
		
	//}

	//if (tree == NULL)
		//return false;
	//if (tree->value==target)
		//return true;

	

	//return false;



int main(int argc, char* argv[]){

	//int number;
	BinTreeNode* t = tree_insert(0, 6);
	tree_insert(t, 10);
	tree_insert(t, 5);
	tree_insert(t, 2);
	tree_insert(t, 3);
	tree_insert(t, 4);
	tree_insert(t, 11);

	
	postorder(t);
	//cout << "Search the number you want to find ";
	//cin >> number;

	//if (search_node(t, number) == true)
		//cout << "Found";
	//else
		//cout << "Not Found";

	system("pause");
	
	return 0;

}