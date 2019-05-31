#ifndef _CISCO_IOS_XE_NATIVE_77_
#define _CISCO_IOS_XE_NATIVE_77_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_76.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Loopback::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Loopback::Domain


class Native::Interface::Loopback::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint32
        class Direction;

}; // Native::Interface::Loopback::HoldQueue


class Native::Interface::Loopback::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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
        ydk::YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::Loopback::Mpls::Accounting
        class Bgp; //type: Native::Interface::Loopback::Mpls::Bgp
        class Label; //type: Native::Interface::Loopback::Mpls::Label
        class Ldp; //type: Native::Interface::Loopback::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::Loopback::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::Loopback::Mpls


class Native::Interface::Loopback::Mpls::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Interface::Loopback::Mpls::Accounting::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::Loopback::Mpls::Accounting


class Native::Interface::Loopback::Mpls::Accounting::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Interface::Loopback::Mpls::Accounting::Experimental


class Native::Interface::Loopback::Mpls::Bgp : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: empty

}; // Native::Interface::Loopback::Mpls::Bgp


class Native::Interface::Loopback::Mpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Interface::Loopback::Mpls::Label


class Native::Interface::Loopback::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discovery; //type: Native::Interface::Loopback::Mpls::Ldp::Discovery
        class Igp; //type: Native::Interface::Loopback::Mpls::Ldp::Igp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Ldp::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Ldp::Igp> igp;
        
}; // Native::Interface::Loopback::Mpls::Ldp


class Native::Interface::Loopback::Mpls::Ldp::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_address; //type: one of enumeration, string

}; // Native::Interface::Loopback::Mpls::Ldp::Discovery


class Native::Interface::Loopback::Mpls::Ldp::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: Native::Interface::Loopback::Mpls::Ldp::Igp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::Ldp::Igp::Sync> sync; // presence node
        
}; // Native::Interface::Loopback::Mpls::Ldp::Igp


class Native::Interface::Loopback::Mpls::Ldp::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8

}; // Native::Interface::Loopback::Mpls::Ldp::Igp::Sync


class Native::Interface::Loopback::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf administrative_weight; //type: uint32
        ydk::YLeaf attribute_flags; //type: string
        ydk::YLeaf tunnels; //type: empty
        class BackupPath; //type: Native::Interface::Loopback::Mpls::TrafficEng::BackupPath
        class Flooding; //type: Native::Interface::Loopback::Mpls::TrafficEng::Flooding
        class PassiveInterface; //type: Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng::Flooding> flooding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface> passive_interface;
        
}; // Native::Interface::Loopback::Mpls::TrafficEng


class Native::Interface::Loopback::Mpls::TrafficEng::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::Loopback::Mpls::TrafficEng::BackupPath


class Native::Interface::Loopback::Mpls::TrafficEng::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Thresholds; //type: Native::Interface::Loopback::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::Loopback::Mpls::TrafficEng::Flooding


class Native::Interface::Loopback::Mpls::TrafficEng::Flooding::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList down; //type: list of  uint8
        ydk::YLeafList up; //type: list of  uint8

}; // Native::Interface::Loopback::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_te_id; //type: string
        ydk::YLeaf nbr_if_addr; //type: string
        class NbrIgpId; //type: Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface::NbrIgpId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface::NbrIgpId> nbr_igp_id;
        
}; // Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface


class Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface::NbrIgpId : public ydk::Entity
{
    public:
        NbrIgpId();
        ~NbrIgpId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis; //type: string
        ydk::YLeaf ospf; //type: string

}; // Native::Interface::Loopback::Mpls::TrafficEng::PassiveInterface::NbrIgpId


class Native::Interface::Loopback::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Loopback::IpVrf::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::IpVrf::Ip> ip;
        
}; // Native::Interface::Loopback::IpVrf


class Native::Interface::Loopback::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Loopback::IpVrf::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Loopback::IpVrf::Ip


class Native::Interface::Loopback::IpVrf::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Loopback::IpVrf::Ip::Vrf


class Native::Interface::Loopback::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string
        ydk::YLeaf downstream; //type: string

}; // Native::Interface::Loopback::Vrf


class Native::Interface::Loopback::Ip : public ydk::Entity
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

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Loopback::Ip::AccessGroup
        class Arp; //type: Native::Interface::Loopback::Ip::Arp
        class Vrf; //type: Native::Interface::Loopback::Ip::Vrf
        class Address; //type: Native::Interface::Loopback::Ip::Address
        class DirectedBroadcast; //type: Native::Interface::Loopback::Ip::DirectedBroadcast
        class HelloInterval; //type: Native::Interface::Loopback::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Loopback::Ip::Authentication
        class HoldTime; //type: Native::Interface::Loopback::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Loopback::Ip::HelperAddress
        class Pim; //type: Native::Interface::Loopback::Ip::Pim
        class Policy; //type: Native::Interface::Loopback::Ip::Policy
        class Rip; //type: Native::Interface::Loopback::Ip::Rip
        class RouteCacheConf; //type: Native::Interface::Loopback::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Loopback::Ip::RouteCache
        class Router; //type: Native::Interface::Loopback::Ip::Router
        class Tcp; //type: Native::Interface::Loopback::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Loopback::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Loopback::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Loopback::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Loopback::Ip::Verify
        class Ospf; //type: Native::Interface::Loopback::Ip::Ospf
        class Flow; //type: Native::Interface::Loopback::Ip::Flow
        class Igmp; //type: Native::Interface::Loopback::Ip::Igmp
        class Lisp; //type: Native::Interface::Loopback::Ip::Lisp
        class Nat; //type: Native::Interface::Loopback::Ip::Nat
        class Nbar; //type: Native::Interface::Loopback::Ip::Nbar
        class Rsvp; //type: Native::Interface::Loopback::Ip::Rsvp
        class Wccp; //type: Native::Interface::Loopback::Ip::Wccp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::DirectedBroadcast> directed_broadcast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::HoldTime> hold_time;
        ydk::YList helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify> verify;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp> wccp;
        
}; // Native::Interface::Loopback::Ip


class Native::Interface::Loopback::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::Loopback::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Loopback::Ip::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Loopback::Ip::AccessGroup


class Native::Interface::Loopback::Ip::AccessGroup::In : public ydk::Entity
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

        class CommonAcl; //type: Native::Interface::Loopback::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Loopback::Ip::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::In::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::In::Acl> acl;
        
}; // Native::Interface::Loopback::Ip::AccessGroup::In


class Native::Interface::Loopback::Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Loopback::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Loopback::Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Loopback::Ip::AccessGroup::In::Acl


class Native::Interface::Loopback::Ip::AccessGroup::Out : public ydk::Entity
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

        class CommonAcl; //type: Native::Interface::Loopback::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Loopback::Ip::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::Out::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::AccessGroup::Out::Acl> acl;
        
}; // Native::Interface::Loopback::Ip::AccessGroup::Out


class Native::Interface::Loopback::Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Loopback::Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::AccessGroup::Out::Acl


class Native::Interface::Loopback::Ip::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inspection; //type: Native::Interface::Loopback::Ip::Arp::Inspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Loopback::Ip::Arp


class Native::Interface::Loopback::Ip::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Loopback::Ip::Arp::Inspection::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Loopback::Ip::Arp::Inspection


class Native::Interface::Loopback::Ip::Arp::Inspection::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::Loopback::Ip::Arp::Inspection::Limit


class Native::Interface::Loopback::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf receive; //type: string
        ydk::YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Loopback::Ip::Vrf::Forwarding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Loopback::Ip::Vrf


class Native::Interface::Loopback::Ip::Vrf::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf liin_vrf; //type: empty
        ydk::YLeaf mgmtvrf; //type: empty
        ydk::YLeaf word; //type: string

}; // Native::Interface::Loopback::Ip::Vrf::Forwarding


class Native::Interface::Loopback::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated; //type: empty
        class Secondary; //type: Native::Interface::Loopback::Ip::Address::Secondary
        class Primary; //type: Native::Interface::Loopback::Ip::Address::Primary
        class Dhcp; //type: Native::Interface::Loopback::Ip::Address::Dhcp

        ydk::YList secondary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Address::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Address::Dhcp> dhcp; // presence node
        
}; // Native::Interface::Loopback::Ip::Address


class Native::Interface::Loopback::Ip::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Loopback::Ip::Address::Secondary


class Native::Interface::Loopback::Ip::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Interface::Loopback::Ip::Address::Primary


class Native::Interface::Loopback::Ip::Address::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Loopback::Ip::Address::Dhcp::ClientId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Loopback::Ip::Address::Dhcp


class Native::Interface::Loopback::Ip::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Loopback::Ip::Address::Dhcp::ClientId


class Native::Interface::Loopback::Ip::DirectedBroadcast : public ydk::Entity
{
    public:
        DirectedBroadcast();
        ~DirectedBroadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direct_broadcast; //type: one of uint16, string

}; // Native::Interface::Loopback::Ip::DirectedBroadcast


class Native::Interface::Loopback::Ip::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Loopback::Ip::HelloInterval


class Native::Interface::Loopback::Ip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::Loopback::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Loopback::Ip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Loopback::Ip::Authentication


class Native::Interface::Loopback::Ip::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::Loopback::Ip::Authentication::KeyChain


class Native::Interface::Loopback::Ip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::Loopback::Ip::Authentication::Mode


class Native::Interface::Loopback::Ip::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Loopback::Ip::HoldTime


class Native::Interface::Loopback::Ip::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf global; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Interface::Loopback::Ip::HelperAddress


class Native::Interface::Loopback::Ip::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim_mode; //type: PimMode
        ydk::YLeaf nbma_mode; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf spt_threshold; //type: SptThreshold
        class AcceptRegister; //type: Native::Interface::Loopback::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Loopback::Ip::Pim::QueryInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Pim::QueryInterval> query_interval;
                class PimMode;
        class SptThreshold;

}; // Native::Interface::Loopback::Ip::Pim


class Native::Interface::Loopback::Ip::Pim::AcceptRegister : public ydk::Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Interface::Loopback::Ip::Pim::AcceptRegister


class Native::Interface::Loopback::Ip::Pim::QueryInterval : public ydk::Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds_interval; //type: uint16
        ydk::YLeaf milliseconds_interval; //type: uint16
        ydk::YLeaf msec; //type: empty

}; // Native::Interface::Loopback::Ip::Pim::QueryInterval


class Native::Interface::Loopback::Ip::Policy : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string

}; // Native::Interface::Loopback::Ip::Policy


class Native::Interface::Loopback::Ip::Rip : public ydk::Entity
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

        class Authentication; //type: Native::Interface::Loopback::Ip::Rip::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rip::Authentication> authentication;
        
}; // Native::Interface::Loopback::Ip::Rip


class Native::Interface::Loopback::Ip::Rip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class Mode; //type: Native::Interface::Loopback::Ip::Rip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::Loopback::Ip::Rip::Authentication


class Native::Interface::Loopback::Ip::Rip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf text; //type: empty

}; // Native::Interface::Loopback::Ip::Rip::Authentication::Mode


class Native::Interface::Loopback::Ip::RouteCacheConf : public ydk::Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_cache; //type: boolean

}; // Native::Interface::Loopback::Ip::RouteCacheConf


class Native::Interface::Loopback::Ip::RouteCache : public ydk::Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cef; //type: boolean
        ydk::YLeaf flow; //type: boolean
        ydk::YLeaf policy; //type: boolean
        ydk::YLeaf same_interface; //type: boolean

}; // Native::Interface::Loopback::Ip::RouteCache


class Native::Interface::Loopback::Ip::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Interface::Loopback::Ip::Router::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Loopback::Ip::Router


class Native::Interface::Loopback::Ip::Router::Isis : public ydk::Entity
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

        ydk::YLeaf tag; //type: string

}; // Native::Interface::Loopback::Ip::Router::Isis


class Native::Interface::Loopback::Ip::Tcp : public ydk::Entity
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

        ydk::YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Loopback::Ip::Tcp


class Native::Interface::Loopback::Ip::VirtualReassembly : public ydk::Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_reassemblies; //type: uint32
        ydk::YLeaf max_fragments; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf drop_fragments; //type: empty
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Loopback::Ip::VirtualReassembly


class Native::Interface::Loopback::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Interface::Loopback::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Loopback::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Relay> relay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Loopback::Ip::Dhcp


class Native::Interface::Loopback::Ip::Dhcp::Client : public ydk::Entity
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

        ydk::YLeaf hostname; //type: string
        class Option; //type: Native::Interface::Loopback::Ip::Dhcp::Client::Option
        class Request; //type: Native::Interface::Loopback::Ip::Dhcp::Client::Request
        class Route; //type: Native::Interface::Loopback::Ip::Dhcp::Client::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Client::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Client::Request> request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Client::Route> route;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Client


class Native::Interface::Loopback::Ip::Dhcp::Client::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionRange; //type: Native::Interface::Loopback::Ip::Dhcp::Client::Option::OptionRange

        ydk::YList option_range;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Client::Option


class Native::Interface::Loopback::Ip::Dhcp::Client::Option::OptionRange : public ydk::Entity
{
    public:
        OptionRange();
        ~OptionRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_range; //type: uint8
        ydk::YLeaf ascii; //type: string
        ydk::YLeaf hex; //type: string
        ydk::YLeafList ip; //type: list of  one of union, string

}; // Native::Interface::Loopback::Ip::Dhcp::Client::Option::OptionRange


class Native::Interface::Loopback::Ip::Dhcp::Client::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: uint8

}; // Native::Interface::Loopback::Ip::Dhcp::Client::Request


class Native::Interface::Loopback::Ip::Dhcp::Client::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf track; //type: uint16

}; // Native::Interface::Loopback::Ip::Dhcp::Client::Route


class Native::Interface::Loopback::Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Loopback::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Relay


class Native::Interface::Loopback::Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_action; //type: PolicyAction
        ydk::YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Loopback::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Loopback::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Loopback::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyAction;

}; // Native::Interface::Loopback::Ip::Dhcp::Relay::Information


class Native::Interface::Loopback::Ip::Dhcp::Relay::Information::CheckReply : public ydk::Entity
{
    public:
        CheckReply();
        ~CheckReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::Loopback::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Loopback::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::Loopback::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Loopback::Ip::Dhcp::Relay::Information::OptionInsert : public ydk::Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::Loopback::Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Loopback::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping::Limit> limit;
        ydk::YList vlan;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Snooping


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: uint16

}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Limit


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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
        class Information; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FormatType; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public ydk::Entity
{
    public:
        FormatType();
        ~FormatType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CircuitId; //type: Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string

}; // Native::Interface::Loopback::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::Loopback::Ip::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eigrp; //type: Native::Interface::Loopback::Ip::SummaryAddress::Eigrp

        ydk::YList eigrp;
        
}; // Native::Interface::Loopback::Ip::SummaryAddress


class Native::Interface::Loopback::Ip::SummaryAddress::Eigrp : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Interface::Loopback::Ip::SummaryAddress::Eigrp


class Native::Interface::Loopback::Ip::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Interface::Loopback::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Loopback::Ip::Verify::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Source> source; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Loopback::Ip::Verify


class Native::Interface::Loopback::Ip::Verify::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::Loopback::Ip::Verify::Source::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Loopback::Ip::Verify::Source


class Native::Interface::Loopback::Ip::Verify::Source::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DhcpSnooping; //type: Native::Interface::Loopback::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Loopback::Ip::Verify::Source::Vlan


class Native::Interface::Loopback::Ip::Verify::Source::Vlan::DhcpSnooping : public ydk::Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_security; //type: empty

}; // Native::Interface::Loopback::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Loopback::Ip::Verify::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReversePath; //type: Native::Interface::Loopback::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Loopback::Ip::Verify::Unicast::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Loopback::Ip::Verify::Unicast


class Native::Interface::Loopback::Ip::Verify::Unicast::ReversePath : public ydk::Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Loopback::Ip::Verify::Unicast::ReversePath


class Native::Interface::Loopback::Ip::Verify::Unicast::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable_via; //type: ReachableVia
        ydk::YLeaf allow_self_ping; //type: empty
        ydk::YLeaf allow_default; //type: empty
        class ReachableVia;

}; // Native::Interface::Loopback::Ip::Verify::Unicast::Source


class Native::Interface::Loopback::Ip::Ospf : public ydk::Entity
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

        ydk::YLeaf network; //type: Network
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf flood_reduction; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf mtu_ignore; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf resync_timeout; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::Loopback::Ip::Ospf::ProcessId
        class Authentication; //type: Native::Interface::Loopback::Ip::Ospf::Authentication
        class AuthenticationKey; //type: Native::Interface::Loopback::Ip::Ospf::AuthenticationKey
        class Bfd; //type: Native::Interface::Loopback::Ip::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Loopback::Ip::Ospf::DatabaseFilter
        class DeadInterval; //type: Native::Interface::Loopback::Ip::Ospf::DeadInterval
        class DemandCircuit; //type: Native::Interface::Loopback::Ip::Ospf::DemandCircuit
        class FastReroute; //type: Native::Interface::Loopback::Ip::Ospf::FastReroute
        class Lls; //type: Native::Interface::Loopback::Ip::Ospf::Lls
        class MessageDigestKey; //type: Native::Interface::Loopback::Ip::Ospf::MessageDigestKey
        class MultiArea; //type: Native::Interface::Loopback::Ip::Ospf::MultiArea
        class PrefixSuppression; //type: Native::Interface::Loopback::Ip::Ospf::PrefixSuppression
        class TtlSecurity; //type: Native::Interface::Loopback::Ip::Ospf::TtlSecurity

        ydk::YList process_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::Lls> lls; // presence node
        ydk::YList message_digest_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class Network;

}; // Native::Interface::Loopback::Ip::Ospf


class Native::Interface::Loopback::Ip::Ospf::ProcessId : public ydk::Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint16 (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::id)
        ydk::YLeaf id;
        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf secondaries; //type: empty
        ydk::YLeaf none; //type: empty

}; // Native::Interface::Loopback::Ip::Ospf::ProcessId


class Native::Interface::Loopback::Ip::Ospf::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_digest; //type: empty
        ydk::YLeaf null; //type: empty
        class KeyChain; //type: Native::Interface::Loopback::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::Loopback::Ip::Ospf::Authentication


class Native::Interface::Loopback::Ip::Ospf::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

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

}; // Native::Interface::Loopback::Ip::Ospf::Authentication::KeyChain


class Native::Interface::Loopback::Ip::Ospf::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::Loopback::Ip::Ospf::AuthenticationKey


class Native::Interface::Loopback::Ip::Ospf::Bfd : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Loopback::Ip::Ospf::Bfd


class Native::Interface::Loopback::Ip::Ospf::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

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
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::Ospf::DatabaseFilter


class Native::Interface::Loopback::Ip::Ospf::DeadInterval : public ydk::Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

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
        class Minimal; //type: Native::Interface::Loopback::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::Loopback::Ip::Ospf::DeadInterval


class Native::Interface::Loopback::Ip::Ospf::DeadInterval::Minimal : public ydk::Entity
{
    public:
        Minimal();
        ~Minimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_multiplier; //type: uint8

}; // Native::Interface::Loopback::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::Loopback::Ip::Ospf::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

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

}; // Native::Interface::Loopback::Ip::Ospf::DemandCircuit


class Native::Interface::Loopback::Ip::Ospf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerPrefix; //type: Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::Loopback::Ip::Ospf::FastReroute


class Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Candidate; //type: Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Candidate : public ydk::Entity
{
    public:
        Candidate();
        ~Candidate();

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

}; // Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

}; // Native::Interface::Loopback::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::Loopback::Ip::Ospf::Lls : public ydk::Entity
{
    public:
        Lls();
        ~Lls();

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

}; // Native::Interface::Loopback::Ip::Ospf::Lls


class Native::Interface::Loopback::Ip::Ospf::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Md5; //type: Native::Interface::Loopback::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::Loopback::Ip::Ospf::MessageDigestKey


class Native::Interface::Loopback::Ip::Ospf::MessageDigestKey::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::Loopback::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::Loopback::Ip::Ospf::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::Loopback::Ip::Ospf::MultiArea


class Native::Interface::Loopback::Ip::Ospf::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

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

}; // Native::Interface::Loopback::Ip::Ospf::PrefixSuppression


class Native::Interface::Loopback::Ip::Ospf::TtlSecurity : public ydk::Entity
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

        ydk::YLeaf diable; //type: empty
        ydk::YLeaf hops; //type: uint8

}; // Native::Interface::Loopback::Ip::Ospf::TtlSecurity


class Native::Interface::Loopback::Ip::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf egress; //type: empty
        class Monitor; //type: Native::Interface::Loopback::Ip::Flow::Monitor

        ydk::YList monitor;
        
}; // Native::Interface::Loopback::Ip::Flow


class Native::Interface::Loopback::Ip::Flow::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

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
        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        class Sampler; //type: Native::Interface::Loopback::Ip::Flow::Monitor::Sampler

        ydk::YList sampler;
        
}; // Native::Interface::Loopback::Ip::Flow::Monitor


class Native::Interface::Loopback::Ip::Flow::Monitor::Sampler : public ydk::Entity
{
    public:
        Sampler();
        ~Sampler();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::Loopback::Ip::Flow::Monitor::Sampler


class Native::Interface::Loopback::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint8
        class StaticGroup; //type: Native::Interface::Loopback::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::Loopback::Ip::Igmp::JoinGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Igmp::StaticGroup> static_group;
        ydk::YList join_group;
        
}; // Native::Interface::Loopback::Ip::Igmp


class Native::Interface::Loopback::Ip::Igmp::StaticGroup : public ydk::Entity
{
    public:
        StaticGroup();
        ~StaticGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Groups; //type: Native::Interface::Loopback::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::Loopback::Ip::Igmp::StaticGroup::ClassMap

        ydk::YList groups;
        ydk::YList class_map;
        
}; // Native::Interface::Loopback::Ip::Igmp::StaticGroup


class Native::Interface::Loopback::Ip::Igmp::StaticGroup::Groups : public ydk::Entity
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

        ydk::YLeaf name; //type: one of enumeration, string
        ydk::YLeafList source; //type: list of  one of enumeration, string
        class Name;
        class Source;

}; // Native::Interface::Loopback::Ip::Igmp::StaticGroup::Groups


class Native::Interface::Loopback::Ip::Igmp::StaticGroup::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::name)
        ydk::YLeaf id;

}; // Native::Interface::Loopback::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::Loopback::Ip::Igmp::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_group_address; //type: string
        ydk::YLeaf source; //type: string

}; // Native::Interface::Loopback::Ip::Igmp::JoinGroup


class Native::Interface::Loopback::Ip::Lisp : public ydk::Entity
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

        ydk::YLeaf source_locator; //type: string

}; // Native::Interface::Loopback::Ip::Lisp


class Native::Interface::Loopback::Ip::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_static_host; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf inside; //type: empty
        ydk::YLeaf outside; //type: empty

}; // Native::Interface::Loopback::Ip::Nat


class Native::Interface::Loopback::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolDiscovery; //type: Native::Interface::Loopback::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Loopback::Ip::Nbar


class Native::Interface::Loopback::Ip::Nbar::ProtocolDiscovery : public ydk::Entity
{
    public:
        ProtocolDiscovery();
        ~ProtocolDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_ipv6; //type: Ipv4Ipv6
        class Ipv4Ipv6;

}; // Native::Interface::Loopback::Ip::Nbar::ProtocolDiscovery


class Native::Interface::Loopback::Ip::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Loopback::Ip::Rsvp::Authentication
        class Bandwidth; //type: Native::Interface::Loopback::Ip::Rsvp::Bandwidth
        class Neighbor; //type: Native::Interface::Loopback::Ip::Rsvp::Neighbor
        class Precedence; //type: Native::Interface::Loopback::Ip::Rsvp::Precedence
        class Signalling; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling
        class Tos; //type: Native::Interface::Loopback::Ip::Rsvp::Tos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Neighbor> neighbor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Precedence> precedence;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling> signalling;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Tos> tos;
        
}; // Native::Interface::Loopback::Ip::Rsvp


class Native::Interface::Loopback::Ip::Rsvp::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Interface::Loopback::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Interface::Loopback::Ip::Rsvp::Authentication


class Native::Interface::Loopback::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Interface::Loopback::Ip::Rsvp::Authentication::Lifetime


class Native::Interface::Loopback::Ip::Rsvp::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint16
        class Value; //type: Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Value
        class Mam; //type: Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Value> value_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam> mam;
        
}; // Native::Interface::Loopback::Ip::Rsvp::Bandwidth


class Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

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
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Value


class Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam : public ydk::Entity
{
    public:
        Mam();
        ~Mam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxReservableBw; //type: Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw> max_reservable_bw; // presence node
        
}; // Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam


class Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw : public ydk::Entity
{
    public:
        MaxReservableBw();
        ~MaxReservableBw();

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
        ydk::YLeaf bc0; //type: uint32
        ydk::YLeaf bc1; //type: uint32

}; // Native::Interface::Loopback::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw


class Native::Interface::Loopback::Ip::Rsvp::Neighbor : public ydk::Entity
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

        ydk::YLeaf acl_number; //type: uint8

}; // Native::Interface::Loopback::Ip::Rsvp::Neighbor


class Native::Interface::Loopback::Ip::Rsvp::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform; //type: uint8
        ydk::YLeaf exceed; //type: uint8

}; // Native::Interface::Loopback::Ip::Rsvp::Precedence


class Native::Interface::Loopback::Ip::Rsvp::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: uint8
        class FastLocalRepair; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling::FastLocalRepair
        class Hello; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling::FastLocalRepair> fast_local_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello> hello; // presence node
        
}; // Native::Interface::Loopback::Ip::Rsvp::Signalling


class Native::Interface::Loopback::Ip::Rsvp::Signalling::FastLocalRepair : public ydk::Entity
{
    public:
        FastLocalRepair();
        ~FastLocalRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint16

}; // Native::Interface::Loopback::Ip::Rsvp::Signalling::FastLocalRepair


class Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf graceful_restart; //type: empty
        class Refresh; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Refresh
        class Reroute; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Refresh> refresh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute> reroute;
        
}; // Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello


class Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf misses; //type: uint8

}; // Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Refresh


class Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute : public ydk::Entity
{
    public:
        Reroute();
        ~Reroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: uint8
        class Refresh; //type: Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute::Refresh> refresh;
        
}; // Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute


class Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf misses; //type: uint8

}; // Native::Interface::Loopback::Ip::Rsvp::Signalling::Hello::Reroute::Refresh


class Native::Interface::Loopback::Ip::Rsvp::Tos : public ydk::Entity
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

        ydk::YLeaf conform; //type: uint8
        ydk::YLeaf exceed; //type: uint8

}; // Native::Interface::Loopback::Ip::Rsvp::Tos


class Native::Interface::Loopback::Ip::Wccp : public ydk::Entity
{
    public:
        Wccp();
        ~Wccp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WccpList; //type: Native::Interface::Loopback::Ip::Wccp::WccpList
        class WebCache; //type: Native::Interface::Loopback::Ip::Wccp::WebCache
        class Redirect; //type: Native::Interface::Loopback::Ip::Wccp::Redirect
        class Vrf; //type: Native::Interface::Loopback::Ip::Wccp::Vrf

        ydk::YList wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::WebCache> web_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::Redirect> redirect;
        ydk::YList vrf;
        
}; // Native::Interface::Loopback::Ip::Wccp


class Native::Interface::Loopback::Ip::Wccp::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Loopback::Ip::Wccp::WccpList::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::WccpList::Redirect> redirect;
        
}; // Native::Interface::Loopback::Ip::Wccp::WccpList


class Native::Interface::Loopback::Ip::Wccp::WccpList::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::Wccp::WccpList::Redirect


class Native::Interface::Loopback::Ip::Wccp::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Loopback::Ip::Wccp::WebCache::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::WebCache::Redirect> redirect;
        
}; // Native::Interface::Loopback::Ip::Wccp::WebCache


class Native::Interface::Loopback::Ip::Wccp::WebCache::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::Wccp::WebCache::Redirect


class Native::Interface::Loopback::Ip::Wccp::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exclude; //type: Native::Interface::Loopback::Ip::Wccp::Redirect::Exclude

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::Redirect::Exclude> exclude;
        
}; // Native::Interface::Loopback::Ip::Wccp::Redirect


class Native::Interface::Loopback::Ip::Wccp::Redirect::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty

}; // Native::Interface::Loopback::Ip::Wccp::Redirect::Exclude


class Native::Interface::Loopback::Ip::Wccp::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class WccpList; //type: Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache

        ydk::YList wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Interface::Loopback::Ip::Wccp::Vrf


class Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList::Redirect> redirect;
        
}; // Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList


class Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::Wccp::Vrf::WccpList::Redirect


class Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache::Redirect> redirect;
        
}; // Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache


class Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Loopback::Ip::Wccp::Vrf::WebCache::Redirect


class Native::Interface::Loopback::Ipv6 : public ydk::Entity
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

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf redirects; //type: boolean
        class DestinationGuard; //type: Native::Interface::Loopback::Ipv6::DestinationGuard
        class SourceGuard; //type: Native::Interface::Loopback::Ipv6::SourceGuard
        class Dhcp; //type: Native::Interface::Loopback::Ipv6::Dhcp
        class Address; //type: Native::Interface::Loopback::Ipv6::Address
        class Nd; //type: Native::Interface::Loopback::Ipv6::Nd
        class Tcp; //type: Native::Interface::Loopback::Ipv6::Tcp
        class TrafficFilter; //type: Native::Interface::Loopback::Ipv6::TrafficFilter
        class Ospf; //type: Native::Interface::Loopback::Ipv6::Ospf
        class Crypto; //type: Native::Interface::Loopback::Ipv6::Crypto
        class Flow; //type: Native::Interface::Loopback::Ipv6::Flow
        class NoPim; //type: Native::Interface::Loopback::Ipv6::NoPim
        class Pim; //type: Native::Interface::Loopback::Ipv6::Pim
        class Rip; //type: Native::Interface::Loopback::Ipv6::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::SourceGuard> source_guard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Tcp> tcp;
        ydk::YList traffic_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::NoPim> no_pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Pim> pim;
        ydk::YList rip;
        
}; // Native::Interface::Loopback::Ipv6


class Native::Interface::Loopback::Ipv6::DestinationGuard : public ydk::Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::Loopback::Ipv6::DestinationGuard


class Native::Interface::Loopback::Ipv6::SourceGuard : public ydk::Entity
{
    public:
        SourceGuard();
        ~SourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Interface::Loopback::Ipv6::SourceGuard


class Native::Interface::Loopback::Ipv6::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Interface::Loopback::Ipv6::Dhcp::Client
        class Server; //type: Native::Interface::Loopback::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::Loopback::Ipv6::Dhcp::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Dhcp::Client> client;
        ydk::YList server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Loopback::Ipv6::Dhcp::Guard> guard; // presence node
        
}; // Native::Interface::Loopback::Ipv6::Dhcp

class Native::Interface::Loopback::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Loopback::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Interface::Loopback::Ip::Pim::PimMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf dense_mode;
        static const ydk::Enum::YLeaf sparse_mode;
        static const ydk::Enum::YLeaf sparse_dense_mode;

};

class Native::Interface::Loopback::Ip::Pim::SptThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};

class Native::Interface::Loopback::Ip::Dhcp::Relay::Information::PolicyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;

};

class Native::Interface::Loopback::Ip::Verify::Unicast::Source::ReachableVia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf rx;

};

class Native::Interface::Loopback::Ip::Ospf::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::Loopback::Ip::Flow::Monitor::Sampler::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::Loopback::Ip::Igmp::StaticGroup::Groups::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__STAR__;

};

class Native::Interface::Loopback::Ip::Igmp::StaticGroup::Groups::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssm_map;

};

class Native::Interface::Loopback::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Interface::Loopback::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_77_ */

