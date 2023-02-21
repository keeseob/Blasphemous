<<<<<<< HEAD
#pragma once
#include "engine.h"

namespace BP
{
	class entity
	{
	public:
		entity();
		virtual ~entity();

		void setName(const std::wstring& name) { mName = name; }
		std::wstring& getName() { return mName; }
	private:
		std::wstring mName;
	};
=======
#pragma once
#include "engine.h"

namespace BP
{
	class entity
	{
	public:
		entity();
		virtual ~entity();

		void setName(const std::wstring& name) { mName = name; }
		std::wstring& getName() { return mName; }
	private:
		std::wstring mName;
	};
>>>>>>> bfdcdd2571c3c5f275f705fa45aa3757efbf6e94
}