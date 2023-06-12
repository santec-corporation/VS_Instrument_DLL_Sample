// librayForMFCInstrument.h

#pragma once
#include <fstream> //定义读写已命名文件的类型
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>

using namespace System;
using namespace Santec;
using namespace System::Diagnostics;
using namespace System::Runtime::InteropServices;

namespace librayForMFCInstrument {

	public ref class Class1
	{
	public:
		TSL tsl;
		MPM mpm;                 //MPM Control Class// MPM控制类
		OSU ^osu = gcnew OSU();
		SPU ^spu = gcnew SPU();
		PCU pcu;//pcu control class/ / pcu控制类
		static Class1^ get_instance()
		{
			if (cls1 == nullptr)
			{
				cls1 = gcnew Class1;
			}
			return cls1;
		}
	private:
		static Class1 ^cls1;

		// TODO:  在此处添加此类的方法。
	};
}
