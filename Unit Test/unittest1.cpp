#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingModule
{		
	TEST_CLASS(TestModuleClass)
	{
	public:
		
		TEST_METHOD(TestGetModuleCode)
		{
			//arrange
			Module m{ "IT", "IT123", 5, 34 };
			std::string expected{ "IT123" };
			std::string actual{};

			//act
			actual = m.getModuleCode();

			//assert
			Assert::AreEqual(expected, actual);
		}
	};
}