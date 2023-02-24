#pragma once
#include "bpResource.h"

namespace BP
{
	class findResource
	{
	public:
		template <typename T>
		static T* find(const std::wstring& key)
		{
			//리소스 맵에서 데이터 탐색. 데이터 발견 시, 데이터 반환, 없을 시에 end 반환
			std::map<std::wstring, bpResource*>::iterator iter = mFindResource.find(key);
			//데이터 발견시 형변환 후, 반환
			if (iter != mFindResource.end())
			{
				return dynamic_cast<T*>(iter->second);
			}
			return nullptr;
		}

		template <typename T>
		static T* load(const std::wstring& key, const std::wstring& path)
		{
			//key값으로 탐색
			T* resource = findResource::find<T>(key);
			if (resource != nullptr)
			{
				return resource;
			}
			//리소스가 없으면 실행
			resource = new T();
			if (FAILED(resource->load(path)))
			{
				assert(false);
				return nullptr;
			}

			resource->setKey(key);
			resource->setPath(path);
			mFindResource.insert(std::make_pair(key, resource));

			return dynamic_cast<T*>(resource);
		}

		static void release()
		{
			for (auto pair: mFindResource)
			{
				delete pair.second;
				pair.second = nullptr;
			}
		}

	private:
		static std::map<std::wstring, bpResource*> mFindResource;
	};
}
