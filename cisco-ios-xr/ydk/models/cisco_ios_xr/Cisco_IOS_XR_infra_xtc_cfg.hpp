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
        ydk::YLeaf ipv6_server_address; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf enable; //type: empty
        class Ipv6StateSyncs; //type: Pce::Ipv6StateSyncs
        class PccAddresses; //type: Pce::PccAddresses
        class Logging; //type: Pce::Logging
        class Backoff; //type: Pce::Backoff
        class Rest; //type: Pce::Rest
        class StateSyncs; //type: Pce::StateSyncs
        class SegmentRouting; //type: Pce::SegmentRouting
        class Timers; //type: Pce::Timers
        class Netconf; //type: Pce::Netconf
        class DisjointPath; //type: Pce::DisjointPath
        class ExplicitPaths; //type: Pce::ExplicitPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Ipv6StateSyncs> ipv6_state_syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses> pcc_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Backoff> backoff; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Rest> rest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::StateSyncs> state_syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Timers> timers; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Netconf> netconf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath> disjoint_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths> explicit_paths;
        
}; // Pce


class Pce::Ipv6StateSyncs : public ydk::Entity
{
    public:
        Ipv6StateSyncs();
        ~Ipv6StateSyncs();

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

        class Ipv6StateSync; //type: Pce::Ipv6StateSyncs::Ipv6StateSync

        ydk::YList ipv6_state_sync;
        
}; // Pce::Ipv6StateSyncs


class Pce::Ipv6StateSyncs::Ipv6StateSync : public ydk::Entity
{
    public:
        Ipv6StateSync();
        ~Ipv6StateSync();

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

}; // Pce::Ipv6StateSyncs::Ipv6StateSync


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

        ydk::YList pcc_address;
        
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

        ydk::YList lsp_name;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe> rsvp_te; // presence node
        
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
        ydk::YLeaf bandwidth; //type: uint32
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
        ydk::YLeaf pcerr; //type: empty
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


class Pce::Rest : public ydk::Entity
{
    public:
        Rest();
        ~Rest();

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

        ydk::YLeaf rest_authentication; //type: PcerestAuthentication
        ydk::YLeaf enable; //type: empty
        class RestUsers; //type: Pce::Rest::RestUsers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::Rest::RestUsers> rest_users;
        
}; // Pce::Rest


class Pce::Rest::RestUsers : public ydk::Entity
{
    public:
        RestUsers();
        ~RestUsers();

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

        class RestUser; //type: Pce::Rest::RestUsers::RestUser

        ydk::YList rest_user;
        
}; // Pce::Rest::RestUsers


class Pce::Rest::RestUsers::RestUser : public ydk::Entity
{
    public:
        RestUser();
        ~RestUser();

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
        ydk::YLeaf rest_user_password; //type: string
        ydk::YLeaf enable; //type: empty

}; // Pce::Rest::RestUsers::RestUser


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

        ydk::YList state_sync;
        
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
        class TrafficEngineering; //type: Pce::SegmentRouting::TrafficEngineering

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering> traffic_engineering;
        
}; // Pce::SegmentRouting


class Pce::SegmentRouting::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

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
        class AffinityBits; //type: Pce::SegmentRouting::TrafficEngineering::AffinityBits
        class Peers; //type: Pce::SegmentRouting::TrafficEngineering::Peers
        class Segments; //type: Pce::SegmentRouting::TrafficEngineering::Segments

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::AffinityBits> affinity_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Segments> segments;
        
}; // Pce::SegmentRouting::TrafficEngineering


class Pce::SegmentRouting::TrafficEngineering::AffinityBits : public ydk::Entity
{
    public:
        AffinityBits();
        ~AffinityBits();

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

        class AffinityBit; //type: Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit

        ydk::YList affinity_bit;
        
}; // Pce::SegmentRouting::TrafficEngineering::AffinityBits


class Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit : public ydk::Entity
{
    public:
        AffinityBit();
        ~AffinityBit();

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

        ydk::YLeaf color_name; //type: string
        ydk::YLeaf bit; //type: uint32

}; // Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit


class Pce::SegmentRouting::TrafficEngineering::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer

        ydk::YList peer;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer_addr; //type: string
        ydk::YLeaf enable; //type: empty
        class Policies; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies> policies;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy

        ydk::YList policy;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf shutdown; //type: empty
        class BindingSid; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid
        class ColorEndpoint; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint
        class CandidatePaths; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint> color_endpoint;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths> candidate_paths;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf binding_sid_type; //type: PceBindingSid
        ydk::YLeaf mpls_label; //type: uint32

}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint : public ydk::Entity
{
    public:
        ColorEndpoint();
        ~ColorEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color; //type: uint32
        ydk::YLeaf end_point_type; //type: PceEndPoint
        ydk::YLeaf end_point_address; //type: string

}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths : public ydk::Entity
{
    public:
        CandidatePaths();
        ~CandidatePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class AffinityRules; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules
        class Preferences; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules> affinity_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences> preferences;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules : public ydk::Entity
{
    public:
        AffinityRules();
        ~AffinityRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AffinityRule; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule

        ydk::YList affinity_rule;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule : public ydk::Entity
{
    public:
        AffinityRule();
        ~AffinityRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule; //type: uint32
        ydk::YLeaf aff_value; //type: string

}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences : public ydk::Entity
{
    public:
        Preferences();
        ~Preferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Preference; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference

        ydk::YList preference;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference : public ydk::Entity
{
    public:
        Preference();
        ~Preference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf enable; //type: empty
        class PathInfos; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos> path_infos;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos : public ydk::Entity
{
    public:
        PathInfos();
        ~PathInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathInfo; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo

        ydk::YList path_info;
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo : public ydk::Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PcePath
        ydk::YLeaf hop_type; //type: PcePathHop
        ydk::YLeaf segment_list_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Metric; //type: Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric> metric; // presence node
        
}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo


class Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: PceMetric

}; // Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric


class Pce::SegmentRouting::TrafficEngineering::Segments : public ydk::Entity
{
    public:
        Segments();
        ~Segments();

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

        class Segment; //type: Pce::SegmentRouting::TrafficEngineering::Segments::Segment

        ydk::YList segment;
        
}; // Pce::SegmentRouting::TrafficEngineering::Segments


class Pce::SegmentRouting::TrafficEngineering::Segments::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

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

        ydk::YLeaf path_name; //type: string
        class Segments_; //type: Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_> segments;
        
}; // Pce::SegmentRouting::TrafficEngineering::Segments::Segment


class Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_ : public ydk::Entity
{
    public:
        Segments_();
        ~Segments_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Segment_; //type: Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_

        ydk::YList segment;
        
}; // Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_


class Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_ : public ydk::Entity
{
    public:
        Segment_();
        ~Segment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_index; //type: uint32
        ydk::YLeaf segment_type; //type: PceSegment
        ydk::YLeaf address; //type: string
        ydk::YLeaf mpls_label; //type: uint32

}; // Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_


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

        ydk::YLeaf enable; //type: empty
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

        ydk::YLeaf enable; //type: empty
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

        ydk::YList group;
        
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
        ydk::YLeaf enable; //type: empty
        class GroupLspRecords; //type: Pce::DisjointPath::Groups::Group::GroupLspRecords

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath::Groups::Group::GroupLspRecords> group_lsp_records;
        
}; // Pce::DisjointPath::Groups::Group


class Pce::DisjointPath::Groups::Group::GroupLspRecords : public ydk::Entity
{
    public:
        GroupLspRecords();
        ~GroupLspRecords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupLspRecord; //type: Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord

        ydk::YList group_lsp_record;
        
}; // Pce::DisjointPath::Groups::Group::GroupLspRecords


class Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord : public ydk::Entity
{
    public:
        GroupLspRecord();
        ~GroupLspRecord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf lsp_name; //type: string
        ydk::YLeaf disj_path; //type: uint32

}; // Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord


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

        ydk::YList explicit_path;
        
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

        ydk::YList path_hop;
        
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

class PceSegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf mpls_label;

};

class PceBindingSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_label_specified;
        static const ydk::Enum::YLeaf mpls_label_any;

};

class PceExplicitPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf sid_node;
        static const ydk::Enum::YLeaf sid_adjancency;
        static const ydk::Enum::YLeaf binding_sid;

};

class PcePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf dynamic;

};

class PceEndPoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf end_point_type_ipv4;
        static const ydk::Enum::YLeaf end_point_type_ipv6;

};

class PcerestAuthentication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf digest;

};

class PcePathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf srv6;

};

class PceMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf hopcount;
        static const ydk::Enum::YLeaf latency;

};

class PceDisjointPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf srlg_node;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_CFG_ */

