#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_2_
#define _CISCO_IOS_XR_MPLS_TE_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_cfg_0.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: string
        YLeaf destination_type; //type: OtnDestinationEnum
        YLeaf interface_if_index; //type: int32

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching : public Entity
{
    public:
        ProtectionSwitching();
        ~ProtectionSwitching();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lockout; //type: OtnProtectionSwitchLockoutEnum

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_message; //type: empty
        YLeaf homepath_state_message; //type: empty
        YLeaf signalling_state_message; //type: empty
        YLeaf path_change_message; //type: empty
        YLeaf static_cross_connect_message; //type: empty
        YLeaf tunnel_state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathOption; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption> > path_option;
        
}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf protected_by_preference_level; //type: uint32
        YLeaf restore_by_preference_level; //type: uint32
        YLeaf xro_type; //type: empty
        YLeaf xro_attribute_set_name; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni : public Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ingress_controller_name; //type: string
        YLeaf egress_controller_if_index; //type: int32
        YLeaf ingress_type; //type: OtnStaticUniEnum
        YLeaf egress_type; //type: OtnStaticUniEnum

}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni


class MplsTe::Lcac : public Entity
{
    public:
        Lcac();
        ~Lcac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth_hold_timer; //type: uint32
        YLeaf delay_preempt_bundle_capacity_timer; //type: uint32
        YLeaf periodic_flooding_timer; //type: uint32
        class Bfd; //type: MplsTe::Lcac::Bfd
        class FloodingThreshold; //type: MplsTe::Lcac::FloodingThreshold

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::FloodingThreshold> flooding_threshold;
        
}; // MplsTe::Lcac


class MplsTe::Lcac::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // MplsTe::Lcac::Bfd


class MplsTe::Lcac::FloodingThreshold : public Entity
{
    public:
        FloodingThreshold();
        ~FloodingThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf up_stream; //type: uint32
        YLeaf down_stream; //type: uint32

}; // MplsTe::Lcac::FloodingThreshold


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_2_ */

