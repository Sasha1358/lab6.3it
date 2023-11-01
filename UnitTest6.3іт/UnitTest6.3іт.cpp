#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63іт
{
	TEST_CLASS(UnitTest63іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 3, 5, 7, 9 };
			int size = 5;
			Assert:(Sum(a, size), 0, 1e-1);
		}
	};
}
