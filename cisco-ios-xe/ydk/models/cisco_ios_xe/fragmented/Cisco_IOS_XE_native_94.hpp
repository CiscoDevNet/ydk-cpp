#ifndef _CISCO_IOS_XE_NATIVE_94_
#define _CISCO_IOS_XE_NATIVE_94_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_93.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling : public ydk::Entity
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

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public ydk::Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpu_range; //type: uint8
        ydk::YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Profile : public ydk::Entity
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

        ydk::YLeaf flow; //type: empty

}; // Native::Profile


class Native::PseudowireClass : public ydk::Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

        bool has_data() const override;
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
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf control_word; //type: empty
        ydk::YLeaf interworking; //type: Interworking
        ydk::YLeaf sequencing; //type: Sequencing
        class Ip; //type: Native::PseudowireClass::Ip
        class LoadBalance; //type: Native::PseudowireClass::LoadBalance
        class Monitor; //type: Native::PseudowireClass::Monitor
        class PreferredPath; //type: Native::PseudowireClass::PreferredPath
        class ProtocolMpls; //type: Native::PseudowireClass::ProtocolMpls
        class ProtocolL2Tpv2; //type: Native::PseudowireClass::ProtocolL2Tpv2
        class ProtocolL2Tpv3; //type: Native::PseudowireClass::ProtocolL2Tpv3
        class Status; //type: Native::PseudowireClass::Status
        class Switching; //type: Native::PseudowireClass::Switching

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv2> protocol_l2tpv2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv3> protocol_l2tpv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolMpls> protocol_mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status> status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Switching> switching;
                class Encapsulation;
        class Interworking;
        class Sequencing;

}; // Native::PseudowireClass


class Native::PseudowireClass::Ip : public ydk::Entity
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

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf ttl; //type: uint8
        class Dfbit; //type: Native::PseudowireClass::Ip::Dfbit
        class Local; //type: Native::PseudowireClass::Ip::Local
        class Pmtu; //type: Native::PseudowireClass::Ip::Pmtu
        class Tos; //type: Native::PseudowireClass::Ip::Tos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Dfbit> dfbit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Pmtu> pmtu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Tos> tos;
                class Protocol;

}; // Native::PseudowireClass::Ip


class Native::PseudowireClass::Ip::Dfbit : public ydk::Entity
{
    public:
        Dfbit();
        ~Dfbit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set; //type: empty

}; // Native::PseudowireClass::Ip::Dfbit


class Native::PseudowireClass::Ip::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Ip::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface> interface;
        
}; // Native::PseudowireClass::Ip::Local


class Native::PseudowireClass::Ip::Local::Interface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Ip::Local::Interface


class Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface


class Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface


class Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface


class Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::Ip::Pmtu : public ydk::Entity
{
    public:
        Pmtu();
        ~Pmtu();

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

}; // Native::PseudowireClass::Ip::Pmtu


class Native::PseudowireClass::Ip::Tos : public ydk::Entity
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

        ydk::YLeaf reflect; //type: empty
        ydk::YLeaf value_; //type: uint8

}; // Native::PseudowireClass::Ip::Tos


class Native::PseudowireClass::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::PseudowireClass::LoadBalance::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance::Flow> flow; // presence node
        
}; // Native::PseudowireClass::LoadBalance


class Native::PseudowireClass::LoadBalance::Flow : public ydk::Entity
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

        ydk::YLeaf ethernet; //type: Ethernet
        class Ethernet;

}; // Native::PseudowireClass::LoadBalance::Flow


class Native::PseudowireClass::Monitor : public ydk::Entity
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

        class Peer; //type: Native::PseudowireClass::Monitor::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer> peer;
        
}; // Native::PseudowireClass::Monitor


class Native::PseudowireClass::Monitor::Peer : public ydk::Entity
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

        class Bfd; //type: Native::PseudowireClass::Monitor::Peer::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd> bfd; // presence node
        
}; // Native::PseudowireClass::Monitor::Peer


class Native::PseudowireClass::Monitor::Peer::Bfd : public ydk::Entity
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

        class Local; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local> local;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd


class Native::PseudowireClass::Monitor::Peer::Bfd::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface> interface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::PreferredPath::Interface
        class PeerContainer; //type: Native::PseudowireClass::PreferredPath::PeerContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::PeerContainer> peer_container;
        
}; // Native::PseudowireClass::PreferredPath


class Native::PseudowireClass::PreferredPath::Interface : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: uint64
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::Interface


class Native::PseudowireClass::PreferredPath::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::PeerContainer


class Native::PseudowireClass::ProtocolL2Tpv2 : public ydk::Entity
{
    public:
        ProtocolL2Tpv2();
        ~ProtocolL2Tpv2();

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

}; // Native::PseudowireClass::ProtocolL2Tpv2


class Native::PseudowireClass::ProtocolL2Tpv3 : public ydk::Entity
{
    public:
        ProtocolL2Tpv3();
        ~ProtocolL2Tpv3();

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

}; // Native::PseudowireClass::ProtocolL2Tpv3


class Native::PseudowireClass::ProtocolMpls : public ydk::Entity
{
    public:
        ProtocolMpls();
        ~ProtocolMpls();

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

}; // Native::PseudowireClass::ProtocolMpls


class Native::PseudowireClass::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: empty
        class AdminDown; //type: Native::PseudowireClass::Status::AdminDown
        class ControlPlane; //type: Native::PseudowireClass::Status::ControlPlane
        class Peer; //type: Native::PseudowireClass::Status::Peer
        class Redundancy; //type: Native::PseudowireClass::Status::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::AdminDown> admin_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::ControlPlane> control_plane;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Redundancy> redundancy;
        
}; // Native::PseudowireClass::Status


class Native::PseudowireClass::Status::AdminDown : public ydk::Entity
{
    public:
        AdminDown();
        ~AdminDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnect; //type: empty

}; // Native::PseudowireClass::Status::AdminDown


class Native::PseudowireClass::Status::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_watch; //type: empty

}; // Native::PseudowireClass::Status::ControlPlane


class Native::PseudowireClass::Status::Peer : public ydk::Entity
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

        class Topology; //type: Native::PseudowireClass::Status::Peer::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer::Topology> topology;
        
}; // Native::PseudowireClass::Status::Peer


class Native::PseudowireClass::Status::Peer::Topology : public ydk::Entity
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

        ydk::YLeaf dual_homed; //type: empty

}; // Native::PseudowireClass::Status::Peer::Topology


class Native::PseudowireClass::Status::Redundancy : public ydk::Entity
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

        ydk::YLeaf master; //type: empty

}; // Native::PseudowireClass::Status::Redundancy


class Native::PseudowireClass::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv; //type: empty

}; // Native::PseudowireClass::Switching


class Native::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmib; //type: empty
        class Account; //type: Native::Qos::Account
        class ControlPackets; //type: Native::Qos::ControlPackets
        class Preserve; //type: Native::Qos::Preserve
        class Trace; //type: Native::Qos::Trace
        class QueueSoftmaxMultiplier; //type: Native::Qos::QueueSoftmaxMultiplier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account> account;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::ControlPackets> control_packets; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve> preserve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::QueueSoftmaxMultiplier> queue_softmax_multiplier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Trace> trace;
        
}; // Native::Qos


class Native::Qos::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LayerAll; //type: Native::Qos::Account::LayerAll
        class Layer2; //type: Native::Qos::Account::Layer2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2> layer2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::LayerAll> layer_all;
        
}; // Native::Qos::Account


class Native::Qos::Account::Layer2 : public ydk::Entity
{
    public:
        Layer2();
        ~Layer2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Encapsulation; //type: Native::Qos::Account::Layer2::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation> encapsulation;
        
}; // Native::Qos::Account::Layer2


class Native::Qos::Account::Layer2::Encapsulation : public ydk::Entity
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

        ydk::YLeaf arpa; //type: empty
        ydk::YLeaf dot1q; //type: empty
        ydk::YLeaf isl; //type: empty
        class Length; //type: Native::Qos::Account::Layer2::Encapsulation::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation::Length> length; // presence node
        
}; // Native::Qos::Account::Layer2::Encapsulation


class Native::Qos::Account::Layer2::Encapsulation::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf byte_length; //type: int8

}; // Native::Qos::Account::Layer2::Encapsulation::Length


class Native::Qos::Account::LayerAll : public ydk::Entity
{
    public:
        LayerAll();
        ~LayerAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encapsulation; //type: empty

}; // Native::Qos::Account::LayerAll


class Native::Qos::ControlPackets : public ydk::Entity
{
    public:
        ControlPackets();
        ~ControlPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bpdu_range; //type: empty
        ydk::YLeaf cdp_vtp; //type: empty
        ydk::YLeaf eapol; //type: empty
        ydk::YLeaf lldp; //type: empty
        ydk::YLeaf protocol_tunnel; //type: empty
        ydk::YLeaf sstp; //type: empty

}; // Native::Qos::ControlPackets


class Native::Qos::Preserve : public ydk::Entity
{
    public:
        Preserve();
        ~Preserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Marking; //type: Native::Qos::Preserve::Marking
        class Mpls; //type: Native::Qos::Preserve::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve::Marking> marking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve::Mpls> mpls;
        
}; // Native::Qos::Preserve


class Native::Qos::Preserve::Marking : public ydk::Entity
{
    public:
        Marking();
        ~Marking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hipriority; //type: empty

}; // Native::Qos::Preserve::Marking


class Native::Qos::Preserve::Mpls : public ydk::Entity
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

        ydk::YLeaf exp; //type: empty

}; // Native::Qos::Preserve::Mpls


class Native::Qos::QueueSoftmaxMultiplier : public ydk::Entity
{
    public:
        QueueSoftmaxMultiplier();
        ~QueueSoftmaxMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf value_; //type: int16

}; // Native::Qos::QueueSoftmaxMultiplier


class Native::Qos::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Resize; //type: Native::Qos::Trace::Resize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Trace::Resize> resize;
        
}; // Native::Qos::Trace


class Native::Qos::Trace::Resize : public ydk::Entity
{
    public:
        Resize();
        ~Resize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf size; //type: int32
        ydk::YLeaf all; //type: int32
        ydk::YLeaf error; //type: int32
        ydk::YLeaf event; //type: int32
        ydk::YLeaf warning; //type: int32

}; // Native::Qos::Trace::Resize


class Native::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Filter; //type: Native::Radius::Filter
        class Server; //type: Native::Radius::Server

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Filter> > filter;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server> > server;
        
}; // Native::Radius


class Native::Radius::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
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
        ydk::YLeaf match; //type: Match
        class Match;

}; // Native::Radius::Filter


class Native::Radius::Server : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf retransmit; //type: uint8
        class Address; //type: Native::Radius::Server::Address
        class AutomateTester; //type: Native::Radius::Server::AutomateTester
        class Backoff; //type: Native::Radius::Server::Backoff
        class Key; //type: Native::Radius::Server::Key
        class Pac; //type: Native::Radius::Server::Pac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::AutomateTester> automate_tester;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Pac> pac;
        
}; // Native::Radius::Server


class Native::Radius::Server::Address : public ydk::Entity
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

        class Ipv4; //type: Native::Radius::Server::Address::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Address::Ipv4> ipv4;
        
}; // Native::Radius::Server::Address


class Native::Radius::Server::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf host; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16

}; // Native::Radius::Server::Address::Ipv4


class Native::Radius::Server::AutomateTester : public ydk::Entity
{
    public:
        AutomateTester();
        ~AutomateTester();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf at_option; //type: AtOption
        class AtOption;

}; // Native::Radius::Server::AutomateTester


class Native::Radius::Server::Backoff : public ydk::Entity
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

        class Exponential; //type: Native::Radius::Server::Backoff::Exponential

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Backoff::Exponential> exponential; // presence node
        
}; // Native::Radius::Server::Backoff


class Native::Radius::Server::Backoff::Exponential : public ydk::Entity
{
    public:
        Exponential();
        ~Exponential();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_delay; //type: uint8
        ydk::YLeaf backoff_retry; //type: uint8

}; // Native::Radius::Server::Backoff::Exponential


class Native::Radius::Server::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Key


class Native::Radius::Server::Pac : public ydk::Entity
{
    public:
        Pac();
        ~Pac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Radius::Server::Pac::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Radius::Server::Pac::Key> key;
        
}; // Native::Radius::Server::Pac


class Native::Radius::Server::Pac::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Radius::Server::Pac::Key


class Native::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
        class Attribute; //type: Native::RadiusServer::Attribute
        class DeadCriteria; //type: Native::RadiusServer::DeadCriteria
        class Host; //type: Native::RadiusServer::Host
        class Key; //type: Native::RadiusServer::Key
        class SourcePorts; //type: Native::RadiusServer::SourcePorts
        class Vsa; //type: Native::RadiusServer::Vsa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute> > attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::DeadCriteria> dead_criteria;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host> > host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::SourcePorts> source_ports;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa> vsa;
        
}; // Native::RadiusServer


class Native::RadiusServer::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
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
        ydk::YLeafList send_attribute; //type: list of  SendAttribute
        class AccessRequest; //type: Native::RadiusServer::Attribute::AccessRequest
        class Attri31; //type: Native::RadiusServer::Attribute::Attri31

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::AccessRequest> access_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31> attri31;
                class SendAttribute;

}; // Native::RadiusServer::Attribute


class Native::RadiusServer::Attribute::AccessRequest : public ydk::Entity
{
    public:
        AccessRequest();
        ~AccessRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include; //type: empty

}; // Native::RadiusServer::Attribute::AccessRequest


class Native::RadiusServer::Attribute::Attri31 : public ydk::Entity
{
    public:
        Attri31();
        ~Attri31();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attri31List; //type: Native::RadiusServer::Attribute::Attri31::Attri31List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List> > attri31_list;
        
}; // Native::RadiusServer::Attribute::Attri31


class Native::RadiusServer::Attribute::Attri31::Attri31List : public ydk::Entity
{
    public:
        Attri31List();
        ~Attri31List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf calling_station_id; //type: CallingStationId
        class IdMac; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac
        class IdSend; //type: Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac> id_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend> id_send;
                class CallingStationId;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac : public ydk::Entity
{
    public:
        IdMac();
        ~IdMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        ydk::YLeaf lu_case; //type: LuCase
        class Format;
        class LuCase;

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac


class Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend : public ydk::Entity
{
    public:
        IdSend();
        ~IdSend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nas_port_detail; //type: empty
        ydk::YLeaf mac_only; //type: empty

}; // Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend


class Native::RadiusServer::DeadCriteria : public ydk::Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time; //type: uint8
        ydk::YLeaf tries; //type: uint8

}; // Native::RadiusServer::DeadCriteria


class Native::RadiusServer::Host : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16
        ydk::YLeaf retransmit; //type: uint8
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf key; //type: one of string, enumeration
        ydk::YLeaf clear_key; //type: string
        class Test; //type: Native::RadiusServer::Host::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test> test;
                class Key;

}; // Native::RadiusServer::Host


class Native::RadiusServer::Host::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Username; //type: Native::RadiusServer::Host::Test::Username

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username> > username;
        
}; // Native::RadiusServer::Host::Test


class Native::RadiusServer::Host::Test::Username : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Key; //type: Native::RadiusServer::Host::Test::Username::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Host::Test::Username::Key> key;
        
}; // Native::RadiusServer::Host::Test::Username


class Native::RadiusServer::Host::Test::Username::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Host::Test::Username::Key


class Native::RadiusServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::RadiusServer::Key


class Native::RadiusServer::SourcePorts : public ydk::Entity
{
    public:
        SourcePorts();
        ~SourcePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf extended; //type: empty

}; // Native::RadiusServer::SourcePorts


class Native::RadiusServer::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Disallow; //type: Native::RadiusServer::Vsa::Disallow
        class Send; //type: Native::RadiusServer::Vsa::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Disallow> disallow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send> send; // presence node
        
}; // Native::RadiusServer::Vsa


class Native::RadiusServer::Vsa::Disallow : public ydk::Entity
{
    public:
        Disallow();
        ~Disallow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unknown; //type: empty

}; // Native::RadiusServer::Vsa::Disallow


class Native::RadiusServer::Vsa::Send : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Accounting; //type: Native::RadiusServer::Vsa::Send::Accounting
        class Authentication; //type: Native::RadiusServer::Vsa::Send::Authentication
        class CiscoNasPort; //type: Native::RadiusServer::Vsa::Send::CiscoNasPort

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Accounting> accounting; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RadiusServer::Vsa::Send::CiscoNasPort> cisco_nas_port; // presence node
        
}; // Native::RadiusServer::Vsa::Send


class Native::RadiusServer::Vsa::Send::Accounting : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Accounting


class Native::RadiusServer::Vsa::Send::Authentication : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::Authentication


class Native::RadiusServer::Vsa::Send::CiscoNasPort : public ydk::Entity
{
    public:
        CiscoNasPort();
        ~CiscoNasPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threegpp2; //type: empty

}; // Native::RadiusServer::Vsa::Send::CiscoNasPort


class Native::Redundancy : public ydk::Entity
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

        ydk::YLeaf maintenance_mode; //type: empty
        ydk::YLeaf mode; //type: Mode
        class MainCpu; //type: Native::Redundancy::MainCpu
        class Policy; //type: Native::Redundancy::Policy
        class Timer; //type: Native::Redundancy::Timer
        class Interchassis; //type: Native::Redundancy::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis> interchassis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu> main_cpu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Timer> timer;
                class Mode;

}; // Native::Redundancy


class Native::Redundancy::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Group; //type: Native::Redundancy::Interchassis::Group

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group> > group;
        
}; // Native::Redundancy::Interchassis


class Native::Redundancy::Interchassis::Group : public ydk::Entity
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

        ydk::YLeaf group_number; //type: uint64
        class Monitor; //type: Native::Redundancy::Interchassis::Group::Monitor
        class Member; //type: Native::Redundancy::Interchassis::Group::Member
        class Backbone; //type: Native::Redundancy::Interchassis::Group::Backbone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone> backbone;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Member> member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Monitor> monitor;
        
}; // Native::Redundancy::Interchassis::Group


class Native::Redundancy::Interchassis::Group::Backbone : public ydk::Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface> interface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone


class Native::Redundancy::Interchassis::Group::Backbone::Interface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Redundancy::Interchassis::Group::Backbone::Interface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface


class Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface


class Native::Redundancy::Interchassis::Group::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string

}; // Native::Redundancy::Interchassis::Group::Member


class Native::Redundancy::Interchassis::Group::Monitor : public ydk::Entity
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

        ydk::YLeaf peer; //type: empty
        ydk::YLeaf bfd; //type: empty

}; // Native::Redundancy::Interchassis::Group::Monitor


class Native::Redundancy::MainCpu : public ydk::Entity
{
    public:
        MainCpu();
        ~MainCpu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoSync; //type: Native::Redundancy::MainCpu::AutoSync
        class Standby; //type: Native::Redundancy::MainCpu::Standby

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::AutoSync> auto_sync;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby> standby;
        
}; // Native::Redundancy::MainCpu


class Native::Redundancy::MainCpu::AutoSync : public ydk::Entity
{
    public:
        AutoSync();
        ~AutoSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf config_register; //type: empty
        ydk::YLeaf bootvar; //type: empty
        ydk::YLeaf standard; //type: empty

}; // Native::Redundancy::MainCpu::AutoSync


class Native::Redundancy::MainCpu::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Console; //type: Native::Redundancy::MainCpu::Standby::Console
        class Initialization; //type: Native::Redundancy::MainCpu::Standby::Initialization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Console> console;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization> initialization;
        
}; // Native::Redundancy::MainCpu::Standby


class Native::Redundancy::MainCpu::Standby::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
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

}; // Native::Redundancy::MainCpu::Standby::Console


class Native::Redundancy::MainCpu::Standby::Initialization : public ydk::Entity
{
    public:
        Initialization();
        ~Initialization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Delay; //type: Native::Redundancy::MainCpu::Standby::Initialization::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization::Delay> delay;
        
}; // Native::Redundancy::MainCpu::Standby::Initialization


class Native::Redundancy::MainCpu::Standby::Initialization::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf second; //type: uint16
        ydk::YLeaf boot_only; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Initialization::Delay


class Native::Redundancy::Policy : public ydk::Entity
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

        class ConfigSync; //type: Native::Redundancy::Policy::ConfigSync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync> config_sync;
        
}; // Native::Redundancy::Policy


class Native::Redundancy::Policy::ConfigSync : public ydk::Entity
{
    public:
        ConfigSync();
        ~ConfigSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bulk; //type: Native::Redundancy::Policy::ConfigSync::Bulk
        class Lbl; //type: Native::Redundancy::Policy::ConfigSync::Lbl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk> bulk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl> lbl;
        
}; // Native::Redundancy::Policy::ConfigSync


class Native::Redundancy::Policy::ConfigSync::Bulk : public ydk::Entity
{
    public:
        Bulk();
        ~Bulk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Bulk::Prc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Bulk


class Native::Redundancy::Policy::ConfigSync::Bulk::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Bulk::Prc


class Native::Redundancy::Policy::ConfigSync::Lbl : public ydk::Entity
{
    public:
        Lbl();
        ~Lbl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Lbl::Prc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Lbl


class Native::Redundancy::Policy::ConfigSync::Lbl::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Lbl::Prc


class Native::Redundancy::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rpso; //type: uint16

}; // Native::Redundancy::Timer


class Native::RemoteManagement : public ydk::Entity
{
    public:
        RemoteManagement();
        ~RemoteManagement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dmi; //type: empty
        ydk::YLeaf restful_api; //type: boolean

}; // Native::RemoteManagement


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


class Native::Rmon : public ydk::Entity
{
    public:
        Rmon();
        ~Rmon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Alarm; //type: Native::Rmon::Alarm
        class Event; //type: Native::Rmon::Event

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Alarm> > alarm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Event> > event;
        
}; // Native::Rmon


class Native::Rmon::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mib_object; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf test_mode; //type: TestMode
        ydk::YLeaf rising_threshold; //type: int32
        ydk::YLeaf rising_event; //type: uint16
        ydk::YLeaf falling_threshold; //type: int32
        ydk::YLeaf falling_event; //type: uint16
        ydk::YLeaf owner; //type: string
        class TestMode;

}; // Native::Rmon::Alarm


class Native::Rmon::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        class Log; //type: Native::Rmon::Event::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Event::Log> log; // presence node
        
}; // Native::Rmon::Event


class Native::Rmon::Event::Log : public ydk::Entity
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

        ydk::YLeaf trap; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf owner; //type: string

}; // Native::Rmon::Event::Log


class Native::RouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class RouteMapSeq; //type: Native::RouteMap::RouteMapSeq

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq> > route_map_seq;
        
}; // Native::RouteMap


class Native::RouteMap::RouteMapSeq : public ydk::Entity
{
    public:
        RouteMapSeq();
        ~RouteMapSeq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ordering_seq; //type: string
        ydk::YLeaf operation_; //type: Operation_
        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf description; //type: string
        class Set; //type: Native::RouteMap::RouteMapSeq::Set
        class Match; //type: Native::RouteMap::RouteMapSeq::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set> set;
                class Operation_;

}; // Native::RouteMap::RouteMapSeq


class Native::RouteMap::RouteMapSeq::Match : public ydk::Entity
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

        ydk::YLeaf mpls_label; //type: empty
        ydk::YLeaf track; //type: uint16
        class AdditionalPaths; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths
        class AsPath; //type: Native::RouteMap::RouteMapSeq::Match::AsPath
        class Clns; //type: Native::RouteMap::RouteMapSeq::Match::Clns
        class Community; //type: Native::RouteMap::RouteMapSeq::Match::Community
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Match::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Match::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Match::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6
        class Length; //type: Native::RouteMap::RouteMapSeq::Match::Length
        class LocalPreference; //type: Native::RouteMap::RouteMapSeq::Match::LocalPreference
        class MdtGroup; //type: Native::RouteMap::RouteMapSeq::Match::MdtGroup
        class Metric; //type: Native::RouteMap::RouteMapSeq::Match::Metric
        class PolicyList; //type: Native::RouteMap::RouteMapSeq::Match::PolicyList
        class RouteType; //type: Native::RouteMap::RouteMapSeq::Match::RouteType
        class Rpki; //type: Native::RouteMap::RouteMapSeq::Match::Rpki
        class SourceProtocol; //type: Native::RouteMap::RouteMapSeq::Match::SourceProtocol
        class Tag; //type: Native::RouteMap::RouteMapSeq::Match::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Clns> clns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Extcommunity> extcommunity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::LocalPreference> local_preference;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::MdtGroup> mdt_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::PolicyList> policy_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType> route_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Rpki> rpki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::SourceProtocol> source_protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Tag> tag;
        
}; // Native::RouteMap::RouteMapSeq::Match


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths : public ydk::Entity
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

        class AdvertiseSet; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet> advertise_set;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet : public ydk::Entity
{
    public:
        AdvertiseSet();
        ~AdvertiseSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All
        class Best; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best
        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange> best_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All : public ydk::Entity
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

        ydk::YLeaf best; //type: uint8
        ydk::YLeaf best_range; //type: uint8
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest : public ydk::Entity
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

        ydk::YLeaf best; //type: empty
        ydk::YLeaf best_range; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best : public ydk::Entity
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

        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange> > best_range;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_range; //type: uint8
        ydk::YLeaf all; //type: empty
        ydk::YLeaf group_best; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdvPath; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath> > adv_path;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath : public ydk::Entity
{
    public:
        AdvPath();
        ~AdvPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adv_path; //type: uint8
        ydk::YLeaf adv_path0; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest : public ydk::Entity
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
        ydk::YLeaf best_range; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest


class Native::RouteMap::RouteMapSeq::Match::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  uint16

}; // Native::RouteMap::RouteMapSeq::Match::AsPath


class Native::RouteMap::RouteMapSeq::Match::Clns : public ydk::Entity
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

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Clns


class Native::RouteMap::RouteMapSeq::Match::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Community


class Native::RouteMap::RouteMapSeq::Match::Extcommunity : public ydk::Entity
{
    public:
        Extcommunity();
        ~Extcommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Extcommunity


class Native::RouteMap::RouteMapSeq::Match::Interface : public ydk::Entity
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

        ydk::YLeafList interface; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Interface


class Native::RouteMap::RouteMapSeq::Match::Ip : public ydk::Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ip::NextHop
        class RedistributionSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec> flowspec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource> redistribution_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip


class Native::RouteMap::RouteMapSeq::Match::Ip::Address : public ydk::Entity
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

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Address


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec : public ydk::Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx : public ydk::Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx : public ydk::Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource : public ydk::Entity
{
    public:
        RedistributionSource();
        ~RedistributionSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource


class Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource : public ydk::Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of string, uint16
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec> flowspec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Address


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec : public ydk::Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx : public ydk::Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx : public ydk::Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource : public ydk::Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lengths; //type: Native::RouteMap::RouteMapSeq::Match::Length::Lengths

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Length::Lengths> > lengths;
        
}; // Native::RouteMap::RouteMapSeq::Match::Length


class Native::RouteMap::RouteMapSeq::Match::Length::Lengths : public ydk::Entity
{
    public:
        Lengths();
        ~Lengths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_len; //type: uint32
        ydk::YLeaf max_len; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Match::Length::Lengths

class Native::PseudowireClass::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf udp;

};

class Native::PseudowireClass::Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf vlan;

};

class Native::PseudowireClass::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf resync;
        static const ydk::Enum::YLeaf transmit;

};

class Native::PseudowireClass::Ip::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf uti;

};

class Native::PseudowireClass::LoadBalance::Flow::Ethernet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_mac;

};

class Native::PseudowireClass::ProtocolL2Tpv2::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv3::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv3ietf;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolMpls::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf none;

};

class Native::Radius::Filter::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

};

class Native::Radius::Server::AutomateTester::AtOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf probe_on;

};

class Native::Radius::Server::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_5;

};

class Native::Radius::Server::Pac::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Attribute::SendAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_for_login_auth;
        static const ydk::Enum::YLeaf include_in_access_req;
        static const ydk::Enum::YLeaf support_multiple;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf send;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;

};

class Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::RadiusServer::Host::Key : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Host::Test::Username::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::RadiusServer::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Redundancy::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpr;
        static const ydk::Enum::YLeaf rpr_plus;
        static const ydk::Enum::YLeaf sso;
        static const ydk::Enum::YLeaf none;

};

class Native::Rmon::Alarm::TestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf delta;

};

class Native::RouteMap::RouteMapSeq::Operation_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_94_ */

