#ifndef _CISCO_IOS_XE_NATIVE_87_
#define _CISCO_IOS_XE_NATIVE_87_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_86.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum : public ydk::Entity
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

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass> > te_class;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes> > attributes;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier> > identifier;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name> > name;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_> > path_option;
        
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
        class Explicit_; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_> explicit_;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Identifier_; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_
        class Name; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name> name;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_ : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_


class Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_> > path_option;
        
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
        class Explicit_; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_> explicit_;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Identifier; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier
        class Name_; //type: Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_> name;
        
}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier


class Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_ : public ydk::Entity
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

}; // Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer::Ipv4> > ipv4;
        
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

        class Bgp; //type: Native::Router::Bgp
        class Isis; //type: Native::Router::Isis
        class IsisContainer; //type: Native::Router::IsisContainer
        class Eigrp; //type: Native::Router::Eigrp
        class Lisp; //type: Native::Router::Lisp
        class LispList; //type: Native::Router::LispList
        class Ospf; //type: Native::Router::Ospf
        class Ospfv3; //type: Native::Router::Ospfv3
        class Rip; //type: Native::Router::Rip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer> isis_container;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp> lisp; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList> > lisp_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip> rip; // presence node
        
}; // Native::Router


class Native::Router::Bgp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        ydk::YLeaf auto_summary; //type: boolean
        class Import; //type: Native::Router::Bgp::Import
        class Bgp_; //type: Native::Router::Bgp::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::DefaultInformation
        class Distance; //type: Native::Router::Bgp::Distance
        class DistributeList; //type: Native::Router::Bgp::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::Neighbor
        class Network; //type: Native::Router::Bgp::Network
        class Redistribute; //type: Native::Router::Bgp::Redistribute
        class TableMap; //type: Native::Router::Bgp::TableMap
        class Snmp; //type: Native::Router::Bgp::Snmp
        class AddressFamily; //type: Native::Router::Bgp::AddressFamily
        class Template_; //type: Native::Router::Bgp::Template_
        class Timers; //type: Native::Router::Bgp::Timers
        class Scope; //type: Native::Router::Bgp::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Distance> distance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::TableMap> table_map; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template_> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope> scope;
        
}; // Native::Router::Bgp


class Native::Router::Bgp::Import : public ydk::Entity
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

        class Path; //type: Native::Router::Bgp::Import::Path

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Import::Path> path;
        
}; // Native::Router::Bgp::Import


class Native::Router::Bgp::Import::Path : public ydk::Entity
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

}; // Native::Router::Bgp::Import::Path


class Native::Router::Bgp::Bgp_ : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf always_compare_med; //type: empty
        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf cluster_id; //type: one of string, uint32
        ydk::YLeaf deterministic_med; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf enforce_first_as; //type: empty
        ydk::YLeaf enhanced_error; //type: empty
        ydk::YLeaf fast_external_fallover; //type: boolean
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf maxas_limit; //type: uint16
        ydk::YLeaf maxcommunity_limit; //type: uint16
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        ydk::YLeaf update_delay; //type: uint16
        class Asnotation; //type: Native::Router::Bgp::Bgp_::Asnotation
        class NopeerupDelay; //type: Native::Router::Bgp::Bgp_::NopeerupDelay
        class Recursion; //type: Native::Router::Bgp::Bgp_::Recursion
        class AdditionalPaths; //type: Native::Router::Bgp::Bgp_::AdditionalPaths
        class Bestpath; //type: Native::Router::Bgp::Bgp_::Bestpath
        class ClientToClient; //type: Native::Router::Bgp::Bgp_::ClientToClient
        class Confederation; //type: Native::Router::Bgp::Bgp_::Confederation
        class ConsistencyChecker; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker
        class Dampening; //type: Native::Router::Bgp::Bgp_::Dampening
        class Default_; //type: Native::Router::Bgp::Bgp_::Default_
        class GracefulRestart; //type: Native::Router::Bgp::Bgp_::GracefulRestart
        class HaMode; //type: Native::Router::Bgp::Bgp_::HaMode
        class InjectMap; //type: Native::Router::Bgp::Bgp_::InjectMap
        class RouteMap; //type: Native::Router::Bgp::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::Bgp_::UpdateGroup
        class Nexthop; //type: Native::Router::Bgp::Bgp_::Nexthop
        class Regexp; //type: Native::Router::Bgp::Bgp_::Regexp
        class Transport; //type: Native::Router::Bgp::Bgp_::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Asnotation> asnotation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::NopeerupDelay> nopeerup_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ClientToClient> client_to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Confederation> confederation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker> consistency_checker;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::HaMode> ha_mode;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::InjectMap> > inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::UpdateGroup> update_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Regexp> regexp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Transport> transport;
        
}; // Native::Router::Bgp::Bgp_


class Native::Router::Bgp::Bgp_::Asnotation : public ydk::Entity
{
    public:
        Asnotation();
        ~Asnotation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot; //type: empty

}; // Native::Router::Bgp::Bgp_::Asnotation


class Native::Router::Bgp::Bgp_::NopeerupDelay : public ydk::Entity
{
    public:
        NopeerupDelay();
        ~NopeerupDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cold_boot; //type: uint16
        ydk::YLeaf nsf_switchover; //type: uint16
        ydk::YLeaf post_boot; //type: uint16
        ydk::YLeaf user_initiated; //type: uint16

}; // Native::Router::Bgp::Bgp_::NopeerupDelay


class Native::Router::Bgp::Bgp_::Recursion : public ydk::Entity
{
    public:
        Recursion();
        ~Recursion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty

}; // Native::Router::Bgp::Bgp_::Recursion


class Native::Router::Bgp::Bgp_::AdditionalPaths : public ydk::Entity
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
        class Select; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range> > range;
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range> > range;
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
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
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Send : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::Bgp_::Bestpath : public ydk::Entity
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

        ydk::YLeaf compare_routerid; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Bgp_::Bestpath::CostCommunity
        class IgpMetric; //type: Native::Router::Bgp::Bgp_::Bestpath::IgpMetric
        class Med; //type: Native::Router::Bgp::Bgp_::Bestpath::Med

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::CostCommunity> cost_community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::Med> med;
        
}; // Native::Router::Bgp::Bgp_::Bestpath


class Native::Router::Bgp::Bgp_::Bestpath::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

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

}; // Native::Router::Bgp::Bgp_::Bestpath::CostCommunity


class Native::Router::Bgp::Bgp_::Bestpath::IgpMetric : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::Bgp_::Bestpath::Med : public ydk::Entity
{
    public:
        Med();
        ~Med();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty
        class Confed; //type: Native::Router::Bgp::Bgp_::Bestpath::Med::Confed

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::Med::Confed> confed; // presence node
        
}; // Native::Router::Bgp::Bgp_::Bestpath::Med


class Native::Router::Bgp::Bgp_::Bestpath::Med::Confed : public ydk::Entity
{
    public:
        Confed();
        ~Confed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty

}; // Native::Router::Bgp::Bgp_::Bestpath::Med::Confed


class Native::Router::Bgp::Bgp_::ClientToClient : public ydk::Entity
{
    public:
        ClientToClient();
        ~ClientToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reflection; //type: empty

}; // Native::Router::Bgp::Bgp_::ClientToClient


class Native::Router::Bgp::Bgp_::Confederation : public ydk::Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint32
        class Peers; //type: Native::Router::Bgp::Bgp_::Confederation::Peers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Confederation::Peers> peers;
        
}; // Native::Router::Bgp::Bgp_::Confederation


class Native::Router::Bgp::Bgp_::Confederation::Peers : public ydk::Entity
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

        ydk::YLeafList peers_as; //type: list of  uint32

}; // Native::Router::Bgp::Bgp_::Confederation::Peers


class Native::Router::Bgp::Bgp_::ConsistencyChecker : public ydk::Entity
{
    public:
        ConsistencyChecker();
        ~ConsistencyChecker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoRepair; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair
        class ErrorMessage; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair> auto_repair; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage> error_message; // presence node
        
}; // Native::Router::Bgp::Bgp_::ConsistencyChecker


class Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

}; // Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair


class Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage : public ydk::Entity
{
    public:
        ErrorMessage();
        ~ErrorMessage();

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

}; // Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage


class Native::Router::Bgp::Bgp_::Dampening : public ydk::Entity
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
        class Dampen; //type: Native::Router::Bgp::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::Bgp_::Dampening


class Native::Router::Bgp::Bgp_::Dampening::Dampen : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::Dampening::Dampen


class Native::Router::Bgp::Bgp_::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_unicast; //type: boolean
        ydk::YLeaf ipv6_nexthop; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf route_target; //type: RouteTarget
        class RouteTarget;

}; // Native::Router::Bgp::Bgp_::Default_


class Native::Router::Bgp::Bgp_::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf extended; //type: empty
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stalepath_time; //type: uint16

}; // Native::Router::Bgp::Bgp_::GracefulRestart


class Native::Router::Bgp::Bgp_::HaMode : public ydk::Entity
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

        class Sso; //type: Native::Router::Bgp::Bgp_::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::Bgp_::HaMode


class Native::Router::Bgp::Bgp_::HaMode::Sso : public ydk::Entity
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

        ydk::YLeaf prefer; //type: empty

}; // Native::Router::Bgp::Bgp_::HaMode::Sso


class Native::Router::Bgp::Bgp_::InjectMap : public ydk::Entity
{
    public:
        InjectMap();
        ~InjectMap();

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
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::Bgp_::InjectMap


class Native::Router::Bgp::Bgp_::RouteMap : public ydk::Entity
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

        ydk::YLeaf priority; //type: empty

}; // Native::Router::Bgp::Bgp_::RouteMap


class Native::Router::Bgp::Bgp_::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Bgp_::SlowPeer


class Native::Router::Bgp::Bgp_::SlowPeer::Detection : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Bgp_::UpdateGroup : public ydk::Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Split; //type: Native::Router::Bgp::Bgp_::UpdateGroup::Split

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::Bgp_::UpdateGroup


class Native::Router::Bgp::Bgp_::UpdateGroup::Split : public ydk::Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_override; //type: empty

}; // Native::Router::Bgp::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::Bgp_::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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
        class Trigger; //type: Native::Router::Bgp::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::Bgp_::Nexthop


class Native::Router::Bgp::Bgp_::Nexthop::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

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
        ydk::YLeaf enable; //type: boolean

}; // Native::Router::Bgp::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::Bgp_::Regexp : public ydk::Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deterministic; //type: empty

}; // Native::Router::Bgp::Bgp_::Regexp


class Native::Router::Bgp::Bgp_::Transport : public ydk::Entity
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

        ydk::YLeaf path_mtu_discovery; //type: boolean

}; // Native::Router::Bgp::Bgp_::Transport


class Native::Router::Bgp::DefaultInformation : public ydk::Entity
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

}; // Native::Router::Bgp::DefaultInformation


class Native::Router::Bgp::Distance : public ydk::Entity
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

        class Bgp_; //type: Native::Router::Bgp::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::Distance::AdmDistance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Distance::Bgp_> bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Distance::AdmDistance> > adm_distance;
        
}; // Native::Router::Bgp::Distance


class Native::Router::Bgp::Distance::Bgp_ : public ydk::Entity
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

}; // Native::Router::Bgp::Distance::Bgp_


class Native::Router::Bgp::Distance::AdmDistance : public ydk::Entity
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

}; // Native::Router::Bgp::Distance::AdmDistance


class Native::Router::Bgp::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint16, string
        class In; //type: Native::Router::Bgp::DistributeList::In
        class Out; //type: Native::Router::Bgp::DistributeList::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList::Out> out; // presence node
        
}; // Native::Router::Bgp::DistributeList


class Native::Router::Bgp::DistributeList::In : public ydk::Entity
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

        ydk::YLeaf interface; //type: string

}; // Native::Router::Bgp::DistributeList::In


class Native::Router::Bgp::DistributeList::Out : public ydk::Entity
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

        ydk::YLeaf interface; //type: string

}; // Native::Router::Bgp::DistributeList::Out


class Native::Router::Bgp::MaximumPaths : public ydk::Entity
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

        ydk::YLeaf eibgp; //type: uint16
        class MaxPath; //type: Native::Router::Bgp::MaximumPaths::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::MaximumPaths::ExternalRtfilter
        class Ibgp; //type: Native::Router::Bgp::MaximumPaths::Ibgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::MaxPath> max_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp> ibgp;
        
}; // Native::Router::Bgp::MaximumPaths


class Native::Router::Bgp::MaximumPaths::MaxPath : public ydk::Entity
{
    public:
        MaxPath();
        ~MaxPath();

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

}; // Native::Router::Bgp::MaximumPaths::MaxPath


class Native::Router::Bgp::MaximumPaths::ExternalRtfilter : public ydk::Entity
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

}; // Native::Router::Bgp::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::MaximumPaths::Ibgp : public ydk::Entity
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

}; // Native::Router::Bgp::MaximumPaths::Ibgp

class Native::Mpls::TrafficEng::DsTe::BcModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mam;

};

class Native::Mpls::TrafficEng::DsTe::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;
        static const ydk::Enum::YLeaf migration;

};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf unprotected;

};

class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

};

class Native::Mpls::TrafficEng::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

};

class Native::Router::Bgp::Bgp_::Default_::RouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filter;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_87_ */

