//================================================================================
// Name        : practical8.cpp
// Author      : a.mccaughey@ulster.ac.uk
// Version     : 1.0
// Description : practical 8 - program to utilise BinarySearch tree 
//================================================================================

#include <iostream>
#include <string>

#include "BinaryTree.h"

using namespace std;



// create and manipulate a binary tree
void testTree() {

	// Construct tree from Q1
	
	// Create Tree
	BinaryTree<int> tree;

	// Insert elements into tree
	tree.insert(31); tree.insert(21); tree.insert(52); tree.insert(10);
	tree.insert(90); tree.insert(16); tree.insert(23); tree.insert(40);
	tree.insert(65);

	// Display the tree in-order, pre-order and post-order
	cout << "\nTree InOrder: "; tree.displayInOrder();
	cout << "\nTree PreOrder: "; tree.displayPreOrder();
	cout << "\nTree PostOrder: "; tree.displayPostOrder();
	cout << "\nHeight Original: " << tree.height();

	// Remove elements and display tree again
	tree.remove(10); tree.remove(90); tree.remove(52);

	cout << "\nTree InOrder: "; tree.displayInOrder();
	cout << "\nTree PreOrder: "; tree.displayPreOrder();
	cout << "\nTree PostOrder: "; tree.displayPostOrder();
	cout << "\nHeight After Deletion: " << tree.height();
	
	// test find method - verify that element was previously deleted
	if (tree.find(10) == false && tree.find(90) == false && tree.find(52) == false)
		cout << "\nFind works";

	if (tree.find(23) == true)
		cout << "\nFind works";

	// Clear tree and add numbers in order
	tree.clear();

	// Insert elements into tree in order
	tree.insert(31); tree.insert(21); tree.insert(52); tree.insert(10);
	tree.insert(90); tree.insert(16); tree.insert(23); tree.insert(40);
	tree.insert(65);

	// Insert elements into tree
	tree.insert(10); tree.insert(16); tree.insert(21); tree.insert(23);
	tree.insert(31); tree.insert(40); tree.insert(52); tree.insert(65);
	tree.insert(90);
	
	// redisplay tree and its new height
	cout << "\nTree InOrder: "; tree.displayInOrder();
	cout << "\nTree PreOrder: "; tree.displayPreOrder();
	cout << "\nTree PostOrder: "; tree.displayPostOrder();
	cout << "\nHeight with full order: " << tree.height();
	
}

// Main method.
int main()
{
	testTree();

	// ---------------------------------------------------
	std::cout << std::endl << "Press enter to quit";
	std::cin.sync(); // flush input buffer
	std::cin.ignore(); // ignore what user enters

	return 0;
}