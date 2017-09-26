#ifndef _CISCO_IOS_XE_NATIVE_15_
#define _CISCO_IOS_XE_NATIVE_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_14.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Flow::Exporter::Option::ApplicationAttributes : public ydk::Entity
{
    public:
        ApplicationAttributes();
        ~ApplicationAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ApplicationAttributes


class Native::Flow::Exporter::Option::ApplicationTable : public ydk::Entity
{
    public:
        ApplicationTable();
        ~ApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ApplicationTable


class Native::Flow::Exporter::Option::C3PlClassTable : public ydk::Entity
{
    public:
        C3PlClassTable();
        ~C3PlClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::C3PlClassTable


class Native::Flow::Exporter::Option::C3PlPolicyTable : public ydk::Entity
{
    public:
        C3PlPolicyTable();
        ~C3PlPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::C3PlPolicyTable


class Native::Flow::Exporter::Option::ExporterStats : public ydk::Entity
{
    public:
        ExporterStats();
        ~ExporterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ExporterStats


class Native::Flow::Exporter::Option::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::InterfaceTable


class Native::Flow::Exporter::Option::MetadataVersionTable : public ydk::Entity
{
    public:
        MetadataVersionTable();
        ~MetadataVersionTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::MetadataVersionTable


class Native::Flow::Exporter::Option::SamplerTable : public ydk::Entity
{
    public:
        SamplerTable();
        ~SamplerTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::SamplerTable


class Native::Flow::Exporter::Option::SubApplicationTable : public ydk::Entity
{
    public:
        SubApplicationTable();
        ~SubApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::SubApplicationTable


class Native::Flow::Exporter::Option::VrfTable : public ydk::Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::VrfTable


class Native::Flow::Exporter::OutputFeatures : public ydk::Entity
{
    public:
        OutputFeatures();
        ~OutputFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Flow::Exporter::OutputFeatures


class Native::Flow::Exporter::Source : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Flow::Exporter::Source::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Flow::Exporter::Source::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Flow::Exporter::Source::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Flow::Exporter::Source::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Flow::Exporter::Source


class Native::Flow::Exporter::Source::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Flow::Exporter::Source::ATMACRsubinterface


class Native::Flow::Exporter::Source::ATMSubinterface : public ydk::Entity
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

}; // Native::Flow::Exporter::Source::ATMSubinterface


class Native::Flow::Exporter::Source::LISPSubinterface : public ydk::Entity
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

}; // Native::Flow::Exporter::Source::LISPSubinterface


class Native::Flow::Exporter::Source::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Flow::Exporter::Source::PortChannelSubinterface


class Native::Flow::Exporter::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Native::Flow::Exporter::Template_::Data

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Template_::Data> data;
        
}; // Native::Flow::Exporter::Template_


class Native::Flow::Exporter::Template_::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Template_::Data


class Native::Flow::Exporter::Transport : public ydk::Entity
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

        ydk::YLeaf udp; //type: uint16

}; // Native::Flow::Exporter::Transport


class Native::Flow::Monitor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf description; //type: string
        class Cache; //type: Native::Flow::Monitor::Cache
        class Exporter; //type: Native::Flow::Monitor::Exporter
        class History; //type: Native::Flow::Monitor::History
        class Record; //type: Native::Flow::Monitor::Record
        class Statistics; //type: Native::Flow::Monitor::Statistics
        class Default_; //type: Native::Flow::Monitor::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Exporter> > exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::History> history;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record> record;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Statistics> statistics;
                class Type;

}; // Native::Flow::Monitor


class Native::Flow::Monitor::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entries; //type: uint32
        ydk::YLeaf type; //type: Type
        class Timeout; //type: Native::Flow::Monitor::Cache::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Cache::Timeout> timeout;
                class Type;

}; // Native::Flow::Monitor::Cache


class Native::Flow::Monitor::Cache::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf inactive; //type: uint32
        ydk::YLeaf synchronized; //type: uint16
        ydk::YLeaf update; //type: uint32
        class Event; //type: Native::Flow::Monitor::Cache::Timeout::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Cache::Timeout::Event> event;
        
}; // Native::Flow::Monitor::Cache::Timeout


class Native::Flow::Monitor::Cache::Timeout::Event : public ydk::Entity
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

        ydk::YLeaf transaction_end; //type: empty

}; // Native::Flow::Monitor::Cache::Timeout::Event


class Native::Flow::Monitor::Default_ : public ydk::Entity
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

        ydk::YLeaf description; //type: empty
        ydk::YLeaf exporter; //type: empty
        ydk::YLeaf record; //type: empty
        class Cache; //type: Native::Flow::Monitor::Default_::Cache
        class Statistics; //type: Native::Flow::Monitor::Default_::Statistics

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Statistics> statistics;
        
}; // Native::Flow::Monitor::Default_


class Native::Flow::Monitor::Default_::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entries; //type: empty
        ydk::YLeaf type; //type: empty
        class Timeout; //type: Native::Flow::Monitor::Default_::Cache::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache::Timeout> timeout;
        
}; // Native::Flow::Monitor::Default_::Cache


class Native::Flow::Monitor::Default_::Cache::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: empty
        ydk::YLeaf inactive; //type: empty
        ydk::YLeaf synchronized; //type: empty
        ydk::YLeaf update; //type: empty
        class Event; //type: Native::Flow::Monitor::Default_::Cache::Timeout::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache::Timeout::Event> event;
        
}; // Native::Flow::Monitor::Default_::Cache::Timeout


class Native::Flow::Monitor::Default_::Cache::Timeout::Event : public ydk::Entity
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

        ydk::YLeaf transaction_end; //type: empty

}; // Native::Flow::Monitor::Default_::Cache::Timeout::Event


class Native::Flow::Monitor::Default_::Statistics : public ydk::Entity
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

        class Packet; //type: Native::Flow::Monitor::Default_::Statistics::Packet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Statistics::Packet> packet;
        
}; // Native::Flow::Monitor::Default_::Statistics


class Native::Flow::Monitor::Default_::Statistics::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf size; //type: empty

}; // Native::Flow::Monitor::Default_::Statistics::Packet


class Native::Flow::Monitor::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

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

}; // Native::Flow::Monitor::Exporter


class Native::Flow::Monitor::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint8
        ydk::YLeaf timeout; //type: uint8

}; // Native::Flow::Monitor::History


class Native::Flow::Monitor::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: one of string, enumeration
        class Netflow; //type: Native::Flow::Monitor::Record::Netflow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow> netflow;
                class Type;

}; // Native::Flow::Monitor::Record


class Native::Flow::Monitor::Record::Netflow : public ydk::Entity
{
    public:
        Netflow();
        ~Netflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Flow::Monitor::Record::Netflow::Ipv4
        class Ipv6; //type: Native::Flow::Monitor::Record::Netflow::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6> ipv6;
        
}; // Native::Flow::Monitor::Record::Netflow


class Native::Flow::Monitor::Record::Netflow::Ipv4 : public ydk::Entity
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

        ydk::YLeaf protocol_port; //type: empty
        ydk::YLeaf prefix_port; //type: empty
        ydk::YLeaf protocol_port_tos; //type: empty
        class As; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::As
        class DestinationPrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix
        class OriginalInput; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput
        class OriginalOutput; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput
        class Prefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix
        class SourcePrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix
        class AsTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos
        class BgpNexthopTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos
        class DestinationPrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos
        class PrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos
        class SourcePrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::As> as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos> as_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos> bgp_nexthop_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos> destination_prefix_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput> original_input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput> original_output; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix> prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos> prefix_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix> source_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos> source_prefix_tos; // presence node
        
}; // Native::Flow::Monitor::Record::Netflow::Ipv4


class Native::Flow::Monitor::Record::Netflow::Ipv4::As : public ydk::Entity
{
    public:
        As();
        ~As();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::As


class Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos : public ydk::Entity
{
    public:
        AsTos();
        ~AsTos();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos : public ydk::Entity
{
    public:
        BgpNexthopTos();
        ~BgpNexthopTos();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos : public ydk::Entity
{
    public:
        DestinationPrefixTos();
        ~DestinationPrefixTos();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput : public ydk::Entity
{
    public:
        OriginalInput();
        ~OriginalInput();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput


class Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput : public ydk::Entity
{
    public:
        OriginalOutput();
        ~OriginalOutput();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput


class Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos : public ydk::Entity
{
    public:
        PrefixTos();
        ~PrefixTos();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos : public ydk::Entity
{
    public:
        SourcePrefixTos();
        ~SourcePrefixTos();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv6 : public ydk::Entity
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

        ydk::YLeaf protocol_port; //type: empty
        class As; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::As
        class DestinationPrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix
        class OriginalInput; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput
        class OriginalOutput; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput
        class Prefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix
        class SourcePrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix
        class BgpNexthop; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::As> as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop> bgp_nexthop; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput> original_input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput> original_output; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix> prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix> source_prefix; // presence node
        
}; // Native::Flow::Monitor::Record::Netflow::Ipv6


class Native::Flow::Monitor::Record::Netflow::Ipv6::As : public ydk::Entity
{
    public:
        As();
        ~As();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::As


class Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop : public ydk::Entity
{
    public:
        BgpNexthop();
        ~BgpNexthop();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop


class Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix


class Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput : public ydk::Entity
{
    public:
        OriginalInput();
        ~OriginalInput();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput


class Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput : public ydk::Entity
{
    public:
        OriginalOutput();
        ~OriginalOutput();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput


class Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix


class Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

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

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix


class Native::Flow::Monitor::Statistics : public ydk::Entity
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

        class Packet; //type: Native::Flow::Monitor::Statistics::Packet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Statistics::Packet> packet;
        
}; // Native::Flow::Monitor::Statistics


class Native::Flow::Monitor::Statistics::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf size; //type: empty

}; // Native::Flow::Monitor::Statistics::Packet


class Native::Flow::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: Type
        ydk::YLeaf description; //type: string
        class Collect; //type: Native::Flow::Record::Collect
        class Default_; //type: Native::Flow::Record::Default_
        class Match; //type: Native::Flow::Record::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect> collect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match> match;
                class Type;

}; // Native::Flow::Record


class Native::Flow::Record::Collect : public ydk::Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Flow::Record::Collect::Application
        class Connection; //type: Native::Flow::Record::Collect::Connection
        class Counter; //type: Native::Flow::Record::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Collect::Mpls
        class Network; //type: Native::Flow::Record::Collect::Network
        class Pfr; //type: Native::Flow::Record::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Collect::Policy
        class Routing; //type: Native::Flow::Record::Collect::Routing
        class Services; //type: Native::Flow::Record::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Collect::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection> connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services> services;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp> timestamp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport> transport;
        
}; // Native::Flow::Record::Collect


class Native::Flow::Record::Collect::Application : public ydk::Entity
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

        ydk::YLeaf vendor; //type: empty
        ydk::YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Collect::Application::Ssl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media> media;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Name> name; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Nntp> nntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Pop3> pop3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Sip> sip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Smtp> smtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Collect::Application


class Native::Flow::Record::Collect::Application::Dns : public ydk::Entity
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

        ydk::YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Dns


class Native::Flow::Record::Collect::Application::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

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
        ydk::YLeaf referer; //type: empty
        ydk::YLeaf url; //type: empty
        ydk::YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Collect::Application::Http::Uri

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Collect::Application::Http


class Native::Flow::Record::Collect::Application::Http::Uri : public ydk::Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics; //type: empty

}; // Native::Flow::Record::Collect::Application::Http::Uri


class Native::Flow::Record::Collect::Application::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Application::Media::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Collect::Application::Media


class Native::Flow::Record::Collect::Application::Media::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes


class Native::Flow::Record::Collect::Application::Media::Bytes::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Counter


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Application::Media::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets


class Native::Flow::Record::Collect::Application::Media::Packets::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Counter


class Native::Flow::Record::Collect::Application::Media::Packets::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Variation; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation> variation; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate


class Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation : public ydk::Entity
{
    public:
        Variation();
        ~Variation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation


class Native::Flow::Record::Collect::Application::Name : public ydk::Entity
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

        ydk::YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Collect::Application::Name


class Native::Flow::Record::Collect::Application::Nntp : public ydk::Entity
{
    public:
        Nntp();
        ~Nntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Nntp


class Native::Flow::Record::Collect::Application::Pop3 : public ydk::Entity
{
    public:
        Pop3();
        ~Pop3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Pop3


class Native::Flow::Record::Collect::Application::Rtmp : public ydk::Entity
{
    public:
        Rtmp();
        ~Rtmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pageurl; //type: empty

}; // Native::Flow::Record::Collect::Application::Rtmp


class Native::Flow::Record::Collect::Application::Rtsp : public ydk::Entity
{
    public:
        Rtsp();
        ~Rtsp();

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

}; // Native::Flow::Record::Collect::Application::Rtsp


class Native::Flow::Record::Collect::Application::Sip : public ydk::Entity
{
    public:
        Sip();
        ~Sip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Flow::Record::Collect::Application::Sip


class Native::Flow::Record::Collect::Application::Smtp : public ydk::Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sender; //type: empty
        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Smtp


class Native::Flow::Record::Collect::Application::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Ssl


class Native::Flow::Record::Collect::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty
        ydk::YLeaf initiator; //type: empty
        ydk::YLeaf new_connections; //type: empty
        ydk::YLeaf sum_duration; //type: empty
        ydk::YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Collect::Connection::Client
        class Delay; //type: Native::Flow::Record::Collect::Connection::Delay
        class Server; //type: Native::Flow::Record::Collect::Connection::Server
        class Transaction; //type: Native::Flow::Record::Collect::Connection::Transaction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction> transaction;
        
}; // Native::Flow::Record::Collect::Connection


class Native::Flow::Record::Collect::Connection::Client : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Client::Counter
        class Ipv4; //type: Native::Flow::Record::Collect::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client


class Native::Flow::Record::Collect::Connection::Client::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bytes; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Packets> packets;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport


class Native::Flow::Record::Collect::Connection::Client::Counter::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Packets


class Native::Flow::Record::Collect::Connection::Client::Ipv4 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv4


class Native::Flow::Record::Collect::Connection::Client::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv6


class Native::Flow::Record::Collect::Connection::Client::Transport : public ydk::Entity
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

        ydk::YLeaf port; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Transport


class Native::Flow::Record::Collect::Connection::Delay : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Application; //type: Native::Flow::Record::Collect::Connection::Delay::Application
        class Network; //type: Native::Flow::Record::Collect::Connection::Delay::Network
        class Response; //type: Native::Flow::Record::Collect::Connection::Delay::Response

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response> response;
        
}; // Native::Flow::Record::Collect::Connection::Delay


class Native::Flow::Record::Collect::Connection::Delay::Application : public ydk::Entity
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

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Application


class Native::Flow::Record::Collect::Connection::Delay::Network : public ydk::Entity
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

        class ClientToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer
        class LongLived; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived
        class ToClient; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ToClient
        class ToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ToServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer> client_to_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived> long_lived;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ToClient> to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ToServer> to_server;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Network


class Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer : public ydk::Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived : public ydk::Entity
{
    public:
        LongLived();
        ~LongLived();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientToServe; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe
        class ToClient; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient
        class ToServe; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe> client_to_serve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient> to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe> to_serve;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe : public ydk::Entity
{
    public:
        ClientToServe();
        ~ClientToServe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient : public ydk::Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe : public ydk::Entity
{
    public:
        ToServe();
        ~ToServe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe


class Native::Flow::Record::Collect::Connection::Delay::Network::ToClient : public ydk::Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ToClient


class Native::Flow::Record::Collect::Connection::Delay::Network::ToServer : public ydk::Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf num_samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ToServer


class Native::Flow::Record::Collect::Connection::Delay::Response : public ydk::Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer
        class ToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Response::ToServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer> client_to_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response::ToServer> to_server;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Response


class Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer : public ydk::Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer


class Native::Flow::Record::Collect::Connection::Delay::Response::ToServer : public ydk::Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf histogram; //type: empty
        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Response::ToServer


class Native::Flow::Record::Collect::Connection::Server : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Server::Counter
        class Ipv4; //type: Native::Flow::Record::Collect::Connection::Server::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Connection::Server::Ipv6
        class Transport; //type: Native::Flow::Record::Collect::Connection::Server::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Server


class Native::Flow::Record::Collect::Connection::Server::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf responses; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Packets> packets;
        
}; // Native::Flow::Record::Collect::Connection::Server::Counter


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport


class Native::Flow::Record::Collect::Connection::Server::Counter::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Packets


class Native::Flow::Record::Collect::Connection::Server::Ipv4 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Ipv4


class Native::Flow::Record::Collect::Connection::Server::Ipv6 : public ydk::Entity
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

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Ipv6


class Native::Flow::Record::Collect::Connection::Server::Transport : public ydk::Entity
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

        ydk::YLeaf port; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Transport


class Native::Flow::Record::Collect::Connection::Transaction : public ydk::Entity
{
    public:
        Transaction();
        ~Transaction();

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
        class Counter; //type: Native::Flow::Record::Collect::Connection::Transaction::Counter
        class Duration; //type: Native::Flow::Record::Collect::Connection::Transaction::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Duration> duration;
        
}; // Native::Flow::Record::Collect::Connection::Transaction


class Native::Flow::Record::Collect::Connection::Transaction::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf complete; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Counter


class Native::Flow::Record::Collect::Connection::Transaction::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Duration


class Native::Flow::Record::Collect::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flows; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes> bytes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets> packets; // presence node
        
}; // Native::Flow::Record::Collect::Counter


class Native::Flow::Record::Collect::Counter::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate
        class Squared; //type: Native::Flow::Record::Collect::Counter::Bytes::Squared

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate> rate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Squared> squared;
        
}; // Native::Flow::Record::Collect::Counter::Bytes


class Native::Flow::Record::Collect::Counter::Bytes::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Bytes::Rate


class Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Counter::Bytes::Squared : public ydk::Entity
{
    public:
        Squared();
        ~Squared();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Squared


class Native::Flow::Record::Collect::Counter::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropped; //type: empty
        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets


class Native::Flow::Record::Collect::Counter::Packets::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets::Rate


class Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow


class Native::Flow::Record::Collect::Datalink : public ydk::Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_vlan_id; //type: empty
        ydk::YLeaf ethertype; //type: empty
        ydk::YLeaf source_vlan_id; //type: empty
        class Dot1Q; //type: Native::Flow::Record::Collect::Datalink::Dot1Q
        class Mac; //type: Native::Flow::Record::Collect::Datalink::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac> mac;
        
}; // Native::Flow::Record::Collect::Datalink


class Native::Flow::Record::Collect::Datalink::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

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
        class Vlan; //type: Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan> vlan;
        
}; // Native::Flow::Record::Collect::Datalink::Dot1Q


class Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan


class Native::Flow::Record::Collect::Datalink::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Collect::Datalink::Mac::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Collect::Datalink::Mac


class Native::Flow::Record::Collect::Datalink::Mac::Destination : public ydk::Entity
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

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Destination


class Native::Flow::Record::Collect::Datalink::Mac::Destination::Address : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Destination::Address


class Native::Flow::Record::Collect::Datalink::Mac::Source : public ydk::Entity
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

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Source::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Source


class Native::Flow::Record::Collect::Datalink::Mac::Source::Address : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Source::Address


class Native::Flow::Record::Collect::Flow_ : public ydk::Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: empty
        ydk::YLeaf sampler; //type: empty
        ydk::YLeaf end_reason; //type: empty
        class Cts; //type: Native::Flow::Record::Collect::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Collect::Flow_::Observation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Collect::Flow_


class Native::Flow::Record::Collect::Flow_::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Collect::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Collect::Flow_::Cts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Collect::Flow_::Cts


class Native::Flow::Record::Collect::Flow_::Cts::Destination : public ydk::Entity
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

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Destination


class Native::Flow::Record::Collect::Flow_::Cts::Source : public ydk::Entity
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

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Source


class Native::Flow::Record::Collect::Flow_::Observation : public ydk::Entity
{
    public:
        Observation();
        ~Observation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf point; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Observation


class Native::Flow::Record::Collect::Interface : public ydk::Entity
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

        class Input; //type: Native::Flow::Record::Collect::Interface::Input
        class Output; //type: Native::Flow::Record::Collect::Interface::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Input> input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Output> output; // presence node
        
}; // Native::Flow::Record::Collect::Interface


class Native::Flow::Record::Collect::Interface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Input


class Native::Flow::Record::Collect::Interface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Output


class Native::Flow::Record::Collect::Ipv4 : public ydk::Entity
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

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf header_length; //type: empty
        ydk::YLeaf id; //type: empty
        ydk::YLeaf precedence; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Ipv4::Destination
        class Fragmentation; //type: Native::Flow::Record::Collect::Ipv4::Fragmentation
        class Length; //type: Native::Flow::Record::Collect::Ipv4::Length
        class Option; //type: Native::Flow::Record::Collect::Ipv4::Option
        class Section; //type: Native::Flow::Record::Collect::Ipv4::Section
        class Source; //type: Native::Flow::Record::Collect::Ipv4::Source
        class TotalLength; //type: Native::Flow::Record::Collect::Ipv4::TotalLength
        class Ttl; //type: Native::Flow::Record::Collect::Ipv4::Ttl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section> section;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::TotalLength> total_length; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Ttl> ttl; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4


class Native::Flow::Record::Collect::Ipv4::Destination : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Destination


class Native::Flow::Record::Collect::Ipv4::Destination::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Mask


class Native::Flow::Record::Collect::Ipv4::Destination::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Prefix


class Native::Flow::Record::Collect::Ipv4::Fragmentation : public ydk::Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: empty
        ydk::YLeaf offset; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Fragmentation


class Native::Flow::Record::Collect::Ipv4::Length : public ydk::Entity
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

        ydk::YLeaf header; //type: empty
        ydk::YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Collect::Ipv4::Length::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Length


class Native::Flow::Record::Collect::Ipv4::Length::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Length::Total


class Native::Flow::Record::Collect::Ipv4::Option : public ydk::Entity
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

        ydk::YLeaf map; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Option


class Native::Flow::Record::Collect::Ipv4::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Flow::Record::Collect::Ipv4::Section::Header
        class Payload; //type: Native::Flow::Record::Collect::Ipv4::Section::Payload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Payload> payload;
        
}; // Native::Flow::Record::Collect::Ipv4::Section


class Native::Flow::Record::Collect::Ipv4::Section::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Header


class Native::Flow::Record::Collect::Ipv4::Section::Payload : public ydk::Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Payload


class Native::Flow::Record::Collect::Ipv4::Source : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Source::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Source


class Native::Flow::Record::Collect::Ipv4::Source::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Source::Mask

class Native::Flow::Monitor::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf performance_monitor;

};

class Native::Flow::Monitor::Cache::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf synchronized;

};

class Native::Flow::Monitor::Record::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_rtp;
        static const ydk::Enum::YLeaf default_tcp;
        static const ydk::Enum::YLeaf netflow_original;

};

class Native::Flow::Record::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf performance_monitor;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_15_ */

