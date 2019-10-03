#ifndef _CISCO_IOS_XE_NATIVE_133_
#define _CISCO_IOS_XE_NATIVE_133_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_132.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
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
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf exclude; //type: Exclude
        class Exclude;

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers : public ydk::Entity
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

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Unused; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused> unused;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf duration; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::Mesh : public ydk::Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::P2p : public ydk::Entity
{
    public:
        P2p();
        ~P2p();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2p


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
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
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::P2p::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::Primary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf onehop; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mpls_; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_ : public ydk::Entity
{
    public:
        Mpls_();
        ~Mpls_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
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
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers : public ydk::Entity
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

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rerouted; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax


class Native::Mpls::TrafficEng::DsTe : public ydk::Entity
{
    public:
        DsTe();
        ~DsTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bc_model; //type: BcModel
        ydk::YLeaf mode; //type: Mode
        class TeClasses; //type: Native::Mpls::TrafficEng::DsTe::TeClasses

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses> te_classes; // presence node
                class BcModel;
        class Mode;

}; // Native::Mpls::TrafficEng::DsTe


class Native::Mpls::TrafficEng::DsTe::TeClasses : public ydk::Entity
{
    public:
        TeClasses();
        ~TeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TeClass; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass

        ydk::YList te_class;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass : public ydk::Entity
{
    public:
        TeClass();
        ~TeClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf te_idx; //type: uint8
        ydk::YLeaf unused; //type: empty
        class ClassType; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType> class_type;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

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
        ydk::YLeaf priority; //type: uint8

}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType


class Native::Mpls::TrafficEng::FastReroute : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class BackupProtPreempt; //type: Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt
        class Timers; //type: Native::Mpls::TrafficEng::FastReroute::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt> backup_prot_preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::Timers> timers;
        
}; // Native::Mpls::TrafficEng::FastReroute


class Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt : public ydk::Entity
{
    public:
        BackupProtPreempt();
        ~BackupProtPreempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf optimize_bw; //type: empty

}; // Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt


class Native::Mpls::TrafficEng::FastReroute::Timers : public ydk::Entity
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

        ydk::YLeaf promotion; //type: uint32

}; // Native::Mpls::TrafficEng::FastReroute::Timers


class Native::Mpls::TrafficEng::LinkManagement : public ydk::Entity
{
    public:
        LinkManagement();
        ~LinkManagement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Timers; //type: Native::Mpls::TrafficEng::LinkManagement::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::LinkManagement::Timers> timers;
        
}; // Native::Mpls::TrafficEng::LinkManagement


class Native::Mpls::TrafficEng::LinkManagement::Timers : public ydk::Entity
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

        ydk::YLeaf bandwidth_hold; //type: uint16
        ydk::YLeaf periodic_flooding; //type: uint16

}; // Native::Mpls::TrafficEng::LinkManagement::Timers


class Native::Mpls::TrafficEng::Logging : public ydk::Entity
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

        class Lsp; //type: Native::Mpls::TrafficEng::Logging::Lsp
        class Tunnel; //type: Native::Mpls::TrafficEng::Logging::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp> lsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel> tunnel;
        
}; // Native::Mpls::TrafficEng::Logging


class Native::Mpls::TrafficEng::Logging::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PathErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::PathErrors
        class Preemption; //type: Native::Mpls::TrafficEng::Logging::Lsp::Preemption
        class ReservationErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors
        class Setups; //type: Native::Mpls::TrafficEng::Logging::Lsp::Setups
        class Teardowns; //type: Native::Mpls::TrafficEng::Logging::Lsp::Teardowns

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::PathErrors> path_errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Preemption> preemption; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors> reservation_errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Setups> setups; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Teardowns> teardowns; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Lsp


class Native::Mpls::TrafficEng::Logging::Lsp::PathErrors : public ydk::Entity
{
    public:
        PathErrors();
        ~PathErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::PathErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Preemption : public ydk::Entity
{
    public:
        Preemption();
        ~Preemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Preemption


class Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors : public ydk::Entity
{
    public:
        ReservationErrors();
        ~ReservationErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Setups : public ydk::Entity
{
    public:
        Setups();
        ~Setups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Setups


class Native::Mpls::TrafficEng::Logging::Lsp::Teardowns : public ydk::Entity
{
    public:
        Teardowns();
        ~Teardowns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Teardowns


class Native::Mpls::TrafficEng::Logging::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LspSelection; //type: Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection
        class LspSwitchover; //type: Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover
        class Path; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection> lsp_selection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover> lsp_switchover; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path> path;
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel


class Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection : public ydk::Entity
{
    public:
        LspSelection();
        ~LspSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection


class Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover : public ydk::Entity
{
    public:
        LspSwitchover();
        ~LspSwitchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover


class Native::Mpls::TrafficEng::Logging::Tunnel::Path : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Change; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change> change; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path


class Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change : public ydk::Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change


class Native::Mpls::TrafficEng::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attributes; //type: Native::Mpls::TrafficEng::Lsp::Attributes

        ydk::YList attributes;
        
}; // Native::Mpls::TrafficEng::Lsp


class Native::Mpls::TrafficEng::Lsp::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
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
        class MplsTeModeConfigLspAttr; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr> mpls_te_mode_config_lsp_attr;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr : public ydk::Entity
{
    public:
        MplsTeModeConfigLspAttr();
        ~MplsTeModeConfigLspAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf record_route; //type: empty
        class AffinityMask; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask
        class AutoBw; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw
        class Bandwidth; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth
        class BfdReversePath; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath
        class Lockdown; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown
        class PathSelection; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection
        class Pce; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce
        class Priority; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority
        class Protection; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask> affinity_mask;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw> auto_bw; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath> bfd_reverse_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown> lockdown; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce> pce; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection> protection; // presence node
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw : public ydk::Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf collect_bw; //type: empty
        ydk::YLeaf adjustment_threshold; //type: uint8
        ydk::YLeaf max_bw; //type: uint32
        ydk::YLeaf min_bw; //type: uint32
        class OverflowLimit; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit> overflow_limit;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit : public ydk::Entity
{
    public:
        OverflowLimit();
        ~OverflowLimit();

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
        ydk::YLeaf overflow_threshold; //type: uint8

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth : public ydk::Entity
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

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf binding_label; //type: uint32

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown : public ydk::Entity
{
    public:
        Lockdown();
        ~Lockdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sticky; //type: empty

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: Metric
        class Invalidation; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation
        class SegmentRouting; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation> invalidation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting> segment_routing;
                class Metric;

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: int32
        ydk::YLeaf drop; //type: empty

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf adjacency; //type: Adjacency
        class Adjacency;

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce : public ydk::Entity
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

        class DisjointPath; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath> disjoint_path;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath : public ydk::Entity
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

        ydk::YLeaf source; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf group_id; //type: uint32
        class Type;

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority : public ydk::Entity
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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection : public ydk::Entity
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

        class FastReroute; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute> fast_reroute; // presence node
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute : public ydk::Entity
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

        ydk::YLeaf bw_protect; //type: empty

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute


class Native::Mpls::TrafficEng::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class List; //type: Native::Mpls::TrafficEng::PathOption::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List> list;
        
}; // Native::Mpls::TrafficEng::PathOption


class Native::Mpls::TrafficEng::PathOption::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Identifier; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier
        class Name; //type: Native::Mpls::TrafficEng::PathOption::List::Name

        ydk::YList identifier;
        ydk::YList name;
        
}; // Native::Mpls::TrafficEng::PathOption::List


class Native::Mpls::TrafficEng::PathOption::List::Identifier : public ydk::Entity
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

        ydk::YLeaf pol_num; //type: uint16
        class PathOption_; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_

        ydk::YList path_option;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Identifier


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_ : public ydk::Entity
{
    public:
        PathOption_();
        ~PathOption_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf po_num; //type: uint16
        class Explicit; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit> explicit_;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit : public ydk::Entity
{
    public:
        Explicit();
        ~Explicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Identifier_; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_
        class Name; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name> name;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_ : public ydk::Entity
{
    public:
        Identifier_();
        ~Identifier_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pnum; //type: uint16
        ydk::YLeaf verbatim; //type: empty

}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Identifier_


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name : public ydk::Entity
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

        ydk::YLeaf pname; //type: string
        ydk::YLeaf verbatim; //type: empty

}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit::Name


class Native::Mpls::TrafficEng::PathOption::List::Name : public ydk::Entity
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

        ydk::YLeaf pol_name; //type: string
        class PathOption_; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_

        ydk::YList path_option;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Name


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_ : public ydk::Entity
{
    public:
        PathOption_();
        ~PathOption_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf po_num; //type: uint16
        class Explicit; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit> explicit_;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit : public ydk::Entity
{
    public:
        Explicit();
        ~Explicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Identifier; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier
        class Name_; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_> name;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier : public ydk::Entity
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

        ydk::YLeaf pnum; //type: uint16
        ydk::YLeaf verbatim; //type: empty

}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Identifier


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_ : public ydk::Entity
{
    public:
        Name_();
        ~Name_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pname; //type: string
        ydk::YLeaf verbatim; //type: empty

}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit::Name_


class Native::Mpls::TrafficEng::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf metric; //type: Metric
        ydk::YLeaf tiebreaker; //type: MplsTeTiebreakerType
        class Invalidation; //type: Native::Mpls::TrafficEng::PathSelection::Invalidation
        class Overload; //type: Native::Mpls::TrafficEng::PathSelection::Overload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Invalidation> invalidation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Overload> overload;
                class Metric;

}; // Native::Mpls::TrafficEng::PathSelection


class Native::Mpls::TrafficEng::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf value_; //type: int32
        ydk::YLeaf drop; //type: empty

}; // Native::Mpls::TrafficEng::PathSelection::Invalidation


class Native::Mpls::TrafficEng::PathSelection::Overload : public ydk::Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Allow; //type: Native::Mpls::TrafficEng::PathSelection::Overload::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Overload::Allow> allow;
        
}; // Native::Mpls::TrafficEng::PathSelection::Overload


class Native::Mpls::TrafficEng::PathSelection::Overload::Allow : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf head; //type: empty
        ydk::YLeaf middle; //type: empty
        ydk::YLeaf tail; //type: empty

}; // Native::Mpls::TrafficEng::PathSelection::Overload::Allow


class Native::Mpls::TrafficEng::Pcc : public ydk::Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf report_all; //type: empty
        class Peer; //type: Native::Mpls::TrafficEng::Pcc::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer> peer;
        
}; // Native::Mpls::TrafficEng::Pcc


class Native::Mpls::TrafficEng::Pcc::Peer : public ydk::Entity
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

        class Ipv4; //type: Native::Mpls::TrafficEng::Pcc::Peer::Ipv4

        ydk::YList ipv4;
        
}; // Native::Mpls::TrafficEng::Pcc::Peer


class Native::Mpls::TrafficEng::Pcc::Peer::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf precedence; //type: uint8
        ydk::YLeaf keychain; //type: string
        class Password; //type: Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password> password;
        
}; // Native::Mpls::TrafficEng::Pcc::Peer::Ipv4


class Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password : public ydk::Entity
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

        ydk::YLeaf clear; //type: string
        ydk::YLeaf encrypted; //type: string

}; // Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password


class Native::Mpls::TrafficEng::Reoptimize : public ydk::Entity
{
    public:
        Reoptimize();
        ~Reoptimize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Events; //type: Native::Mpls::TrafficEng::Reoptimize::Events
        class Timers; //type: Native::Mpls::TrafficEng::Reoptimize::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Events> events;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Timers> timers;
        
}; // Native::Mpls::TrafficEng::Reoptimize


class Native::Mpls::TrafficEng::Reoptimize::Events : public ydk::Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf link_up; //type: empty

}; // Native::Mpls::TrafficEng::Reoptimize::Events


class Native::Mpls::TrafficEng::Reoptimize::Timers : public ydk::Entity
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

        ydk::YLeaf frequency; //type: uint32
        class Delay; //type: Native::Mpls::TrafficEng::Reoptimize::Timers::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Timers::Delay> delay;
        
}; // Native::Mpls::TrafficEng::Reoptimize::Timers


class Native::Mpls::TrafficEng::Reoptimize::Timers::Delay : public ydk::Entity
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

        ydk::YLeaf after_frr; //type: uint8
        ydk::YLeaf cleanup; //type: uint8
        ydk::YLeaf installation; //type: uint16

}; // Native::Mpls::TrafficEng::Reoptimize::Timers::Delay


class Native::Mpls::TrafficEng::Signalling : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Advertise; //type: Native::Mpls::TrafficEng::Signalling::Advertise
        class Forwarding; //type: Native::Mpls::TrafficEng::Signalling::Forwarding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Forwarding> forwarding;
        
}; // Native::Mpls::TrafficEng::Signalling


class Native::Mpls::TrafficEng::Signalling::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExplicitNull; //type: Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull> explicit_null; // presence node
        
}; // Native::Mpls::TrafficEng::Signalling::Advertise


class Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull : public ydk::Entity
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

        ydk::YLeaf access_list; //type: one of uint8, string

}; // Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull


class Native::Mpls::TrafficEng::Signalling::Forwarding : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf sync; //type: empty

}; // Native::Mpls::TrafficEng::Signalling::Forwarding


class Native::Mpls::TrafficEng::Topology : public ydk::Entity
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

        class Holddown; //type: Native::Mpls::TrafficEng::Topology::Holddown
        class MeshGroup; //type: Native::Mpls::TrafficEng::Topology::MeshGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Topology::Holddown> holddown;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Topology::MeshGroup> mesh_group;
        
}; // Native::Mpls::TrafficEng::Topology


class Native::Mpls::TrafficEng::Topology::Holddown : public ydk::Entity
{
    public:
        Holddown();
        ~Holddown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sigerr; //type: uint16

}; // Native::Mpls::TrafficEng::Topology::Holddown


class Native::Mpls::TrafficEng::Topology::MeshGroup : public ydk::Entity
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

        ydk::YLeaf accept_domain; //type: empty

}; // Native::Mpls::TrafficEng::Topology::MeshGroup


class Native::Mpls::TrafficEng::Trace : public ydk::Entity
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

        class BufferSize; //type: Native::Mpls::TrafficEng::Trace::BufferSize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Trace::BufferSize> buffer_size;
        
}; // Native::Mpls::TrafficEng::Trace


class Native::Mpls::TrafficEng::Trace::BufferSize : public ydk::Entity
{
    public:
        BufferSize();
        ~BufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf error; //type: uint16
        ydk::YLeaf event; //type: uint16
        ydk::YLeaf warning; //type: uint8

}; // Native::Mpls::TrafficEng::Trace::BufferSize


class Native::Mpls::Tp : public ydk::Entity
{
    public:
        Tp();
        ~Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Mpls::Tp


class Native::Router : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Isis; //type: Native::Router::Isis
        class IsisContainer; //type: Native::Router::IsisContainer
        class Ospf; //type: Native::Router::Ospf
        class Ospfv3; //type: Native::Router::Ospfv3
        class Bgp; //type: Native::Router::Bgp
        class Lisp; //type: Native::Router::Lisp
        class LispList; //type: Native::Router::LispList
        class Eigrp; //type: Native::Router::Eigrp
        class Rip; //type: Native::Router::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer> isis_container;
        ydk::YList ospf;
        ydk::YList ospfv3;
        ydk::YList bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp> lisp; // presence node
        ydk::YList lisp_list;
        ydk::YList eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip> rip; // presence node
        
}; // Native::Router


class Native::Router::Isis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf ignore_lsp_errors; //type: empty
        ydk::YLeaf is_type; //type: IsType
        ydk::YLeaf lsp_mtu; //type: uint32
        ydk::YLeaf lsp_refresh_interval; //type: uint32
        ydk::YLeaf max_area_addresses; //type: uint32
        ydk::YLeaf max_lsp_lifetime; //type: uint32
        ydk::YLeaf update_queue_depth; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf adjacency_check; //type: empty
        ydk::YLeaf router_id; //type: string
        class MetricStyle; //type: Native::Router::Isis::MetricStyle
        class AddressFamily; //type: Native::Router::Isis::AddressFamily
        class Distance; //type: Native::Router::Isis::Distance
        class Ip; //type: Native::Router::Isis::Ip
        class Redistribute; //type: Native::Router::Isis::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::Snmp
        class SummaryAddress; //type: Native::Router::Isis::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::TrafficShare
        class Advertise; //type: Native::Router::Isis::Advertise
        class DefaultInformation; //type: Native::Router::Isis::DefaultInformation
        class Metric; //type: Native::Router::Isis::Metric
        class PrcInterval; //type: Native::Router::Isis::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::SpfInterval
        class AreaPassword; //type: Native::Router::Isis::AreaPassword
        class Authentication; //type: Native::Router::Isis::Authentication
        class DistributeList; //type: Native::Router::Isis::DistributeList
        class DomainPassword; //type: Native::Router::Isis::DomainPassword
        class FastFlood; //type: Native::Router::Isis::FastFlood
        class FastReroute; //type: Native::Router::Isis::FastReroute
        class TiLfa; //type: Native::Router::Isis::TiLfa
        class Hello; //type: Native::Router::Isis::Hello
        class Hostname; //type: Native::Router::Isis::Hostname
        class Ispf; //type: Native::Router::Isis::Ispf
        class LogAdjacencyChanges; //type: Native::Router::Isis::LogAdjacencyChanges
        class LspFull; //type: Native::Router::Isis::LspFull
        class LspGenInterval; //type: Native::Router::Isis::LspGenInterval
        class Microloop; //type: Native::Router::Isis::Microloop
        class Mpls; //type: Native::Router::Isis::Mpls
        class Net; //type: Native::Router::Isis::Net
        class Nsf; //type: Native::Router::Isis::Nsf
        class Partition; //type: Native::Router::Isis::Partition
        class PassiveInterface; //type: Native::Router::Isis::PassiveInterface
        class Disable; //type: Native::Router::Isis::Disable
        class Protocol; //type: Native::Router::Isis::Protocol
        class SegmentRouting; //type: Native::Router::Isis::SegmentRouting
        class Skeptical; //type: Native::Router::Isis::Skeptical
        class Use; //type: Native::Router::Isis::Use
        class Bfd; //type: Native::Router::Isis::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle> metric_style;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily> address_family;
        ydk::YList distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Snmp> snmp;
        ydk::YList summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SpfInterval> spf_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AreaPassword> area_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DomainPassword> domain_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastFlood> fast_flood; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa> ti_lfa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Ispf> ispf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspFull> lsp_full;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Microloop> microloop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls> mpls;
        ydk::YList net;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Nsf> nsf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Partition> partition;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Skeptical> skeptical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Use> use;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Bfd> bfd;
                class IsType;

}; // Native::Router::Isis


class Native::Router::Isis::MetricStyle : public ydk::Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Narrow; //type: Native::Router::Isis::MetricStyle::Narrow
        class Transition; //type: Native::Router::Isis::MetricStyle::Transition
        class Wide; //type: Native::Router::Isis::MetricStyle::Wide

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Narrow> narrow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Transition> transition; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Wide> wide; // presence node
        
}; // Native::Router::Isis::MetricStyle


class Native::Router::Isis::MetricStyle::Narrow : public ydk::Entity
{
    public:
        Narrow();
        ~Narrow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Narrow


class Native::Router::Isis::MetricStyle::Transition : public ydk::Entity
{
    public:
        Transition();
        ~Transition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Transition


class Native::Router::Isis::MetricStyle::Wide : public ydk::Entity
{
    public:
        Wide();
        ~Wide();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Wide


class Native::Router::Isis::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Router::Isis::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::Isis::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::Isis::AddressFamily


class Native::Router::Isis::AddressFamily::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_multicast; //type: UnicastMulticast
        ydk::YLeaf help; //type: empty
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp
        class Topology; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp> snmp;
        ydk::YList topology;
                class UnicastMulticast;

}; // Native::Router::Isis::AddressFamily::Ipv4


class Native::Router::Isis::AddressFamily::Ipv4::Snmp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Context; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context

        ydk::YList context;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Community; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community : public ydk::Entity
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

        ydk::YLeaf community_string; //type: string
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf expanded_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User : public ydk::Entity
{
    public:
        User();
        ~User();

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
        class Permisssion; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion : public ydk::Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf credential; //type: empty
        ydk::YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: string
        ydk::YLeaf sha; //type: string

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::Isis::AddressFamily::Ipv4::Topology : public ydk::Entity
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
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf ignore_attached_bit; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        class Distance; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip
        class Redistribute; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp
        class SummaryAddress; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare
        class Advertise; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise
        class DefaultInformation; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation
        class Metric; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric
        class PrcInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval

        ydk::YList distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp> snmp;
        ydk::YList summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval> spf_interval;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance : public ydk::Entity
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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf ip; //type: empty
        class IpList; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList

        ydk::YList ip_list;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

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
        class WildcardBits; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits

        ydk::YList wildcard_bits;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits : public ydk::Entity
{
    public:
        WildcardBits();
        ~WildcardBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf w_bits; //type: string
        ydk::YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip : public ydk::Entity
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

        class Route; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route> route;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route : public ydk::Entity
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

        class Priority; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority> priority;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority : public ydk::Entity
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

        class High; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High> high;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application
        class Bgp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp
        class Connected; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected
        class Eigrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp
        class Isis_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_
        class IsoIgrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp
        class MaximumPrefix; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix
        class Mobile; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile
        class Odr; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr
        class Ospf; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3
        class Rip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip
        class Static; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static
        class Vrf; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf

        ydk::YList application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected> connected; // presence node
        ydk::YList eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr> odr; // presence node
        ydk::YList ospf;
        ydk::YList ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf> vrf;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_ : public ydk::Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisRedistribute; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip

        ydk::YList isis_redistribute;
        ydk::YList ip;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute : public ydk::Entity
{
    public:
        IsisRedistribute();
        ~IsisRedistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_tag; //type: string
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip : public ydk::Entity
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

        ydk::YLeaf isis_redist_levels1; //type: IsisRedistLevels1
        ydk::YLeaf isis_redist_levels2; //type: IsisRedistLevels2
        ydk::YLeaf into; //type: empty
        ydk::YLeaf distribute_list; //type: uint32
        ydk::YLeaf route_map; //type: string
        class IsisRedistLevels1;
        class IsisRedistLevels2;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        class AreaTagRouteMapContainer; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_tag; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix : public ydk::Entity
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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf withdraw; //type: empty

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match

class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf force;
        static const ydk::Enum::YLeaf preferred;

        static int get_enum_value(const std::string & name) {
            if (name == "force") return 0;
            if (name == "preferred") return 1;
            return -1;
        }
};

class Native::Mpls::TrafficEng::DsTe::BcModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mam;

        static int get_enum_value(const std::string & name) {
            if (name == "mam") return 0;
            return -1;
        }
};

class Native::Mpls::TrafficEng::DsTe::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;
        static const ydk::Enum::YLeaf migration;

        static int get_enum_value(const std::string & name) {
            if (name == "ietf") return 0;
            if (name == "migration") return 1;
            return -1;
        }
};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 0;
            if (name == "te") return 1;
            return -1;
        }
};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf unprotected;

        static int get_enum_value(const std::string & name) {
            if (name == "protected") return 0;
            if (name == "unprotected") return 1;
            return -1;
        }
};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

        static int get_enum_value(const std::string & name) {
            if (name == "link") return 0;
            if (name == "node") return 1;
            if (name == "srlg") return 2;
            return -1;
        }
};

class Native::Mpls::TrafficEng::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 0;
            if (name == "te") return 1;
            return -1;
        }
};

class Native::Router::Isis::IsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-1-2") return 1;
            if (name == "level-2-only") return 2;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "multicast") return 1;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 0;
            if (name == "internal") return 1;
            if (name == "rib-metric-as-external") return 2;
            if (name == "rib-metric-as-internal") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_133_ */

