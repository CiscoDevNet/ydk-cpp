#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_1_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors : public ydk::Entity
{
    public:
        MtIsnNeighbors();
        ~MtIsnNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIsnNeighbor; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor

        ydk::YList mt_isn_neighbor;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor : public ydk::Entity
{
    public:
        MtIsnNeighbor();
        ~MtIsnNeighbor();

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
        ydk::YLeaf system_id; //type: string
        class MtIsnNeighborsSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs
        class MtIsnNeighborsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState
        class MtIsnNeighborsUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs> mt_isn_neighbors_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState> mt_isn_neighbors_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs> mt_isn_neighbors_undefined_subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs : public ydk::Entity
{
    public:
        MtIsnNeighborsSubtlvs();
        ~MtIsnNeighborsSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIsnNeighborsSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv

        ydk::YList mt_isn_neighbors_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv : public ydk::Entity
{
    public:
        MtIsnNeighborsSubtlv();
        ~MtIsnNeighborsSubtlv();

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
        class SubtlvsIpv6NeighborAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress
        class SubtlvsIpv4InterfaceAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress
        class SubtlvsMaxReservableLinkBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth
        class SubtlvsMaxLinkBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth
        class SubtlvsAdjacencySids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids
        class SubtlvsBandwidthConstraints; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints
        class SubtlvsUnreservedBandwidths; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths
        class SubtlvsIpv4NeighborAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress
        class SubtlvsTeDefaultMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric
        class SubtlvsIpv6InterfaceAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress
        class SubtlvsAdminGroup; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup
        class MtIsnNeighborsSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::MtIsnNeighborsSubtlvsState
        class SubtlvsLanAdjacencySids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids
        class SubtlvsExtendedAdminGroup; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress> subtlvs_ipv6_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress> subtlvs_ipv4_interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth> subtlvs_max_reservable_link_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth> subtlvs_max_link_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids> subtlvs_adjacency_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints> subtlvs_bandwidth_constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths> subtlvs_unreserved_bandwidths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress> subtlvs_ipv4_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric> subtlvs_te_default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress> subtlvs_ipv6_interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup> subtlvs_admin_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::MtIsnNeighborsSubtlvsState> mt_isn_neighbors_subtlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids> subtlvs_lan_adjacency_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup> subtlvs_extended_admin_group;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress : public ydk::Entity
{
    public:
        SubtlvsIpv6NeighborAddress();
        ~SubtlvsIpv6NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6NeighborAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress : public ydk::Entity
{
    public:
        SubtlvsIpv4InterfaceAddress();
        ~SubtlvsIpv4InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4InterfaceAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth : public ydk::Entity
{
    public:
        SubtlvsMaxReservableLinkBandwidth();
        ~SubtlvsMaxReservableLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth::State : public ydk::Entity
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

        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxReservableLinkBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth : public ydk::Entity
{
    public:
        SubtlvsMaxLinkBandwidth();
        ~SubtlvsMaxLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth::State : public ydk::Entity
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

        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsMaxLinkBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids : public ydk::Entity
{
    public:
        SubtlvsAdjacencySids();
        ~SubtlvsAdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubtlvsAdjacencySid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid

        ydk::YList subtlvs_adjacency_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid : public ydk::Entity
{
    public:
        SubtlvsAdjacencySid();
        ~SubtlvsAdjacencySid();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid::State : public ydk::Entity
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
        ydk::YLeaf weight; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspAdjacencySidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdjacencySids::SubtlvsAdjacencySid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints : public ydk::Entity
{
    public:
        SubtlvsBandwidthConstraints();
        ~SubtlvsBandwidthConstraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubtlvsBandwidthConstraint; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint

        ydk::YList subtlvs_bandwidth_constraint;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint : public ydk::Entity
{
    public:
        SubtlvsBandwidthConstraint();
        ~SubtlvsBandwidthConstraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint32
        class BandwidthConstraintsConstraints; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints
        class SubtlvsBandwidthConstraintsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::SubtlvsBandwidthConstraintsState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints> bandwidth_constraints_constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::SubtlvsBandwidthConstraintsState> subtlvs_bandwidth_constraints_state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints : public ydk::Entity
{
    public:
        BandwidthConstraintsConstraints();
        ~BandwidthConstraintsConstraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthConstraintsConstraint; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint

        ydk::YList bandwidth_constraints_constraint;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint : public ydk::Entity
{
    public:
        BandwidthConstraintsConstraint();
        ~BandwidthConstraintsConstraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_id; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint::State : public ydk::Entity
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

        ydk::YLeaf constraint_id; //type: uint32
        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::BandwidthConstraintsConstraints::BandwidthConstraintsConstraint::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::SubtlvsBandwidthConstraintsState : public ydk::Entity
{
    public:
        SubtlvsBandwidthConstraintsState();
        ~SubtlvsBandwidthConstraintsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsBandwidthConstraints::SubtlvsBandwidthConstraint::SubtlvsBandwidthConstraintsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths : public ydk::Entity
{
    public:
        SubtlvsUnreservedBandwidths();
        ~SubtlvsUnreservedBandwidths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubtlvsUnreservedBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth

        ydk::YList subtlvs_unreserved_bandwidth;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth : public ydk::Entity
{
    public:
        SubtlvsUnreservedBandwidth();
        ~SubtlvsUnreservedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State : public ydk::Entity
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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsUnreservedBandwidths::SubtlvsUnreservedBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress : public ydk::Entity
{
    public:
        SubtlvsIpv4NeighborAddress();
        ~SubtlvsIpv4NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv4NeighborAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric : public ydk::Entity
{
    public:
        SubtlvsTeDefaultMetric();
        ~SubtlvsTeDefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsTeDefaultMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress : public ydk::Entity
{
    public:
        SubtlvsIpv6InterfaceAddress();
        ~SubtlvsIpv6InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsIpv6InterfaceAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup : public ydk::Entity
{
    public:
        SubtlvsAdminGroup();
        ~SubtlvsAdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State : public ydk::Entity
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

        ydk::YLeafList admin_group; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsAdminGroup::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::MtIsnNeighborsSubtlvsState : public ydk::Entity
{
    public:
        MtIsnNeighborsSubtlvsState();
        ~MtIsnNeighborsSubtlvsState();

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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::MtIsnNeighborsSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids : public ydk::Entity
{
    public:
        SubtlvsLanAdjacencySids();
        ~SubtlvsLanAdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubtlvsLanAdjacencySid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid

        ydk::YList subtlvs_lan_adjacency_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid : public ydk::Entity
{
    public:
        SubtlvsLanAdjacencySid();
        ~SubtlvsLanAdjacencySid();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State : public ydk::Entity
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
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspLanAdjacencySidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsLanAdjacencySids::SubtlvsLanAdjacencySid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup : public ydk::Entity
{
    public:
        SubtlvsExtendedAdminGroup();
        ~SubtlvsExtendedAdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State : public ydk::Entity
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

        ydk::YLeafList extended_admin_group; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsSubtlvs::MtIsnNeighborsSubtlv::SubtlvsExtendedAdminGroup::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState : public ydk::Entity
{
    public:
        MtIsnNeighborsState();
        ~MtIsnNeighborsState();

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
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs : public ydk::Entity
{
    public:
        MtIsnNeighborsUndefinedSubtlvs();
        ~MtIsnNeighborsUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIsnNeighborsUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv

        ydk::YList mt_isn_neighbors_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv : public ydk::Entity
{
    public:
        MtIsnNeighborsUndefinedSubtlv();
        ~MtIsnNeighborsUndefinedSubtlv();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn::MtIsnNeighbors::MtIsnNeighbor::MtIsnNeighborsUndefinedSubtlvs::MtIsnNeighborsUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs : public ydk::Entity
{
    public:
        Ipv6Srlgs();
        ~Ipv6Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Srlg; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg

        ydk::YList ipv6_srlg;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg : public ydk::Entity
{
    public:
        Ipv6Srlg();
        ~Ipv6Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_number; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State : public ydk::Entity
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

        ydk::YLeaf instance_number; //type: uint32
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf psn_number; //type: uint8
        ydk::YLeaf ipv6_interface_address; //type: string
        ydk::YLeaf ipv6_neighbor_address; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspIpv6SrlgStateFlagsEnum
        ydk::YLeafList srlg_value; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs::Ipv6Srlg::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState : public ydk::Entity
{
    public:
        TlvsState();
        ~TlvsState();

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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi : public ydk::Entity
{
    public:
        PurgeOi();
        ~PurgeOi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State : public ydk::Entity
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

        ydk::YLeaf system_id_count; //type: uint8
        ydk::YLeaf source_system_id; //type: string
        ydk::YLeaf received_system_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State : public ydk::Entity
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

        ydk::YLeafList host_name; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability : public ydk::Entity
{
    public:
        Ipv6Reachability();
        ~Ipv6Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6ReachabilityPrefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes> ipv6_reachability_prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixes();
        ~Ipv6ReachabilityPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6ReachabilityPrefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe

        ydk::YList ipv6_reachability_prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixe();
        ~Ipv6ReachabilityPrefixe();

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
        class Ipv6ReachabilityPrefixesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState
        class Ipv6ReachabilityPrefixesSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs
        class Ipv6ReachabilityPrefixesUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState> ipv6_reachability_prefixes_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs> ipv6_reachability_prefixes_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs> ipv6_reachability_prefixes_undefined_subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesState();
        ~Ipv6ReachabilityPrefixesState();

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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesSubtlvs();
        ~Ipv6ReachabilityPrefixesSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6ReachabilityPrefixesSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv

        ydk::YList ipv6_reachability_prefixes_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesSubtlv();
        ~Ipv6ReachabilityPrefixesSubtlv();

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
        class SubtlvsTag; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag
        class SubtlvsTag64; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64
        class SubtlvsPrefixSids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids
        class SubtlvsIpv4SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId
        class Ipv6ReachabilityPrefixesSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState
        class SubtlvsIpv6SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId
        class SubtlvsFlags; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag> subtlvs_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64> subtlvs_tag64;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids> subtlvs_prefix_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId> subtlvs_ipv4_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState> ipv6_reachability_prefixes_subtlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId> subtlvs_ipv6_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags> subtlvs_flags;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag : public ydk::Entity
{
    public:
        SubtlvsTag();
        ~SubtlvsTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64 : public ydk::Entity
{
    public:
        SubtlvsTag64();
        ~SubtlvsTag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsTag64::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids : public ydk::Entity
{
    public:
        SubtlvsPrefixSids();
        ~SubtlvsPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubtlvsPrefixSid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid

        ydk::YList subtlvs_prefix_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid : public ydk::Entity
{
    public:
        SubtlvsPrefixSid();
        ~SubtlvsPrefixSid();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsPrefixSids::SubtlvsPrefixSid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId : public ydk::Entity
{
    public:
        SubtlvsIpv4SourceRouterId();
        ~SubtlvsIpv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State : public ydk::Entity
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
        ydk::YLeaf router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv4SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesSubtlvsState();
        ~Ipv6ReachabilityPrefixesSubtlvsState();

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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::Ipv6ReachabilityPrefixesSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId : public ydk::Entity
{
    public:
        SubtlvsIpv6SourceRouterId();
        ~SubtlvsIpv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State : public ydk::Entity
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
        ydk::YLeaf router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsIpv6SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags : public ydk::Entity
{
    public:
        SubtlvsFlags();
        ~SubtlvsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesSubtlvs::Ipv6ReachabilityPrefixesSubtlv::SubtlvsFlags::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesUndefinedSubtlvs();
        ~Ipv6ReachabilityPrefixesUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6ReachabilityPrefixesUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv

        ydk::YList ipv6_reachability_prefixes_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv : public ydk::Entity
{
    public:
        Ipv6ReachabilityPrefixesUndefinedSubtlv();
        ~Ipv6ReachabilityPrefixesUndefinedSubtlv();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability::Ipv6ReachabilityPrefixes::Ipv6ReachabilityPrefixe::Ipv6ReachabilityPrefixesUndefinedSubtlvs::Ipv6ReachabilityPrefixesUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId : public ydk::Entity
{
    public:
        Ipv6TeRouterId();
        ~Ipv6TeRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability : public ydk::Entity
{
    public:
        Ipv4InternalReachability();
        ~Ipv4InternalReachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes> prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe

        ydk::YList prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe : public ydk::Entity
{
    public:
        Prefixe();
        ~Prefixe();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State
        class DefaultMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric
        class DelayMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric
        class ExpenseMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric
        class ErrorMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric> delay_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric> expense_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric> error_metric;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DefaultMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::DelayMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ExpenseMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability::Prefixes::Prefixe::ErrorMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses : public ydk::Entity
{
    public:
        Ipv6InterfaceAddresses();
        ~Ipv6InterfaceAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability : public ydk::Entity
{
    public:
        ExtendedIsReachability();
        ~ExtendedIsReachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedIsReachabilityNeighbors; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors> extended_is_reachability_neighbors;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors : public ydk::Entity
{
    public:
        ExtendedIsReachabilityNeighbors();
        ~ExtendedIsReachabilityNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedIsReachabilityNeighbor; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor

        ydk::YList extended_is_reachability_neighbor;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor : public ydk::Entity
{
    public:
        ExtendedIsReachabilityNeighbor();
        ~ExtendedIsReachabilityNeighbor();

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
        class NeighborsSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs
        class NeighborsUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs
        class NeighborsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs> neighbors_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs> neighbors_undefined_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState> neighbors_state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs : public ydk::Entity
{
    public:
        NeighborsSubtlvs();
        ~NeighborsSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborsSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv

        ydk::YList neighbors_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv : public ydk::Entity
{
    public:
        NeighborsSubtlv();
        ~NeighborsSubtlv();

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
        class MaxLinkBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth
        class Ipv6NeighborAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress
        class Ipv6InterfaceAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress
        class LanAdjacencySids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids
        class AdjacencySids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids
        class TeDefaultMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric
        class AdminGroup; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup
        class MaxReservableLinkBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth
        class ExtendedAdminGroup; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup
        class UnreservedBandwidths; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths
        class Ipv4InterfaceAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress
        class Ipv4NeighborAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress
        class BandwidthConstraints; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints
        class NeighborsSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::NeighborsSubtlvsState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth> max_link_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress> ipv6_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress> ipv6_interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids> lan_adjacency_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids> adjacency_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric> te_default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup> admin_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth> max_reservable_link_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup> extended_admin_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths> unreserved_bandwidths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress> ipv4_interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress> ipv4_neighbor_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints> bandwidth_constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::NeighborsSubtlvsState> neighbors_subtlvs_state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth : public ydk::Entity
{
    public:
        MaxLinkBandwidth();
        ~MaxLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State : public ydk::Entity
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

        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxLinkBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress : public ydk::Entity
{
    public:
        Ipv6NeighborAddress();
        ~Ipv6NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6NeighborAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress : public ydk::Entity
{
    public:
        Ipv6InterfaceAddress();
        ~Ipv6InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv6InterfaceAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids : public ydk::Entity
{
    public:
        LanAdjacencySids();
        ~LanAdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LanAdjacencySid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid

        ydk::YList lan_adjacency_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid : public ydk::Entity
{
    public:
        LanAdjacencySid();
        ~LanAdjacencySid();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State : public ydk::Entity
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
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspLanAdjacencySidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::LanAdjacencySids::LanAdjacencySid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids : public ydk::Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjacencySid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid

        ydk::YList adjacency_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State : public ydk::Entity
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
        ydk::YLeaf weight; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspAdjacencySidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdjacencySids::AdjacencySid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric : public ydk::Entity
{
    public:
        TeDefaultMetric();
        ~TeDefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::TeDefaultMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup : public ydk::Entity
{
    public:
        AdminGroup();
        ~AdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State : public ydk::Entity
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

        ydk::YLeafList admin_group; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::AdminGroup::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth : public ydk::Entity
{
    public:
        MaxReservableLinkBandwidth();
        ~MaxReservableLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State : public ydk::Entity
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

        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::MaxReservableLinkBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup : public ydk::Entity
{
    public:
        ExtendedAdminGroup();
        ~ExtendedAdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State : public ydk::Entity
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

        ydk::YLeafList extended_admin_group; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::ExtendedAdminGroup::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths : public ydk::Entity
{
    public:
        UnreservedBandwidths();
        ~UnreservedBandwidths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnreservedBandwidth; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth

        ydk::YList unreserved_bandwidth;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth : public ydk::Entity
{
    public:
        UnreservedBandwidth();
        ~UnreservedBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State : public ydk::Entity
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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::UnreservedBandwidths::UnreservedBandwidth::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress : public ydk::Entity
{
    public:
        Ipv4InterfaceAddress();
        ~Ipv4InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4InterfaceAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress : public ydk::Entity
{
    public:
        Ipv4NeighborAddress();
        ~Ipv4NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::Ipv4NeighborAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints : public ydk::Entity
{
    public:
        BandwidthConstraints();
        ~BandwidthConstraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthConstraint; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint

        ydk::YList bandwidth_constraint;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint : public ydk::Entity
{
    public:
        BandwidthConstraint();
        ~BandwidthConstraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint32
        class Constraints; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints
        class BandwidthConstraintsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints> constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState> bandwidth_constraints_state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints : public ydk::Entity
{
    public:
        Constraints();
        ~Constraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Constraint; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint

        ydk::YList constraint;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint : public ydk::Entity
{
    public:
        Constraint();
        ~Constraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_id; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State : public ydk::Entity
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

        ydk::YLeaf constraint_id; //type: uint32
        ydk::YLeaf bandwidth; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState : public ydk::Entity
{
    public:
        BandwidthConstraintsState();
        ~BandwidthConstraintsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraintsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::NeighborsSubtlvsState : public ydk::Entity
{
    public:
        NeighborsSubtlvsState();
        ~NeighborsSubtlvsState();

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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsSubtlvs::NeighborsSubtlv::NeighborsSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs : public ydk::Entity
{
    public:
        NeighborsUndefinedSubtlvs();
        ~NeighborsUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborsUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv

        ydk::YList neighbors_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv : public ydk::Entity
{
    public:
        NeighborsUndefinedSubtlv();
        ~NeighborsUndefinedSubtlv();

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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsUndefinedSubtlvs::NeighborsUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState : public ydk::Entity
{
    public:
        NeighborsState();
        ~NeighborsState();

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
        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability::ExtendedIsReachabilityNeighbors::ExtendedIsReachabilityNeighbor::NeighborsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds : public ydk::Entity
{
    public:
        InstanceIds();
        ~InstanceIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId

        ydk::YList instance_id;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State : public ydk::Entity
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

        ydk::YLeaf instance_id; //type: uint16
        ydk::YLeafList topology_id; //type: list of  uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds::InstanceId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs : public ydk::Entity
{
    public:
        Ipv4Srlgs();
        ~Ipv4Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Srlg; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg

        ydk::YList ipv4_srlg;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg : public ydk::Entity
{
    public:
        Ipv4Srlg();
        ~Ipv4Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_number; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State : public ydk::Entity
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

        ydk::YLeaf instance_number; //type: uint32
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf psn_number; //type: uint8
        ydk::YLeaf ipv4_interface_address; //type: string
        ydk::YLeaf ipv4_neighbor_address; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspStateFlagsEnum
        ydk::YLeafList srlg_value; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs::Ipv4Srlg::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability : public ydk::Entity
{
    public:
        IsReachability();
        ~IsReachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors> neighbors;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors : public ydk::Entity
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

        class Neighbor; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor : public ydk::Entity
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
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State
        class DefaultMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric
        class DelayMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric
        class ExpenseMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric
        class ErrorMetric; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric> delay_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric> expense_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric> error_metric;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State : public ydk::Entity
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

        ydk::YLeaf system_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DefaultMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::DelayMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ExpenseMetric::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric : public ydk::Entity
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

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State : public ydk::Entity
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

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability::Neighbors::Neighbor::ErrorMetric::State


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_1_ */

