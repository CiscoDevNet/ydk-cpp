#ifndef _CISCO_IOS_XE_TRUSTSEC_OPER_
#define _CISCO_IOS_XE_TRUSTSEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_trustsec_oper {

class TrustsecState : public Entity
{
    public:
        TrustsecState();
        ~TrustsecState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class CtsRolebasedSgtmaps; //type: TrustsecState::CtsRolebasedSgtmaps
        class CtsRolebasedPolicies; //type: TrustsecState::CtsRolebasedPolicies
        class CtsSxpConnections; //type: TrustsecState::CtsSxpConnections

        std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedPolicies> cts_rolebased_policies_;
        std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedSgtmaps> cts_rolebased_sgtmaps_;
        std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsSxpConnections> cts_sxp_connections_;
        
}; // TrustsecState


class TrustsecState::CtsRolebasedSgtmaps : public Entity
{
    public:
        CtsRolebasedSgtmaps();
        ~CtsRolebasedSgtmaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CtsRolebasedSgtmap; //type: TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap

        std::vector<std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap> > cts_rolebased_sgtmap_;
        
}; // TrustsecState::CtsRolebasedSgtmaps


class TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap : public Entity
{
    public:
        CtsRolebasedSgtmap();
        ~CtsRolebasedSgtmap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf vrf_name; //type: string
        YLeaf sgt; //type: int32
        YLeaf source; //type: CtsOdmBindingSourceEnum

}; // TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap


class TrustsecState::CtsRolebasedPolicies : public Entity
{
    public:
        CtsRolebasedPolicies();
        ~CtsRolebasedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CtsRolebasedPolicy; //type: TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy

        std::vector<std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy> > cts_rolebased_policy_;
        
}; // TrustsecState::CtsRolebasedPolicies


class TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy : public Entity
{
    public:
        CtsRolebasedPolicy();
        ~CtsRolebasedPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_sgt; //type: int32
        YLeaf dst_sgt; //type: int32
        YLeaf sgacl_name; //type: string
        YLeaf num_of_sgacl; //type: uint32
        YLeaf monitor_mode; //type: boolean
        YLeaf policy_life_time; //type: uint64
        YLeaf last_updated_time; //type: string
        YLeaf total_deny_count; //type: uint64
        YLeaf total_permit_count; //type: uint64
        YLeaf software_deny_count; //type: uint64
        YLeaf software_permit_count; //type: uint64
        YLeaf hardware_deny_count; //type: uint64
        YLeaf hardware_permit_count; //type: uint64
        YLeaf software_monitor_count; //type: uint64
        YLeaf hardware_monitor_count; //type: uint64

}; // TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy


class TrustsecState::CtsSxpConnections : public Entity
{
    public:
        CtsSxpConnections();
        ~CtsSxpConnections();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CtsSxpConnection; //type: TrustsecState::CtsSxpConnections::CtsSxpConnection

        std::vector<std::shared_ptr<Cisco_IOS_XE_trustsec_oper::TrustsecState::CtsSxpConnections::CtsSxpConnection> > cts_sxp_connection_;
        
}; // TrustsecState::CtsSxpConnections


class TrustsecState::CtsSxpConnections::CtsSxpConnection : public Entity
{
    public:
        CtsSxpConnection();
        ~CtsSxpConnection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_ip; //type: string
        YLeaf vrf_name; //type: string
        YLeaf source_ip; //type: string
        YLeaf speaker_state; //type: SxpConStateEnum
        YLeaf speaker_duration; //type: uint64
        YLeaf listener_state; //type: SxpConStateEnum
        YLeaf listener_duration; //type: uint64
        YLeaf local_mode; //type: SxpConModeEnum

}; // TrustsecState::CtsSxpConnections::CtsSxpConnection

class CtsOdmBindingSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf from_vlan;
        static const Enum::YLeaf from_cli;
        static const Enum::YLeaf from_l3if;
        static const Enum::YLeaf from_cfp;
        static const Enum::YLeaf from_ip_arp;
        static const Enum::YLeaf from_local;
        static const Enum::YLeaf from_sgt_caching;
        static const Enum::YLeaf from_cli_hi;

};

class SxpConModeEnum : public Enum
{
    public:
        static const Enum::YLeaf con_mode_invalid;
        static const Enum::YLeaf con_mode_speaker;
        static const Enum::YLeaf con_mode_listener;
        static const Enum::YLeaf con_mode_both;

};

class SxpConStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_off;
        static const Enum::YLeaf state_pending_on;
        static const Enum::YLeaf state_on;
        static const Enum::YLeaf state_delete_hold_down;
        static const Enum::YLeaf state_not_applicable;

};


}
}

#endif /* _CISCO_IOS_XE_TRUSTSEC_OPER_ */

