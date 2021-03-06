#pragma once

namespace Cordis
{
	namespace Scripts
	{
		class Script_EvaluatorPatrolEnd : public CScriptPropertyEvaluator
		{
		public:
			Script_EvaluatorPatrolEnd(const xr_string& name, DataBase::Script_ComponentScheme_XRPatrol* storage) : CScriptPropertyEvaluator(nullptr, name.c_str()), m_p_storage(storage) {}
			~Script_EvaluatorPatrolEnd(void);
			virtual _value_type evaluate(void);

		private:
			DataBase::Script_ComponentScheme_XRPatrol* m_p_storage;
		};

		class Script_EvaluatorPatrolComm : public CScriptPropertyEvaluator 
		{
		public:
			Script_EvaluatorPatrolComm(const xr_string& name, DataBase::Script_ComponentScheme_XRPatrol* storage) : CScriptPropertyEvaluator(nullptr, name.c_str()), m_p_storage(storage) {}
			~Script_EvaluatorPatrolComm(void);

			virtual _value_type evaluate(void);

		private:
			DataBase::Script_ComponentScheme_XRPatrol* m_p_storage;
		};

		class Script_ActionCommander : public Script_ISchemeStalker
		{
		public:
			Script_ActionCommander(CScriptGameObject* const p_client_object, const xr_string& name, DataBase::Script_ComponentScheme_XRPatrol* storage);
			~Script_ActionCommander(void);

			virtual void initialize(void);
			virtual void execute(void);
			virtual void finalize(void);

			virtual void death_callback(CScriptGameObject* const p_client_victim, CScriptGameObject* const p_client_who);
			virtual void net_destroy(CScriptGameObject* const p_client_object);
			virtual void deactivate(CScriptGameObject* const p_client_object);
			virtual void activate_scheme(const bool is_loading, CScriptGameObject* const p_client_object);

			bool formation_callback(std::uint32_t number, std::uint32_t index);
		private:
			bool m_is_was_reset;
			Script_MoveManager* m_p_move_manager;
			DataBase::Script_ComponentScheme_XRPatrol* m_p_storage;
			xr_string m_current_state_name;
			xr_string m_old_state_name;
		};
		 
		class Script_SchemeXRPatrol : public Script_ISchemeStalker
		{
		public:
			Script_SchemeXRPatrol(void) = delete;
			Script_SchemeXRPatrol(const xr_string& name, DataBase::Script_ComponentScheme_XRPatrol* storage);
			~Script_SchemeXRPatrol(void);
			virtual void activate_scheme(const bool is_loading, CScriptGameObject* const p_client_object);
			virtual void initialize(void);
			virtual void execute(void);
			virtual void finalize(void);
			virtual void death_callback(CScriptGameObject* const p_client_victim, CScriptGameObject* const p_client_who);
			virtual void deactivate(CScriptGameObject* const p_client_object);
			virtual void net_destroy(CScriptGameObject* const p_client_object);

			bool formation_callback(std::uint32_t, std::uint32_t);

			static void add_to_binder(CScriptGameObject* const p_client_object, CScriptIniFile* const p_ini,
				const xr_string& scheme_name, const xr_string& section_name, DataBase::Script_IComponentScheme* storage);

			static void set_scheme(CScriptGameObject* const p_client_object, CScriptIniFile* const p_ini,
				const xr_string& scheme_name, const xr_string& section_name, const xr_string& gulag_name);

		private:
			bool m_is_on_point;
			bool m_is_was_reset;
			std::uint32_t m_level_vertex_id;
			std::uint32_t m_dist;
			int m_time_to_update;
			DataBase::Script_ComponentScheme_XRPatrol* m_p_storage;
			Script_MoveManager* m_p_move_manager;
			Fvector m_direction;
			xr_string m_current_state_name;
		};

		class Script_XRPatrolManager
		{
		public:
			Script_XRPatrolManager(void) = delete;
			Script_XRPatrolManager(const xr_string& path_name);

			~Script_XRPatrolManager(void);

			void add_npc(CScriptGameObject* const p_npc, const bool is_leader);
			void remove_npc(CScriptGameObject* const p_npc);
			void reset_positions(void);
			void set_formation(const xr_string& formation_name);
			CScriptGameObject* const get_commander(CScriptGameObject* const p_npc);
			void get_npc_command(CScriptGameObject* const p_npc, std::uint32_t& vertex, Fvector& direction, xr_string& state_name);
			void set_command(CScriptGameObject* const p_npc, const xr_string& command_name, const xr_string& formation_name);
			bool is_commander(const std::uint16_t npc_id);
			bool is_commander_in_meet(void);

		private:
			std::uint16_t m_commander_id;
			std::uint32_t m_commander_level_vertex_id;
			std::uint32_t m_npc_count;
			Fvector m_commander_direction;
			xr_map<std::uint16_t, std::tuple<CScriptGameObject*, Fvector, float>> m_npc_list;
			xr_string m_path_name;
			xr_string m_current_state_name;
			xr_string m_formation_name;
		};
	}
}


