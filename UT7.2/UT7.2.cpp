#include "pch.h"
#include "CppUnitTest.h"
#include "../PR7.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT72
{
	TEST_CLASS(UT72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			list<int> arr = { 1,1,1,1 };

			Assert::IsTrue(Task(arr, 4));
		}
	};
}