#pragma once
#include "engine.h"

namespace BP
{
	class entity
	{
	public:
		entity();
		virtual ~entity();

		void setName(const std::wstring& name) 
		{ 
			mName = name; 
		}
		std::wstring& getName() 
		{
			return mName; 
		}
	private:
		std::wstring mName;
	};
}