#ifndef _CISCO_IOS_XE_LISP_OPER_
#define _CISCO_IOS_XE_LISP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_lisp_oper {

class LispState : public ydk::Entity
{
    public:
        LispState();
        ~LispState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class LispRouters; //type: LispState::LispRouters

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters> > lisp_routers;
        
}; // LispState


class LispState::LispRouters : public ydk::Entity
{
    public:
        LispRouters();
        ~LispRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf top_id; //type: uint32
        ydk::YLeaf site_id; //type: uint64
        ydk::YLeafList xtr_id; //type: list of  uint8
        class Instances; //type: LispState::LispRouters::Instances
        class Sessions; //type: LispState::LispRouters::Sessions
        class LocalRlocs; //type: LispState::LispRouters::LocalRlocs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances> > instances;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Sessions> > sessions;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::LocalRlocs> > local_rlocs;
        
}; // LispState::LispRouters


class LispState::LispRouters::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iid; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf is_rloc_probing; //type: boolean
        class Af; //type: LispState::LispRouters::Instances::Af
        class MsEidMembership; //type: LispState::LispRouters::Instances::MsEidMembership
        class EtrEidMembership; //type: LispState::LispRouters::Instances::EtrEidMembership

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af> > af;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::MsEidMembership> > ms_eid_membership;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::EtrEidMembership> > etr_eid_membership;
        
}; // LispState::LispRouters::Instances


class LispState::LispRouters::Instances::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iaftype; //type: LispIaftypeType
        ydk::YLeaf l2_domain_id; //type: uint32
        ydk::YLeaf map_cache_size; //type: uint32
        ydk::YLeaf map_cache_limit; //type: uint32
        ydk::YLeaf etr_map_cache_ttl; //type: uint32
        ydk::YLeaf registration_more_specific; //type: uint32
        ydk::YLeaf registration_more_specific_warning_threshold; //type: uint32
        ydk::YLeaf registration_more_specific_limit; //type: uint32
        ydk::YLeaf map_cache_threshold; //type: uint32
        ydk::YLeaf map_requests_in; //type: uint64
        ydk::YLeaf map_requests_out; //type: uint64
        ydk::YLeaf encapsulated_map_requests_in; //type: uint64
        ydk::YLeaf encapsulated_map_requests_out; //type: uint64
        ydk::YLeaf rloc_probe_map_requests_in; //type: uint64
        ydk::YLeaf rloc_probe_map_requests_out; //type: uint64
        ydk::YLeaf map_requests_expired_on_queue; //type: uint64
        ydk::YLeaf map_requests_no_reply; //type: uint64
        ydk::YLeaf map_requests_from_disallowed_locators; //type: uint64
        ydk::YLeaf smr_map_requests_in; //type: uint64
        ydk::YLeaf smr_map_requests_out; //type: uint64
        ydk::YLeaf ddt_itr_map_requests_dropped; //type: uint64
        ydk::YLeaf ddt_itr_map_requests_nonce_collision; //type: uint64
        ydk::YLeaf ddt_itr_map_requests_bad_xtr_nonce; //type: uint64
        ydk::YLeaf mr_map_requests_forwarded; //type: uint64
        ydk::YLeaf ms_map_requests_forwarded; //type: uint64
        ydk::YLeaf to_alt_map_requests_out; //type: uint64
        ydk::YLeaf map_reply_records_in; //type: uint64
        ydk::YLeaf map_reply_records_out; //type: uint64
        ydk::YLeaf authoritative_records_in; //type: uint64
        ydk::YLeaf authoritative_records_out; //type: uint64
        ydk::YLeaf non_authoritative_records_in; //type: uint64
        ydk::YLeaf non_authoritative_records_out; //type: uint64
        ydk::YLeaf negative_records_in; //type: uint64
        ydk::YLeaf negative_records_out; //type: uint64
        ydk::YLeaf rloc_probe_records_in; //type: uint64
        ydk::YLeaf rloc_probe_records_out; //type: uint64
        ydk::YLeaf ms_proxy_reply_records_out; //type: uint64
        ydk::YLeaf wlc_subscribe_in; //type: uint64
        ydk::YLeaf wlc_subscribe_out; //type: uint64
        ydk::YLeaf wlc_subscribe_in_failure; //type: uint64
        ydk::YLeaf wlc_subscribe_out_failure; //type: uint64
        ydk::YLeaf wlc_unsubscribe_in; //type: uint64
        ydk::YLeaf wlc_unsubscribe_out; //type: uint64
        ydk::YLeaf wlc_unsubscribe_in_failure; //type: uint64
        ydk::YLeaf wlc_unsubscribe_out_failure; //type: uint64
        ydk::YLeaf map_register_records_in; //type: uint64
        ydk::YLeaf map_register_records_out; //type: uint64
        ydk::YLeaf map_registers_ms_disabled; //type: uint64
        ydk::YLeaf map_registers_auth_failed; //type: uint64
        ydk::YLeaf map_registers_from_disallowed_locators; //type: uint64
        ydk::YLeaf wlc_map_register_records_in; //type: uint64
        ydk::YLeaf wlc_map_register_records_out; //type: uint64
        ydk::YLeaf wlc_map_register_records_in_ap; //type: uint64
        ydk::YLeaf wlc_map_register_records_out_ap; //type: uint64
        ydk::YLeaf wlc_map_register_records_in_client; //type: uint64
        ydk::YLeaf wlc_map_register_records_out_client; //type: uint64
        ydk::YLeaf wlc_map_register_records_in_failure; //type: uint64
        ydk::YLeaf wlc_map_register_records_out_failure; //type: uint64
        ydk::YLeaf map_notify_records_in; //type: uint64
        ydk::YLeaf map_notify_records_out; //type: uint64
        ydk::YLeaf map_notify_auth_failed; //type: uint64
        ydk::YLeaf wlc_map_notify_records_in; //type: uint64
        ydk::YLeaf wlc_map_notify_records_out; //type: uint64
        ydk::YLeaf wlc_map_notify_records_in_ap; //type: uint64
        ydk::YLeaf wlc_map_notify_records_out_ap; //type: uint64
        ydk::YLeaf wlc_map_notify_records_in_client; //type: uint64
        ydk::YLeaf wlc_map_notify_records_out_client; //type: uint64
        ydk::YLeaf wlc_map_notify_records_in_failure; //type: uint64
        ydk::YLeaf wlc_map_notify_records_out_failure; //type: uint64
        ydk::YLeaf mapping_record_ttl_alerts; //type: uint64
        ydk::YLeaf remote_eid_entries_created; //type: uint64
        ydk::YLeaf remote_eid_entries_deleted; //type: uint64
        ydk::YLeaf remote_eid_nsf_replay_entries_created; //type: uint64
        ydk::YLeaf forwarding_data_signals_processed; //type: uint64
        ydk::YLeaf forwarding_data_signals_dropped; //type: uint64
        ydk::YLeaf forwarding_reachability_reports_processed; //type: uint64
        ydk::YLeaf forwarding_reachability_reports_dropped; //type: uint64
        ydk::YLeaf is_etr_accept_mapping; //type: boolean
        ydk::YLeaf is_etr_accept_mapping_verify; //type: boolean
        class Role; //type: LispState::LispRouters::Instances::Af::Role
        class MapCache; //type: LispState::LispRouters::Instances::Af::MapCache
        class LocalDbase; //type: LispState::LispRouters::Instances::Af::LocalDbase
        class MsRegistrations; //type: LispState::LispRouters::Instances::Af::MsRegistrations
        class MapServers; //type: LispState::LispRouters::Instances::Af::MapServers
        class MapResolvers; //type: LispState::LispRouters::Instances::Af::MapResolvers
        class ProxyEtrs; //type: LispState::LispRouters::Instances::Af::ProxyEtrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::Role> role;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache> > map_cache;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::LocalDbase> > local_dbase;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MsRegistrations> > ms_registrations;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapServers> > map_servers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapResolvers> > map_resolvers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::ProxyEtrs> > proxy_etrs;
        
}; // LispState::LispRouters::Instances::Af


class LispState::LispRouters::Instances::Af::Role : public ydk::Entity
{
    public:
        Role();
        ~Role();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ms; //type: boolean
        ydk::YLeaf is_mr; //type: boolean
        ydk::YLeaf is_itr; //type: boolean
        ydk::YLeaf is_etr; //type: boolean
        ydk::YLeaf is_pitr; //type: boolean
        ydk::YLeaf is_petr; //type: boolean

}; // LispState::LispRouters::Instances::Af::Role


class LispState::LispRouters::Instances::Af::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf up_time; //type: string
        ydk::YLeaf last_modified_time; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf is_authoritative; //type: boolean
        ydk::YLeaf is_static; //type: boolean
        ydk::YLeaf is_negative; //type: boolean
        ydk::YLeaf nmr_action; //type: LispMapReplyActionType
        ydk::YLeaf expiry_time; //type: string
        ydk::YLeaf encapsulated_packets; //type: uint64
        ydk::YLeaf encapsulated_octets; //type: uint64
        ydk::YLeaf is_active; //type: boolean
        class MapCacheRloc; //type: LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc> > map_cache_rloc;
        
}; // LispState::LispRouters::Instances::Af::MapCache


class LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc : public ydk::Entity
{
    public:
        MapCacheRloc();
        ~MapCacheRloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType
        ydk::YLeaf creation_time; //type: string
        ydk::YLeaf last_state_change_time; //type: string
        ydk::YLeaf rloc_probe_rtt; //type: uint32
        class Params; //type: LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params> params;
        
}; // LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc


class LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params : public ydk::Entity
{
    public:
        Params();
        ~Params();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf mcast_priority; //type: uint8
        ydk::YLeaf mcast_weight; //type: uint8

}; // LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params


class LispState::LispRouters::Instances::Af::LocalDbase : public ydk::Entity
{
    public:
        LocalDbase();
        ~LocalDbase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf lsb; //type: uint32
        ydk::YLeaf is_reachable; //type: boolean
        class LocalDbaseRloc; //type: LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc> > local_dbase_rloc;
        
}; // LispState::LispRouters::Instances::Af::LocalDbase


class LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc : public ydk::Entity
{
    public:
        LocalDbaseRloc();
        ~LocalDbaseRloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType
        ydk::YLeaf is_local; //type: boolean
        class Params; //type: LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params> params;
        
}; // LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc


class LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params : public ydk::Entity
{
    public:
        Params();
        ~Params();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf mcast_priority; //type: uint8
        ydk::YLeaf mcast_weight; //type: uint8

}; // LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params


class LispState::LispRouters::Instances::Af::MsRegistrations : public ydk::Entity
{
    public:
        MsRegistrations();
        ~MsRegistrations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf last_registration_source_port; //type: uint16
        ydk::YLeaf creation_time; //type: string
        ydk::YLeaf last_registration_time; //type: string
        ydk::YLeaf site_name; //type: string
        ydk::YLeaf site_description; //type: string
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf authentication_error; //type: uint64
        ydk::YLeaf rloc_mismatch_error; //type: uint64
        class LastRegistrationSource; //type: LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource
        class EtrRegistrations; //type: LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource> last_registration_source;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations> > etr_registrations;
        
}; // LispState::LispRouters::Instances::Af::MsRegistrations


class LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource : public ydk::Entity
{
    public:
        LastRegistrationSource();
        ~LastRegistrationSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string

}; // LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource


class LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations : public ydk::Entity
{
    public:
        EtrRegistrations();
        ~EtrRegistrations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf last_registration_time; //type: string
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf proxy_reply; //type: boolean
        ydk::YLeaf wants_map_notify; //type: boolean
        class MsRegistrationRloc; //type: LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc> > ms_registration_rloc;
        
}; // LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations


class LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc : public ydk::Entity
{
    public:
        MsRegistrationRloc();
        ~MsRegistrationRloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType
        ydk::YLeaf is_local; //type: boolean
        class Params; //type: LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params> params;
        
}; // LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc


class LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params : public ydk::Entity
{
    public:
        Params();
        ~Params();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf mcast_priority; //type: uint8
        ydk::YLeaf mcast_weight; //type: uint8

}; // LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params


class LispState::LispRouters::Instances::Af::MapServers : public ydk::Entity
{
    public:
        MapServers();
        ~MapServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType

}; // LispState::LispRouters::Instances::Af::MapServers


class LispState::LispRouters::Instances::Af::MapResolvers : public ydk::Entity
{
    public:
        MapResolvers();
        ~MapResolvers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType

}; // LispState::LispRouters::Instances::Af::MapResolvers


class LispState::LispRouters::Instances::Af::ProxyEtrs : public ydk::Entity
{
    public:
        ProxyEtrs();
        ~ProxyEtrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType
        class Params; //type: LispState::LispRouters::Instances::Af::ProxyEtrs::Params

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::ProxyEtrs::Params> params;
        
}; // LispState::LispRouters::Instances::Af::ProxyEtrs


class LispState::LispRouters::Instances::Af::ProxyEtrs::Params : public ydk::Entity
{
    public:
        Params();
        ~Params();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf mcast_priority; //type: uint8
        ydk::YLeaf mcast_weight; //type: uint8

}; // LispState::LispRouters::Instances::Af::ProxyEtrs::Params


class LispState::LispRouters::Instances::MsEidMembership : public ydk::Entity
{
    public:
        MsEidMembership();
        ~MsEidMembership();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc; //type: string
        ydk::YLeaf member_since; //type: string
        ydk::YLeaf is_gleaned; //type: boolean
        ydk::YLeaf is_configured; //type: boolean

}; // LispState::LispRouters::Instances::MsEidMembership


class LispState::LispRouters::Instances::EtrEidMembership : public ydk::Entity
{
    public:
        EtrEidMembership();
        ~EtrEidMembership();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc; //type: string
        ydk::YLeaf member_since; //type: string
        ydk::YLeaf is_learned_from_ms; //type: boolean
        ydk::YLeaf is_configured; //type: boolean

}; // LispState::LispRouters::Instances::EtrEidMembership


class LispState::LispRouters::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf peer_port; //type: uint16
        ydk::YLeaf state; //type: LispSessionStateType
        ydk::YLeaf last_state_change_time; //type: string
        ydk::YLeaf is_role_active; //type: boolean
        ydk::YLeaf is_routable; //type: boolean
        ydk::YLeaf messages_in; //type: uint64
        ydk::YLeaf messages_out; //type: uint64
        ydk::YLeaf bytes_in; //type: uint64
        ydk::YLeaf bytes_out; //type: uint64

}; // LispState::LispRouters::Sessions


class LispState::LispRouters::LocalRlocs : public ydk::Entity
{
    public:
        LocalRlocs();
        ~LocalRlocs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        ydk::YLeaf state; //type: LispRlocStateType
        ydk::YLeaf is_local; //type: boolean

}; // LispState::LispRouters::LocalRlocs

class LispAddressFamilyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_afi;
        static const ydk::Enum::YLeaf ipv6_afi;
        static const ydk::Enum::YLeaf mac_afi;

};

class LispIaftypeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iaf_ipv4;
        static const ydk::Enum::YLeaf iaf_ipv6;
        static const ydk::Enum::YLeaf iaf_mac;
        static const ydk::Enum::YLeaf iaf_ar;
        static const ydk::Enum::YLeaf iaf_rar;

};

class LispMapReplyActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_action;
        static const ydk::Enum::YLeaf natively_forward;
        static const ydk::Enum::YLeaf send_map_request;
        static const ydk::Enum::YLeaf drop;

};

class LispRlocStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp_rloc_state_down;
        static const ydk::Enum::YLeaf lisp_rloc_state_up;

};

class LispSessionStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp_session_state_incomplete;
        static const ydk::Enum::YLeaf lisp_session_state_listening;
        static const ydk::Enum::YLeaf lisp_session_state_down;
        static const ydk::Enum::YLeaf lisp_session_state_up;

};


}
}

#endif /* _CISCO_IOS_XE_LISP_OPER_ */

