// LinkedList.h

#pragma once

namespace Utilities {
	
	template<class T>
	class LinkedList
	{
		private:
			class Node
			{
				public:
					Node* next;
					T* data;
			};

			Node* mStart;

			class Node* nil;

		public:
			LinkedList()
			{
				mStart = nil;
			}

			/**
			Adds an element to the list at the end.

			@param Data the data to add to the list
			*/
			void add(T* data)
			{
				Node* newNode = new Node();
				newNode->data = data;
				newNode->next = nil;
				
				Node* currentNode = mStart;
				Node* previousNode = nil;
				
				while (currentNode != nil)
				{
					previousNode = currentNode;
					currentNode = currentNode->next;					
				}

				if (previousNode == nil)
					mStart = newNode;
				else
					previousNode->next = newNode;
			}

			/**
			Removes an element from the list at the index position.
			The element is erased from memory.
			
			@param Index the index of the element
			*/
			void remove(int index)
			{
				if (index < 0)
					throw std::invalid_argument("Index out of range");

				Node* currentNode = mStart;
				Node* previousNode = nil;
				int i = 0;

				while (currentNode != nil && i != index)
				{
					previousNode = currentNode;
					currentNode = currentNode->next;
					i++;
				}

				if (currentNode == nil)
					throw std::invalid_argument("Index out of range");

				if (previousNode == nil)
					mStart = nil;
				else
					previousNode->next = currentNode->next;
				delete currentNode;
			}

			/**
			Returns the element at a certain index.
			Index starts at 0 and cannot be less.
			Index cannot be more than the length - 1

			@param int the index
			@return the element at the indexed location
			*/
			T * operator[](int index)
			{
				Node* node;

				if (index < 0)
					throw std::invalid_argument("Index out of range");

				node = mStart;
				int i = 0;

				while (node != nil && i != index)
				{
					node = node->next;
					i++;
				}

				if (node == nil)
					throw std::invalid_argument("Index out of range");

				return node->data;
			}

			/**
			@return the number of elements in the list
			*/
			int length()
			{
				Node* node = mStart;
				int i = 0;

				while (node != nil)
				{
					i++;
					node = node->next;
				}

				return i;
			}
	};
}
