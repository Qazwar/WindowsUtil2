#pragma once
#include "AsmState.h"
#include "AsmStateFactory.h"
#include "..\AsmInstruction.h"
namespace Disassembler
{
	template<>
	class AsmState<AsmStateFactory::State_Group>:public IState
	{
	public:
		static int Next(AsmStateFactory::ParamType* param);
	};
	 
}  // namespace Disassembler
