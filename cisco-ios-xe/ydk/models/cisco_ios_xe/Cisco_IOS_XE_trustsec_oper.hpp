#ifndef _CISCO_IOS_XE_TRUSTSEC_OPER_
#define _CISCO_IOS_XE_TRUSTSEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_trustsec_oper {

class TrustsecState : public ydk::Entity
{
    public:
        TrustsecState();
        ~TrustsecState();

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

        class CtsRolebasedSgtmaps; //type: TrustsecState::CtsRolebasedSgtmaps
        class CtsRolebasedPolicies; //type: TrustsecState::CtsRolebasedPolicies
        class CtsSxpConnections; //type: TrustsecState::CtsSxpConnections

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedPolicies> cts_rolebased_policies;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedSgtmaps> cts_rolebased_sgtmaps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsSxpConnections> cts_sxp_connections;
        
}; // TrustsecState


class TrustsecState::CtsRolebasedPolicies : public ydk::Entity
{
    public:
        CtsRolebasedPolicies();
        ~CtsRolebasedPolicies();

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

        class CtsRolebasedPolicy; //type: TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy> > cts_rolebased_policy;
        
}; // TrustsecState::CtsRolebasedPolicies


class TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy : public ydk::Entity
{
    public:
        CtsRolebasedPolicy();
        ~CtsRolebasedPolicy();

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

        ydk::YLeaf src_sgt; //type: int32
        ydk::YLeaf dst_sgt; //type: int32
        ydk::YLeaf sgacl_name; //type: string
        ydk::YLeaf num_of_sgacl; //type: uint32
        ydk::YLeaf monitor_mode; //type: boolean
        ydk::YLeaf policy_life_time; //type: uint64
        ydk::YLeaf last_updated_time; //type: string
        ydk::YLeaf total_deny_count; //type: uint64
        ydk::YLeaf total_permit_count; //type: uint64
        ydk::YLeaf software_deny_count; //type: uint64
        ydk::YLeaf software_permit_count; //type: uint64
        ydk::YLeaf hardware_deny_count; //type: uint64
        ydk::YLeaf hardware_permit_count; //type: uint64
        ydk::YLeaf software_monitor_count; //type: uint64
        ydk::YLeaf hardware_monitor_count; //type: uint64

}; // TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy


class TrustsecState::CtsRolebasedSgtmaps : public ydk::Entity
{
    public:
        CtsRolebasedSgtmaps();
        ~CtsRolebasedSgtmaps();

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

        class CtsRolebasedSgtmap; //type: TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap> > cts_rolebased_sgtmap;
        
}; // TrustsecState::CtsRolebasedSgtmaps


class TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap : public ydk::Entity
{
    public:
        CtsRolebasedSgtmap();
        ~CtsRolebasedSgtmap();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf sgt; //type: int32
        ydk::YLeaf source; //type: CtsOdmBindingSource

}; // TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap


class TrustsecState::CtsSxpConnections : public ydk::Entity
{
    public:
        CtsSxpConnections();
        ~CtsSxpConnections();

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

        class CtsSxpConnection; //type: TrustsecState::CtsSxpConnections::CtsSxpConnection

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsSxpConnections::CtsSxpConnection> > cts_sxp_connection;
        
}; // TrustsecState::CtsSxpConnections


class TrustsecState::CtsSxpConnections::CtsSxpConnection : public ydk::Entity
{
    public:
        CtsSxpConnection();
        ~CtsSxpConnection();

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

        ydk::YLeaf peer_ip; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf speaker_state; //type: SxpConState
        ydk::YLeaf speaker_duration; //type: uint64
        ydk::YLeaf listener_state; //type: SxpConState
        ydk::YLeaf listener_duration; //type: uint64
        ydk::YLeaf local_mode; //type: SxpConMode

}; // TrustsecState::CtsSxpConnections::CtsSxpConnection

class SxpConState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_off;
        static const ydk::Enum::YLeaf state_pending_on;
        static const ydk::Enum::YLeaf state_on;
        static const ydk::Enum::YLeaf state_delete_hold_down;
        static const ydk::Enum::YLeaf state_not_applicable;

};

class CtsOdmBindingSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf from_vlan;
        static const ydk::Enum::YLeaf from_cli;
        static const ydk::Enum::YLeaf from_l3if;
        static const ydk::Enum::YLeaf from_cfp;
        static const ydk::Enum::YLeaf from_ip_arp;
        static const ydk::Enum::YLeaf from_local;
        static const ydk::Enum::YLeaf from_sgt_caching;
        static const ydk::Enum::YLeaf from_cli_hi;

};

class SxpConMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf con_mode_invalid;
        static const ydk::Enum::YLeaf con_mode_speaker;
        static const ydk::Enum::YLeaf con_mode_listener;
        static const ydk::Enum::YLeaf con_mode_both;

};


}
}

#endif /* _CISCO_IOS_XE_TRUSTSEC_OPER_ */

