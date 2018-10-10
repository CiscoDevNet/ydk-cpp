#ifndef _CISCO_IOS_XE_NATIVE_131_
#define _CISCO_IOS_XE_NATIVE_131_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_130.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::L2vpn::EvpnCont::Evpn::Mac::Duplication : public ydk::Entity
{
    public:
        Duplication();
        ~Duplication();

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

        ydk::YLeaf limit; //type: uint16
        ydk::YLeaf time; //type: uint32

}; // Native::L2vpn::EvpnCont::Evpn::Mac::Duplication


class Native::L2vpn::EvpnCont::Evpn::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Duplication; //type: Native::L2vpn::EvpnCont::Evpn::Ip::Duplication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Ip::Duplication> duplication;
        
}; // Native::L2vpn::EvpnCont::Evpn::Ip


class Native::L2vpn::EvpnCont::Evpn::Ip::Duplication : public ydk::Entity
{
    public:
        Duplication();
        ~Duplication();

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

        ydk::YLeaf limit; //type: uint16
        ydk::YLeaf time; //type: uint32

}; // Native::L2vpn::EvpnCont::Evpn::Ip::Duplication


class Native::L2vpn::EvpnCont::Evpn::Mpls : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Label; //type: Native::L2vpn::EvpnCont::Evpn::Mpls::Label

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Mpls::Label> label;
        
}; // Native::L2vpn::EvpnCont::Evpn::Mpls


class Native::L2vpn::EvpnCont::Evpn::Mpls::Label : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Mode; //type: Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode> mode;
        
}; // Native::L2vpn::EvpnCont::Evpn::Mpls::Label


class Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_evi; //type: empty
        ydk::YLeaf per_bd; //type: empty

}; // Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode


class Native::L2vpn::EvpnCont::Evpn::Multihoming : public ydk::Entity
{
    public:
        Multihoming();
        ~Multihoming();

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

        class Aliasing; //type: Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing> aliasing;
        
}; // Native::L2vpn::EvpnCont::Evpn::Multihoming


class Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing : public ydk::Entity
{
    public:
        Aliasing();
        ~Aliasing();

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

        ydk::YLeaf disable; //type: empty

}; // Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing


class Native::L2vpn::EvpnCont::Evpn::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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

        class Interface; //type: Native::L2vpn::EvpnCont::Evpn::RouterId::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId::Interface> interface;
        
}; // Native::L2vpn::EvpnCont::Evpn::RouterId


class Native::L2vpn::EvpnCont::Evpn::RouterId::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::L2vpn::EvpnCont::Evpn::RouterId::Interface


class Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface


class Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface


class Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface


class Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface


class Native::L2vpn::EvpnCont::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        class Evpn; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn> evpn;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

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

        class Instance; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance> instance;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance : public ydk::Entity
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

        class Instance_; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_

        ydk::YList instance;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_ : public ydk::Entity
{
    public:
        Instance_();
        ~Instance_();

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

        ydk::YLeaf evpn_instance_num; //type: string
        class PointToPoint; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint
        class VlanAware; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware
        class VlanBased; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased
        class VlanBundle; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint> point_to_point; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware> vlan_aware; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased> vlan_based; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle> vlan_bundle; // presence node
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint : public ydk::Entity
{
    public:
        PointToPoint();
        ~PointToPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class AutoRouteTargetCont; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont
        class Rd; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd
        class RouteTarget; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont> auto_route_target_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd> rd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget> route_target;
                class Encapsulation;

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont : public ydk::Entity
{
    public:
        AutoRouteTargetCont();
        ~AutoRouteTargetCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_route_target; //type: empty

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        class Both; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both
        class Export; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export
        class Import; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both> both;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import> import;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import : public ydk::Entity
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

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware : public ydk::Entity
{
    public:
        VlanAware();
        ~VlanAware();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class AutoRouteTargetCont; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont
        class Rd; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd
        class RouteTarget; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont> auto_route_target_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd> rd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget> route_target;
                class Encapsulation;

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont : public ydk::Entity
{
    public:
        AutoRouteTargetCont();
        ~AutoRouteTargetCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_route_target; //type: empty

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        class Both; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both
        class Export; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export
        class Import; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both> both;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import> import;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import : public ydk::Entity
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

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased : public ydk::Entity
{
    public:
        VlanBased();
        ~VlanBased();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class AutoRouteTargetCont; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont
        class Rd; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd
        class RouteTarget; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont> auto_route_target_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd> rd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget> route_target;
                class Encapsulation;

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont : public ydk::Entity
{
    public:
        AutoRouteTargetCont();
        ~AutoRouteTargetCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_route_target; //type: empty

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        class Both; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both
        class Export; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export
        class Import; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both> both;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import> import;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import : public ydk::Entity
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

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle : public ydk::Entity
{
    public:
        VlanBundle();
        ~VlanBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class AutoRouteTargetCont; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont
        class Rd; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd
        class RouteTarget; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont> auto_route_target_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd> rd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget> route_target;
                class Encapsulation;

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont : public ydk::Entity
{
    public:
        AutoRouteTargetCont();
        ~AutoRouteTargetCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_route_target; //type: empty

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string
        class Both; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Both
        class Export; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Export
        class Import; //type: Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Both> both;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Import> import;
        
}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Both


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Export


class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Import : public ydk::Entity
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

        ydk::YLeaf rt_value; //type: string

}; // Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget::Import


class Native::L2vpnConfig : public ydk::Entity
{
    public:
        L2vpnConfig();
        ~L2vpnConfig();

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

        class L2vpn; //type: Native::L2vpnConfig::L2vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpnConfig::L2vpn> l2vpn; // presence node
        
}; // Native::L2vpnConfig


class Native::L2vpnConfig::L2vpn : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Logging; //type: Native::L2vpnConfig::L2vpn::Logging
        class Redundancy; //type: Native::L2vpnConfig::L2vpn::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpnConfig::L2vpn::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpnConfig::L2vpn::Redundancy> redundancy;
        
}; // Native::L2vpnConfig::L2vpn


class Native::L2vpnConfig::L2vpn::Logging : public ydk::Entity
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

        ydk::YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::L2vpnConfig::L2vpn::Logging::Pseudowire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpnConfig::L2vpn::Logging::Pseudowire> pseudowire;
        
}; // Native::L2vpnConfig::L2vpn::Logging


class Native::L2vpnConfig::L2vpn::Logging::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

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

        ydk::YLeaf status; //type: empty

}; // Native::L2vpnConfig::L2vpn::Logging::Pseudowire


class Native::L2vpnConfig::L2vpn::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        class Predictive; //type: Native::L2vpnConfig::L2vpn::Redundancy::Predictive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpnConfig::L2vpn::Redundancy::Predictive> predictive;
        
}; // Native::L2vpnConfig::L2vpn::Redundancy


class Native::L2vpnConfig::L2vpn::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

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

        ydk::YLeaf enabled; //type: empty

}; // Native::L2vpnConfig::L2vpn::Redundancy::Predictive


class Native::L3vpn : public ydk::Entity
{
    public:
        L3vpn();
        ~L3vpn();

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

        class Encapsulation; //type: Native::L3vpn::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation> encapsulation;
        
}; // Native::L3vpn


class Native::L3vpn::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

        class Ip; //type: Native::L3vpn::Encapsulation::Ip

        ydk::YList ip;
        
}; // Native::L3vpn::Encapsulation


class Native::L3vpn::Encapsulation::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf profile_name; //type: string
        class Transport; //type: Native::L3vpn::Encapsulation::Ip::Transport
        class Protocol; //type: Native::L3vpn::Encapsulation::Ip::Protocol
        class Mpls; //type: Native::L3vpn::Encapsulation::Ip::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation::Ip::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation::Ip::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation::Ip::Mpls> mpls;
        
}; // Native::L3vpn::Encapsulation::Ip


class Native::L3vpn::Encapsulation::Ip::Transport : public ydk::Entity
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

        class Ipv4; //type: Native::L3vpn::Encapsulation::Ip::Transport::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation::Ip::Transport::Ipv4> ipv4; // presence node
        
}; // Native::L3vpn::Encapsulation::Ip::Transport


class Native::L3vpn::Encapsulation::Ip::Transport::Ipv4 : public ydk::Entity
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

        ydk::YLeaf source; //type: string

}; // Native::L3vpn::Encapsulation::Ip::Transport::Ipv4


class Native::L3vpn::Encapsulation::Ip::Protocol : public ydk::Entity
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

        class Gre; //type: Native::L3vpn::Encapsulation::Ip::Protocol::Gre

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3vpn::Encapsulation::Ip::Protocol::Gre> gre; // presence node
        
}; // Native::L3vpn::Encapsulation::Ip::Protocol


class Native::L3vpn::Encapsulation::Ip::Protocol::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint32

}; // Native::L3vpn::Encapsulation::Ip::Protocol::Gre


class Native::L3vpn::Encapsulation::Ip::Mpls : public ydk::Entity
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

        ydk::YLeaf mtu; //type: one of uint32, enumeration
        class Mtu;

}; // Native::L3vpn::Encapsulation::Ip::Mpls


class Native::Mpls : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf cos_map; //type: uint8
        class Atm; //type: Native::Mpls::Atm
        class Ip; //type: Native::Mpls::Ip
        class Label; //type: Native::Mpls::Label
        class Ldp; //type: Native::Mpls::Ldp
        class PrefixMap; //type: Native::Mpls::PrefixMap
        class Static; //type: Native::Mpls::Static
        class TrafficEng; //type: Native::Mpls::TrafficEng
        class Tp; //type: Native::Mpls::Tp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Atm> atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::PrefixMap> prefix_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng> traffic_eng;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Tp> tp; // presence node
        
}; // Native::Mpls


class Native::Mpls::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Atm


class Native::Mpls::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf default_route; //type: empty
        class Conf; //type: Native::Mpls::Ip::Conf
        class ConfArg; //type: Native::Mpls::Ip::ConfArg
        class TtlExpiration; //type: Native::Mpls::Ip::TtlExpiration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ip::Conf> conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg> conf_arg;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ip::TtlExpiration> ttl_expiration;
        
}; // Native::Mpls::Ip


class Native::Mpls::Ip::Conf : public ydk::Entity
{
    public:
        Conf();
        ~Conf();

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

        ydk::YLeaf propagate_ttl; //type: boolean

}; // Native::Mpls::Ip::Conf


class Native::Mpls::Ip::ConfArg : public ydk::Entity
{
    public:
        ConfArg();
        ~ConfArg();

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

        class PropagateTtl; //type: Native::Mpls::Ip::ConfArg::PropagateTtl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg::PropagateTtl> propagate_ttl;
        
}; // Native::Mpls::Ip::ConfArg


class Native::Mpls::Ip::ConfArg::PropagateTtl : public ydk::Entity
{
    public:
        PropagateTtl();
        ~PropagateTtl();

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

        ydk::YLeaf forwarded; //type: boolean

}; // Native::Mpls::Ip::ConfArg::PropagateTtl


class Native::Mpls::Ip::TtlExpiration : public ydk::Entity
{
    public:
        TtlExpiration();
        ~TtlExpiration();

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

        ydk::YLeaf pop; //type: uint8

}; // Native::Mpls::Ip::TtlExpiration


class Native::Mpls::Label : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol; //type: Protocol
        class Atm; //type: Native::Mpls::Label::Atm
        class Mode; //type: Native::Mpls::Label::Mode
        class Range; //type: Native::Mpls::Label::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Atm> atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Range> range;
                class Protocol;

}; // Native::Mpls::Label


class Native::Mpls::Label::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Label::Atm


class Native::Mpls::Label::Mode : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AllVrfs; //type: Native::Mpls::Label::Mode::AllVrfs
        class Vrf; //type: Native::Mpls::Label::Mode::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs> all_vrfs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf> vrf;
        
}; // Native::Mpls::Label::Mode


class Native::Mpls::Label::Mode::AllVrfs : public ydk::Entity
{
    public:
        AllVrfs();
        ~AllVrfs();

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

        class Protocol; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::AllVrfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol : public ydk::Entity
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

        class AllAfs; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs> all_afs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::AllVrfs::Protocol


class Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs : public ydk::Entity
{
    public:
        AllAfs();
        ~AllAfs();

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

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4 : public ydk::Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

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

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6 : public ydk::Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

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

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6


class Native::Mpls::Label::Mode::Vrf : public ydk::Entity
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

        class Vrf_; //type: Native::Mpls::Label::Mode::Vrf::Vrf_

        ydk::YList vrf;
        
}; // Native::Mpls::Label::Mode::Vrf


class Native::Mpls::Label::Mode::Vrf::Vrf_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Protocol; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol : public ydk::Entity
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

        class AllAfs; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs> all_afs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs : public ydk::Entity
{
    public:
        AllAfs();
        ~AllAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4 : public ydk::Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6 : public ydk::Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6


class Native::Mpls::Label::Range : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32
        class Static; //type: Native::Mpls::Label::Range::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Label::Range::Static> static_;
        
}; // Native::Mpls::Label::Range


class Native::Mpls::Label::Range::Static : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Mpls::Label::Range::Static


class Native::Mpls::Ldp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Enable; //type: Native::Mpls::Ldp::Enable
        class Enable2; //type: Native::Mpls::Ldp::Enable2
        class Session; //type: Native::Mpls::Ldp::Session

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2> enable2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session> session;
        
}; // Native::Mpls::Ldp


class Native::Mpls::Ldp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        ydk::YLeaf advertise_labels; //type: boolean

}; // Native::Mpls::Ldp::Enable


class Native::Mpls::Ldp::Enable2 : public ydk::Entity
{
    public:
        Enable2();
        ~Enable2();

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

        ydk::YLeaf entropy_label; //type: empty
        ydk::YLeaf holdtime; //type: uint32
        ydk::YLeaf loop_detection; //type: empty
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf nsr; //type: empty
        class AdvertiseLabels; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels
        class Atm; //type: Native::Mpls::Ldp::Enable2::Atm
        class Backoff; //type: Native::Mpls::Ldp::Enable2::Backoff
        class Discovery; //type: Native::Mpls::Ldp::Enable2::Discovery
        class ExplicitNull; //type: Native::Mpls::Ldp::Enable2::ExplicitNull
        class GracefulRestart; //type: Native::Mpls::Ldp::Enable2::GracefulRestart
        class Igp; //type: Native::Mpls::Ldp::Enable2::Igp
        class Label; //type: Native::Mpls::Ldp::Enable2::Label
        class Logging; //type: Native::Mpls::Ldp::Enable2::Logging
        class Neighbor; //type: Native::Mpls::Ldp::Enable2::Neighbor
        class Password; //type: Native::Mpls::Ldp::Enable2::Password
        class RequestLabels; //type: Native::Mpls::Ldp::Enable2::RequestLabels
        class RouterId; //type: Native::Mpls::Ldp::Enable2::RouterId
        class Tcp; //type: Native::Mpls::Ldp::Enable2::Tcp
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels> advertise_labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Atm> atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::ExplicitNull> explicit_null; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Igp> igp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label> label; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RequestLabels> request_labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId> router_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2


class Native::Mpls::Ldp::Enable2::AdvertiseLabels : public ydk::Entity
{
    public:
        AdvertiseLabels();
        ~AdvertiseLabels();

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

        ydk::YLeaf oldstyle; //type: empty
        class For; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::For
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::For> for_;
        ydk::YList interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::For : public ydk::Entity
{
    public:
        For();
        ~For();

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

        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::For


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf : public ydk::Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_

        ydk::YList vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf oldstyle; //type: empty
        class For; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For> for_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For : public ydk::Entity
{
    public:
        For();
        ~For();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf control_mode; //type: ControlMode
        ydk::YLeaf vc_merge; //type: boolean
        class ControlMode;

}; // Native::Mpls::Ldp::Enable2::Atm


class Native::Mpls::Ldp::Enable2::Backoff : public ydk::Entity
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

        ydk::YLeaf initial; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Backoff


class Native::Mpls::Ldp::Enable2::Discovery : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Hello; //type: Native::Mpls::Ldp::Enable2::Discovery::Hello
        class TargetedHello; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello> targeted_hello;
        
}; // Native::Mpls::Ldp::Enable2::Discovery


class Native::Mpls::Ldp::Enable2::Discovery::Hello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Discovery::Hello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

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

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16
        class Accept; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept> accept; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

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

        ydk::YLeaf from; //type: string

}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept


class Native::Mpls::Ldp::Enable2::ExplicitNull : public ydk::Entity
{
    public:
        ExplicitNull();
        ~ExplicitNull();

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

        ydk::YLeaf for_; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::ExplicitNull


class Native::Mpls::Ldp::Enable2::GracefulRestart : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Timers; //type: Native::Mpls::Ldp::Enable2::GracefulRestart::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::GracefulRestart::Timers> timers;
        
}; // Native::Mpls::Ldp::Enable2::GracefulRestart


class Native::Mpls::Ldp::Enable2::GracefulRestart::Timers : public ydk::Entity
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

        ydk::YLeaf forwarding_holding; //type: uint16
        ydk::YLeaf max_recovery; //type: uint16
        ydk::YLeaf neighbor_liveness; //type: uint16

}; // Native::Mpls::Ldp::Enable2::GracefulRestart::Timers


class Native::Mpls::Ldp::Enable2::Igp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Sync; //type: Native::Mpls::Ldp::Enable2::Igp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Igp::Sync> sync;
        
}; // Native::Mpls::Ldp::Enable2::Igp


class Native::Mpls::Ldp::Enable2::Igp::Sync : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf holddown; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Igp::Sync


class Native::Mpls::Ldp::Enable2::Label : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class LabelModeConfigLdpLbl; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl> label_mode__config_ldp_lbl;
        
}; // Native::Mpls::Ldp::Enable2::Label


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl : public ydk::Entity
{
    public:
        LabelModeConfigLdpLbl();
        ~LabelModeConfigLdpLbl();

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

        class Allocate; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate> allocate;
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

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

        class Global; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global> global; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf host_routes; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigLdpLbl::Allocate::Global


class Native::Mpls::Ldp::Enable2::Logging : public ydk::Entity
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

        ydk::YLeaf neighbor_changes; //type: boolean
        class Password; //type: Native::Mpls::Ldp::Enable2::Logging::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Logging


class Native::Mpls::Ldp::Enable2::Logging::Password : public ydk::Entity
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

        class ConfigurationConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf
        class RolloverConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf
        class Configuration; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Configuration
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Rollover

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf> configuration_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf> rollover_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Configuration> configuration; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Rollover> rollover; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Logging::Password


class Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf : public ydk::Entity
{
    public:
        ConfigurationConf();
        ~ConfigurationConf();

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

        ydk::YLeaf configuration; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf


class Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf : public ydk::Entity
{
    public:
        RolloverConf();
        ~RolloverConf();

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

        ydk::YLeaf rollover; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf


class Native::Mpls::Ldp::Enable2::Logging::Password::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Configuration


class Native::Mpls::Ldp::Enable2::Logging::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

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

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Rollover


class Native::Mpls::Ldp::Enable2::Neighbor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf

        ydk::YList neighbor_content;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

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
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels> labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

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

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf : public ydk::Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_

        ydk::YList vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent

        ydk::YList neighbor_content;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

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
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels> labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

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

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Password : public ydk::Entity
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

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Password::Rollover

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback> fallback;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Required> required; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Password


class Native::Mpls::Ldp::Enable2::Password::Fallback : public ydk::Entity
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

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Fallback


class Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Option : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum

        ydk::YList seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

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

        ydk::YLeaf seq_num; //type: uint16
        class For; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For> for_;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For : public ydk::Entity
{
    public:
        For();
        ~For();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LINE; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE

        ydk::YList line;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE : public ydk::Entity
{
    public:
        LINE();
        ~LINE();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain : public ydk::Entity
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

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For::LINE::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Required : public ydk::Entity
{
    public:
        Required();
        ~Required();

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

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Required


class Native::Mpls::Ldp::Enable2::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

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

        ydk::YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Password::Rollover


class Native::Mpls::Ldp::Enable2::RequestLabels : public ydk::Entity
{
    public:
        RequestLabels();
        ~RequestLabels();

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

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::RequestLabels


class Native::Mpls::Ldp::Enable2::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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

        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface> interface;
        ydk::YList vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId


class Native::Mpls::Ldp::Enable2::RouterId::Interface : public ydk::Entity
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
        ydk::YLeaf force; //type: empty
        class ATMSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface : public ydk::Entity
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
        ydk::YLeaf force; //type: empty
        class ATMSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Interface::ATMACRsubinterface

class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf mpls;

};

class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf mpls;

};

class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf mpls;

};

class Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf mpls;

};

class Native::L3vpn::Encapsulation::Ip::Mpls::Mtu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};

class Native::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Atm::ControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf ordered;

};

class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_131_ */

