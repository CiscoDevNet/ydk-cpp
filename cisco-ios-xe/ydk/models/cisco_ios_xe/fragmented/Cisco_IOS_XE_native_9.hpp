#ifndef _CISCO_IOS_XE_NATIVE_9_
#define _CISCO_IOS_XE_NATIVE_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr : public ydk::Entity
{
    public:
        Ipv4Addr();
        ~Ipv4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_des; //type: string
        class Vrf_; //type: Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_
        class Ipv4; //type: Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4

        ydk::YList vrf;
        ydk::YList ipv4;
        
}; // Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr


class Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_ : public ydk::Entity
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
        ydk::YLeaf ipv4_source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf unassociate; //type: empty

}; // Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Vrf_


class Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf unassociate; //type: empty

}; // Native::Ip::Route::Static::Bfd::Vrf::Ipv4Addr::Ipv4


class Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop : public ydk::Entity
{
    public:
        InstallRoutesRecurseViaNexthop();
        ~InstallRoutesRecurseViaNexthop();

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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf install_routes_recurse_via_nexthop; //type: empty
        class RecurseNexthop; //type: Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop> recurse_nexthop;
        
}; // Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop


class Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop : public ydk::Entity
{
    public:
        RecurseNexthop();
        ~RecurseNexthop();

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

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf multicast; //type: empty
        class Topology; //type: Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology
        class Vrf; //type: Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf

        ydk::YList topology;
        ydk::YList vrf;
        
}; // Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop


class Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf multicast; //type: empty

}; // Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Topology


class Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_id; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf multicast; //type: empty

}; // Native::Ip::Route::Static::InstallRoutesRecurseViaNexthop::RecurseNexthop::Vrf


class Native::Ip::Route::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        class Topology; //type: Native::Ip::Route::Vrf::Topology
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList

        ydk::YList topology;
        ydk::YList ip_route_interface_forwarding_list;
        
}; // Native::Ip::Route::Vrf


class Native::Ip::Route::Vrf::Topology : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList

        ydk::YList ip_route_interface_forwarding_list;
        
}; // Native::Ip::Route::Vrf::Topology


class Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList : public ydk::Entity
{
    public:
        IpRouteInterfaceForwardingList();
        ~IpRouteInterfaceForwardingList();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        class FwdList; //type: Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList

        ydk::YList fwd_list;
        
}; // Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList


class Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList : public ydk::Entity
{
    public:
        FwdList();
        ~FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16
        class InterfaceNextHop; //type: Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop

        ydk::YList interface_next_hop;
                class Fwd;

}; // Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop : public ydk::Entity
{
    public:
        InterfaceNextHop();
        ~InterfaceNextHop();

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
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16

}; // Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop


class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList : public ydk::Entity
{
    public:
        IpRouteInterfaceForwardingList();
        ~IpRouteInterfaceForwardingList();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        class FwdList; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList

        ydk::YList fwd_list;
        
}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList


class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList : public ydk::Entity
{
    public:
        FwdList();
        ~FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16
        class InterfaceNextHop; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop

        ydk::YList interface_next_hop;
                class Fwd;

}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop : public ydk::Entity
{
    public:
        InterfaceNextHop();
        ~InterfaceNextHop();

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
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16

}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop


class Native::Ip::Route::Topology : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::Topology::IpRouteInterfaceForwardingList

        ydk::YList ip_route_interface_forwarding_list;
        
}; // Native::Ip::Route::Topology


class Native::Ip::Route::Topology::IpRouteInterfaceForwardingList : public ydk::Entity
{
    public:
        IpRouteInterfaceForwardingList();
        ~IpRouteInterfaceForwardingList();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        class FwdList; //type: Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList

        ydk::YList fwd_list;
        
}; // Native::Ip::Route::Topology::IpRouteInterfaceForwardingList


class Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList : public ydk::Entity
{
    public:
        FwdList();
        ~FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16
        class InterfaceNextHop; //type: Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop

        ydk::YList interface_next_hop;
                class Fwd;

}; // Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop : public ydk::Entity
{
    public:
        InterfaceNextHop();
        ~InterfaceNextHop();

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
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16

}; // Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop


class Native::Ip::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

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

        class Protocol; //type: Native::Ip::Routing::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Routing::Protocol> protocol;
        
}; // Native::Ip::Routing


class Native::Ip::Routing::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        class Purge; //type: Native::Ip::Routing::Protocol::Purge

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Routing::Protocol::Purge> purge;
        
}; // Native::Ip::Routing::Protocol


class Native::Ip::Routing::Protocol::Purge : public ydk::Entity
{
    public:
        Purge();
        ~Purge();

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

        ydk::YLeaf interface; //type: boolean

}; // Native::Ip::Routing::Protocol::Purge


class Native::Ip::ExplicitPath : public ydk::Entity
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

        class Identifier; //type: Native::Ip::ExplicitPath::Identifier
        class Name; //type: Native::Ip::ExplicitPath::Name

        ydk::YList identifier;
        ydk::YList name;
        
}; // Native::Ip::ExplicitPath


class Native::Ip::ExplicitPath::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

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

        ydk::YLeaf pnum; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Index; //type: Native::Ip::ExplicitPath::Identifier::Index

        ydk::YList index_;
                class Mode;

}; // Native::Ip::ExplicitPath::Identifier


class Native::Ip::ExplicitPath::Identifier::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint32
        ydk::YLeaf next_label; //type: uint32
        ydk::YLeaf exclude_address; //type: string
        ydk::YLeaf exclude_srlg; //type: string
        class NextAddress; //type: Native::Ip::ExplicitPath::Identifier::Index::NextAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Identifier::Index::NextAddress> next_address;
        
}; // Native::Ip::ExplicitPath::Identifier::Index


class Native::Ip::ExplicitPath::Identifier::Index::NextAddress : public ydk::Entity
{
    public:
        NextAddress();
        ~NextAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loose; //type: empty
        ydk::YLeaf ipv4; //type: string

}; // Native::Ip::ExplicitPath::Identifier::Index::NextAddress


class Native::Ip::ExplicitPath::Name : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pname; //type: string
        ydk::YLeaf mode; //type: Mode
        class Index; //type: Native::Ip::ExplicitPath::Name::Index

        ydk::YList index_;
                class Mode;

}; // Native::Ip::ExplicitPath::Name


class Native::Ip::ExplicitPath::Name::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint32
        ydk::YLeaf next_label; //type: uint32
        ydk::YLeaf exclude_address; //type: string
        ydk::YLeaf exclude_srlg; //type: string
        class NextAddress; //type: Native::Ip::ExplicitPath::Name::Index::NextAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Name::Index::NextAddress> next_address;
        
}; // Native::Ip::ExplicitPath::Name::Index


class Native::Ip::ExplicitPath::Name::Index::NextAddress : public ydk::Entity
{
    public:
        NextAddress();
        ~NextAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loose; //type: empty
        ydk::YLeaf ipv4; //type: string

}; // Native::Ip::ExplicitPath::Name::Index::NextAddress


class Native::Ip::Scp : public ydk::Entity
{
    public:
        Scp();
        ~Scp();

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

        class Server; //type: Native::Ip::Scp::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Scp::Server> server;
        
}; // Native::Ip::Scp


class Native::Ip::Scp::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

}; // Native::Ip::Scp::Server


class Native::Ip::Spd : public ydk::Entity
{
    public:
        Spd();
        ~Spd();

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

        ydk::YLeaf mode; //type: Mode
        class Queue; //type: Native::Ip::Spd::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Spd::Queue> queue;
                class Mode;

}; // Native::Ip::Spd


class Native::Ip::Spd::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

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

        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf min_threshold; //type: uint16

}; // Native::Ip::Spd::Queue


class Native::Ip::Bootp : public ydk::Entity
{
    public:
        Bootp();
        ~Bootp();

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

        ydk::YLeaf server; //type: boolean

}; // Native::Ip::Bootp


class Native::Ip::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

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

        ydk::YLeaf authentication_retries; //type: uint8
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf precedence; //type: uint8
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf time_out; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf maxstartups; //type: uint8
        class Client; //type: Native::Ip::Ssh::Client
        class Logging; //type: Native::Ip::Ssh::Logging
        class PubkeyChain; //type: Native::Ip::Ssh::PubkeyChain
        class Rsa; //type: Native::Ip::Ssh::Rsa
        class Server; //type: Native::Ip::Ssh::Server
        class Port; //type: Native::Ip::Ssh::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain> pubkey_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Rsa> rsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server> server;
        ydk::YList port;
        
}; // Native::Ip::Ssh


class Native::Ip::Ssh::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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

        class Algorithm; //type: Native::Ip::Ssh::Client::Algorithm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Client::Algorithm> algorithm;
        
}; // Native::Ip::Ssh::Client


class Native::Ip::Ssh::Client::Algorithm : public ydk::Entity
{
    public:
        Algorithm();
        ~Algorithm();

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

        class Encryption; //type: Native::Ip::Ssh::Client::Algorithm::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Client::Algorithm::Encryption> encryption;
        
}; // Native::Ip::Ssh::Client::Algorithm


class Native::Ip::Ssh::Client::Algorithm::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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

        ydk::YLeaf aes128_ctr; //type: empty
        ydk::YLeaf aes192_ctr; //type: empty
        ydk::YLeaf aes256_ctr; //type: empty

}; // Native::Ip::Ssh::Client::Algorithm::Encryption


class Native::Ip::Ssh::Logging : public ydk::Entity
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

        ydk::YLeaf events; //type: empty

}; // Native::Ip::Ssh::Logging


class Native::Ip::Ssh::PubkeyChain : public ydk::Entity
{
    public:
        PubkeyChain();
        ~PubkeyChain();

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

        class Username; //type: Native::Ip::Ssh::PubkeyChain::Username

        ydk::YList username;
        
}; // Native::Ip::Ssh::PubkeyChain


class Native::Ip::Ssh::PubkeyChain::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

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
        class KeyHash; //type: Native::Ip::Ssh::PubkeyChain::Username::KeyHash

        ydk::YList key_hash;
        
}; // Native::Ip::Ssh::PubkeyChain::Username


class Native::Ip::Ssh::PubkeyChain::Username::KeyHash : public ydk::Entity
{
    public:
        KeyHash();
        ~KeyHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_type; //type: KeyType
        ydk::YLeaf key_hash_value; //type: string
        class KeyType;

}; // Native::Ip::Ssh::PubkeyChain::Username::KeyHash


class Native::Ip::Ssh::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

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

        ydk::YLeaf keypair_name; //type: string

}; // Native::Ip::Ssh::Rsa


class Native::Ip::Ssh::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Algorithm; //type: Native::Ip::Ssh::Server::Algorithm
        class Peruser; //type: Native::Ip::Ssh::Server::Peruser

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Peruser> peruser;
        
}; // Native::Ip::Ssh::Server


class Native::Ip::Ssh::Server::Algorithm : public ydk::Entity
{
    public:
        Algorithm();
        ~Algorithm();

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

        class Encryption; //type: Native::Ip::Ssh::Server::Algorithm::Encryption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Algorithm::Encryption> encryption;
        
}; // Native::Ip::Ssh::Server::Algorithm


class Native::Ip::Ssh::Server::Algorithm::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

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

        ydk::YLeaf aes128_ctr; //type: empty
        ydk::YLeaf aes192_ctr; //type: empty
        ydk::YLeaf aes256_ctr; //type: empty

}; // Native::Ip::Ssh::Server::Algorithm::Encryption


class Native::Ip::Ssh::Server::Peruser : public ydk::Entity
{
    public:
        Peruser();
        ~Peruser();

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

        class Session; //type: Native::Ip::Ssh::Server::Peruser::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Server::Peruser::Session> session;
        
}; // Native::Ip::Ssh::Server::Peruser


class Native::Ip::Ssh::Server::Peruser::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf limit; //type: uint8

}; // Native::Ip::Ssh::Server::Peruser::Session


class Native::Ip::Ssh::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf port_no; //type: uint16
        ydk::YLeaf low_rotary; //type: uint8
        ydk::YLeaf high_rotary; //type: uint8

}; // Native::Ip::Ssh::Port


class Native::Ip::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf selective_ack; //type: empty
        ydk::YLeaf synwait_time; //type: uint16
        ydk::YLeaf timestamp; //type: empty
        ydk::YLeaf window_size; //type: uint32
        class PathMtuDiscovery; //type: Native::Ip::Tcp::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tcp::PathMtuDiscovery> path_mtu_discovery; // presence node
        
}; // Native::Ip::Tcp


class Native::Ip::Tcp::PathMtuDiscovery : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf age_timer; //type: one of uint8, enumeration
        class AgeTimer;

}; // Native::Ip::Tcp::PathMtuDiscovery


class Native::Ip::Tftp : public ydk::Entity
{
    public:
        Tftp();
        ~Tftp();

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

        ydk::YLeaf blocksize; //type: uint16
        class BootInterface; //type: Native::Ip::Tftp::BootInterface
        class SourceInterface; //type: Native::Ip::Tftp::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface> boot_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface> source_interface;
        
}; // Native::Ip::Tftp


class Native::Ip::Tftp::BootInterface : public ydk::Entity
{
    public:
        BootInterface();
        ~BootInterface();

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
        class ATMSubinterface; //type: Native::Ip::Tftp::BootInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tftp::BootInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tftp::BootInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::BootInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::BootInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::BootInterface


class Native::Ip::Tftp::BootInterface::ATMSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Tftp::BootInterface::ATMSubinterface


class Native::Ip::Tftp::BootInterface::ATMACRsubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Tftp::BootInterface::ATMACRsubinterface


class Native::Ip::Tftp::BootInterface::LISPSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Tftp::BootInterface::LISPSubinterface


class Native::Ip::Tftp::BootInterface::PortChannelSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Tftp::BootInterface::PortChannelSubinterface


class Native::Ip::Tftp::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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
        class ATMSubinterface; //type: Native::Ip::Tftp::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tftp::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tftp::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tftp::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tftp::SourceInterface


class Native::Ip::Tftp::SourceInterface::ATMSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Tftp::SourceInterface::ATMSubinterface


class Native::Ip::Tftp::SourceInterface::ATMACRsubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Tftp::SourceInterface::ATMACRsubinterface


class Native::Ip::Tftp::SourceInterface::LISPSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Tftp::SourceInterface::LISPSubinterface


class Native::Ip::Tftp::SourceInterface::PortChannelSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Tftp::SourceInterface::PortChannelSubinterface


class Native::Ip::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

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

        ydk::YLeaf match_local_traffic; //type: empty
        ydk::YLeaf persistent; //type: empty
        class Standard; //type: Native::Ip::AccessList::Standard
        class RoleBased; //type: Native::Ip::AccessList::RoleBased
        class Extended; //type: Native::Ip::AccessList::Extended
        class Helper; //type: Native::Ip::AccessList::Helper
        class LogUpdate; //type: Native::Ip::AccessList::LogUpdate
        class Logging; //type: Native::Ip::AccessList::Logging
        class Resequence; //type: Native::Ip::AccessList::Resequence

        ydk::YList standard;
        ydk::YList role_based;
        ydk::YList extended;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Helper> helper;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::LogUpdate> log_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Resequence> resequence;
        
}; // Native::Ip::AccessList


class Native::Ip::AccessList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

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

        ydk::YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::Standard::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default> default_;
        
}; // Native::Ip::AccessList::Standard


class Native::Ip::AccessList::Standard::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::Standard::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::Standard::Default


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

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
        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::RoleBased::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default> default_;
        
}; // Native::Ip::AccessList::RoleBased


class Native::Ip::AccessList::RoleBased::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny
        class Src; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src
        class Dst; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src> src;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst> dst;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src : public ydk::Entity
{
    public:
        Src();
        ~Src();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        class Dst; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst> dst;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Src::Dst


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Dst


class Native::Ip::AccessList::RoleBased::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny
        class Src; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src
        class Dst; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src> src;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst> dst;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src : public ydk::Entity
{
    public:
        Src();
        ~Src();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        class Dst; //type: Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst> dst;
        
}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Src::Dst


class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst : public ydk::Entity
{
    public:
        Dst();
        ~Dst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration

}; // Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Dst


class Native::Ip::AccessList::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

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

        ydk::YLeaf name; //type: one of uint16, string
        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule
        class Default; //type: Native::Ip::AccessList::Extended::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default> default_;
        
}; // Native::Ip::AccessList::Extended


class Native::Ip::AccessList::Extended::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ip::AccessList::Extended::Default


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl> ttl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny> match_any;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
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

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Helper : public ydk::Entity
{
    public:
        Helper();
        ~Helper();

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

        ydk::YLeaf egress; //type: empty
        ydk::YLeaf check; //type: empty

}; // Native::Ip::AccessList::Helper


class Native::Ip::AccessList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

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

        ydk::YLeaf threshold; //type: uint64

}; // Native::Ip::AccessList::LogUpdate


class Native::Ip::AccessList::Logging : public ydk::Entity
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

        ydk::YLeaf hash_generation; //type: empty
        ydk::YLeaf interval; //type: uint64

}; // Native::Ip::AccessList::Logging


class Native::Ip::AccessList::Resequence : public ydk::Entity
{
    public:
        Resequence();
        ~Resequence();

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

        ydk::YLeaf numbers; //type: union
        ydk::YLeaf start_seq_no; //type: uint64
        ydk::YLeaf step_seq_no; //type: uint64

}; // Native::Ip::AccessList::Resequence


class Native::Ip::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

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

        class Tracking; //type: Native::Ip::Device::Tracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking> tracking; // presence node
        
}; // Native::Ip::Device


class Native::Ip::Device::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

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

        ydk::YLeaf trace_buffer; //type: empty
        class Probe; //type: Native::Ip::Device::Tracking::Probe

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe> probe;
        
}; // Native::Ip::Device::Tracking


class Native::Ip::Device::Tracking::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

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

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf interval; //type: uint32
        class AutoSource; //type: Native::Ip::Device::Tracking::Probe::AutoSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource> auto_source; // presence node
        
}; // Native::Ip::Device::Tracking::Probe


class Native::Ip::Device::Tracking::Probe::AutoSource : public ydk::Entity
{
    public:
        AutoSource();
        ~AutoSource();

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

        ydk::YLeaf override; //type: empty
        class Fallback; //type: Native::Ip::Device::Tracking::Probe::AutoSource::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource::Fallback> fallback;
        
}; // Native::Ip::Device::Tracking::Probe::AutoSource


class Native::Ip::Device::Tracking::Probe::AutoSource::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Ip::Device::Tracking::Probe::AutoSource::Fallback


class Native::Ip::Msdp : public ydk::Entity
{
    public:
        Msdp();
        ~Msdp();

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

        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::MeshGroup
        class Password; //type: Native::Ip::Msdp::Password
        class Redistribute; //type: Native::Ip::Msdp::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::TtlThreshold
        class Vrf; //type: Native::Ip::Msdp::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::TtlThreshold> ttl_threshold;
        ydk::YList vrf;
                class Rpf;

}; // Native::Ip::Msdp


class Native::Ip::Msdp::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Peer


class Native::Ip::Msdp::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::DefaultPeer


class Native::Ip::Msdp::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Description


class Native::Ip::Msdp::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::FilterSaRequest


class Native::Ip::Msdp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Keepalive


class Native::Ip::Msdp::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

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
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::MeshGroup


class Native::Ip::Msdp::Password : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Peer; //type: Native::Ip::Msdp::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Password


class Native::Ip::Msdp::Password::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Password::Peer


class Native::Ip::Msdp::Redistribute : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Redistribute


class Native::Ip::Msdp::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

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

        class In; //type: Native::Ip::Msdp::SaFilter::In
        class Out; //type: Native::Ip::Msdp::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::SaFilter


class Native::Ip::Msdp::SaFilter::In : public ydk::Entity
{
    public:
        In();
        ~In();

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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::In


class Native::Ip::Msdp::SaFilter::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::Out


class Native::Ip::Msdp::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::SaLimit


class Native::Ip::Msdp::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

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

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Shutdown


class Native::Ip::Msdp::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

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

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::TtlThreshold


class Native::Ip::Msdp::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf cache_rejected_sa; //type: uint32
        ydk::YLeaf cache_sa_state; //type: empty
        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf rpf; //type: Rpf
        ydk::YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Vrf::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::Vrf::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Vrf::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::Vrf::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Vrf::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::Vrf::MeshGroup
        class Password; //type: Native::Ip::Msdp::Vrf::Password
        class Redistribute; //type: Native::Ip::Msdp::Vrf::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::Vrf::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::Vrf::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Vrf::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::Vrf::TtlThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::DefaultPeer> default_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Description> description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::FilterSaRequest> filter_sa_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::MeshGroup> mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter> sa_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaLimit> sa_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Shutdown> shutdown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::TtlThreshold> ttl_threshold;
                class Rpf;

}; // Native::Ip::Msdp::Vrf


class Native::Ip::Msdp::Vrf::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf connect_source; //type: string
        ydk::YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Vrf::Peer


class Native::Ip::Msdp::Vrf::DefaultPeer : public ydk::Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::Vrf::DefaultPeer


class Native::Ip::Msdp::Vrf::Description : public ydk::Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf description; //type: string

}; // Native::Ip::Msdp::Vrf::Description


class Native::Ip::Msdp::Vrf::FilterSaRequest : public ydk::Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::Vrf::FilterSaRequest


class Native::Ip::Msdp::Vrf::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf keepalive; //type: uint8
        ydk::YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Vrf::Keepalive


class Native::Ip::Msdp::Vrf::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

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
        ydk::YLeaf addr; //type: string

}; // Native::Ip::Msdp::Vrf::MeshGroup


class Native::Ip::Msdp::Vrf::Password : public ydk::Entity
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

        class Peer; //type: Native::Ip::Msdp::Vrf::Password::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Vrf::Password


class Native::Ip::Msdp::Vrf::Password::Peer : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Msdp::Vrf::Password::Peer


class Native::Ip::Msdp::Vrf::Redistribute : public ydk::Entity
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

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Vrf::Redistribute


class Native::Ip::Msdp::Vrf::SaFilter : public ydk::Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Ip::Msdp::Vrf::SaFilter::In
        class Out; //type: Native::Ip::Msdp::Vrf::SaFilter::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::Vrf::SaFilter


class Native::Ip::Msdp::Vrf::SaFilter::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::In


class Native::Ip::Msdp::Vrf::SaFilter::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rp_list; //type: one of uint16, string
        ydk::YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::Out


class Native::Ip::Msdp::Vrf::SaLimit : public ydk::Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::Vrf::SaLimit


class Native::Ip::Msdp::Vrf::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Vrf::Shutdown


class Native::Ip::Msdp::Vrf::TtlThreshold : public ydk::Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_addr; //type: string
        ydk::YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::Vrf::TtlThreshold

class Native::Ip::Route::Vrf::Topology::IpRouteInterfaceForwardingList::FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ip::Route::Topology::IpRouteInterfaceForwardingList::FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ip::ExplicitPath::Identifier::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Ip::ExplicitPath::Name::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Ip::Spd::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;

};

class Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssh_rsa;

};

class Native::Ip::Tcp::PathMtuDiscovery::AgeTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::Msdp::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};

class Native::Ip::Msdp::Vrf::Rpf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3618;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_9_ */

