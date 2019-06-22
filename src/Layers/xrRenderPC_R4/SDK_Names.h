#pragma once

namespace Cordis
{
	namespace SDK
	{
		class SDK_Names
		{
		private:
			SDK_Names(void) = default;

		public:
			inline static SDK_Names& getInstance(void) noexcept
			{
				static SDK_Names instance;
				return instance;
			}

			SDK_Names(const SDK_Names&) = delete;
			SDK_Names& operator=(const SDK_Names&) = delete;
			SDK_Names(SDK_Names&&) = delete;
			SDK_Names& operator=(SDK_Names&&) = delete;
			~SDK_Names(void) = default;

			inline const xr_string& getName(const xr_string& id)
			{
				if (id.empty() || this->m_current_language.empty())
					return xr_string(TEXT("ERROR"));

				for (auto it : this->m_data)
				{
					if (it.first == this->m_current_language)
					{
						return it.second[id];
					}
				}
			}
			
			inline const xr_string& getCurrentLanguage(void)
			{
				if (this->m_current_language.empty())
					return xr_string(TEXT("Empty"));
				 
				return this->m_current_language;
			}

			void Initialize(void)
			{
#ifdef WINDOWS
				
#endif
			}


		private:
			xr_string m_current_language;
			xr_vector<xr_string> m_languages;
			// @ Key - name from xml, value - from <text> Heh </text>
			xr_list<std::pair<xr_string, xr_map<xr_string, xr_string>>> m_data;
		};
	}
}