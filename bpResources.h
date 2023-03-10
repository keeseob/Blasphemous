#pragma once
#include "bpResource.h"

namespace BP
{
	class bpResources
	{
	public:
		template <typename T>
		static T* find(const std::wstring& key)
		{
			//���ҽ� �ʿ��� ������ Ž��. ������ �߰� ��, ������ ��ȯ, ���� �ÿ� end ��ȯ
			std::map<std::wstring, bpResource*>::iterator iter = mBpResources.find(key);
			//������ �߽߰� ����ȯ ��, ��ȯ
			if (iter != mBpResources.end())
			{
				return dynamic_cast<T*>(iter->second);
			}
			return nullptr;
		}

		template <typename T>
		static T* load(const std::wstring& key, const std::wstring& path)
		{
			//key������ Ž��
			T* resource = bpResources::find<T>(key);
			if (resource != nullptr)
			{
				return resource;
			}
			//���ҽ��� ������ ����
			resource = new T();
			if (FAILED(resource->load(path)))
			{
				assert(false);
				return nullptr;
			}

			resource->setKey(key);
			resource->setPath(path);
			mBpResources.insert(std::make_pair(key, resource));

			return dynamic_cast<T*>(resource);
		}

		template <typename T>
		static void insert(const std::wstring& key, T* resource)
		{
			mBpResources.insert(std::make_pair(key, resource));
		}

		static void release()
		{
			for (auto pair: mBpResources)
			{
				delete pair.second;
				pair.second = nullptr;
			}
		}

	private:
		static std::map<std::wstring, bpResource*> mBpResources;
	};
}
