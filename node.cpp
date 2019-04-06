#include "node.h"
#include <stdlib.h>

int get_key(Node node)
{
  if(node==0)
  {
    return 0;
  }
  else
  {
    return node->key;
  }
}

Node get_left(Node node)
{
  if(node==0)
  {
    return 0;
  }
  else
  {
    return node->left;
  }
}

void set_left(Node node, Node left)
{
  if(node==0)
  {
    return;
  }
  node->left=left;
}

Node get_right(Node node)
{
  if(node==0)
  {
    return 0;
  }
  return node->right;
}

void set_right(Node node, Node right)
{
  if(node==0)
  {
    return;
  }
  node->right=right;
}

int get_height(Node node)
{
  if(node==0)
  {
    return 0;
  }
  return node->height;
}

void set_height(Node node, int height)
{
  if(node==0)
  {
    return;
  }
  node->height=height;
}

Node create_node(int key)
{
  Node newNode=(Node)malloc(sizeof(struct NodeImplementation));
  newNode->left=0;
  newNode->right=0;
  newNode->key=key;
  newNode->height=1;
  return newNode;
}
