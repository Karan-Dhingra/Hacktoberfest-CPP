#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   Node* next;
};
struct Node* newNode(int data) {
   Node* node = new Node;
   node->data = data;
   node->next = NULL;
   return node;
}
void insertNewNode(Node** root, int data) {
   Node* node = newNode(data);
   Node* ptr;
   if (*root == NULL) {
      *root = node;
   }
   else {
      ptr = *root;
      while (ptr->next != NULL) {
         ptr = ptr->next;
      }
      ptr->next = node;
   }
}
void printLinkedList(Node* root) {
   while (root != NULL) {
      cout << root->data << " -> ";
      root = root->next;
   }
   cout << "NULL" << endl;
}
Node* createLinkedList(int arr[], int n) {
   Node *root = NULL;
   for (int i = 0; i < n; i++) {
      insertNewNode(&root, arr[i]);
   }
   return root;
}
int main() {
   int arr[] = { 1, 2, 3, 4, 5 }, n = 5;
   Node* root = createLinkedList(arr, n);
   printLinkedList(root);
   return 0;
}