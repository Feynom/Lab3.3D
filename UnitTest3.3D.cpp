#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3D/Lab3.3D/Fraction_Public.h"
#include "../Lab3.3D/Lab3.3D/Fraction_Public.cpp"
#include "../Lab3.3D/Lab3.3D/Pair.h"
#include "../Lab3.3D/Lab3.3D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction_Public a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
