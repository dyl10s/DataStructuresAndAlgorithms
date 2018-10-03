//
// Created by Dylan Strohschein
//

#ifndef LINKEDLISTWITHTEMPLATE_LINKED_LIST_HPP
#define LINKEDLISTWITHTEMPLATE_LINKED_LIST_HPP
#include <memory>
#include <stdexcept>
#include <set>
#include <iostream>

using namespace std;

namespace gv {
    template <typename T> class linked_list {
    private:
        struct Node;
    public:
        /**
         * Default constructor
         */
        linked_list() {
        }

        /**
         * Check if the list contains data items
         * @return true if it is empty, false otherwise
         */
        bool is_empty() const {
            if(this->head == nullptr) return true;
            return false;
        }

        /**
         * Count the number of  items in the list
         * @return the number of items
         */
        int size() const {

            int count = 0;

            auto testNode = this->head;
            while(testNode != nullptr){
                count+=1;
                testNode = testNode->next;
            }

            return count;
        }

        /**
         * Make the list empty
         */
        void clear() {
                this->head = nullptr;
        }

        /**
         * Return the first data in the list, or throw an length_error exception when the list is empty
         * @return the data stored in the first node
         * @throw length_error when the list is empty
         */
        const T& front() const {

            if(this->head == nullptr){
                throw length_error("The list is empty");
            }

            return this->head->data;
        };

        /**
         * Return the last data in the list, or throw an length_error exception when the list is empty
         * @return the data stored in the first node
         * @throw length_error when the list is empty
         */
        const T& back() const {

            if(this->head == nullptr){
                throw length_error("The list is empty");
            }

            return this->tail.lock()->data;

        };

        /**
         * Store x as the first data item in the list
         * @param x the value to store
         */
        void push_front(const T& x) {

            auto newData = make_shared<Node>();
            newData->data = x;

            if(is_empty()){
                this->head = newData;
                this->tail = newData;
                return;
            }

            newData->next = this->head;
            this->head->prev = newData;
            this->head = newData;

        }

        /**
         * Store x as the last data item in the list
         * @param x the value to store
         */
        void push_back(const T& x) {

            auto newData = make_shared<Node>();;
            newData->data = x;

            if(is_empty()){
                this->head = newData;
                this->tail = newData;
                return;
            }

            newData->next = nullptr;

            if(auto tail = this->tail.lock()){
                tail->next = newData;
                newData->prev = tail;
            }

            this->tail = newData;



        }

        /**
         * Insert x as a new data item at the specified position in the list.
         * As an example: if the list holds string data {"Carbon", "Oxygen"}
         * insert_into ("Neon", 0) => {"Neon", "Carbon", "Oxygen"}
         * insert_into ("Neon", 1) => {"Carbon", "Neon", "Oxygen"}
         * insert_into ("Neon", 2) => {"Carbon", "Oxygen", "Neon"}
         * insert_into ("Neon", N) => throw out_of_range when N < 0 or N > 2
         *
         * @param x the value to store
         * @param pos the position at which x is to be inserted (0 = first)
         * @throw out_of_range exception when pos is invalid (negative or larger than list size)
         */
        void insert_into (const T&x, int pos) {

            if(pos < 0 || pos > size()){
                throw out_of_range("pos is invalid (negative or larger than list size)");
            }

            if(pos == 0){
                push_front(x);
                return;
            }

            if(pos == size()){
                push_back(x);
                return;
            }

            int count = 0;
            auto newPoint = make_shared<Node>();
            auto insertPoint = make_shared<Node>();
            newPoint->data = x;

            insertPoint = this->head;

            while(count != pos){
                insertPoint = insertPoint->next;
                count++;
            }

            newPoint->next = insertPoint;

            if(auto prev = insertPoint->prev.lock()){
                prev->next = newPoint;
                newPoint->prev = prev;
            }

            insertPoint->prev = newPoint;

        }

        /**
         * Remove the data at a given position
         * As an example: if the list holds string data {"Carbon", "Oxygen", "Fluor"}
         * remove_from(0) => {"Oxygen", "Fluor"}
         * remove_from(1) => {"Carbon", "Fluor"}
         * remove_from(2) => {"Carbon", "Oxygen"}
         * remove_from(3) => throw out_of_range exception
         * remove_from(-1) => throw out_of_range exception
         *
         * @param pos the position at which the data is to be removed (0 = first)
         * @throw out_of_range exception when pos is invalid (negative or >= list size)
         */
        void remove_from (int pos) {

            if(pos < 0 || pos >= size()){
                throw out_of_range("pos is invalid (negative or larger than list size)");
            }

            int count = 0;
            auto insertPoint = make_shared<Node>();
            auto insertPointPrev = make_shared<Node>();

            insertPoint = this->head;

            while(count != pos){
                insertPointPrev = insertPoint;
                insertPoint = insertPoint->next;
                count++;
            }

            if(pos == 0){
                this->head = this->head->next;
                return;
            }

            if(pos == size() - 1){
                this->tail = insertPointPrev;
                insertPointPrev->next = nullptr;
                return;
            }

            insertPointPrev->next = insertPoint->next;
            insertPoint->next = nullptr;

        }

        /**
         * Return the data stored at a given position
         * @param pos the position at which the data is to be retrieved (0 = first)
         * @return the data at the requested position
         * @throw out_of_range exception when pos is invalid (negative or >= list size)
         */
        const T& at (int pos) const {

            if(pos < 0 || pos >= size()){
                throw out_of_range("pos is invalid (negative or larger than list size)");
            }

            int count = 0;
            auto insertPoint = make_shared<Node>();

            insertPoint = this->head;

            while(count != pos){
                insertPoint = insertPoint->next;
                count++;
            }

            return insertPoint->data;
        };

        /**
         * Remove the first data item
         * @throw length_error when the list is empty
         */
        void pop_front() {

            if(is_empty()){
                throw length_error("The list is empty");
            }

            remove_from(0);

        }

        /**
         * Remove the last data item
         * @throw length_error when the list is empty
         */
        void pop_back() {

            if(is_empty()){
                throw length_error("The list is empty");
            }

            remove_from(size() - 1);


        }
        /**
         * Implement self-adjusting list (Problem 3.30b). Search for a given item
         * and move the item to the front of the list (if found)
         * @param val data item to search for in the list
         * @return true if the item is found, false otherwise
         */
        bool find(const T& val) {

            for(int i = 0; i < size(); i++){
                if(at(i) == val){
                    remove_from(i);
                    push_front(val);
                    return true;
                }
            }

            return false;

        }

    private:
        // You may add private data/function here


        // But, DO NOT CHANGE ANYTHING BELOW THIS LINE
        shared_ptr<Node> head;
        weak_ptr<Node> tail;
        struct Node {
            T data;
            shared_ptr<Node> next;
            weak_ptr<Node> prev;
        };
    };
};
#endif //LINKEDLISTWITHTEMPLATE_LINKED_LIST_HPP
