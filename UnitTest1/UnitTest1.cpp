#include "pch.h"
#include "CppUnitTest.h"
#include "../N.h"
#include "../N.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			N k(2);
			int z = k.vectorNorma();
			Assert::AreEqual(z, 0);
		}
	};
}
