// LinkedList.h

#pragma once

namespace Utilities {
	
	template<class T>
	class LinkedList
	{
		private:
			int mLength;

		public:
			LinkedList()
			{
				mLength = 0;
			}

			/**
			Adds an element to the list at the end.

			@param Data the data to add to the list
			*/
			void add(T data)
			{

			}

			/**
			Removes an element from the list at the index position.
			The element is erased from memory.
			
			@param Index the index of the element
			*/
			void remove(int index)
			{

			}

			/**
			Returns the element at a certain index.
			Index starts at 0 and cannot be less.
			Index cannot be more than the length - 1

			@param int the index
			@return the element at the indexed location
			*/
			T * operator[](int)
			{
				int * a = new int (1);
				return a;
			}

			/**
			@return the number of elements in the list
			*/
			int length()
			{
				return mLength;
			}
	};
}
