#include "stdafx.h"
#include "CppUnitTest.h"
#include "LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UtilitiesTest
{		
	TEST_CLASS(LinkedListTest)
	{
	public:
		
		TEST_METHOD(Add_One_Item)
		{
			Utilities::LinkedList<int> list = Utilities::LinkedList<int>();

			list.Add(1);

			Assert::AreEqual(1, *list[0]);
		}

	};
}