#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1E/Vector3D.cpp"
#include "../5.1E/Vector3D.h"
#include "../5.1E/Object.cpp"
#include "../5.1E/Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			class Vector3D   a(1, 1, 1);

			Assert::AreEqual(a.GetX(), 1.0);
		}
	};
}