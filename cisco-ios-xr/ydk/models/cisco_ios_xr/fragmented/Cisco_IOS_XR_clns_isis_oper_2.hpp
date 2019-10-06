#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_2_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList router_id; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid : public ydk::Entity
{
    public:
        Nlpid();
        ~Nlpid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList nlpid; //type: list of  OpenconfigIsisLspNlpidEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability : public ydk::Entity
{
    public:
        ExtendedIpv4Reachability();
        ~ExtendedIpv4Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedIpv4ReachabilityPrefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes> extended_ipv4_reachability_prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes : public ydk::Entity
{
    public:
        ExtendedIpv4ReachabilityPrefixes();
        ~ExtendedIpv4ReachabilityPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedIpv4ReachabilityPrefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe

        ydk::YList extended_ipv4_reachability_prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe : public ydk::Entity
{
    public:
        ExtendedIpv4ReachabilityPrefixe();
        ~ExtendedIpv4ReachabilityPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class PrefixesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState
        class PrefixesSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs
        class PrefixesUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState> prefixes_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs> prefixes_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs> prefixes_undefined_subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState : public ydk::Entity
{
    public:
        PrefixesState();
        ~PrefixesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs : public ydk::Entity
{
    public:
        PrefixesSubtlvs();
        ~PrefixesSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixesSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv

        ydk::YList prefixes_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv : public ydk::Entity
{
    public:
        PrefixesSubtlv();
        ~PrefixesSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class Tag; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag
        class Ipv4SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId
        class Ipv6SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId
        class PrefixesSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState
        class Flags; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags
        class Tag64; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64
        class PrefixSids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag> tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId> ipv4_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId> ipv6_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState> prefixes_subtlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags> flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64> tag64;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids> prefix_sids;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag32; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId : public ydk::Entity
{
    public:
        Ipv4SourceRouterId();
        ~Ipv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv4_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv4SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId : public ydk::Entity
{
    public:
        Ipv6SourceRouterId();
        ~Ipv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv6_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Ipv6SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState : public ydk::Entity
{
    public:
        PrefixesSubtlvsState();
        ~PrefixesSubtlvsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixesSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspFlagsStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Flags::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64 : public ydk::Entity
{
    public:
        Tag64();
        ~Tag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag64; //type: list of  uint64

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::Tag64::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids : public ydk::Entity
{
    public:
        PrefixSids();
        ~PrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid

        ydk::YList prefix_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf algorithm; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspPrefixSidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesSubtlvs::PrefixesSubtlv::PrefixSids::PrefixSid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs : public ydk::Entity
{
    public:
        PrefixesUndefinedSubtlvs();
        ~PrefixesUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixesUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv

        ydk::YList prefixes_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv : public ydk::Entity
{
    public:
        PrefixesUndefinedSubtlv();
        ~PrefixesUndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability::ExtendedIpv4ReachabilityPrefixes::ExtendedIpv4ReachabilityPrefixe::PrefixesUndefinedSubtlvs::PrefixesUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology : public ydk::Entity
{
    public:
        MultiTopology();
        ~MultiTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topologies; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies> topologies;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology

        ydk::YList topology;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint16
        ydk::YLeaf attributes; //type: OpenconfigIsisLspAttributesEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology::Topologies::Topology::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability : public ydk::Entity
{
    public:
        Ipv4ExternalReachability();
        ~Ipv4ExternalReachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4ExternalReachabilityPrefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes> ipv4_external_reachability_prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes : public ydk::Entity
{
    public:
        Ipv4ExternalReachabilityPrefixes();
        ~Ipv4ExternalReachabilityPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4ExternalReachabilityPrefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe

        ydk::YList ipv4_external_reachability_prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe : public ydk::Entity
{
    public:
        Ipv4ExternalReachabilityPrefixe();
        ~Ipv4ExternalReachabilityPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State
        class DefaultMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric
        class DelayMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric
        class ExpenseMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric
        class ErrorMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric> delay_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric> expense_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric> error_metric;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf prefix; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: OpenconfigIsisLspDefaultMetricStateFlagsEnum
        ydk::YLeaf default_metric; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DefaultMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric : public ydk::Entity
{
    public:
        DelayMetric();
        ~DelayMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspIsisMetricFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::DelayMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric : public ydk::Entity
{
    public:
        ExpenseMetric();
        ~ExpenseMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspIsisMetricFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ExpenseMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric : public ydk::Entity
{
    public:
        ErrorMetric();
        ~ErrorMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspIsisMetricFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability::Ipv4ExternalReachabilityPrefixes::Ipv4ExternalReachabilityPrefixe::ErrorMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability : public ydk::Entity
{
    public:
        MtIpv6Reachability();
        ~MtIpv6Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv6ReachabilityPrefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes> mt_ipv6_reachability_prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixes();
        ~MtIpv6ReachabilityPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv6ReachabilityPrefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe

        ydk::YList mt_ipv6_reachability_prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixe();
        ~MtIpv6ReachabilityPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mt_id; //type: uint32
        class MtIpv6ReachabilityPrefixesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState
        class MtIpv6ReachabilityPrefixesSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs
        class MtIpv6ReachabilityPrefixesUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState> mt_ipv6_reachability_prefixes_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs> mt_ipv6_reachability_prefixes_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs> mt_ipv6_reachability_prefixes_undefined_subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesState();
        ~MtIpv6ReachabilityPrefixesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf xbit; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf mt_id; //type: uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvs();
        ~MtIpv6ReachabilityPrefixesSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv6ReachabilityPrefixesSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv

        ydk::YList mt_ipv6_reachability_prefixes_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlv();
        ~MtIpv6ReachabilityPrefixesSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class MtIpv6ReachabilityPrefixesSubtlvsPrefixSids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids
        class MtIpv6ReachabilityPrefixesSubtlvsFlags; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags
        class MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId
        class MtIpv6ReachabilityPrefixesSubtlvsTag64; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64
        class MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId
        class MtIpv6ReachabilityPrefixesSubtlvsTag; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag
        class MtIpv6ReachabilityPrefixesSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids> mt_ipv6_reachability_prefixes_subtlvs_prefix_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags> mt_ipv6_reachability_prefixes_subtlvs_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId> mt_ipv6_reachability_prefixes_subtlvs_ipv4_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64> mt_ipv6_reachability_prefixes_subtlvs_tag64;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId> mt_ipv6_reachability_prefixes_subtlvs_ipv6_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag> mt_ipv6_reachability_prefixes_subtlvs_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState> mt_ipv6_reachability_prefixes_subtlvs_state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsPrefixSids();
        ~MtIpv6ReachabilityPrefixesSubtlvsPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv6ReachabilityPrefixesSubtlvsPrefixSid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid

        ydk::YList mt_ipv6_reachability_prefixes_subtlvs_prefix_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsPrefixSid();
        ~MtIpv6ReachabilityPrefixesSubtlvsPrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf algorithm; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspPrefixSidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsPrefixSids::MtIpv6ReachabilityPrefixesSubtlvsPrefixSid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsFlags();
        ~MtIpv6ReachabilityPrefixesSubtlvsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspFlagsStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsFlags::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId();
        ~MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv4_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv4SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64 : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsTag64();
        ~MtIpv6ReachabilityPrefixesSubtlvsTag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag64; //type: list of  uint64

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag64::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId();
        ~MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv6_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsIpv6SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsTag();
        ~MtIpv6ReachabilityPrefixesSubtlvsTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag32; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsTag::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesSubtlvsState();
        ~MtIpv6ReachabilityPrefixesSubtlvsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesSubtlvs::MtIpv6ReachabilityPrefixesSubtlv::MtIpv6ReachabilityPrefixesSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesUndefinedSubtlvs();
        ~MtIpv6ReachabilityPrefixesUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv6ReachabilityPrefixesUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv

        ydk::YList mt_ipv6_reachability_prefixes_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv : public ydk::Entity
{
    public:
        MtIpv6ReachabilityPrefixesUndefinedSubtlv();
        ~MtIpv6ReachabilityPrefixesUndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability::MtIpv6ReachabilityPrefixes::MtIpv6ReachabilityPrefixe::MtIpv6ReachabilityPrefixesUndefinedSubtlvs::MtIpv6ReachabilityPrefixesUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf type; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf description; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::State

class Isis : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Instances; //type: Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances> instances;
        
}; // Isis


class Isis::Instances : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Instance; //type: Isis::Instances::Instance

        ydk::YList instance;
        
}; // Isis::Instances


class Isis::Instances::Instance : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_name; //type: string
        class Neighbors; //type: Isis::Instances::Instance::Neighbors
        class HostNames; //type: Isis::Instances::Instance::HostNames
        class StatisticsGlobal; //type: Isis::Instances::Instance::StatisticsGlobal
        class Levels; //type: Isis::Instances::Instance::Levels
        class Topologies; //type: Isis::Instances::Instance::Topologies
        class NsrStatus; //type: Isis::Instances::Instance::NsrStatus
        class Interfaces; //type: Isis::Instances::Instance::Interfaces
        class CheckpointAdjacencies; //type: Isis::Instances::Instance::CheckpointAdjacencies
        class FlexAlgos; //type: Isis::Instances::Instance::FlexAlgos
        class Srms; //type: Isis::Instances::Instance::Srms
        class ErrorLog; //type: Isis::Instances::Instance::ErrorLog
        class CheckpointInterfaces; //type: Isis::Instances::Instance::CheckpointInterfaces
        class SrLabels; //type: Isis::Instances::Instance::SrLabels
        class InterfaceStatistics; //type: Isis::Instances::Instance::InterfaceStatistics
        class Protocol; //type: Isis::Instances::Instance::Protocol
        class NeighborSummaries; //type: Isis::Instances::Instance::NeighborSummaries
        class CheckpointLsps; //type: Isis::Instances::Instance::CheckpointLsps
        class MeshGroups; //type: Isis::Instances::Instance::MeshGroups
        class NsrStatistics; //type: Isis::Instances::Instance::NsrStatistics
        class CheckpointTeTunnels; //type: Isis::Instances::Instance::CheckpointTeTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames> host_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal> statistics_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels> levels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies> topologies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus> nsr_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies> checkpoint_adjacencies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::FlexAlgos> flex_algos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms> srms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog> error_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces> checkpoint_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::SrLabels> sr_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps> checkpoint_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups> mesh_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics> nsr_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels> checkpoint_te_tunnels;
        
}; // Isis::Instances::Instance


class Isis::Instances::Instance::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Isis::Instances::Instance::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Isis::Instances::Instance::Neighbors


class Isis::Instances::Instance::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf local_interface; //type: string
        ydk::YLeaf neighbor_state; //type: IsisAdjState
        ydk::YLeaf neighbor_circuit_type; //type: IsisLevels
        ydk::YLeaf neighbor_ietf_nsf_capable_flag; //type: uint32
        ydk::YLeaf neighbor_media_type; //type: IsisMediaClass
        ydk::YLeaf neighbor_holdtime; //type: uint32
        ydk::YLeaf neighbor_uptime_valid_flag; //type: boolean
        ydk::YLeaf neighbor_uptime; //type: uint32
        ydk::YLeaf nsr_standby; //type: boolean
        class NeighborActiveAreaAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress
        class TopologiesSupported; //type: Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported
        class NeighborPerAddressFamilyData; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData

        ydk::YList neighbor_active_area_address;
        ydk::YList topologies_supported;
        ydk::YList neighbor_per_address_family_data;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress : public ydk::Entity
{
    public:
        NeighborActiveAreaAddress();
        ~NeighborActiveAreaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress


class Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported : public ydk::Entity
{
    public:
        TopologiesSupported();
        ~TopologiesSupported();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData : public ydk::Entity
{
    public:
        NeighborPerAddressFamilyData();
        ~NeighborPerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        class Ipv4; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4 : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid
        class InterfaceAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;
        ydk::YList interface_address;
        ydk::YList underlying_adjacency_sid;
        ydk::YList underlying_interface;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_index; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6 : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid
        class EndXsid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid
        class NonFrrEndXsid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid
        class InterfaceAddress; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid> end_xsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid> non_frr_end_xsid;
        ydk::YList interface_address;
        ydk::YList underlying_adjacency_sid;
        ydk::YList underlying_interface;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        ydk::YList backup_label_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid : public ydk::Entity
{
    public:
        EndXsid();
        ~EndXsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf end_xsid_function; //type: uint16
        class EndXsid_; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_
        class EndXsidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_> end_xsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup> end_xsid_backup;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_ : public ydk::Entity
{
    public:
        EndXsid_();
        ~EndXsid_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsid_


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup : public ydk::Entity
{
    public:
        EndXsidBackup();
        ~EndXsidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack

        ydk::YList backup_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack : public ydk::Entity
{
    public:
        BackupStack();
        ~BackupStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::EndXsid::EndXsidBackup::BackupStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid : public ydk::Entity
{
    public:
        NonFrrEndXsid();
        ~NonFrrEndXsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf end_xsid_function; //type: uint16
        class EndXsid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid
        class EndXsidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid> end_xsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup> end_xsid_backup;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid : public ydk::Entity
{
    public:
        EndXsid();
        ~EndXsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup : public ydk::Entity
{
    public:
        EndXsidBackup();
        ~EndXsidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupStack; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack

        ydk::YList backup_stack;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack : public ydk::Entity
{
    public:
        BackupStack();
        ~BackupStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrEndXsid::EndXsidBackup::BackupStack


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_index; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface


class Isis::Instances::Instance::HostNames : public ydk::Entity
{
    public:
        HostNames();
        ~HostNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostName; //type: Isis::Instances::Instance::HostNames::HostName

        ydk::YList host_name;
        
}; // Isis::Instances::Instance::HostNames


class Isis::Instances::Instance::HostNames::HostName : public ydk::Entity
{
    public:
        HostName();
        ~HostName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf local_is_flag; //type: boolean
        ydk::YLeaf host_levels; //type: IsisLevels
        ydk::YLeaf host_name; //type: string

}; // Isis::Instances::Instance::HostNames::HostName


class Isis::Instances::Instance::StatisticsGlobal : public ydk::Entity
{
    public:
        StatisticsGlobal();
        ~StatisticsGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics
        class PerAreaData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics> statistics;
        ydk::YList per_area_data;
        
}; // Isis::Instances::Instance::StatisticsGlobal


class Isis::Instances::Instance::StatisticsGlobal::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_psnp_lookup_count; //type: uint32
        ydk::YLeaf fast_psnp_lookup_hit_count; //type: uint32
        ydk::YLeaf fast_csnp_lookup_count; //type: uint32
        ydk::YLeaf fast_csnp_lookup_hit_count; //type: uint32
        ydk::YLeaf fast_csnp_cache_update_count; //type: uint32
        ydk::YLeaf zero_holdtime_lsp_count; //type: uint32
        ydk::YLeaf invalid_checksum_lsp_count; //type: uint32
        ydk::YLeaf iih_dropped_count; //type: uint32
        ydk::YLeaf lsp_dropped_count; //type: uint32
        ydk::YLeaf snp_dropped_count; //type: uint32
        ydk::YLeaf maximum_iih_queue_length; //type: uint32
        ydk::YLeaf maximum_pdu_queue_length; //type: uint32
        ydk::YLeaf pdu_queue_length; //type: uint32
        ydk::YLeaf avg_hello_recv_rate; //type: uint32
        ydk::YLeaf avg_csnp_recv_rate; //type: uint32
        ydk::YLeaf avg_psnp_recv_rate; //type: uint32
        ydk::YLeaf avg_lsp_recv_rate; //type: uint32
        ydk::YLeaf avg_hello_send_rate; //type: uint32
        ydk::YLeaf avg_csnp_send_rate; //type: uint32
        ydk::YLeaf avg_psnp_send_rate; //type: uint32
        ydk::YLeaf avg_lsp_send_rate; //type: uint32
        class AvgHelloProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime
        class AvgCsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime
        class AvgPsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime
        class AvgLspProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime
        class AvgHelloTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime
        class AvgCsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime
        class AvgPsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime
        class AvgLspTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime> avg_hello_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime> avg_csnp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime> avg_psnp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime> avg_lsp_process_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime> avg_hello_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime> avg_csnp_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime> avg_psnp_transmit_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime> avg_lsp_transmit_time;
        
}; // Isis::Instances::Instance::StatisticsGlobal::Statistics


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime : public ydk::Entity
{
    public:
        AvgHelloProcessTime();
        ~AvgHelloProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime : public ydk::Entity
{
    public:
        AvgCsnpProcessTime();
        ~AvgCsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime : public ydk::Entity
{
    public:
        AvgPsnpProcessTime();
        ~AvgPsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime : public ydk::Entity
{
    public:
        AvgLspProcessTime();
        ~AvgLspProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime : public ydk::Entity
{
    public:
        AvgHelloTransmitTime();
        ~AvgHelloTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime : public ydk::Entity
{
    public:
        AvgCsnpTransmitTime();
        ~AvgCsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime : public ydk::Entity
{
    public:
        AvgPsnpTransmitTime();
        ~AvgPsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime : public ydk::Entity
{
    public:
        AvgLspTransmitTime();
        ~AvgLspTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics
        class PerTopologyData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics> statistics;
        ydk::YList per_topology_data;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_lsp_build_count; //type: uint32
        ydk::YLeaf system_lsp_refresh_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData : public ydk::Entity
{
    public:
        PerTopologyData();
        ~PerTopologyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id> id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_run_count; //type: uint32
        ydk::YLeaf ispf_run_count; //type: uint32
        ydk::YLeaf nhc_run_count; //type: uint32
        ydk::YLeaf prc_run_count; //type: uint32
        ydk::YLeaf periodic_run_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics


class Isis::Instances::Instance::Levels : public ydk::Entity
{
    public:
        Levels();
        ~Levels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Isis::Instances::Instance::Levels::Level

        ydk::YList level;
        
}; // Isis::Instances::Instance::Levels


class Isis::Instances::Instance::Levels::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        class AdjacencyLog; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog
        class LspTableSummary; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary
        class Adjacencies; //type: Isis::Instances::Instance::Levels::Level::Adjacencies
        class DetailedLsps; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps
        class Lsps; //type: Isis::Instances::Instance::Levels::Level::Lsps
        class LspLog; //type: Isis::Instances::Instance::Levels::Level::LspLog
        class DatabaseLog; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog> adjacency_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary> lsp_table_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies> adjacencies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps> detailed_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog> lsp_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog> database_log;
        
}; // Isis::Instances::Instance::Levels::Level


class Isis::Instances::Instance::Levels::Level::AdjacencyLog : public ydk::Entity
{
    public:
        AdjacencyLog();
        ~AdjacencyLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry

        ydk::YList log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_log_neighbor_system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf prev_adj_state; //type: IsisAdjState
        ydk::YLeaf cur_adj_state; //type: IsisAdjState
        ydk::YLeaf state_reason; //type: IsisAdjStateReason
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData
        class AdjacencyPerTopologyChange; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData> generic_data;
        ydk::YList adjacency_per_topology_change;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData : public ydk::Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange : public ydk::Entity
{
    public:
        AdjacencyPerTopologyChange();
        ~AdjacencyPerTopologyChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf change; //type: IsisAdjTopoChange
        class Id; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id> id;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id


class Isis::Instances::Instance::Levels::Level::LspTableSummary : public ydk::Entity
{
    public:
        LspTableSummary();
        ~LspTableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fragment0lspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats
        class AllFragmentLspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats> fragment0lsp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats> all_fragment_lsp_stats;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats : public ydk::Entity
{
    public:
        Fragment0lspStats();
        ~Fragment0lspStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters
        class PerTopologyCounter; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters> node_counters;
        ydk::YList per_topology_counter;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters : public ydk::Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount> route_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount : public ydk::Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount : public ydk::Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter : public ydk::Entity
{
    public:
        PerTopologyCounter();
        ~PerTopologyCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id
        class OverloadedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount
        class AttachedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id> id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount> overloaded_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount> attached_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::Id


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount : public ydk::Entity
{
    public:
        OverloadedLspCount();
        ~OverloadedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::OverloadedLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount : public ydk::Entity
{
    public:
        AttachedLspCount();
        ~AttachedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0lspStats::PerTopologyCounter::AttachedLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats : public ydk::Entity
{
    public:
        AllFragmentLspStats();
        ~AllFragmentLspStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters> node_counters;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters : public ydk::Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount> route_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount : public ydk::Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount : public ydk::Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp_count; //type: uint32
        ydk::YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::Adjacencies : public ydk::Entity
{
    public:
        Adjacencies();
        ~Adjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Adjacency; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency

        ydk::YList adjacency;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency : public ydk::Entity
{
    public:
        Adjacency();
        ~Adjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf adjacency_system_id; //type: string
        ydk::YLeaf adjacency_snpa; //type: string
        ydk::YLeaf adjacency_interface; //type: string
        ydk::YLeaf adjacency_media_type; //type: IsisMediaClass
        ydk::YLeaf adjacency_state; //type: IsisAdjState
        ydk::YLeaf adjacency_bfd_state; //type: IsisAdjBfdState
        ydk::YLeaf adjacency_ipv6bfd_state; //type: IsisAdjBfdState
        ydk::YLeaf adj_ipv4bfd_retry_running; //type: boolean
        ydk::YLeaf adj_ipv6bfd_retry_running; //type: boolean
        ydk::YLeaf adj_ipv4bfd_retry_exp; //type: uint32
        ydk::YLeaf adj_ipv6bfd_retry_exp; //type: uint32
        ydk::YLeaf adj_ipv4bfd_retry_count; //type: uint32
        ydk::YLeaf adj_ipv6bfd_retry_count; //type: uint32
        ydk::YLeaf adjacency_uptime_valid_flag; //type: boolean
        ydk::YLeaf adjacency_uptime; //type: uint32
        ydk::YLeaf adjacency_holdtime; //type: uint32
        ydk::YLeaf adjacency_checkpoint_object_id; //type: uint32
        ydk::YLeaf adjacency_ietf_nsf_capable_flag; //type: boolean
        ydk::YLeaf adjacency_dispriority; //type: uint8
        ydk::YLeaf adjacency_neighbor_priority; //type: uint8
        ydk::YLeaf adjacency_local_priority; //type: uint8
        ydk::YLeaf local_dis_flag; //type: boolean
        ydk::YLeaf neighbor_dis_flag; //type: boolean
        ydk::YLeaf nsr_standby; //type: uint8
        class AdjacencyAreaAddress; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress
        class AdjacencyTopology; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology
        class AdjacencyPerAddressFamilyData; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData

        ydk::YList adjacency_area_address;
        ydk::YList adjacency_topology;
        ydk::YList adjacency_per_address_family_data;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_2_ */

