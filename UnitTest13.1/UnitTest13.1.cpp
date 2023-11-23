#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.1/dod.h"
#include "../lab13.1/dod.cpp"
#include "../lab13.1/sum.h"
#include "../lab13.1/var.h"
#include "../lab13.1/var.cpp"
using namespace nsDod;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = -0.6;
			dod();
			R = -(2 * n - 1.) / ((2 * n + 1) * x * x);
			Assert::AreEqual(t, -0.6);
		}
	};
}
