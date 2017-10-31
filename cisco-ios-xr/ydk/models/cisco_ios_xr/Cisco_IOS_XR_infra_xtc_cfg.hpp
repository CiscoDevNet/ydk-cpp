#ifndef _CISCO_IOS_XR_INFRA_XTC_CFG_
#define _CISCO_IOS_XR_INFRA_XTC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_cfg {

class Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

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

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf enable; //type: empty
        class PccAddresses; //type: Pce::PccAddresses
        class Logging; //type: Pce::Logging
        class Backoff; //type: Pce::Backoff
        class StateSyncs; //type: Pce::StateSyncs
        class SegmentRouting; //type: Pce::SegmentRouting
        class Timers; //type: Pce::Timers
        class Netconf; //type: Pce::Netconf
        class DisjointPath; //type: Pce::DisjointPath
        class ExplicitPaths; //type: Pce::ExplicitPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses> pcc_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Backoff> backoff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::StateSyncs> state_syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Netconf> netconf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath> disjoint_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths> explicit_paths;
        
}; // Pce


class Pce::PccAddresses : public ydk::Entity
{
    public:
        PccAddresses();
        ~PccAddresses();

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

        class PccAddress; //type: Pce::PccAddresses::PccAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress> > pcc_address;
        
}; // Pce::PccAddresses


class Pce::PccAddresses::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf enable; //type: empty
        class LspNames; //type: Pce::PccAddresses::PccAddress::LspNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames> lsp_names;
        
}; // Pce::PccAddresses::PccAddress


class Pce::PccAddresses::PccAddress::LspNames : public ydk::Entity
{
    public:
        LspNames();
        ~LspNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspName; //type: Pce::PccAddresses::PccAddress::LspNames::LspName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName> > lsp_name;
        
}; // Pce::PccAddresses::PccAddress::LspNames


class Pce::PccAddresses::PccAddress::LspNames::LspName : public ydk::Entity
{
    public:
        LspName();
        ~LspName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf undelegate; //type: empty
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf enable; //type: empty
        class RsvpTe; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe> rsvp_te;
        
}; // Pce::PccAddresses::PccAddress::LspNames::LspName


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe : public ydk::Entity
{
    public:
        RsvpTe();
        ~RsvpTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_protect; //type: empty
        ydk::YLeaf bandwidth; //type: int32
        ydk::YLeaf enable; //type: empty
        class Affinity; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity
        class Priority; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority> priority; // presence node
        
}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_any; //type: string
        ydk::YLeaf include_all; //type: string
        ydk::YLeaf exclude_any; //type: string

}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority


class Pce::Logging : public ydk::Entity
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

        ydk::YLeaf no_path; //type: empty
        ydk::YLeaf fallback; //type: empty

}; // Pce::Logging


class Pce::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

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

        ydk::YLeaf ratio; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf difference; //type: uint32

}; // Pce::Backoff


class Pce::StateSyncs : public ydk::Entity
{
    public:
        StateSyncs();
        ~StateSyncs();

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

        class StateSync; //type: Pce::StateSyncs::StateSync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::StateSyncs::StateSync> > state_sync;
        
}; // Pce::StateSyncs


class Pce::StateSyncs::StateSync : public ydk::Entity
{
    public:
        StateSync();
        ~StateSync();

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

        ydk::YLeaf address; //type: string

}; // Pce::StateSyncs::StateSync


class Pce::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

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

        ydk::YLeaf te_latency; //type: empty
        ydk::YLeaf strict_sid_only; //type: empty

}; // Pce::SegmentRouting


class Pce::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf reoptimization_timer; //type: uint32
        ydk::YLeaf keepalive; //type: uint32
        ydk::YLeaf minimum_peer_keepalive; //type: uint32

}; // Pce::Timers


class Pce::Netconf : public ydk::Entity
{
    public:
        Netconf();
        ~Netconf();

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

        class NetconfSsh; //type: Pce::Netconf::NetconfSsh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Netconf::NetconfSsh> netconf_ssh;
        
}; // Pce::Netconf


class Pce::Netconf::NetconfSsh : public ydk::Entity
{
    public:
        NetconfSsh();
        ~NetconfSsh();

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

        ydk::YLeaf netconf_ssh_password; //type: string
        ydk::YLeaf netconf_ssh_user; //type: string

}; // Pce::Netconf::NetconfSsh


class Pce::DisjointPath : public ydk::Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

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

        class Groups; //type: Pce::DisjointPath::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath::Groups> groups;
        
}; // Pce::DisjointPath


class Pce::DisjointPath::Groups : public ydk::Entity
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

        class Group; //type: Pce::DisjointPath::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath::Groups::Group> > group;
        
}; // Pce::DisjointPath::Groups


class Pce::DisjointPath::Groups::Group : public ydk::Entity
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

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf dp_type; //type: PceDisjointPath
        ydk::YLeaf sub_id; //type: uint32
        ydk::YLeaf strict; //type: empty

}; // Pce::DisjointPath::Groups::Group


class Pce::ExplicitPaths : public ydk::Entity
{
    public:
        ExplicitPaths();
        ~ExplicitPaths();

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

        class ExplicitPath; //type: Pce::ExplicitPaths::ExplicitPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath> > explicit_path;
        
}; // Pce::ExplicitPaths


class Pce::ExplicitPaths::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

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
        ydk::YLeaf enable; //type: empty
        class PathHops; //type: Pce::ExplicitPaths::ExplicitPath::PathHops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath::PathHops> path_hops;
        
}; // Pce::ExplicitPaths::ExplicitPath


class Pce::ExplicitPaths::ExplicitPath::PathHops : public ydk::Entity
{
    public:
        PathHops();
        ~PathHops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathHop; //type: Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop> > path_hop;
        
}; // Pce::ExplicitPaths::ExplicitPath::PathHops


class Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop : public ydk::Entity
{
    public:
        PathHop();
        ~PathHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf hop_type; //type: PceExplicitPathHop
        ydk::YLeaf address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf mpls_label; //type: uint32

}; // Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop

class PceDisjointPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

};

class PceExplicitPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf sid_node;
        static const ydk::Enum::YLeaf sid_adjancency;
        static const ydk::Enum::YLeaf binding_sid;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_CFG_ */

