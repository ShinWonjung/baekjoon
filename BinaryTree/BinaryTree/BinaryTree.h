#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

struct BTreeNode
{
	BTData data;
	BTreeNode* left;
	BTreeNode* right;
};

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

#endif