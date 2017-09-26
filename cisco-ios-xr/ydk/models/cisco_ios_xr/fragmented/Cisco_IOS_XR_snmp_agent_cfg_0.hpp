#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_0_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

class Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        ydk::YLeaf sensor_mib_cache; //type: empty
        class InterfaceMib; //type: Mib::InterfaceMib
        class MplsTeMib; //type: Mib::MplsTeMib
        class MplsP2MpMib; //type: Mib::MplsP2MpMib
        class MplsTeExtStdMib; //type: Mib::MplsTeExtStdMib
        class MplsTeExtMib; //type: Mib::MplsTeExtMib
        class MplsFrrMib; //type: Mib::MplsFrrMib
        class EntityMib; //type: Mib::EntityMib
        class CbQosmib; //type: Mib::CbQosmib
        class Subscriber; //type: Mib::Subscriber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib> cb_qosmib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::EntityMib> entity_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib> interface_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsFrrMib> mpls_frr_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsP2MpMib> mpls_p2mp_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtMib> mpls_te_ext_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtStdMib> mpls_te_ext_std_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeMib> mpls_te_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber> subscriber;
        
}; // Mib


class Mib::CbQosmib : public ydk::Entity
{
    public:
        CbQosmib();
        ~CbQosmib();

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

        ydk::YLeaf member_interface_stats; //type: empty
        ydk::YLeaf persist; //type: empty
        class Cache; //type: Mib::CbQosmib::Cache

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib::Cache> cache;
        
}; // Mib::CbQosmib


class Mib::CbQosmib::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf refresh_time; //type: uint32
        ydk::YLeaf service_policy_count; //type: uint32

}; // Mib::CbQosmib::Cache


class Mib::EntityMib : public ydk::Entity
{
    public:
        EntityMib();
        ~EntityMib();

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

        ydk::YLeaf entity_index_persistence; //type: empty

}; // Mib::EntityMib


class Mib::InterfaceMib : public ydk::Entity
{
    public:
        InterfaceMib();
        ~InterfaceMib();

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

        ydk::YLeaf internal_cache; //type: uint32
        ydk::YLeaf interface_alias_long; //type: empty
        ydk::YLeaf ip_subscriber; //type: empty
        ydk::YLeaf interface_index_persistence; //type: empty
        ydk::YLeaf statistics_cache; //type: empty
        class Interfaces; //type: Mib::InterfaceMib::Interfaces
        class Notification; //type: Mib::InterfaceMib::Notification
        class Subsets; //type: Mib::InterfaceMib::Subsets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets> subsets;
        
}; // Mib::InterfaceMib


class Mib::InterfaceMib::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Mib::InterfaceMib::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces::Interface> > interface;
        
}; // Mib::InterfaceMib::Interfaces


class Mib::InterfaceMib::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_up_down; //type: boolean
        ydk::YLeaf index_persistence; //type: boolean

}; // Mib::InterfaceMib::Interfaces::Interface


class Mib::InterfaceMib::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

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

        ydk::YLeaf link_ietf; //type: empty

}; // Mib::InterfaceMib::Notification


class Mib::InterfaceMib::Subsets : public ydk::Entity
{
    public:
        Subsets();
        ~Subsets();

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

        class Subset; //type: Mib::InterfaceMib::Subsets::Subset

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset> > subset;
        
}; // Mib::InterfaceMib::Subsets


class Mib::InterfaceMib::Subsets::Subset : public ydk::Entity
{
    public:
        Subset();
        ~Subset();

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

        ydk::YLeaf subset_id; //type: uint32
        class LinkUpDown; //type: Mib::InterfaceMib::Subsets::Subset::LinkUpDown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset::LinkUpDown> link_up_down;
        
}; // Mib::InterfaceMib::Subsets::Subset


class Mib::InterfaceMib::Subsets::Subset::LinkUpDown : public ydk::Entity
{
    public:
        LinkUpDown();
        ~LinkUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf regular_expression; //type: string

}; // Mib::InterfaceMib::Subsets::Subset::LinkUpDown


class Mib::MplsFrrMib : public ydk::Entity
{
    public:
        MplsFrrMib();
        ~MplsFrrMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsFrrMib


class Mib::MplsP2MpMib : public ydk::Entity
{
    public:
        MplsP2MpMib();
        ~MplsP2MpMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsP2MpMib


class Mib::MplsTeExtMib : public ydk::Entity
{
    public:
        MplsTeExtMib();
        ~MplsTeExtMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtMib


class Mib::MplsTeExtStdMib : public ydk::Entity
{
    public:
        MplsTeExtStdMib();
        ~MplsTeExtStdMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtStdMib


class Mib::MplsTeMib : public ydk::Entity
{
    public:
        MplsTeMib();
        ~MplsTeMib();

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

        ydk::YLeaf cache_garbage_collect_timer; //type: uint32
        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeMib


class Mib::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

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

        class Threshold; //type: Mib::Subscriber::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold> threshold;
        
}; // Mib::Subscriber


class Mib::Subscriber::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Delta; //type: Mib::Subscriber::Threshold::Delta
        class AccessInterfaceSub; //type: Mib::Subscriber::Threshold::AccessInterfaceSub
        class Falling; //type: Mib::Subscriber::Threshold::Falling
        class Rising; //type: Mib::Subscriber::Threshold::Rising

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub> access_interface_sub;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta> delta;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling> falling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising> rising;
        
}; // Mib::Subscriber::Threshold


class Mib::Subscriber::Threshold::AccessInterfaceSub : public ydk::Entity
{
    public:
        AccessInterfaceSub();
        ~AccessInterfaceSub();

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

        class Subsets; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets> subsets;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets : public ydk::Entity
{
    public:
        Subsets();
        ~Subsets();

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

        class Subset; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset> > subset;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset : public ydk::Entity
{
    public:
        Subset();
        ~Subset();

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

        ydk::YLeaf subset_id; //type: uint32
        class RegularExpression; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression> regular_expression;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression : public ydk::Entity
{
    public:
        RegularExpression();
        ~RegularExpression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Notification; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification> notification;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RisingFalling; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling> rising_falling;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling : public ydk::Entity
{
    public:
        RisingFalling();
        ~RisingFalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: string

}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling


class Mib::Subscriber::Threshold::Delta : public ydk::Entity
{
    public:
        Delta();
        ~Delta();

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

        class Evaluation; //type: Mib::Subscriber::Threshold::Delta::Evaluation
        class Percent; //type: Mib::Subscriber::Threshold::Delta::Percent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation> evaluation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent> percent;
        
}; // Mib::Subscriber::Threshold::Delta


class Mib::Subscriber::Threshold::Delta::Evaluation : public ydk::Entity
{
    public:
        Evaluation();
        ~Evaluation();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Delta::Evaluation::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation


class Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface> > access_interface;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces


class Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Delta::Evaluation::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node> > node;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation::Nodes


class Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node


class Mib::Subscriber::Threshold::Delta::Percent : public ydk::Entity
{
    public:
        Percent();
        ~Percent();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Delta::Percent::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Delta::Percent


class Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface> > access_interface;
        
}; // Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces


class Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Delta::Percent::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node> > node;
        
}; // Mib::Subscriber::Threshold::Delta::Percent::Nodes


class Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node


class Mib::Subscriber::Threshold::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Falling::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Falling::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Falling


class Mib::Subscriber::Threshold::Falling::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface> > access_interface;
        
}; // Mib::Subscriber::Threshold::Falling::AccessInterfaces


class Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Falling::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Mib::Subscriber::Threshold::Falling::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::Nodes::Node> > node;
        
}; // Mib::Subscriber::Threshold::Falling::Nodes


class Mib::Subscriber::Threshold::Falling::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Falling::Nodes::Node


class Mib::Subscriber::Threshold::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Rising::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Rising::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Rising


class Mib::Subscriber::Threshold::Rising::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface> > access_interface;
        
}; // Mib::Subscriber::Threshold::Rising::AccessInterfaces


class Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Rising::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Mib::Subscriber::Threshold::Rising::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::Nodes::Node> > node;
        
}; // Mib::Subscriber::Threshold::Rising::Nodes


class Mib::Subscriber::Threshold::Rising::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Rising::Nodes::Node

class Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        ydk::YLeaf inform_retries; //type: uint32
        ydk::YLeaf trap_port; //type: uint32
        ydk::YLeaf oid_poll_stats; //type: empty
        ydk::YLeaf trap_source; //type: string
        ydk::YLeaf vrf_authentication_trap_disable; //type: empty
        ydk::YLeaf inform_timeout; //type: uint32
        ydk::YLeaf trap_source_ipv6; //type: string
        ydk::YLeaf packet_size; //type: uint32
        ydk::YLeaf throttle_time; //type: uint32
        ydk::YLeaf trap_source_ipv4; //type: string
        ydk::YLeaf inform_pending; //type: uint32
        class EncryptedCommunityMaps; //type: Snmp::EncryptedCommunityMaps
        class Views; //type: Snmp::Views
        class Logging; //type: Snmp::Logging
        class Administration; //type: Snmp::Administration
        class Agent; //type: Snmp::Agent
        class Trap; //type: Snmp::Trap
        class Ipv6; //type: Snmp::Ipv6
        class Ipv4; //type: Snmp::Ipv4
        class System; //type: Snmp::System
        class Target; //type: Snmp::Target
        class Notification; //type: Snmp::Notification
        class Correlator; //type: Snmp::Correlator
        class BulkStats; //type: Snmp::BulkStats
        class DefaultCommunityMaps; //type: Snmp::DefaultCommunityMaps
        class OverloadControl; //type: Snmp::OverloadControl
        class Timeouts; //type: Snmp::Timeouts
        class Users; //type: Snmp::Users
        class Vrfs; //type: Snmp::Vrfs
        class Groups; //type: Snmp::Groups
        class TrapHosts; //type: Snmp::TrapHosts
        class Contexts; //type: Snmp::Contexts
        class ContextMappings; //type: Snmp::ContextMappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration> administration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent> agent;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats> bulk_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings> context_mappings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts> contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator> correlator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps> default_community_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps> encrypted_community_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::OverloadControl> overload_control; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::System> system;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target> target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Timeouts> timeouts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Trap> trap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts> trap_hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users> users;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views> views;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs> vrfs;
        
}; // Snmp


class Snmp::Administration : public ydk::Entity
{
    public:
        Administration();
        ~Administration();

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

        class DefaultCommunities; //type: Snmp::Administration::DefaultCommunities
        class EncryptedCommunities; //type: Snmp::Administration::EncryptedCommunities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities> default_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities> encrypted_communities;
        
}; // Snmp::Administration


class Snmp::Administration::DefaultCommunities : public ydk::Entity
{
    public:
        DefaultCommunities();
        ~DefaultCommunities();

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

        class DefaultCommunity; //type: Snmp::Administration::DefaultCommunities::DefaultCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities::DefaultCommunity> > default_community;
        
}; // Snmp::Administration::DefaultCommunities


class Snmp::Administration::DefaultCommunities::DefaultCommunity : public ydk::Entity
{
    public:
        DefaultCommunity();
        ~DefaultCommunity();

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

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf priviledge; //type: SnmpAccessLevel
        ydk::YLeaf view_name; //type: string
        ydk::YLeaf v4acl_type; //type: Snmpacl
        ydk::YLeaf v4_access_list; //type: string
        ydk::YLeaf v6acl_type; //type: Snmpacl
        ydk::YLeaf v6_access_list; //type: string
        ydk::YLeaf owner; //type: SnmpOwnerAccess

}; // Snmp::Administration::DefaultCommunities::DefaultCommunity


class Snmp::Administration::EncryptedCommunities : public ydk::Entity
{
    public:
        EncryptedCommunities();
        ~EncryptedCommunities();

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

        class EncryptedCommunity; //type: Snmp::Administration::EncryptedCommunities::EncryptedCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities::EncryptedCommunity> > encrypted_community;
        
}; // Snmp::Administration::EncryptedCommunities


class Snmp::Administration::EncryptedCommunities::EncryptedCommunity : public ydk::Entity
{
    public:
        EncryptedCommunity();
        ~EncryptedCommunity();

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

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf priviledge; //type: SnmpAccessLevel
        ydk::YLeaf view_name; //type: string
        ydk::YLeaf v4acl_type; //type: Snmpacl
        ydk::YLeaf v4_access_list; //type: string
        ydk::YLeaf v6acl_type; //type: Snmpacl
        ydk::YLeaf v6_access_list; //type: string
        ydk::YLeaf owner; //type: SnmpOwnerAccess

}; // Snmp::Administration::EncryptedCommunities::EncryptedCommunity


class Snmp::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

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

        class EngineId; //type: Snmp::Agent::EngineId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId> engine_id;
        
}; // Snmp::Agent


class Snmp::Agent::EngineId : public ydk::Entity
{
    public:
        EngineId();
        ~EngineId();

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

        ydk::YLeaf local; //type: string
        class Remotes; //type: Snmp::Agent::EngineId::Remotes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes> remotes;
        
}; // Snmp::Agent::EngineId


class Snmp::Agent::EngineId::Remotes : public ydk::Entity
{
    public:
        Remotes();
        ~Remotes();

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

        class Remote; //type: Snmp::Agent::EngineId::Remotes::Remote

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes::Remote> > remote;
        
}; // Snmp::Agent::EngineId::Remotes


class Snmp::Agent::EngineId::Remotes::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

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

        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf remote_engine_id; //type: string
        ydk::YLeaf port; //type: uint16

}; // Snmp::Agent::EngineId::Remotes::Remote


class Snmp::BulkStats : public ydk::Entity
{
    public:
        BulkStats();
        ~BulkStats();

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

        ydk::YLeaf memory; //type: uint32
        class Schemas; //type: Snmp::BulkStats::Schemas
        class Objects; //type: Snmp::BulkStats::Objects
        class Transfers; //type: Snmp::BulkStats::Transfers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects> objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas> schemas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers> transfers;
        
}; // Snmp::BulkStats


class Snmp::BulkStats::Objects : public ydk::Entity
{
    public:
        Objects();
        ~Objects();

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

        class Object; //type: Snmp::BulkStats::Objects::Object

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object> > object;
        
}; // Snmp::BulkStats::Objects


class Snmp::BulkStats::Objects::Object : public ydk::Entity
{
    public:
        Object();
        ~Object();

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

        ydk::YLeaf object_list_name; //type: string
        ydk::YLeaf type; //type: empty
        class Objects_; //type: Snmp::BulkStats::Objects::Object::Objects_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_> objects;
        
}; // Snmp::BulkStats::Objects::Object


class Snmp::BulkStats::Objects::Object::Objects_ : public ydk::Entity
{
    public:
        Objects_();
        ~Objects_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Object_; //type: Snmp::BulkStats::Objects::Object::Objects_::Object_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_::Object_> > object;
        
}; // Snmp::BulkStats::Objects::Object::Objects_


class Snmp::BulkStats::Objects::Object::Objects_::Object_ : public ydk::Entity
{
    public:
        Object_();
        ~Object_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string

}; // Snmp::BulkStats::Objects::Object::Objects_::Object_


class Snmp::BulkStats::Schemas : public ydk::Entity
{
    public:
        Schemas();
        ~Schemas();

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

        class Schema; //type: Snmp::BulkStats::Schemas::Schema

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema> > schema;
        
}; // Snmp::BulkStats::Schemas


class Snmp::BulkStats::Schemas::Schema : public ydk::Entity
{
    public:
        Schema();
        ~Schema();

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

        ydk::YLeaf schema_name; //type: string
        ydk::YLeaf type; //type: empty
        ydk::YLeaf schema_object_list; //type: string
        ydk::YLeaf poll_interval; //type: uint32
        class Instance; //type: Snmp::BulkStats::Schemas::Schema::Instance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema::Instance> instance; // presence node
        
}; // Snmp::BulkStats::Schemas::Schema


class Snmp::BulkStats::Schemas::Schema::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SnmpBulkstatSchema
        ydk::YLeaf instance; //type: string
        ydk::YLeaf start; //type: string
        ydk::YLeaf end; //type: string
        ydk::YLeaf max; //type: int32
        ydk::YLeaf sub_interface; //type: boolean

}; // Snmp::BulkStats::Schemas::Schema::Instance


class Snmp::BulkStats::Transfers : public ydk::Entity
{
    public:
        Transfers();
        ~Transfers();

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

        class Transfer; //type: Snmp::BulkStats::Transfers::Transfer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer> > transfer;
        
}; // Snmp::BulkStats::Transfers


class Snmp::BulkStats::Transfers::Transfer : public ydk::Entity
{
    public:
        Transfer();
        ~Transfer();

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

        ydk::YLeaf transfer_name; //type: string
        ydk::YLeaf secondary; //type: string
        ydk::YLeaf type; //type: empty
        ydk::YLeaf buffer_size; //type: uint32
        ydk::YLeaf retain; //type: uint32
        ydk::YLeaf format; //type: SnmpBulkstatFileFormat
        ydk::YLeaf retry; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf primary; //type: string
        ydk::YLeaf interval; //type: int32
        class TransferSchemas; //type: Snmp::BulkStats::Transfers::Transfer::TransferSchemas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas> transfer_schemas;
        
}; // Snmp::BulkStats::Transfers::Transfer


class Snmp::BulkStats::Transfers::Transfer::TransferSchemas : public ydk::Entity
{
    public:
        TransferSchemas();
        ~TransferSchemas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TransferSchema; //type: Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema> > transfer_schema;
        
}; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas


class Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema : public ydk::Entity
{
    public:
        TransferSchema();
        ~TransferSchema();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schema_name; //type: string

}; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema


class Snmp::ContextMappings : public ydk::Entity
{
    public:
        ContextMappings();
        ~ContextMappings();

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

        class ContextMapping; //type: Snmp::ContextMappings::ContextMapping

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings::ContextMapping> > context_mapping;
        
}; // Snmp::ContextMappings


class Snmp::ContextMappings::ContextMapping : public ydk::Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

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

        ydk::YLeaf context_mapping_name; //type: string
        ydk::YLeaf context; //type: SnmpContext
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Snmp::ContextMappings::ContextMapping


class Snmp::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

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

        class Context; //type: Snmp::Contexts::Context

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts::Context> > context;
        
}; // Snmp::Contexts


class Snmp::Contexts::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

        ydk::YLeaf context_name; //type: string

}; // Snmp::Contexts::Context


class Snmp::Correlator : public ydk::Entity
{
    public:
        Correlator();
        ~Correlator();

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

        ydk::YLeaf buffer_size; //type: uint32
        class Rules; //type: Snmp::Correlator::Rules
        class RuleSets; //type: Snmp::Correlator::RuleSets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets> rule_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules> rules;
        
}; // Snmp::Correlator


class Snmp::Correlator::RuleSets : public ydk::Entity
{
    public:
        RuleSets();
        ~RuleSets();

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

        class RuleSet; //type: Snmp::Correlator::RuleSets::RuleSet

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet> > rule_set;
        
}; // Snmp::Correlator::RuleSets


class Snmp::Correlator::RuleSets::RuleSet : public ydk::Entity
{
    public:
        RuleSet();
        ~RuleSet();

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

        ydk::YLeaf name; //type: string
        class Rulenames; //type: Snmp::Correlator::RuleSets::RuleSet::Rulenames
        class AppliedTo; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames> rulenames;
        
}; // Snmp::Correlator::RuleSets::RuleSet


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo : public ydk::Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Hosts; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts> hosts;
        
}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host> > host;
        
}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port; //type: uint16

}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host


class Snmp::Correlator::RuleSets::RuleSet::Rulenames : public ydk::Entity
{
    public:
        Rulenames();
        ~Rulenames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rulename; //type: Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename> > rulename;
        
}; // Snmp::Correlator::RuleSets::RuleSet::Rulenames


class Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename : public ydk::Entity
{
    public:
        Rulename();
        ~Rulename();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rulename; //type: string

}; // Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename


class Snmp::Correlator::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

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

        class Rule; //type: Snmp::Correlator::Rules::Rule

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule> > rule;
        
}; // Snmp::Correlator::Rules


class Snmp::Correlator::Rules::Rule : public ydk::Entity
{
    public:
        Rule();
        ~Rule();

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

        ydk::YLeaf name; //type: string
        class NonStateful; //type: Snmp::Correlator::Rules::Rule::NonStateful
        class AppliedTo; //type: Snmp::Correlator::Rules::Rule::AppliedTo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo> applied_to;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful> non_stateful; // presence node
        
}; // Snmp::Correlator::Rules::Rule


class Snmp::Correlator::Rules::Rule::AppliedTo : public ydk::Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Hosts; //type: Snmp::Correlator::Rules::Rule::AppliedTo::Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts> hosts;
        
}; // Snmp::Correlator::Rules::Rule::AppliedTo


class Snmp::Correlator::Rules::Rule::AppliedTo::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host> > host;
        
}; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts


class Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port; //type: uint16

}; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host


class Snmp::Correlator::Rules::Rule::NonStateful : public ydk::Entity
{
    public:
        NonStateful();
        ~NonStateful();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        class RootCauses; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses
        class NonRootCauses; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses> root_causes;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses : public ydk::Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonRootCause; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause> > non_root_cause;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause : public ydk::Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf created; //type: empty
        class VarBinds; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds> var_binds;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds : public ydk::Entity
{
    public:
        VarBinds();
        ~VarBinds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VarBind; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind> > var_bind;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind : public ydk::Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        class Match; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match> match;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf index_; //type: string

}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses : public ydk::Entity
{
    public:
        RootCauses();
        ~RootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RootCause; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause> > root_cause;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause : public ydk::Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf created; //type: empty
        class VarBinds; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds> var_binds;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds : public ydk::Entity
{
    public:
        VarBinds();
        ~VarBinds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VarBind; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind> > var_bind;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind : public ydk::Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        class Match; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match> match;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: string
        ydk::YLeaf index_; //type: string

}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match


class Snmp::DefaultCommunityMaps : public ydk::Entity
{
    public:
        DefaultCommunityMaps();
        ~DefaultCommunityMaps();

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

        class DefaultCommunityMap; //type: Snmp::DefaultCommunityMaps::DefaultCommunityMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps::DefaultCommunityMap> > default_community_map;
        
}; // Snmp::DefaultCommunityMaps


class Snmp::DefaultCommunityMaps::DefaultCommunityMap : public ydk::Entity
{
    public:
        DefaultCommunityMap();
        ~DefaultCommunityMap();

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

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf context; //type: string
        ydk::YLeaf security; //type: string
        ydk::YLeaf target_list; //type: string

}; // Snmp::DefaultCommunityMaps::DefaultCommunityMap


class Snmp::EncryptedCommunityMaps : public ydk::Entity
{
    public:
        EncryptedCommunityMaps();
        ~EncryptedCommunityMaps();

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

        class EncryptedCommunityMap; //type: Snmp::EncryptedCommunityMaps::EncryptedCommunityMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps::EncryptedCommunityMap> > encrypted_community_map;
        
}; // Snmp::EncryptedCommunityMaps


class Snmp::EncryptedCommunityMaps::EncryptedCommunityMap : public ydk::Entity
{
    public:
        EncryptedCommunityMap();
        ~EncryptedCommunityMap();

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

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf context; //type: string
        ydk::YLeaf security; //type: string
        ydk::YLeaf target_list; //type: string

}; // Snmp::EncryptedCommunityMaps::EncryptedCommunityMap


class Snmp::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Snmp::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups::Group> > group;
        
}; // Snmp::Groups


class Snmp::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf snmp_version; //type: GroupSnmpVersion
        ydk::YLeaf security_model; //type: SnmpSecurityModel
        ydk::YLeaf notify_view; //type: string
        ydk::YLeaf read_view; //type: string
        ydk::YLeaf write_view; //type: string
        ydk::YLeaf v4acl_type; //type: Snmpacl
        ydk::YLeaf v4_access_list; //type: string
        ydk::YLeaf v6acl_type; //type: Snmpacl
        ydk::YLeaf v6_access_list; //type: string
        ydk::YLeaf context_name; //type: string

}; // Snmp::Groups::Group


class Snmp::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Tos; //type: Snmp::Ipv4::Tos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4::Tos> tos;
        
}; // Snmp::Ipv4


class Snmp::Ipv4::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

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

        ydk::YLeaf type; //type: SnmpTos
        ydk::YLeaf precedence; //type: one of enumeration, uint32
        ydk::YLeaf dscp; //type: one of enumeration, uint32

}; // Snmp::Ipv4::Tos


class Snmp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class Tos; //type: Snmp::Ipv6::Tos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6::Tos> tos;
        
}; // Snmp::Ipv6


class Snmp::Ipv6::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

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

        ydk::YLeaf type; //type: SnmpTos
        ydk::YLeaf precedence; //type: one of enumeration, uint32
        ydk::YLeaf dscp; //type: one of enumeration, uint32

}; // Snmp::Ipv6::Tos


class Snmp::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        class Threshold; //type: Snmp::Logging::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging::Threshold> threshold;
        
}; // Snmp::Logging


class Snmp::Logging::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        ydk::YLeaf oid_processing; //type: uint32
        ydk::YLeaf pdu_processing; //type: uint32

}; // Snmp::Logging::Threshold


class Snmp::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

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

        class Snmp_; //type: Snmp::Notification::Snmp_
        class Optical; //type: Snmp::Notification::Optical
        class Ntp; //type: Snmp::Notification::Ntp
        class Bridge; //type: Snmp::Notification::Bridge
        class AddresspoolMib; //type: Snmp::Notification::AddresspoolMib
        class CiscoIOSXRFreqsyncCfgFrequencySynchronization; //type: Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization
        class Rsvp; //type: Snmp::Notification::Rsvp
        class OpticalOts; //type: Snmp::Notification::OpticalOts
        class Vpls; //type: Snmp::Notification::Vpls
        class L2Vpn; //type: Snmp::Notification::L2Vpn
        class Sensor; //type: Snmp::Notification::Sensor
        class Hsrp; //type: Snmp::Notification::Hsrp
        class ConfigCopy; //type: Snmp::Notification::ConfigCopy
        class EntityState; //type: Snmp::Notification::EntityState
        class MplsL3Vpn; //type: Snmp::Notification::MplsL3Vpn
        class FabricCrs; //type: Snmp::Notification::FabricCrs
        class Cfm; //type: Snmp::Notification::Cfm
        class Diametermib; //type: Snmp::Notification::Diametermib
        class SelectiveVrfDownload; //type: Snmp::Notification::SelectiveVrfDownload
        class Ospfv3; //type: Snmp::Notification::Ospfv3
        class Isis; //type: Snmp::Notification::Isis
        class Oam; //type: Snmp::Notification::Oam
        class MplsTeP2Mp; //type: Snmp::Notification::MplsTeP2Mp
        class MplsTe; //type: Snmp::Notification::MplsTe
        class MplsFrr; //type: Snmp::Notification::MplsFrr
        class Ospf; //type: Snmp::Notification::Ospf
        class Otn; //type: Snmp::Notification::Otn
        class Syslog; //type: Snmp::Notification::Syslog
        class Vrrp; //type: Snmp::Notification::Vrrp
        class System; //type: Snmp::Notification::System
        class Entity_; //type: Snmp::Notification::Entity_
        class ConfigMan; //type: Snmp::Notification::ConfigMan
        class CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization; //type: Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization
        class Flash; //type: Snmp::Notification::Flash
        class Bfd; //type: Snmp::Notification::Bfd
        class L2Tun; //type: Snmp::Notification::L2Tun
        class EntityRedundancy; //type: Snmp::Notification::EntityRedundancy
        class SubscriberMib; //type: Snmp::Notification::SubscriberMib
        class MplsLdp; //type: Snmp::Notification::MplsLdp
        class Rf; //type: Snmp::Notification::Rf
        class FruControl; //type: Snmp::Notification::FruControl
        class Bgp; //type: Snmp::Notification::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::AddresspoolMib> addresspool_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bridge> bridge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Cfm> cfm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization> cisco_ios_xr_freqsync_cfg_frequency_synchronization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization> cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigCopy> config_copy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigMan> config_man;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Diametermib> diametermib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Entity_> entity_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityRedundancy> entity_redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityState> entity_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::FabricCrs> fabric_crs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Flash> flash;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::FruControl> fru_control;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Hsrp> hsrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::L2Tun> l2tun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::L2Vpn> l2vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsFrr> mpls_frr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsL3Vpn> mpls_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsLdp> mpls_ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe> mpls_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTeP2Mp> mpls_te_p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ntp> ntp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Oam> oam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Optical> optical;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::OpticalOts> optical_ots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rf> rf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::SelectiveVrfDownload> selective_vrf_download;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Sensor> sensor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Snmp_> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::SubscriberMib> subscriber_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Syslog> syslog;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::System> system;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vpls> vpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vrrp> vrrp;
        
}; // Snmp::Notification


class Snmp::Notification::AddresspoolMib : public ydk::Entity
{
    public:
        AddresspoolMib();
        ~AddresspoolMib();

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

        ydk::YLeaf high; //type: boolean
        ydk::YLeaf low; //type: boolean

}; // Snmp::Notification::AddresspoolMib


class Snmp::Notification::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Bfd


class Snmp::Notification::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class Bgp4Mib; //type: Snmp::Notification::Bgp::Bgp4Mib
        class CiscoBgp4Mib; //type: Snmp::Notification::Bgp::CiscoBgp4Mib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::Bgp4Mib> bgp4mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::CiscoBgp4Mib> cisco_bgp4mib;
        
}; // Snmp::Notification::Bgp


class Snmp::Notification::Bgp::Bgp4Mib : public ydk::Entity
{
    public:
        Bgp4Mib();
        ~Bgp4Mib();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf up_down; //type: empty

}; // Snmp::Notification::Bgp::Bgp4Mib


class Snmp::Notification::Bgp::CiscoBgp4Mib : public ydk::Entity
{
    public:
        CiscoBgp4Mib();
        ~CiscoBgp4Mib();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf up_down; //type: empty

}; // Snmp::Notification::Bgp::CiscoBgp4Mib


class Snmp::Notification::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Bridge


class Snmp::Notification::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Cfm


class Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization : public ydk::Entity
{
    public:
        CiscoIOSXRFreqsyncCfgFrequencySynchronization();
        ~CiscoIOSXRFreqsyncCfgFrequencySynchronization();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization


class Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization : public ydk::Entity
{
    public:
        CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization();
        ~CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization


class Snmp::Notification::ConfigCopy : public ydk::Entity
{
    public:
        ConfigCopy();
        ~ConfigCopy();

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

        ydk::YLeaf completion; //type: empty

}; // Snmp::Notification::ConfigCopy


class Snmp::Notification::ConfigMan : public ydk::Entity
{
    public:
        ConfigMan();
        ~ConfigMan();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::ConfigMan


class Snmp::Notification::Diametermib : public ydk::Entity
{
    public:
        Diametermib();
        ~Diametermib();

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

        ydk::YLeaf protocolerror; //type: boolean
        ydk::YLeaf permanentfail; //type: boolean
        ydk::YLeaf peerdown; //type: boolean
        ydk::YLeaf peerup; //type: boolean
        ydk::YLeaf transientfail; //type: boolean

}; // Snmp::Notification::Diametermib


class Snmp::Notification::EntityRedundancy : public ydk::Entity
{
    public:
        EntityRedundancy();
        ~EntityRedundancy();

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

        ydk::YLeaf switchover; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf status; //type: empty

}; // Snmp::Notification::EntityRedundancy


class Snmp::Notification::EntityState : public ydk::Entity
{
    public:
        EntityState();
        ~EntityState();

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

        ydk::YLeaf switchover; //type: empty
        ydk::YLeaf oper_status; //type: empty

}; // Snmp::Notification::EntityState


class Snmp::Notification::Entity_ : public ydk::Entity
{
    public:
        Entity_();
        ~Entity_();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Entity_


class Snmp::Notification::FabricCrs : public ydk::Entity
{
    public:
        FabricCrs();
        ~FabricCrs();

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

        ydk::YLeaf bundle_state; //type: empty
        ydk::YLeaf plane_state; //type: empty
        ydk::YLeaf bundle_downed_link; //type: empty

}; // Snmp::Notification::FabricCrs


class Snmp::Notification::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        ydk::YLeaf insertion; //type: empty
        ydk::YLeaf removal; //type: empty

}; // Snmp::Notification::Flash


class Snmp::Notification::FruControl : public ydk::Entity
{
    public:
        FruControl();
        ~FruControl();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::FruControl


class Snmp::Notification::Hsrp : public ydk::Entity
{
    public:
        Hsrp();
        ~Hsrp();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Hsrp


class Snmp::Notification::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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

        ydk::YLeaf database_overflow; //type: IsisMibDatabaseOverFlowBoolean
        ydk::YLeaf manual_address_drops; //type: IsisMibManualAddressDropsBoolean
        ydk::YLeaf corrupted_lsp_detected; //type: IsisMibCorruptedLspDetectedBoolean
        ydk::YLeaf attempt_to_exceed_max_sequence; //type: IsisMibAttemptToExceedMaxSequenceBoolean
        ydk::YLeaf id_length_mismatch; //type: IsisMibIdLengthMismatchBoolean
        ydk::YLeaf max_area_address_mismatch; //type: IsisMibMaxAreaAddressMismatchBoolean
        ydk::YLeaf own_lsp_purge; //type: IsisMibOwnLspPurgeBoolean
        ydk::YLeaf sequence_number_skip; //type: IsisMibSequenceNumberSkipBoolean
        ydk::YLeaf authentication_type_failure; //type: IsisMibAuthenticationTypeFailureBoolean
        ydk::YLeaf authentication_failure; //type: IsisMibAuthenticationFailureBoolean
        ydk::YLeaf version_skew; //type: IsisMibVersionSkewBoolean
        ydk::YLeaf area_mismatch; //type: IsisMibAreaMismatchBoolean
        ydk::YLeaf rejected_adjacency; //type: IsisMibRejectedAdjacencyBoolean
        ydk::YLeaf lsp_too_large_to_propagate; //type: IsisMibLspTooLargeToPropagateBoolean
        ydk::YLeaf originated_lsp_buffer_size_mismatch; //type: IsisMibOriginatedLspBufferSizeMismatchBoolean
        ydk::YLeaf protocols_supported_mismatch; //type: IsisMibProtocolsSupportedMismatchBoolean
        ydk::YLeaf adjacency_change; //type: IsisMibAdjacencyChangeBoolean
        ydk::YLeaf lsp_error_detected; //type: IsisMibLspErrorDetectedBoolean
        ydk::YLeaf all; //type: IsisMibAllBoolean

}; // Snmp::Notification::Isis


class Snmp::Notification::L2Tun : public ydk::Entity
{
    public:
        L2Tun();
        ~L2Tun();

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

        ydk::YLeaf tunnel_up; //type: boolean
        ydk::YLeaf tunnel_down; //type: boolean
        ydk::YLeaf pseudowire_status; //type: boolean
        ydk::YLeaf sessions; //type: boolean

}; // Snmp::Notification::L2Tun


class Snmp::Notification::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

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

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf vc_down; //type: empty
        ydk::YLeaf vc_up; //type: empty

}; // Snmp::Notification::L2Vpn


class Snmp::Notification::MplsFrr : public ydk::Entity
{
    public:
        MplsFrr();
        ~MplsFrr();

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

        ydk::YLeaf unprotected; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf protected_; //type: empty

}; // Snmp::Notification::MplsFrr


class Snmp::Notification::MplsL3Vpn : public ydk::Entity
{
    public:
        MplsL3Vpn();
        ~MplsL3Vpn();

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

        ydk::YLeaf max_threshold_reissue_notification_time; //type: int32
        ydk::YLeaf max_threshold_exceeded; //type: empty
        ydk::YLeaf max_threshold_cleared; //type: empty
        ydk::YLeaf mid_threshold_exceeded; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf vrf_down; //type: empty
        ydk::YLeaf vrf_up; //type: empty

}; // Snmp::Notification::MplsL3Vpn


class Snmp::Notification::MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

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

        ydk::YLeaf session_up; //type: empty
        ydk::YLeaf init_session_threshold_exceeded; //type: empty
        ydk::YLeaf session_down; //type: empty

}; // Snmp::Notification::MplsLdp


class Snmp::Notification::MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

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

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf up; //type: empty
        ydk::YLeaf reoptimize; //type: empty
        ydk::YLeaf reroute; //type: empty
        ydk::YLeaf down; //type: empty
        class CiscoExtension; //type: Snmp::Notification::MplsTe::CiscoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe::CiscoExtension> cisco_extension;
        
}; // Snmp::Notification::MplsTe


class Snmp::Notification::MplsTe::CiscoExtension : public ydk::Entity
{
    public:
        CiscoExtension();
        ~CiscoExtension();

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

        ydk::YLeaf preempt; //type: empty
        ydk::YLeaf insufficient_bandwidth; //type: empty
        ydk::YLeaf re_route_pending_clear; //type: empty
        ydk::YLeaf bringup_fail; //type: empty
        ydk::YLeaf re_route_pending; //type: empty

}; // Snmp::Notification::MplsTe::CiscoExtension


class Snmp::Notification::MplsTeP2Mp : public ydk::Entity
{
    public:
        MplsTeP2Mp();
        ~MplsTeP2Mp();

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

        ydk::YLeaf up; //type: empty
        ydk::YLeaf down; //type: empty

}; // Snmp::Notification::MplsTeP2Mp


class Snmp::Notification::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Ntp


class Snmp::Notification::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Oam


class Snmp::Notification::Optical : public ydk::Entity
{
    public:
        Optical();
        ~Optical();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Optical


class Snmp::Notification::OpticalOts : public ydk::Entity
{
    public:
        OpticalOts();
        ~OpticalOts();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::OpticalOts


class Snmp::Notification::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        class Lsa; //type: Snmp::Notification::Ospf::Lsa
        class StateChange; //type: Snmp::Notification::Ospf::StateChange
        class Retransmit; //type: Snmp::Notification::Ospf::Retransmit
        class Error; //type: Snmp::Notification::Ospf::Error

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Error> error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Lsa> lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::StateChange> state_change;
        
}; // Snmp::Notification::Ospf


class Snmp::Notification::Ospf::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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

        ydk::YLeaf config_error; //type: empty
        ydk::YLeaf authentication_failure; //type: empty
        ydk::YLeaf virtual_config_error; //type: empty
        ydk::YLeaf virtual_authentication_failure; //type: empty
        ydk::YLeaf bad_packet; //type: empty
        ydk::YLeaf virtual_bad_packet; //type: empty

}; // Snmp::Notification::Ospf::Error


class Snmp::Notification::Ospf::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

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

        ydk::YLeaf max_age_lsa; //type: empty
        ydk::YLeaf originate_lsa; //type: empty

}; // Snmp::Notification::Ospf::Lsa


class Snmp::Notification::Ospf::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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

        ydk::YLeaf virtual_packet; //type: empty
        ydk::YLeaf packet; //type: empty

}; // Snmp::Notification::Ospf::Retransmit


class Snmp::Notification::Ospf::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

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

        ydk::YLeaf interface; //type: empty
        ydk::YLeaf virtual_interface; //type: empty
        ydk::YLeaf virtual_neighbor; //type: empty
        ydk::YLeaf neighbor; //type: empty

}; // Snmp::Notification::Ospf::StateChange


class Snmp::Notification::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        class Error; //type: Snmp::Notification::Ospfv3::Error
        class StateChange; //type: Snmp::Notification::Ospfv3::StateChange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::Error> error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::StateChange> state_change;
        
}; // Snmp::Notification::Ospfv3


class Snmp::Notification::Ospfv3::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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

        ydk::YLeaf config_error; //type: empty
        ydk::YLeaf bad_packet; //type: empty
        ydk::YLeaf virtual_bad_packet; //type: empty
        ydk::YLeaf virtual_config_error; //type: empty

}; // Snmp::Notification::Ospfv3::Error


class Snmp::Notification::Ospfv3::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

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

        ydk::YLeaf restart_virtual_helper; //type: empty
        ydk::YLeaf nssa_translator; //type: empty
        ydk::YLeaf interface; //type: empty
        ydk::YLeaf restart; //type: empty
        ydk::YLeaf neighbor; //type: empty
        ydk::YLeaf virtual_interface; //type: empty
        ydk::YLeaf restart_helper; //type: empty
        ydk::YLeaf virtual_neighbor; //type: empty

}; // Snmp::Notification::Ospfv3::StateChange


class Snmp::Notification::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Otn


class Snmp::Notification::Rf : public ydk::Entity
{
    public:
        Rf();
        ~Rf();

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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Rf

class SnmpMibViewInclusion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf included;
        static const ydk::Enum::YLeaf excluded;

};

class SnmpHashAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

};

class SnmpOwnerAccess : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sdr_owner;
        static const ydk::Enum::YLeaf system_owner;

};

class SnmpTos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf dscp;

};

class SnmpBulkstatFileFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf schema_ascii;
        static const ydk::Enum::YLeaf bulk_ascii;
        static const ydk::Enum::YLeaf bulk_binary;

};

class SnmpSecurityModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_authentication;
        static const ydk::Enum::YLeaf authentication;
        static const ydk::Enum::YLeaf privacy;

};

class UserSnmpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2c;
        static const ydk::Enum::YLeaf v3;

};

class SnmpDscpValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;

};

class SnmpPrivAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf Y_3des;
        static const ydk::Enum::YLeaf aes128;
        static const ydk::Enum::YLeaf aes192;
        static const ydk::Enum::YLeaf aes256;

};

class Snmpacl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class SnmpContext : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf bridge;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf ospfv3;

};

class SnmpAccessLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read_only;
        static const ydk::Enum::YLeaf read_write;

};

class GroupSnmpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2c;
        static const ydk::Enum::YLeaf v3;

};

class SnmpPrecedenceValue1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routine;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;

};

class SnmpBulkstatSchema : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact_interface;
        static const ydk::Enum::YLeaf exact_oid;
        static const ydk::Enum::YLeaf wild_interface;
        static const ydk::Enum::YLeaf wild_oid;
        static const ydk::Enum::YLeaf range_oid;
        static const ydk::Enum::YLeaf repeat_oid;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_0_ */

