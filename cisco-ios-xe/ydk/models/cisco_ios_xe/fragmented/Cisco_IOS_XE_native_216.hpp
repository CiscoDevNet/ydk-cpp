#ifndef _CISCO_IOS_XE_NATIVE_216_
#define _CISCO_IOS_XE_NATIVE_216_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf provision; //type: Provision
        class Provision;

}; // Native::Switch


class Native::SwitchVirtual : public ydk::Entity
{
    public:
        SwitchVirtual();
        ~SwitchVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domain; //type: uint32
        ydk::YLeaf virtual_; //type: empty
        class Switch; //type: Native::SwitchVirtual::Switch
        class MacAddress; //type: Native::SwitchVirtual::MacAddress
        class DualActive; //type: Native::SwitchVirtual::DualActive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::Switch> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive> dual_active;
        
}; // Native::SwitchVirtual


class Native::SwitchVirtual::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_number; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::SwitchVirtual::Switch


class Native::SwitchVirtual::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_virtual; //type: empty

}; // Native::SwitchVirtual::MacAddress


class Native::SwitchVirtual::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Recovery; //type: Native::SwitchVirtual::DualActive::Recovery
        class Detection; //type: Native::SwitchVirtual::DualActive::Detection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery> recovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection> detection;
        
}; // Native::SwitchVirtual::DualActive


class Native::SwitchVirtual::DualActive::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: uint8
        class Ip; //type: Native::SwitchVirtual::DualActive::Recovery::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery::Ip> ip;
        
}; // Native::SwitchVirtual::DualActive::Recovery


class Native::SwitchVirtual::DualActive::Recovery::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::SwitchVirtual::DualActive::Recovery::Ip


class Native::SwitchVirtual::DualActive::Detection : public ydk::Entity
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

        class Pagp; //type: Native::SwitchVirtual::DualActive::Detection::Pagp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp> pagp; // presence node
        
}; // Native::SwitchVirtual::DualActive::Detection


class Native::SwitchVirtual::DualActive::Detection::Pagp : public ydk::Entity
{
    public:
        Pagp();
        ~Pagp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::SwitchVirtual::DualActive::Detection::Pagp::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp::Trust> trust;
        
}; // Native::SwitchVirtual::DualActive::Detection::Pagp


class Native::SwitchVirtual::DualActive::Detection::Pagp::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_group; //type: uint8

}; // Native::SwitchVirtual::DualActive::Detection::Pagp::Trust


class Native::Device : public ydk::Entity
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

        ydk::YLeaf classifier; //type: empty

}; // Native::Device


class Native::StackMac : public ydk::Entity
{
    public:
        StackMac();
        ~StackMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Persistent; //type: Native::StackMac::Persistent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackMac::Persistent> persistent;
        
}; // Native::StackMac


class Native::StackMac::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timer; //type: uint8

}; // Native::StackMac::Persistent


class Native::L2ProtocolTunnel : public ydk::Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cos; //type: uint8
        class Global; //type: Native::L2ProtocolTunnel::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2ProtocolTunnel::Global> global;
        
}; // Native::L2ProtocolTunnel


class Native::L2ProtocolTunnel::Global : public ydk::Entity
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

        ydk::YLeaf drop_threshold; //type: uint16

}; // Native::L2ProtocolTunnel::Global


class Native::Rep : public ydk::Entity
{
    public:
        Rep();
        ~Rep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Admin; //type: Native::Rep::Admin

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rep::Admin> admin;
        
}; // Native::Rep


class Native::Rep::Admin : public ydk::Entity
{
    public:
        Admin();
        ~Admin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vlan; //type: Native::Rep::Admin::Vlan

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rep::Admin::Vlan> > vlan;
        
}; // Native::Rep::Admin


class Native::Rep::Admin::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: uint16

}; // Native::Rep::Admin::Vlan


class Native::HwSwitch : public ydk::Entity
{
    public:
        HwSwitch();
        ~HwSwitch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Switch; //type: Native::HwSwitch::Switch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch::Switch> switch_;
        
}; // Native::HwSwitch


class Native::HwSwitch::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SwitchNumber; //type: Native::HwSwitch::Switch::SwitchNumber

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber> > switch_number;
        
}; // Native::HwSwitch::Switch


class Native::HwSwitch::Switch::SwitchNumber : public ydk::Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf switch_number; //type: uint8
        class Logging; //type: Native::HwSwitch::Switch::SwitchNumber::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber::Logging> logging;
        
}; // Native::HwSwitch::Switch::SwitchNumber


class Native::HwSwitch::Switch::SwitchNumber::Logging : public ydk::Entity
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

        class Onboard; //type: Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard> onboard; // presence node
        
}; // Native::HwSwitch::Switch::SwitchNumber::Logging


class Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard : public ydk::Entity
{
    public:
        Onboard();
        ~Onboard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: empty
        ydk::YLeaf environment; //type: empty
        ydk::YLeaf message; //type: empty
        ydk::YLeaf poe; //type: empty
        ydk::YLeaf temperature; //type: empty
        ydk::YLeaf voltage; //type: empty

}; // Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard


class Native::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf openflow; //type: empty

}; // Native::Feature


class Native::Openflow : public ydk::Entity
{
    public:
        Openflow();
        ~Openflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Switch; //type: Native::Openflow::Switch

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch> > switch_;
        
}; // Native::Openflow


class Native::Openflow::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf pipeline; //type: uint32
        ydk::YLeaf datapath_id; //type: string
        ydk::YLeaf protocol_version; //type: ProtocolVersion
        ydk::YLeaf max_backoff; //type: uint16
        ydk::YLeaf probe_interval; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf dataplane_default; //type: DataplaneDefault
        ydk::YLeaf default_miss; //type: DefaultMiss
        class Controller; //type: Native::Openflow::Switch::Controller
        class OfPort; //type: Native::Openflow::Switch::OfPort
        class RateLimit; //type: Native::Openflow::Switch::RateLimit
        class Statistics; //type: Native::Openflow::Switch::Statistics
        class Logging; //type: Native::Openflow::Switch::Logging
        class Tls; //type: Native::Openflow::Switch::Tls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Controller> controller;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::OfPort> of_port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::RateLimit> rate_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Statistics> statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Tls> tls;
                class ProtocolVersion;
        class DataplaneDefault;
        class DefaultMiss;

}; // Native::Openflow::Switch


class Native::Openflow::Switch::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Openflow::Switch::Controller::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Controller::Ipv4> > ipv4;
        
}; // Native::Openflow::Switch::Controller


class Native::Openflow::Switch::Controller::Ipv4 : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        class Port; //type: Native::Openflow::Switch::Controller::Ipv4::Port

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Controller::Ipv4::Port> > port;
        
}; // Native::Openflow::Switch::Controller::Ipv4


class Native::Openflow::Switch::Controller::Ipv4::Port : public ydk::Entity
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

        ydk::YLeaf number; //type: uint16
        class Vrf; //type: Native::Openflow::Switch::Controller::Ipv4::Port::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Controller::Ipv4::Port::Vrf> > vrf;
        
}; // Native::Openflow::Switch::Controller::Ipv4::Port


class Native::Openflow::Switch::Controller::Ipv4::Port::Vrf : public ydk::Entity
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
        ydk::YLeaf security; //type: Security
        class Security;

}; // Native::Openflow::Switch::Controller::Ipv4::Port::Vrf


class Native::Openflow::Switch::OfPort : public ydk::Entity
{
    public:
        OfPort();
        ~OfPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Openflow::Switch::OfPort::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::OfPort::Interface> > interface;
        
}; // Native::Openflow::Switch::OfPort


class Native::Openflow::Switch::OfPort::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Openflow::Switch::OfPort::Interface


class Native::Openflow::Switch::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_in; //type: uint16
        ydk::YLeaf burst; //type: uint16

}; // Native::Openflow::Switch::RateLimit


class Native::Openflow::Switch::Statistics : public ydk::Entity
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

        ydk::YLeaf collection_interval; //type: uint8

}; // Native::Openflow::Switch::Statistics


class Native::Openflow::Switch::Logging : public ydk::Entity
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

        ydk::YLeaf flow_modify; //type: empty

}; // Native::Openflow::Switch::Logging


class Native::Openflow::Switch::Tls : public ydk::Entity
{
    public:
        Tls();
        ~Tls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trustpoint; //type: Native::Openflow::Switch::Tls::Trustpoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Openflow::Switch::Tls::Trustpoint> trustpoint;
        
}; // Native::Openflow::Switch::Tls


class Native::Openflow::Switch::Tls::Trustpoint : public ydk::Entity
{
    public:
        Trustpoint();
        ~Trustpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: string
        ydk::YLeaf remote; //type: string

}; // Native::Openflow::Switch::Tls::Trustpoint


class Native::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all_interfaces; //type: empty
        class Redirect; //type: Native::Utd::Redirect
        class Engine; //type: Native::Utd::Engine

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Engine> engine; // presence node
        
}; // Native::Utd


class Native::Utd::Redirect : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Utd::Redirect::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Redirect::Interface> interface;
        
}; // Native::Utd::Redirect


class Native::Utd::Redirect::Interface : public ydk::Entity
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

        ydk::YLeaf bdi; //type: string
        ydk::YLeaf virtualportgroup; //type: uint16

}; // Native::Utd::Redirect::Interface


class Native::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
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
        class Fail; //type: Native::Utd::Engine::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Utd::Engine::Fail> fail;
                class Mode;

}; // Native::Utd::Engine


class Native::Utd::Engine::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf close; //type: empty

}; // Native::Utd::Engine::Fail


class Native::UtdSt : public ydk::Entity
{
    public:
        UtdSt();
        ~UtdSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Utd; //type: Native::UtdSt::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd> utd;
        
}; // Native::UtdSt


class Native::UtdSt::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class WebFilter; //type: Native::UtdSt::Utd::WebFilter
        class Engine; //type: Native::UtdSt::Utd::Engine
        class ThreatInspection; //type: Native::UtdSt::Utd::ThreatInspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter> web_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine> engine;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection> threat_inspection;
        
}; // Native::UtdSt::Utd


class Native::UtdSt::Utd::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Block; //type: Native::UtdSt::Utd::WebFilter::Block
        class Sourcedb; //type: Native::UtdSt::Utd::WebFilter::Sourcedb
        class Url; //type: Native::UtdSt::Utd::WebFilter::Url
        class Domain; //type: Native::UtdSt::Utd::WebFilter::Domain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block> block;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Sourcedb> > sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url> url;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain> domain;
        
}; // Native::UtdSt::Utd::WebFilter


class Native::UtdSt::Utd::WebFilter::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LocalServer; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer
        class Page; //type: Native::UtdSt::Utd::WebFilter::Block::Page

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer> local_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::Page> page;
        
}; // Native::UtdSt::Utd::WebFilter::Block


class Native::UtdSt::Utd::WebFilter::Block::LocalServer : public ydk::Entity
{
    public:
        LocalServer();
        ~LocalServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf http_ports; //type: string
        class BlockPageInterface; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface
        class Content; //type: Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface> block_page_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content> content;
        
}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface : public ydk::Entity
{
    public:
        BlockPageInterface();
        ~BlockPageInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface


class Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content : public ydk::Entity
{
    public:
        Content();
        ~Content();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf text; //type: string
        ydk::YLeaf file; //type: string

}; // Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content


class Native::UtdSt::Utd::WebFilter::Block::Page : public ydk::Entity
{
    public:
        Page();
        ~Page();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Block::Page::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Block::Page::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Block::Page


class Native::UtdSt::Utd::WebFilter::Block::Page::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf redirect_url; //type: string
        ydk::YLeaf text; //type: string

}; // Native::UtdSt::Utd::WebFilter::Block::Page::Profile


class Native::UtdSt::Utd::WebFilter::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        class Logging; //type: Native::UtdSt::Utd::WebFilter::Sourcedb::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Sourcedb::Logging> logging;
        
}; // Native::UtdSt::Utd::WebFilter::Sourcedb


class Native::UtdSt::Utd::WebFilter::Sourcedb::Logging : public ydk::Entity
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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::WebFilter::Sourcedb::Logging


class Native::UtdSt::Utd::WebFilter::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Url::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Url


class Native::UtdSt::Utd::WebFilter::Url::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeafList alert; //type: list of  Alert
        class Blacklist; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist
        class Categories; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories
        class Block; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Block
        class Log; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Log
        class Reputation; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation
        class Sourcedb; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb
        class Whitelist; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist> blacklist; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories> categories;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation> reputation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb> sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist> whitelist; // presence node
                class Alert;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile


class Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist : public ydk::Entity
{
    public:
        Blacklist();
        ~Blacklist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist


class Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories : public ydk::Entity
{
    public:
        Categories();
        ~Categories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allow; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow
        class Block; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow> allow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block> block; // presence node
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category> > category;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category> > category;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block


class Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category


class Native::UtdSt::Utd::WebFilter::Url::Profile::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_server; //type: string
        ydk::YLeaf page_profile; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Block


class Native::UtdSt::Utd::WebFilter::Url::Profile::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Log


class Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation : public ydk::Entity
{
    public:
        Reputation();
        ~Reputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_threshold; //type: BlockThreshold
        class BlockThreshold;

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation


class Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fail; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail> fail;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb


class Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf close; //type: empty

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail


class Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist


class Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Domain : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile> > profile;
        
}; // Native::UtdSt::Utd::WebFilter::Domain


class Native::UtdSt::Utd::WebFilter::Domain::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf alert; //type: Alert
        class Blacklist; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist
        class RedirectServer; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer
        class Whitelist; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist> blacklist; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer> redirect_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist> whitelist; // presence node
                class Alert;

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist : public ydk::Entity
{
    public:
        Blacklist();
        ~Blacklist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap


class Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer : public ydk::Entity
{
    public:
        RedirectServer();
        ~RedirectServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external; //type: string
        ydk::YLeaf local_block_server; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist


class Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap


class Native::UtdSt::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Advanced; //type: Native::UtdSt::Utd::Engine::Advanced
        class Standard; //type: Native::UtdSt::Utd::Engine::Standard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Advanced> advanced; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard> standard; // presence node
        
}; // Native::UtdSt::Utd::Engine


class Native::UtdSt::Utd::Engine::Advanced : public ydk::Entity
{
    public:
        Advanced();
        ~Advanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Threat; //type: Native::UtdSt::Utd::Engine::Advanced::Threat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Advanced::Threat> threat;
        
}; // Native::UtdSt::Utd::Engine::Advanced


class Native::UtdSt::Utd::Engine::Advanced::Threat : public ydk::Entity
{
    public:
        Threat();
        ~Threat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf detection; //type: empty

}; // Native::UtdSt::Utd::Engine::Advanced::Threat


class Native::UtdSt::Utd::Engine::Standard : public ydk::Entity
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

        class Logging; //type: Native::UtdSt::Utd::Engine::Standard::Logging
        class ThreatInspection; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection
        class WebFilter; //type: Native::UtdSt::Utd::Engine::Standard::WebFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection> threat_inspection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::WebFilter> web_filter; // presence node
        
}; // Native::UtdSt::Utd::Engine::Standard


class Native::UtdSt::Utd::Engine::Standard::Logging : public ydk::Entity
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

        ydk::YLeaf syslog; //type: empty
        class Host; //type: Native::UtdSt::Utd::Engine::Standard::Logging::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::Logging::Host> > host;
        
}; // Native::UtdSt::Utd::Engine::Standard::Logging


class Native::UtdSt::Utd::Engine::Standard::Logging::Host : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::Logging::Host


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threat; //type: Threat
        ydk::YLeaf policy; //type: Policy
        ydk::YLeaf whitelist; //type: empty
        class Signature; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature
        class Logging; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature> signature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging> logging;
                class Threat;
        class Policy;

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Update; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update> update;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OccurAt; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt
        class Server; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server> server;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt : public ydk::Entity
{
    public:
        OccurAt();
        ~OccurAt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf daily; //type: empty
        ydk::YLeaf monthly; //type: string
        ydk::YLeaf weekly; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server : public ydk::Entity
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

        class Cisco; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url> url;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
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
        class All; //type: Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All


class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging : public ydk::Entity
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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging


class Native::UtdSt::Utd::Engine::Standard::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sourcedb; //type: string
        ydk::YLeaf domain_profile; //type: string
        ydk::YLeaf url_profile; //type: string

}; // Native::UtdSt::Utd::Engine::Standard::WebFilter


class Native::UtdSt::Utd::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Whitelist; //type: Native::UtdSt::Utd::ThreatInspection::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection::Whitelist> whitelist; // presence node
        
}; // Native::UtdSt::Utd::ThreatInspection


class Native::UtdSt::Utd::ThreatInspection::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Signature; //type: Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature> > signature;
        
}; // Native::UtdSt::Utd::ThreatInspection::Whitelist


class Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf comment; //type: string

}; // Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature


class Native::UtdMt : public ydk::Entity
{
    public:
        UtdMt();
        ~UtdMt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Utd; //type: Native::UtdMt::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd> utd;
        
}; // Native::UtdMt


class Native::UtdMt::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf multi_tenancy; //type: empty
        class Engine; //type: Native::UtdMt::Utd::Engine

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine> engine;
        
}; // Native::UtdMt::Utd


class Native::UtdMt::Utd::Engine : public ydk::Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Standard; //type: Native::UtdMt::Utd::Engine::Standard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard> standard;
        
}; // Native::UtdMt::Utd::Engine


class Native::UtdMt::Utd::Engine::Standard : public ydk::Entity
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

        class MultiTenancy; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy> multi_tenancy; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy : public ydk::Entity
{
    public:
        MultiTenancy();
        ~MultiTenancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class WebFilter; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter
        class ThreatInspection; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection
        class Utd_; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_
        class Policy; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter> web_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection> threat_inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_> utd;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy> > policy;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Block; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block
        class Sourcedb; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb
        class Url; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block> block;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb> > sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url> url;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LocalServer; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer
        class Page; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer> local_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page> page;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer : public ydk::Entity
{
    public:
        LocalServer();
        ~LocalServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile> > profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf http_ports; //type: string
        class BlockPageInterface; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface
        class Content; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface> block_page_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content> content;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface : public ydk::Entity
{
    public:
        BlockPageInterface();
        ~BlockPageInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content : public ydk::Entity
{
    public:
        Content();
        ~Content();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf text; //type: string
        ydk::YLeaf file; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page : public ydk::Entity
{
    public:
        Page();
        ~Page();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile> > profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf file; //type: string
        ydk::YLeaf redirect_url; //type: string
        ydk::YLeaf text; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        class Logging; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging> logging;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging : public ydk::Entity
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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile> > profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeafList alert; //type: list of  Alert
        class Blacklist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist
        class Categories; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories
        class Block; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block
        class Log; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log
        class Reputation; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation
        class Sourcedb; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb
        class Whitelist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist> blacklist; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories> categories;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log> log;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation> reputation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb> sourcedb;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist> whitelist; // presence node
                class Alert;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist : public ydk::Entity
{
    public:
        Blacklist();
        ~Blacklist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap> parameter_map;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories : public ydk::Entity
{
    public:
        Categories();
        ~Categories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allow; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow
        class Block; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow> allow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block> block; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category> > category;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category> > category;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_server; //type: string
        ydk::YLeaf page_profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation : public ydk::Entity
{
    public:
        Reputation();
        ~Reputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_threshold; //type: BlockThreshold
        class BlockThreshold;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fail; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail> fail;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf close; //type: empty

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Whitelist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist
        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist> whitelist;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile> > profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile> > profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
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
        class Signature; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Signature

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Signature> > signature;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf comment; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Signature


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
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
        ydk::YLeaf threat; //type: Threat
        ydk::YLeaf policy; //type: Policy
        class Logging; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging
        class Whitelist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist> whitelist;
                class Threat;
        class Policy;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging : public ydk::Entity
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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_ : public ydk::Entity
{
    public:
        Utd_();
        ~Utd_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global> global; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global : public ydk::Entity
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

        class Logging; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging
        class ThreatInspection; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection
        class WebFilter; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection> threat_inspection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter> web_filter; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging : public ydk::Entity
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

        ydk::YLeaf syslog; //type: empty
        class Host; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host> > host;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Signature; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature> signature;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Update; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update> update;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OccurAt; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt
        class Server; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server> server;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt : public ydk::Entity
{
    public:
        OccurAt();
        ~OccurAt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf daily; //type: empty
        ydk::YLeaf monthly; //type: string
        ydk::YLeaf weekly; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server : public ydk::Entity
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

        class Cisco; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url> url;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
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
        class All; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sourcedb; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Vrf; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf
        class ThreatInspection; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection
        class WebFilter; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection> threat_inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter> web_filter;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf : public ydk::Entity
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

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection

class Native::Switch::Provision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ws_c2960x_24pd_l;
        static const ydk::Enum::YLeaf ws_c3650_48ps;
        static const ydk::Enum::YLeaf ws_c3650_24ps;
        static const ydk::Enum::YLeaf ws_c3850_48p;
        static const ydk::Enum::YLeaf ws_c3850_24p;
        static const ydk::Enum::YLeaf ws_c3850_48t;
        static const ydk::Enum::YLeaf ws_c3850_24t;
        static const ydk::Enum::YLeaf ws_c3850_48f;
        static const ydk::Enum::YLeaf ws_c3850_48u;
        static const ydk::Enum::YLeaf ws_c3850_24u;
        static const ydk::Enum::YLeaf ws_c3850_12x48u;
        static const ydk::Enum::YLeaf ws_c3850_24xu;
        static const ydk::Enum::YLeaf ws_c3850_24ux;
        static const ydk::Enum::YLeaf ws_c3850_12s;
        static const ydk::Enum::YLeaf ws_c3850_24s;
        static const ydk::Enum::YLeaf ws_c3850_12xs;
        static const ydk::Enum::YLeaf ws_c3850_24xs;
        static const ydk::Enum::YLeaf ws_c3850_48xs;
        static const ydk::Enum::YLeaf ws_c3650_12x48fd;
        static const ydk::Enum::YLeaf ws_c3650_12x48uq;
        static const ydk::Enum::YLeaf ws_c3650_12x48ur;
        static const ydk::Enum::YLeaf ws_c3650_12x48uz;
        static const ydk::Enum::YLeaf ws_c3650_24pd;
        static const ydk::Enum::YLeaf ws_c3650_24pdm;
        static const ydk::Enum::YLeaf ws_c3650_24td;
        static const ydk::Enum::YLeaf ws_c3650_24ts;
        static const ydk::Enum::YLeaf ws_c3650_48fqm;
        static const ydk::Enum::YLeaf ws_c3650_48pd;
        static const ydk::Enum::YLeaf ws_c3650_48pq;
        static const ydk::Enum::YLeaf ws_c3650_48td;
        static const ydk::Enum::YLeaf ws_c3650_48tq;
        static const ydk::Enum::YLeaf ws_c3650_48ts;
        static const ydk::Enum::YLeaf ws_c3650_8x24pd;
        static const ydk::Enum::YLeaf ws_c3650_8x24uq;
        static const ydk::Enum::YLeaf ws_c3750x_24p;
        static const ydk::Enum::YLeaf ws_c3750x_12s;
        static const ydk::Enum::YLeaf ws_c3850_12x48au;
        static const ydk::Enum::YLeaf c9300_24p;
        static const ydk::Enum::YLeaf c9300_24t;
        static const ydk::Enum::YLeaf c9300_24u;
        static const ydk::Enum::YLeaf c9300_48p;
        static const ydk::Enum::YLeaf c9300_48t;
        static const ydk::Enum::YLeaf c9300_48u;

};

class Native::SwitchVirtual::Switch::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf virtual_;

};

class Native::Openflow::Switch::ProtocolVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1__DOT__0;
        static const ydk::Enum::YLeaf Y_1__DOT__3;
        static const ydk::Enum::YLeaf negotiate;

};

class Native::Openflow::Switch::DataplaneDefault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secure;
        static const ydk::Enum::YLeaf standalone;

};

class Native::Openflow::Switch::DefaultMiss : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf continue_drop;
        static const ydk::Enum::YLeaf drop;

};

class Native::Openflow::Switch::Controller::Ipv4::Port::Vrf::Security : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tls;

};

class Native::Utd::Engine::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf advanced;

};

class Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf debug;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf trace;
        static const ydk::Enum::YLeaf warning;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf blacklist;
        static const ydk::Enum::YLeaf categories_reputation;
        static const ydk::Enum::YLeaf whitelist;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detailed;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_risk;
        static const ydk::Enum::YLeaf low_risk;
        static const ydk::Enum::YLeaf moderate_risk;
        static const ydk::Enum::YLeaf suspicious;
        static const ydk::Enum::YLeaf trustworthy;

};

class Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf blacklist;
        static const ydk::Enum::YLeaf whitelist;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detection;
        static const ydk::Enum::YLeaf protection;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf balanced;
        static const ydk::Enum::YLeaf connectivity;
        static const ydk::Enum::YLeaf security;

};

class Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emerg;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf crit;
        static const ydk::Enum::YLeaf err;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf debug;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf trace;
        static const ydk::Enum::YLeaf warning;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Alert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf blacklist;
        static const ydk::Enum::YLeaf categories_reputation;
        static const ydk::Enum::YLeaf whitelist;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detailed;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_risk;
        static const ydk::Enum::YLeaf low_risk;
        static const ydk::Enum::YLeaf moderate_risk;
        static const ydk::Enum::YLeaf suspicious;
        static const ydk::Enum::YLeaf trustworthy;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Threat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detection;
        static const ydk::Enum::YLeaf protection;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf balanced;
        static const ydk::Enum::YLeaf connectivity;
        static const ydk::Enum::YLeaf security;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emerg;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf crit;
        static const ydk::Enum::YLeaf err;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_216_ */

