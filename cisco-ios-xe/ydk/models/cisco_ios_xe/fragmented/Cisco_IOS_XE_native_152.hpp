#ifndef _CISCO_IOS_XE_NATIVE_152_
#define _CISCO_IOS_XE_NATIVE_152_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_145.hpp"
#include "Cisco_IOS_XE_native_146.hpp"
#include "Cisco_IOS_XE_native_149.hpp"
#include "Cisco_IOS_XE_native_151.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::DefaultInformation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::AdmDistance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::Bgp_> bgp;
        ydk::YList adm_distance;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extern_as; //type: uint16
        ydk::YLeaf internal_as; //type: uint16
        ydk::YLeaf local; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::AdmDistance : public ydk::Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf wildbits; //type: string
        ydk::YLeaf acl; //type: one of uint16, string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Distance::AdmDistance


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Path; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path
        class Vpnv4; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv4
        class Vpnv6; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv6
        class L2vpn; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::L2vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path> path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv4> vpnv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv6> vpnv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::L2vpn> l2vpn;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint8
        class Selection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path::Selection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path::Selection> selection;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path::Selection : public ydk::Entity
{
    public:
        Selection();
        ~Selection();

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

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Path::Selection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv4 : public ydk::Entity
{
    public:
        Vpnv4();
        ~Vpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf re_originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv4


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv6 : public ydk::Entity
{
    public:
        Vpnv6();
        ~Vpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf re_originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::Vpnv6


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::L2vpn : public ydk::Entity
{
    public:
        L2vpn();
        ~L2vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn; //type: empty
        ydk::YLeaf re_originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Import::L2vpn


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths : public ydk::Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ebgp; //type: uint16
        ydk::YLeaf eibgp; //type: uint16
        class Ibgp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::Ibgp
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::ExternalRtfilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::ExternalRtfilter> external_rtfilter;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unequal_cost; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::Ibgp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::ExternalRtfilter : public ydk::Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor

        ydk::YList neighbor;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf peer_group; //type: empty
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf cluster_id; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf disable_connected_check; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf remote_as; //type: one of uint32, string
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf version; //type: uint16
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::AllowasIn
        class EbgpMultihop; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver
        class HaMode; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode
        class Inherit; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Inherit
        class LocalAs; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LocalAs
        class LogNeighborChanges; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::NextHopSelf
        class Password; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Password
        class PathAttribute; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Timers
        class Transport; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver> fall_over; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode> ha_mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute> path_attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource> update_source;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::EbgpMultihop


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver : public ydk::Entity
{
    public:
        FallOver();
        ~FallOver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map_name; //type: string
        class Bfd; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver::Bfd> bfd; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver::Bfd : public ydk::Entity
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

        ydk::YLeaf multi_hop; //type: empty
        ydk::YLeaf single_hop; //type: empty
        ydk::YLeaf check_control_plane_failure; //type: empty
        ydk::YLeaf strict_mode; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::FallOver::Bfd


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::HaMode::Sso


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of uint32, string
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LocalAs


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LogNeighborChanges : public ydk::Entity
{
    public:
        LogNeighborChanges();
        ~LogNeighborChanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::LogNeighborChanges


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

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

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Password


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute : public ydk::Entity
{
    public:
        PathAttribute();
        ~PathAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discard; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard : public ydk::Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

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
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw : public ydk::Entity
{
    public:
        TreatAsWithdraw();
        ~TreatAsWithdraw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

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
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Timers : public ydk::Entity
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

        ydk::YLeaf keepalive_interval; //type: uint16
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Timers


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection_mode; //type: ConnectionMode
        ydk::YLeaf multi_session; //type: empty
        class PathMtuDiscovery; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionMode;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::TtlSecurity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf remote_as; //type: one of uint32, string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf cluster_id; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf disable_connected_check; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf version; //type: uint16
        ydk::YLeaf weight; //type: uint16
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::AllowasIn
        class EbgpMultihop; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver
        class HaMode; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode
        class Inherit; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Inherit
        class LocalAs; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LocalAs
        class LogNeighborChanges; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::MaximumPrefix
        class NextHopSelf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::NextHopSelf
        class Password; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Password
        class PathAttribute; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PeerGroup
        class RemovePrivateAs; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SendCommunity
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Timers
        class Transport; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver> fall_over; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode> ha_mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::NextHopSelf> next_hop_self; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute> path_attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PeerGroup> peer_group; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs> remove_private_as; // presence node
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource> update_source;
                class SoftReconfiguration;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::AllowasIn : public ydk::Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::EbgpMultihop


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver : public ydk::Entity
{
    public:
        FallOver();
        ~FallOver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map_name; //type: string
        class Bfd; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver::Bfd> bfd; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver::Bfd : public ydk::Entity
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

        ydk::YLeaf multi_hop; //type: empty
        ydk::YLeaf single_hop; //type: empty
        ydk::YLeaf check_control_plane_failure; //type: empty
        ydk::YLeaf strict_mode; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::FallOver::Bfd


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::HaMode::Sso


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_policy; //type: string
        ydk::YLeaf peer_session; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of uint32, string
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LocalAs


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LogNeighborChanges : public ydk::Entity
{
    public:
        LogNeighborChanges();
        ~LogNeighborChanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::LogNeighborChanges


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefix_no; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf restart; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::NextHopSelf : public ydk::Entity
{
    public:
        NextHopSelf();
        ~NextHopSelf();

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

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::NextHopSelf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Password


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute : public ydk::Entity
{
    public:
        PathAttribute();
        ~PathAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discard; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard : public ydk::Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

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
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw : public ydk::Entity
{
    public:
        TreatAsWithdraw();
        ~TreatAsWithdraw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType
        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

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
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::PeerGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs : public ydk::Entity
{
    public:
        RemovePrivateAs();
        ~RemovePrivateAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs::All> all; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replace_as; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RemovePrivateAs::All


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inout; //type: Inout
        ydk::YLeaf route_map_name; //type: string
        class Inout;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SendCommunity : public ydk::Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_community_where; //type: SendCommunityWhere
        class SendCommunityWhere;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer : public ydk::Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Timers : public ydk::Entity
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

        ydk::YLeaf keepalive_interval; //type: uint16
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Timers


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection_mode; //type: ConnectionMode
        ydk::YLeaf multi_session; //type: empty
        class PathMtuDiscovery; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionMode;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::TtlSecurity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf backdoor; //type: empty
        ydk::YLeaf evpn; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Network


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3
        class Rip; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Rip
        class Static; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application> application; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Odr> odr; // presence node
        ydk::YList ospf;
        ydk::YList ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static> static_; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application::Name

        ydk::YList name;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Application::Name


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of uint32, string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Connected


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Dvmrp : public ydk::Entity
{
    public:
        Dvmrp();
        ~Dvmrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Dvmrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Eigrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::IsisArea
        class Default; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::Default

        ydk::YList isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::Default> default_;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::IsisArea : public ydk::Entity
{
    public:
        IsisArea();
        ~IsisArea();

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
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::IsisArea


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::Default


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Lisp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp : public ydk::Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsoIgrpArea; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::IsoIgrpArea
        class Default; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::Default

        ydk::YList iso_igrp_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::Default> default_;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::IsoIgrpArea : public ydk::Entity
{
    public:
        IsoIgrpArea();
        ~IsoIgrpArea();

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
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::IsoIgrp::Default


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Mobile


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Odr


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Vrf_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_
        class NonVrf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf

        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf> non_vrf;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_::Match : public ydk::Entity
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


}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::Vrf_::Match


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf : public ydk::Entity
{
    public:
        NonVrf();
        ~NonVrf();

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
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf::Match : public ydk::Entity
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

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3 : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3::Match : public ydk::Entity
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

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Ospfv3::Match


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

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
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf name; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Rip


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Clns
        class Ip; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Ip> ip; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Clns


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Static::Ip


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context> context;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context : public ydk::Entity
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

        class ContextWord; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context::ContextWord

        ydk::YList context_word;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context::ContextWord : public ydk::Entity
{
    public:
        ContextWord();
        ~ContextWord();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_word; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Snmp::Context::ContextWord


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn : public ydk::Entity
{
    public:
        Ipv6Mvpn();
        ~Ipv6Mvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_> bgp;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dampening; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening> dampening; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening::Dampen : public ydk::Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_time; //type: uint8
        ydk::YLeaf reuse_time; //type: uint16
        ydk::YLeaf suppress_time; //type: uint16
        ydk::YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn::Bgp_::Dampening::Dampen


class Native::Router::Bgp::AddressFamily::NoVrf : public ydk::Entity
{
    public:
        NoVrf();
        ~NoVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4
        class Ipv6; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv6
        class Vpnv4; //type: Native::Router::Bgp::AddressFamily::NoVrf::Vpnv4
        class Vpnv6; //type: Native::Router::Bgp::AddressFamily::NoVrf::Vpnv6
        class Nsap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Nsap
        class L2vpn; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2vpn
        class Rtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter

        ydk::YList ipv4;
        ydk::YList ipv6;
        ydk::YList vpnv4;
        ydk::YList vpnv6;
        ydk::YList nsap;
        ydk::YList l2vpn;
        ydk::YList rtfilter;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4 : public ydk::Entity
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

        ydk::YLeaf af_name; //type: BgpIpv4AfType
        class Ipv4Unicast; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast
        class Ipv4Multicast; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Multicast
        class Ipv4Flowspec; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Flowspec
        class Ipv4Mvpn; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Mvpn
        class Ipv4Mdt; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Mdt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Multicast> ipv4_multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Flowspec> ipv4_flowspec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Mvpn> ipv4_mvpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Mdt> ipv4_mdt;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        class AggregateAddress; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation
        class Distance; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor
        class Network; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network
        class Redistribute; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute
        class SegmentRouting; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting
        class Snmp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp
        class TableMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap

        ydk::YList aggregate_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance> distance;
        ydk::YList distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths> maximum_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup> peer_group;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mask; //type: string
        ydk::YLeaf advertise_map; //type: string
        ydk::YLeaf as_set; //type: empty
        ydk::YLeaf attribute_map; //type: string
        ydk::YLeaf as_override; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf summary_only; //type: empty
        ydk::YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths
        class AggregateTimer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer
        class Bestpath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath
        class Dampening; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening
        class InjectMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap
        class Nexthop; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop
        class Recursion; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer> aggregate_timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening> dampening; // presence node
        ydk::YList inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install; //type: empty
        ydk::YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select : public ydk::Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_external; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range

        ydk::YList range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

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
        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer : public ydk::Entity
{
    public:
        AggregateTimer();
        ~AggregateTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf disable_timer; //type: DisableTimer
        class DisableTimer;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath : public ydk::Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgpMetric; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric
        class PrefixValidate; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate> prefix_validate;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric : public ydk::Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate : public ydk::Entity
{
    public:
        PrefixValidate();
        ~PrefixValidate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_invalid; //type: empty
        ydk::YLeaf disable; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::PeerGroup::Neighbor::Transport::ConnectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Neighbor::Transport::ConnectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::IsisArea::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec::Redistribute::Isis::Default::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::DisableTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_152_ */

