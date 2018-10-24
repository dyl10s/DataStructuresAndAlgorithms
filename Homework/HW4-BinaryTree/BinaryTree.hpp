//
// Created by Hans Dulimarta.
//

#ifndef BINARYTREES_BINARYSEARCHTREE_H
#define BINARYTREES_BINARYSEARCHTREE_H
#include <memory>
#include <iostream>
#include <stdexcept>
#include <queue>
#include <map>
#include <stack>

using namespace std;

namespace gv {
    template<typename E>     // textbook code E is Comparable
    class BinaryTree {
    private:

    public:
        /** WARNING: You will find a few overloaded functions declared in
         * both the public and private sections. This design is intentional
         * because many tree algorithms are recursive and the private counterpart
         * are the ones implementing the recursive work and they usually
         * require additional input argument(s).
         *
         * The non-recursive public functions simply call their recursive
         * counterpart to initiate the recursive work.
         */

        /**
         * Make the tree into an empty tree
         */
        void makeEmpty() noexcept {
            // TODO: complete this function
            makeEmpty(root);
        }

        /**
         * Insert a new data into the BST while maintaining no duplicate entries
         * @param item
         * @return true if the item can be inserted (no duplicate), false if the tree
         * already contains the same data item.
         */
        bool insert(const E &item) noexcept {
            // TODO: complete this function by invoking a private recursive function
            return insert(item, root);
        }

        /**
         * Remove an item from the tree
         * @param item data to remove
         * @return true is the data is removed, false if the data is not in the tree
         * @throw length_error on an attempt to remove from an empty tree
         */
        bool remove(const E& item) {
            // TODO: complete this function by invoking a private recursive function
            if(nodeCount == 0){
                throw length_error("Tree is empty");
            }
            return remove(item, root);
        }

        /**
         * Print the tree using in-order traversal. Separate data item by a single space
         * @param out destination of the print out
         */
        void printTree(ostream &targetStream = cout) const noexcept {
            // TODO: complete this function by invoking a private recursive function
            // Be sure to use "targetStream" (and NOT cout) to print your data
            // For instance the following snippet would print "Hello"
            //   targetStream << "Hello";
            printTree(root, targetStream);
        }

        /**
         * Find the smallest value in the tree
         * @return the smallest value
         * @throw length_error if the tree is empty
         */
        const E findMin() const {
            // TODO: complete this function
            if(nodeCount == 0){
                throw length_error("Tree is empty");
            }
            return findMin(root);
        };

        /**
         * Find the largest value in the tree
         * @return the largest value
         * @throw length_error if the tree is empty
         */
        const E findMax() const {
            // TODO: complete this function
            if(nodeCount == 0){
                throw length_error("Tree is empty");
            }
            return findMax(root);

        }

        /**
         * Check if the given item is stored in the tree
         * @param val
         * @return true if the item is stored in the tree, false otherwise
         */
        bool contains(const E &val) const noexcept {
            // TODO: complete this function by invoking a private recursive function
            return contains(val, root);
        }

        /**
         * Is the tree empty?
         * @return
         */
        bool isEmpty() const noexcept {
            // TODO: complete this function
            if(root == nullptr){
                return true;
            }
            return false;
        }

        /**
         * Return the number of nodes in the tree (Problem 4.31a)
         * @return
         */
        int numberOfNodes() const noexcept {
            // TODO: complete this function by invoking a private recursive function
            return numberOfNodes(root);
        }

        /**
         * Return the number of leaves in the tree (Problem 4.31b)
         * @return
         */
        int numberOfLeaves() const noexcept {
            // TODO: complete this function by invoking a private recursive function

            return numberOfLeaves(root);
        }

        /**
         * Return the number of full nodes (Problem 4.31c). A full node is a node with exactly two children
         * @return
         */
        int numberOfFullNodes() const noexcept {
            // TODO: complete this function by invoking a private recursive function
            return numberOfFullNodes(root);
        }

        /**
         * Remove all the leaves from the tree and keep the data in these leaves into a vector
         * @return a vector of removed items
         */
        vector<E> remove_leaves() noexcept {
            vector<E> prunedLeaves;
            // TODO: complete this function by invoking a private recursive function
            // include the vector (prunedLeaves) about in your function invocation
            remove_leaves(root, prunedLeaves);
            return prunedLeaves;
        }

        /**
         * Visit the node in level order (Problem 4.40)
         * @return
         */
        vector<E> levelOrder() const {
            vector<E> out;

            if (root == nullptr)  return out;

            queue<Node*> q;

            q.push(root.get());

            while (q.empty() == false)
            {
                Node *node = q.front();
                out.push_back(node->data);
                q.pop();

                if (node->left != nullptr)
                    q.push(node->left.get());

                if (node->right != nullptr)
                    q.push(node->right.get());
            }

            return out;
        }

        static bool hasLeak() {
            return nodeCount != 0;
        }

        static int allocatedNodes() {
            return nodeCount;
        }

    private:
        struct Node;

        vector<E> levelOrder(unique_ptr<Node> & node, int height) const{
            vector<E> out;
            if(node == nullptr){
                return out;
            }

            out.push_back(levelOrder(root->left));
            out.push_back(levelOrder(root->right));
        }

        // TODO: write your private functions here
        void remove_leaves(unique_ptr<Node> & node, vector<E> & removed){

            if(node == nullptr){
                return;
            }

            if(node->left != nullptr){
                remove_leaves(node->left, removed);
            }

            if(node->right != nullptr){
                remove_leaves(node->right, removed);
            }

            if(node->left == nullptr && node->right == nullptr){
                removed.push_back(node->data);
                node.reset();
            }



        }

        int numberOfFullNodes(const unique_ptr<Node> & node) const{

            int totalFullNodes = 0;

            if(node == nullptr){
                return 0;
            }

            if(node->left != nullptr){
                totalFullNodes += numberOfFullNodes(node->left);
            }

            if(node->right != nullptr){
                totalFullNodes += numberOfFullNodes(node->right);
            }

            if(node->right != nullptr && node->left != nullptr){
                return totalFullNodes + 1;
            }else{
                return totalFullNodes;
            }

        }

        int numberOfLeaves(const unique_ptr<Node> & node) const{

            int totalLeaves = 0;

            if(node == nullptr){
                return 0;
            }

            if(node->left != nullptr){
                totalLeaves += numberOfLeaves(node->left);
            }

            if(node->right != nullptr){
                totalLeaves += numberOfLeaves(node->right);
            }

            if(node->right == nullptr && node->left == nullptr){
                return totalLeaves + 1;
            }else{
                return totalLeaves;
            }

        }

        int numberOfNodes(const unique_ptr<Node> & node) const{

            int totalNodes = 0;

            if(node == nullptr){
                return 0;
            }

            if(node->left != nullptr){
                totalNodes += numberOfNodes(node->left);
            }

            if(node->right != nullptr){
                totalNodes += numberOfNodes(node->right);
            }

            return 1 + totalNodes;

        }

        void printTree(const unique_ptr<Node> & node, ostream &out) const{
            if(node != nullptr) {
                printTree(node->left, out);
                out << node->data << endl;
                printTree(node->right, out);
            }
        }


        bool contains(const E &x, const unique_ptr<Node> & node) const{
            if (node == nullptr) {
                return false;
            }
            else if (x < node->data) {
                return contains(x, node->left);
            }
            else if (x > node->data) {
                return contains(x, node->right);
            }
            else {
                return true;
            }
        }

        const E findMin(const unique_ptr<Node> & node) const{
            if (node->left == nullptr) {
                const E returnData = node->data;
                return returnData;
            }
            else {
                return findMin(node->left);
            }
        }

        const E findMax(const unique_ptr<Node> & node) const{
            if (node->right == nullptr) {
                const E returnData = node->data;
                return returnData;
            }
            else {
                return findMax(node->right);
            }
        }

        bool remove(const E &item, unique_ptr<Node> & node){

            if(node == nullptr){
                return false;
            }else if(item < node->data){
                return remove(item, node->left);
            }else if(item > node->data){
                return remove(item, node->right);
            }else if(node->left != nullptr && node->right != nullptr){
                node->data = findMin(node->right);
                remove(node->data, node->right);
                return true;
            }else{

                if(node->left == nullptr){
                    Node* tempNode = node->right.release();
                    node.reset(tempNode);
                }else{
                    Node* tempNode = node->left.release();
                    node.reset(tempNode);
                }

                return true;
            }
        }

        bool insert(const E &item, unique_ptr<Node> & node) {

            if(node == nullptr){
                node = make_unique<Node>();
                node->data = item;
                return true;
            }else if(item < node->data){
                return insert(item, node->left);
            }else if(item > node->data){
                return insert(item, node->right);
            }else{
                return false;
            }

        }

        void makeEmpty(unique_ptr<Node> & node){
            if(node != nullptr){
                makeEmpty(node->left);
                makeEmpty(node->right);
                node.reset();
            }
        }

        static int nodeCount;
        // TODO: Make necessary modification to the Node
        // structure if you decide to implement a threaded tree
        struct Node {
            Node() {
                nodeCount++;
            }

            ~Node() {
                nodeCount--;
            }
            E data;
            unique_ptr<Node> left, right;
            bool lt = false;
            bool rt = false;
        };
        unique_ptr<Node> root;

    };

    template<typename E>
    int BinaryTree<E>::nodeCount = 0;
}
#endif //BINARYTREES_BINARYSEARCHTREE_H
