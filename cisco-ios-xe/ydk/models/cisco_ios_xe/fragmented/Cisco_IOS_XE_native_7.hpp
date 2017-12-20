#ifndef _CISCO_IOS_XE_NATIVE_7_
#define _CISCO_IOS_XE_NATIVE_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_6.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string
        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination> destination; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string
        class Gtp; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp> gtp; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp : public ydk::Entity
{
    public:
        Gtp();
        ~Gtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp


class Native::Ip::Cef::LoadSharing::KeyControl : public ydk::Entity
{
    public:
        KeyControl();
        ~KeyControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Ip::Cef::LoadSharing::KeyControl


class Native::Ip::Domain : public ydk::Entity
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

        ydk::YLeaf lookup; //type: boolean
        ydk::YLeaf name; //type: string
        class List; //type: Native::Ip::Domain::List
        class LookupSettings; //type: Native::Ip::Domain::LookupSettings

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings> lookup_settings;
        
}; // Native::Ip::Domain


class Native::Ip::Domain::List : public ydk::Entity
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

        ydk::YLeaf domain_name; //type: string
        class Vrf; //type: Native::Ip::Domain::List::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::List::Vrf> vrf;
        
}; // Native::Ip::Domain::List


class Native::Ip::Domain::List::Vrf : public ydk::Entity
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
        ydk::YLeaf domain_name; //type: string

}; // Native::Ip::Domain::List::Vrf


class Native::Ip::Domain::LookupSettings : public ydk::Entity
{
    public:
        LookupSettings();
        ~LookupSettings();

        bool has_data() const override;
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
        class Lookup; //type: Native::Ip::Domain::LookupSettings::Lookup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup> lookup;
        
}; // Native::Ip::Domain::LookupSettings


class Native::Ip::Domain::LookupSettings::Lookup : public ydk::Entity
{
    public:
        Lookup();
        ~Lookup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nsap; //type: empty
        class SourceInterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface> source_interface;
        
}; // Native::Ip::Domain::LookupSettings::Lookup


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMSubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::ATMACRsubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LISPSubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface


class Native::Ip::DomainLookupConf : public ydk::Entity
{
    public:
        DomainLookupConf();
        ~DomainLookupConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domain_lookup; //type: boolean

}; // Native::Ip::DomainLookupConf


class Native::Ip::DomainLookup : public ydk::Entity
{
    public:
        DomainLookup();
        ~DomainLookup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nsap; //type: empty
        class SourceInterface; //type: Native::Ip::DomainLookup::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface> source_interface;
        
}; // Native::Ip::DomainLookup


class Native::Ip::DomainLookup::SourceInterface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::DomainLookup::SourceInterface


class Native::Ip::DomainLookup::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::ATMSubinterface


class Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::ATMACRsubinterface


class Native::Ip::DomainLookup::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::LISPSubinterface


class Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface


class Native::Ip::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Server; //type: Native::Ip::Dns::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dns::Server> server; // presence node
        
}; // Native::Ip::Dns


class Native::Ip::Dns::Server : public ydk::Entity
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


}; // Native::Ip::Dns::Server


class Native::Ip::Dhcp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf smart_relay; //type: empty
        class Bootp; //type: Native::Ip::Dhcp::Bootp
        class Class_; //type: Native::Ip::Dhcp::Class_
        class Conflict; //type: Native::Ip::Dhcp::Conflict
        class ExcludedAddress; //type: Native::Ip::Dhcp::ExcludedAddress
        class Relay; //type: Native::Ip::Dhcp::Relay
        class Pool; //type: Native::Ip::Dhcp::Pool
        class SnoopingConf; //type: Native::Ip::Dhcp::SnoopingConf
        class Snooping; //type: Native::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Bootp> bootp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_> > class_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict> conflict;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::ExcludedAddress> > excluded_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay> relay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool> > pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::SnoopingConf> snooping_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Ip::Dhcp


class Native::Ip::Dhcp::Bootp : public ydk::Entity
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

        ydk::YLeaf ignore; //type: empty

}; // Native::Ip::Dhcp::Bootp


class Native::Ip::Dhcp::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
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
        ydk::YLeaf remark; //type: string
        class Relay; //type: Native::Ip::Dhcp::Class_::Relay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay> relay;
        
}; // Native::Ip::Dhcp::Class_


class Native::Ip::Dhcp::Class_::Relay : public ydk::Entity
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

        class Agent; //type: Native::Ip::Dhcp::Class_::Relay::Agent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay::Agent> agent;
        
}; // Native::Ip::Dhcp::Class_::Relay


class Native::Ip::Dhcp::Class_::Relay::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf information; //type: empty

}; // Native::Ip::Dhcp::Class_::Relay::Agent


class Native::Ip::Dhcp::Conflict : public ydk::Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logging; //type: boolean
        class Resolution; //type: Native::Ip::Dhcp::Conflict::Resolution

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict::Resolution> resolution; // presence node
        
}; // Native::Ip::Dhcp::Conflict


class Native::Ip::Dhcp::Conflict::Resolution : public ydk::Entity
{
    public:
        Resolution();
        ~Resolution();

        bool has_data() const override;
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

}; // Native::Ip::Dhcp::Conflict::Resolution


class Native::Ip::Dhcp::ExcludedAddress : public ydk::Entity
{
    public:
        ExcludedAddress();
        ~ExcludedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf low_address; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf high_address; //type: string

}; // Native::Ip::Dhcp::ExcludedAddress


class Native::Ip::Dhcp::Relay : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Information; //type: Native::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Ip::Dhcp::Relay


class Native::Ip::Dhcp::Relay::Information : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf trust_all; //type: empty
        class Option; //type: Native::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Ip::Dhcp::Relay::Information


class Native::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
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

        ydk::YLeaf option_default; //type: empty
        ydk::YLeaf vpn; //type: empty

}; // Native::Ip::Dhcp::Relay::Information::Option


class Native::Ip::Dhcp::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
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
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeafList default_router; //type: list of  string
        ydk::YLeafList dns_server; //type: list of  string
        class Option; //type: Native::Ip::Dhcp::Pool::Option
        class Class_; //type: Native::Ip::Dhcp::Pool::Class_
        class Lease; //type: Native::Ip::Dhcp::Pool::Lease
        class Network; //type: Native::Ip::Dhcp::Pool::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option> option;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_> > class_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Lease> > lease;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Network> network;
        
}; // Native::Ip::Dhcp::Pool


class Native::Ip::Dhcp::Pool::Option : public ydk::Entity
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

        class OptionRange; //type: Native::Ip::Dhcp::Pool::Option::OptionRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option::OptionRange> > option_range;
        
}; // Native::Ip::Dhcp::Pool::Option


class Native::Ip::Dhcp::Pool::Option::OptionRange : public ydk::Entity
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
        ydk::YLeafList ip; //type: list of  one of string, union
        class Hex; //type: Native::Ip::Dhcp::Pool::Option::OptionRange::Hex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option::OptionRange::Hex> hex;
        
}; // Native::Ip::Dhcp::Pool::Option::OptionRange


class Native::Ip::Dhcp::Pool::Option::OptionRange::Hex : public ydk::Entity
{
    public:
        Hex();
        ~Hex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_line; //type: string
        ydk::YLeaf none; //type: empty

}; // Native::Ip::Dhcp::Pool::Option::OptionRange::Hex


class Native::Ip::Dhcp::Pool::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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
        class Address; //type: Native::Ip::Dhcp::Pool::Class_::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address> address;
        
}; // Native::Ip::Dhcp::Pool::Class_


class Native::Ip::Dhcp::Pool::Class_::Address : public ydk::Entity
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

        class Range; //type: Native::Ip::Dhcp::Pool::Class_::Address::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address::Range> range;
        
}; // Native::Ip::Dhcp::Pool::Class_::Address


class Native::Ip::Dhcp::Pool::Class_::Address::Range : public ydk::Entity
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

        ydk::YLeaf ipv4_start; //type: string
        ydk::YLeaf ipv4_end; //type: string

}; // Native::Ip::Dhcp::Pool::Class_::Address::Range


class Native::Ip::Dhcp::Pool::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint16
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::Ip::Dhcp::Pool::Lease


class Native::Ip::Dhcp::Pool::Network : public ydk::Entity
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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Ip::Dhcp::Pool::Network


class Native::Ip::Dhcp::SnoopingConf : public ydk::Entity
{
    public:
        SnoopingConf();
        ~SnoopingConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf snooping; //type: empty

}; // Native::Ip::Dhcp::SnoopingConf


class Native::Ip::Dhcp::Snooping : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        class Database; //type: Native::Ip::Dhcp::Snooping::Database
        class Information; //type: Native::Ip::Dhcp::Snooping::Information
        class Track; //type: Native::Ip::Dhcp::Snooping::Track
        class Verify; //type: Native::Ip::Dhcp::Snooping::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information> information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Verify> verify;
        
}; // Native::Ip::Dhcp::Snooping


class Native::Ip::Dhcp::Snooping::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf write_delay; //type: uint32

}; // Native::Ip::Dhcp::Snooping::Database


class Native::Ip::Dhcp::Snooping::Information : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf option_conf; //type: boolean
        class Option; //type: Native::Ip::Dhcp::Snooping::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option> option; // presence node
        
}; // Native::Ip::Dhcp::Snooping::Information


class Native::Ip::Dhcp::Snooping::Information::Option : public ydk::Entity
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

        ydk::YLeaf allow_untrusted; //type: empty
        class Format; //type: Native::Ip::Dhcp::Snooping::Information::Option::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option::Format> format;
        
}; // Native::Ip::Dhcp::Snooping::Information::Option


class Native::Ip::Dhcp::Snooping::Information::Option::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RemoteId; //type: Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId> remote_id;
        
}; // Native::Ip::Dhcp::Snooping::Information::Option::Format


class Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hostname; //type: empty
        ydk::YLeaf string; //type: string

}; // Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId


class Native::Ip::Dhcp::Snooping::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf host; //type: empty

}; // Native::Ip::Dhcp::Snooping::Track


class Native::Ip::Dhcp::Snooping::Verify : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: empty
        ydk::YLeaf no_relay_agent_address; //type: empty

}; // Native::Ip::Dhcp::Snooping::Verify


class Native::Ip::ForwardProtocol : public ydk::Entity
{
    public:
        ForwardProtocol();
        ~ForwardProtocol();

        bool has_data() const override;
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
        class SpanningTree; //type: Native::Ip::ForwardProtocol::SpanningTree
        class Udp; //type: Native::Ip::ForwardProtocol::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ForwardProtocol::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ForwardProtocol::Udp> udp;
                class Protocol;

}; // Native::Ip::ForwardProtocol


class Native::Ip::ForwardProtocol::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf any_local_broadcast; //type: empty

}; // Native::Ip::ForwardProtocol::SpanningTree


class Native::Ip::ForwardProtocol::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf biff; //type: boolean
        ydk::YLeaf bootpc; //type: boolean
        ydk::YLeaf bootps; //type: boolean
        ydk::YLeaf discard; //type: boolean
        ydk::YLeaf dnsix; //type: boolean
        ydk::YLeaf domain; //type: boolean
        ydk::YLeaf echo; //type: boolean
        ydk::YLeaf isakmp; //type: boolean
        ydk::YLeaf mobile_ip; //type: boolean
        ydk::YLeaf nameserver; //type: boolean
        ydk::YLeaf netbios_dgm; //type: boolean
        ydk::YLeaf netbios_ns; //type: boolean
        ydk::YLeaf netbios_ss; //type: boolean
        ydk::YLeaf non500_isakmp; //type: boolean
        ydk::YLeaf ntp; //type: boolean
        ydk::YLeaf pim_auto_rp; //type: boolean
        ydk::YLeaf rip; //type: boolean
        ydk::YLeaf snmp; //type: boolean
        ydk::YLeaf snmptrap; //type: boolean
        ydk::YLeaf sunrpc; //type: boolean
        ydk::YLeaf syslog; //type: boolean
        ydk::YLeaf tacacs; //type: boolean
        ydk::YLeaf talk; //type: boolean
        ydk::YLeaf tftp; //type: boolean
        ydk::YLeaf time; //type: boolean
        ydk::YLeaf who; //type: boolean
        ydk::YLeaf xdmcp; //type: boolean

}; // Native::Ip::ForwardProtocol::Udp


class Native::Ip::GratuitousArpsConf : public ydk::Entity
{
    public:
        GratuitousArpsConf();
        ~GratuitousArpsConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf gratuitous_arps; //type: boolean

}; // Native::Ip::GratuitousArpsConf


class Native::Ip::Ftp : public ydk::Entity
{
    public:
        Ftp();
        ~Ftp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf passive; //type: empty
        ydk::YLeaf username; //type: string
        class SourceInterface; //type: Native::Ip::Ftp::SourceInterface
        class Password; //type: Native::Ip::Ftp::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface> source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::Password> password;
        
}; // Native::Ip::Ftp


class Native::Ip::Ftp::SourceInterface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Ip::Ftp::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Ftp::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Ftp::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Ftp::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Ftp::SourceInterface


class Native::Ip::Ftp::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ip::Ftp::SourceInterface::ATMSubinterface


class Native::Ip::Ftp::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ip::Ftp::SourceInterface::ATMACRsubinterface


class Native::Ip::Ftp::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ip::Ftp::SourceInterface::LISPSubinterface


class Native::Ip::Ftp::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ip::Ftp::SourceInterface::PortChannelSubinterface


class Native::Ip::Ftp::Password : public ydk::Entity
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

        class PasswordContainer; //type: Native::Ip::Ftp::Password::PasswordContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp::Password::PasswordContainer> password_container;
        
}; // Native::Ip::Ftp::Password


class Native::Ip::Ftp::Password::PasswordContainer : public ydk::Entity
{
    public:
        PasswordContainer();
        ~PasswordContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf password; //type: string

}; // Native::Ip::Ftp::Password::PasswordContainer


class Native::Ip::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_interface; //type: string

}; // Native::Ip::Telnet


class Native::Ip::Host : public ydk::Entity
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

        class HostList; //type: Native::Ip::Host::HostList
        class Vrf; //type: Native::Ip::Host::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Host::HostList> > host_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Host::Vrf> > vrf;
        
}; // Native::Ip::Host


class Native::Ip::Host::HostList : public ydk::Entity
{
    public:
        HostList();
        ~HostList();

        bool has_data() const override;
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
        ydk::YLeaf ip; //type: string

}; // Native::Ip::Host::HostList


class Native::Ip::Host::Vrf : public ydk::Entity
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
        class HostName; //type: Native::Ip::Host::Vrf::HostName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Host::Vrf::HostName> > host_name;
        
}; // Native::Ip::Host::Vrf


class Native::Ip::Host::Vrf::HostName : public ydk::Entity
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

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf ipv4_address; //type: string

}; // Native::Ip::Host::Vrf::HostName


class Native::Ip::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_limit; //type: uint32
        class Multipath; //type: Native::Ip::Multicast::Multipath
        class Vrf; //type: Native::Ip::Multicast::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Multipath> multipath; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf> > vrf;
        
}; // Native::Ip::Multicast


class Native::Ip::Multicast::Multipath : public ydk::Entity
{
    public:
        Multipath();
        ~Multipath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf s_g_hash; //type: SGHash
        class SGHash;

}; // Native::Ip::Multicast::Multipath


class Native::Ip::Multicast::Vrf : public ydk::Entity
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
        class Multipath; //type: Native::Ip::Multicast::Vrf::Multipath
        class RouteLimit; //type: Native::Ip::Multicast::Vrf::RouteLimit
        class Rpf; //type: Native::Ip::Multicast::Vrf::Rpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::Multipath> multipath; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::RouteLimit> route_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::Rpf> rpf;
        
}; // Native::Ip::Multicast::Vrf


class Native::Ip::Multicast::Vrf::Multipath : public ydk::Entity
{
    public:
        Multipath();
        ~Multipath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s_g_hash; //type: SGHash
        class SGHash;

}; // Native::Ip::Multicast::Vrf::Multipath


class Native::Ip::Multicast::Vrf::RouteLimit : public ydk::Entity
{
    public:
        RouteLimit();
        ~RouteLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_routes; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint32

}; // Native::Ip::Multicast::Vrf::RouteLimit


class Native::Ip::Multicast::Vrf::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Select; //type: Native::Ip::Multicast::Vrf::Rpf::Select

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::Rpf::Select> select;
        
}; // Native::Ip::Multicast::Vrf::Rpf


class Native::Ip::Multicast::Vrf::Rpf::Select : public ydk::Entity
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

        class Vrf_; //type: Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_> > vrf;
        
}; // Native::Ip::Multicast::Vrf::Rpf::Select


class Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_ : public ydk::Entity
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
        class GroupList; //type: Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList> > group_list;
        
}; // Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_


class Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_list_name; //type: one of uint16, string

}; // Native::Ip::Multicast::Vrf::Rpf::Select::Vrf_::GroupList


class Native::Ip::NameServer : public ydk::Entity
{
    public:
        NameServer();
        ~NameServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList no_vrf; //type: list of  string
        class Vrf; //type: Native::Ip::NameServer::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::NameServer::Vrf> > vrf;
        
}; // Native::Ip::NameServer


class Native::Ip::NameServer::Vrf : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf server_ip; //type: string

}; // Native::Ip::NameServer::Vrf


class Native::Ip::Pim : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf register_source; //type: string
        class AcceptRegister; //type: Native::Ip::Pim::AcceptRegister
        class Autorp; //type: Native::Ip::Pim::Autorp
        class RpAddress; //type: Native::Ip::Pim::RpAddress
        class SptThreshold; //type: Native::Ip::Pim::SptThreshold
        class SptThresholdContainer; //type: Native::Ip::Pim::SptThresholdContainer
        class SendRpAnnounce; //type: Native::Ip::Pim::SendRpAnnounce
        class SendRpDiscovery; //type: Native::Ip::Pim::SendRpDiscovery
        class Ssm; //type: Native::Ip::Pim::Ssm
        class Vrf; //type: Native::Ip::Pim::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Autorp> autorp; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::RpAddress> > rp_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SptThreshold> > spt_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SptThresholdContainer> spt_threshold_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce> send_rp_announce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpDiscovery> send_rp_discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Ssm> ssm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf> > vrf;
        
}; // Native::Ip::Pim


class Native::Ip::Pim::AcceptRegister : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Pim::AcceptRegister


class Native::Ip::Pim::Autorp : public ydk::Entity
{
    public:
        Autorp();
        ~Autorp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf listener; //type: empty

}; // Native::Ip::Pim::Autorp


class Native::Ip::Pim::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
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
        ydk::YLeaf access_list; //type: one of uint16, string
        ydk::YLeaf override; //type: empty

}; // Native::Ip::Pim::RpAddress


class Native::Ip::Pim::SptThreshold : public ydk::Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf how; //type: How
        ydk::YLeaf group_list; //type: one of uint16, string
        class How;

}; // Native::Ip::Pim::SptThreshold


class Native::Ip::Pim::SptThresholdContainer : public ydk::Entity
{
    public:
        SptThresholdContainer();
        ~SptThresholdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SptThreshold; //type: Native::Ip::Pim::SptThresholdContainer::SptThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SptThresholdContainer::SptThreshold> spt_threshold;
        
}; // Native::Ip::Pim::SptThresholdContainer


class Native::Ip::Pim::SptThresholdContainer::SptThreshold : public ydk::Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf how; //type: How
        class How;

}; // Native::Ip::Pim::SptThresholdContainer::SptThreshold


class Native::Ip::Pim::SendRpAnnounce : public ydk::Entity
{
    public:
        SendRpAnnounce();
        ~SendRpAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InterfaceList; //type: Native::Ip::Pim::SendRpAnnounce::InterfaceList
        class PortChannel; //type: Native::Ip::Pim::SendRpAnnounce::PortChannel

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::InterfaceList> > interface_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::PortChannel> > port_channel;
        
}; // Native::Ip::Pim::SendRpAnnounce


class Native::Ip::Pim::SendRpAnnounce::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf if_name; //type: string
        class Scope; //type: Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope> scope;
        
}; // Native::Ip::Pim::SendRpAnnounce::InterfaceList


class Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pkt_ttl; //type: uint8
        class GroupList; //type: Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList> group_list;
        
}; // Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope


class Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_ref; //type: uint8
        ydk::YLeaf std_acl; //type: string

}; // Native::Ip::Pim::SendRpAnnounce::InterfaceList::Scope::GroupList


class Native::Ip::Pim::SendRpAnnounce::PortChannel : public ydk::Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf scope; //type: uint8

}; // Native::Ip::Pim::SendRpAnnounce::PortChannel


class Native::Ip::Pim::SendRpDiscovery : public ydk::Entity
{
    public:
        SendRpDiscovery();
        ~SendRpDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf scope; //type: uint8

}; // Native::Ip::Pim::SendRpDiscovery


class Native::Ip::Pim::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range; //type: one of uint16, string
        ydk::YLeaf default_; //type: empty

}; // Native::Ip::Pim::Ssm


class Native::Ip::Pim::Vrf : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf register_source; //type: string
        class AcceptRegister; //type: Native::Ip::Pim::Vrf::AcceptRegister
        class Autorp; //type: Native::Ip::Pim::Vrf::Autorp
        class RpAddress; //type: Native::Ip::Pim::Vrf::RpAddress
        class SptThreshold; //type: Native::Ip::Pim::Vrf::SptThreshold
        class SptThresholdContainer; //type: Native::Ip::Pim::Vrf::SptThresholdContainer
        class SendRpAnnounce; //type: Native::Ip::Pim::Vrf::SendRpAnnounce
        class SendRpDiscovery; //type: Native::Ip::Pim::Vrf::SendRpDiscovery
        class Ssm; //type: Native::Ip::Pim::Vrf::Ssm

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::Autorp> autorp; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::RpAddress> > rp_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThreshold> > spt_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThresholdContainer> spt_threshold_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce> send_rp_announce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpDiscovery> send_rp_discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::Ssm> ssm;
        
}; // Native::Ip::Pim::Vrf


class Native::Ip::Pim::Vrf::AcceptRegister : public ydk::Entity
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

        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Pim::Vrf::AcceptRegister


class Native::Ip::Pim::Vrf::Autorp : public ydk::Entity
{
    public:
        Autorp();
        ~Autorp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf listener; //type: empty

}; // Native::Ip::Pim::Vrf::Autorp


class Native::Ip::Pim::Vrf::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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
        ydk::YLeaf access_list; //type: one of uint16, string
        ydk::YLeaf override; //type: empty

}; // Native::Ip::Pim::Vrf::RpAddress


class Native::Ip::Pim::Vrf::SptThreshold : public ydk::Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf how; //type: How
        ydk::YLeaf group_list; //type: one of uint16, string
        class How;

}; // Native::Ip::Pim::Vrf::SptThreshold


class Native::Ip::Pim::Vrf::SptThresholdContainer : public ydk::Entity
{
    public:
        SptThresholdContainer();
        ~SptThresholdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SptThreshold; //type: Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold> spt_threshold;
        
}; // Native::Ip::Pim::Vrf::SptThresholdContainer


class Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold : public ydk::Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf how; //type: How
        class How;

}; // Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold


class Native::Ip::Pim::Vrf::SendRpAnnounce : public ydk::Entity
{
    public:
        SendRpAnnounce();
        ~SendRpAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceList; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList
        class PortChannel; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList> > interface_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel> > port_channel;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce


class Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_name; //type: string
        class Scope; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope> scope;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList


class Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pkt_ttl; //type: uint8
        class GroupList; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList> group_list;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope


class Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_ref; //type: uint8
        ydk::YLeaf std_acl; //type: string

}; // Native::Ip::Pim::Vrf::SendRpAnnounce::InterfaceList::Scope::GroupList


class Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel : public ydk::Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf scope; //type: uint8

}; // Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel


class Native::Ip::Pim::Vrf::SendRpDiscovery : public ydk::Entity
{
    public:
        SendRpDiscovery();
        ~SendRpDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scope; //type: uint8

}; // Native::Ip::Pim::Vrf::SendRpDiscovery


class Native::Ip::Pim::Vrf::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, string
        ydk::YLeaf default_; //type: empty

}; // Native::Ip::Pim::Vrf::Ssm


class Native::Ip::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number; //type: empty
        class Prefixes; //type: Native::Ip::PrefixList::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes> > prefixes;
        
}; // Native::Ip::PrefixList


class Native::Ip::PrefixList::Prefixes : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class Permit; //type: Native::Ip::PrefixList::Prefixes::Permit
        class Deny; //type: Native::Ip::PrefixList::Prefixes::Deny
        class Seq; //type: Native::Ip::PrefixList::Prefixes::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Deny> deny;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq> > seq;
        
}; // Native::Ip::PrefixList::Prefixes


class Native::Ip::PrefixList::Prefixes::Permit : public ydk::Entity
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

        class PermitList; //type: Native::Ip::PrefixList::Prefixes::Permit::PermitList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Permit::PermitList> > permit_list;
        
}; // Native::Ip::PrefixList::Prefixes::Permit


class Native::Ip::PrefixList::Prefixes::Permit::PermitList : public ydk::Entity
{
    public:
        PermitList();
        ~PermitList();

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
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Permit::PermitList


class Native::Ip::PrefixList::Prefixes::Deny : public ydk::Entity
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

        class DenyList; //type: Native::Ip::PrefixList::Prefixes::Deny::DenyList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Deny::DenyList> > deny_list;
        
}; // Native::Ip::PrefixList::Prefixes::Deny


class Native::Ip::PrefixList::Prefixes::Deny::DenyList : public ydk::Entity
{
    public:
        DenyList();
        ~DenyList();

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
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Deny::DenyList


class Native::Ip::PrefixList::Prefixes::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no; //type: uint32
        class Deny; //type: Native::Ip::PrefixList::Prefixes::Seq::Deny
        class Permit; //type: Native::Ip::PrefixList::Prefixes::Seq::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq::Permit> permit;
        
}; // Native::Ip::PrefixList::Prefixes::Seq


class Native::Ip::PrefixList::Prefixes::Seq::Deny : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Seq::Deny


class Native::Ip::PrefixList::Prefixes::Seq::Permit : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Seq::Permit


class Native::Ip::Route : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf profile; //type: empty
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::IpRouteInterfaceForwardingList
        class Static_; //type: Native::Ip::Route::Static_
        class Vrf; //type: Native::Ip::Route::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::IpRouteInterfaceForwardingList> > ip_route_interface_forwarding_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Static_> static_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Vrf> > vrf;
        
}; // Native::Ip::Route


class Native::Ip::Route::IpRouteInterfaceForwardingList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        class FwdList; //type: Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList> > fwd_list;
        
}; // Native::Ip::Route::IpRouteInterfaceForwardingList


class Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList : public ydk::Entity
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

        ydk::YLeaf fwd; //type: one of enumeration, string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16
        class InterfaceNextHop; //type: Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop> > interface_next_hop;
                class Fwd;

}; // Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop : public ydk::Entity
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
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16

}; // Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop


class Native::Ip::Route::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adjust_time; //type: uint8
        ydk::YLeaf inter_vrf; //type: empty
        class Bfd; //type: Native::Ip::Route::Static_::Bfd
        class InstallRoutesRecurseViaNexthop; //type: Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Static_::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop> install_routes_recurse_via_nexthop;
        
}; // Native::Ip::Route::Static_


class Native::Ip::Route::Static_::Bfd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf gateway_ip; //type: string

}; // Native::Ip::Route::Static_::Bfd


class Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop : public ydk::Entity
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

        ydk::YLeaf vrf; //type: string

}; // Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop


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
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList> > ip_route_interface_forwarding_list;
        
}; // Native::Ip::Route::Vrf


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList> > fwd_list;
        
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

        ydk::YLeaf fwd; //type: one of enumeration, string
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16
        class InterfaceNextHop; //type: Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop> > interface_next_hop;
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
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf metric; //type: uint8
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf permanent; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint16

}; // Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::InterfaceNextHop


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Identifier> > identifier;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Name> > name;
        
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
        class Index_; //type: Native::Ip::ExplicitPath::Identifier::Index_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Identifier::Index_> > index_;
                class Mode;

}; // Native::Ip::ExplicitPath::Identifier


class Native::Ip::ExplicitPath::Identifier::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

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
        class NextAddress; //type: Native::Ip::ExplicitPath::Identifier::Index_::NextAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Identifier::Index_::NextAddress> next_address;
        
}; // Native::Ip::ExplicitPath::Identifier::Index_


class Native::Ip::ExplicitPath::Identifier::Index_::NextAddress : public ydk::Entity
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

}; // Native::Ip::ExplicitPath::Identifier::Index_::NextAddress


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
        class Index_; //type: Native::Ip::ExplicitPath::Name::Index_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Name::Index_> > index_;
                class Mode;

}; // Native::Ip::ExplicitPath::Name


class Native::Ip::ExplicitPath::Name::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

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
        class NextAddress; //type: Native::Ip::ExplicitPath::Name::Index_::NextAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath::Name::Index_::NextAddress> next_address;
        
}; // Native::Ip::ExplicitPath::Name::Index_


class Native::Ip::ExplicitPath::Name::Index_::NextAddress : public ydk::Entity
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

}; // Native::Ip::ExplicitPath::Name::Index_::NextAddress


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
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::Port> > port;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain::Username> > username;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh::PubkeyChain::Username::KeyHash> > key_hash;
        
}; // Native::Ip::Ssh::PubkeyChain::Username

class Native::Ip::ForwardProtocol::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nd;
        static const ydk::Enum::YLeaf sdns;
        static const ydk::Enum::YLeaf turbo_flood;

};

class Native::Ip::Multicast::Multipath::SGHash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf next_hop_based;

};

class Native::Ip::Multicast::Vrf::Multipath::SGHash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf next_hop_based;

};

class Native::Ip::Pim::SptThreshold::How : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf infinity;

};

class Native::Ip::Pim::SptThresholdContainer::SptThreshold::How : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf infinity;

};

class Native::Ip::Pim::Vrf::SptThreshold::How : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf infinity;

};

class Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::How : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf infinity;

};

class Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::Fwd : public ydk::Enum
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


}
}

#endif /* _CISCO_IOS_XE_NATIVE_7_ */

