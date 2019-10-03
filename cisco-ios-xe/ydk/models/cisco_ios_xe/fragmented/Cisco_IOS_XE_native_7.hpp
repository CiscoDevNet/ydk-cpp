#ifndef _CISCO_IOS_XE_NATIVE_7_
#define _CISCO_IOS_XE_NATIVE_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_6.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Match::Transport::Icmp::Ipv6 : public ydk::Entity
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

        ydk::YLeaf code; //type: empty
        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Match::Transport::Icmp::Ipv6


class Native::Flow::Record::Match::Transport::Igmp : public ydk::Entity
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

        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Match::Transport::Igmp


class Native::Flow::Record::Match::Transport::Tcp : public ydk::Entity
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

        ydk::YLeaf acknowledgement_number; //type: empty
        ydk::YLeaf destination_port; //type: empty
        ydk::YLeaf header_length; //type: empty
        ydk::YLeaf maximum_segment_size; //type: empty
        ydk::YLeaf sequence_number; //type: empty
        ydk::YLeaf source_port; //type: empty
        ydk::YLeaf urgent_pointer; //type: empty
        class Flags; //type: Native::Flow::Record::Match::Transport::Tcp::Flags
        class Flow_; //type: Native::Flow::Record::Match::Transport::Tcp::Flow_
        class Option; //type: Native::Flow::Record::Match::Transport::Tcp::Option
        class WindowSize; //type: Native::Flow::Record::Match::Transport::Tcp::WindowSize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Flags> flags; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::WindowSize> window_size; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp


class Native::Flow::Record::Match::Transport::Tcp::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ack; //type: empty
        ydk::YLeaf cwr; //type: empty
        ydk::YLeaf ece; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty

}; // Native::Flow::Record::Match::Transport::Tcp::Flags


class Native::Flow::Record::Match::Transport::Tcp::Flow_ : public ydk::Entity
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

        ydk::YLeaf count; //type: empty

}; // Native::Flow::Record::Match::Transport::Tcp::Flow_


class Native::Flow::Record::Match::Transport::Tcp::Option : public ydk::Entity
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

        class Map; //type: Native::Flow::Record::Match::Transport::Tcp::Option::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Option::Map> map; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp::Option


class Native::Flow::Record::Match::Transport::Tcp::Option::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

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

}; // Native::Flow::Record::Match::Transport::Tcp::Option::Map


class Native::Flow::Record::Match::Transport::Tcp::WindowSize : public ydk::Entity
{
    public:
        WindowSize();
        ~WindowSize();

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
        ydk::YLeaf sum; //type: empty
        class Average; //type: Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average> average; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp::WindowSize


class Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average : public ydk::Entity
{
    public:
        Average();
        ~Average();

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

}; // Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average


class Native::Flow::Record::Match::Transport::Udp : public ydk::Entity
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

        ydk::YLeaf destination_port; //type: empty
        ydk::YLeaf message_length; //type: empty
        ydk::YLeaf source_port; //type: empty

}; // Native::Flow::Record::Match::Transport::Udp


class Native::Flow::Exporter : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf export_protocol; //type: ExportProtocol
        ydk::YLeaf ttl; //type: uint8
        class Destination; //type: Native::Flow::Exporter::Destination
        class Option; //type: Native::Flow::Exporter::Option
        class OutputFeatures; //type: Native::Flow::Exporter::OutputFeatures
        class Source; //type: Native::Flow::Exporter::Source
        class Template; //type: Native::Flow::Exporter::Template
        class Transport; //type: Native::Flow::Exporter::Transport
        class Default; //type: Native::Flow::Exporter::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::OutputFeatures> output_features; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Template> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default> default_;
                class ExportProtocol;

}; // Native::Flow::Exporter


class Native::Flow::Exporter::Destination : public ydk::Entity
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

        class Ipdest; //type: Native::Flow::Exporter::Destination::Ipdest
        class Local; //type: Native::Flow::Exporter::Destination::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Destination::Ipdest> ipdest;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Destination::Local> local;
        
}; // Native::Flow::Exporter::Destination


class Native::Flow::Exporter::Destination::Ipdest : public ydk::Entity
{
    public:
        Ipdest();
        ~Ipdest();

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
        ydk::YLeaf vrf; //type: string

}; // Native::Flow::Exporter::Destination::Ipdest


class Native::Flow::Exporter::Destination::Local : public ydk::Entity
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

        ydk::YLeaf wlc; //type: empty

}; // Native::Flow::Exporter::Destination::Local


class Native::Flow::Exporter::Option : public ydk::Entity
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

        class ApplicationAttributes; //type: Native::Flow::Exporter::Option::ApplicationAttributes
        class ApplicationTable; //type: Native::Flow::Exporter::Option::ApplicationTable
        class C3plClassTable; //type: Native::Flow::Exporter::Option::C3plClassTable
        class C3plPolicyTable; //type: Native::Flow::Exporter::Option::C3plPolicyTable
        class ExporterStats; //type: Native::Flow::Exporter::Option::ExporterStats
        class InterfaceTable; //type: Native::Flow::Exporter::Option::InterfaceTable
        class MetadataVersionTable; //type: Native::Flow::Exporter::Option::MetadataVersionTable
        class SamplerTable; //type: Native::Flow::Exporter::Option::SamplerTable
        class SubApplicationTable; //type: Native::Flow::Exporter::Option::SubApplicationTable
        class VrfTable; //type: Native::Flow::Exporter::Option::VrfTable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ApplicationAttributes> application_attributes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ApplicationTable> application_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::C3plClassTable> c3pl_class_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::C3plPolicyTable> c3pl_policy_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ExporterStats> exporter_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::InterfaceTable> interface_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::MetadataVersionTable> metadata_version_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::SamplerTable> sampler_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::SubApplicationTable> sub_application_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Option::VrfTable> vrf_table; // presence node
        
}; // Native::Flow::Exporter::Option


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


class Native::Flow::Exporter::Option::C3plClassTable : public ydk::Entity
{
    public:
        C3plClassTable();
        ~C3plClassTable();

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

}; // Native::Flow::Exporter::Option::C3plClassTable


class Native::Flow::Exporter::Option::C3plPolicyTable : public ydk::Entity
{
    public:
        C3plPolicyTable();
        ~C3plPolicyTable();

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

}; // Native::Flow::Exporter::Option::C3plPolicyTable


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
        class ATMSubinterface; //type: Native::Flow::Exporter::Source::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Flow::Exporter::Source::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Flow::Exporter::Source::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Flow::Exporter::Source::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Flow::Exporter::Source


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


class Native::Flow::Exporter::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Native::Flow::Exporter::Template::Data

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Template::Data> data;
        
}; // Native::Flow::Exporter::Template


class Native::Flow::Exporter::Template::Data : public ydk::Entity
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

}; // Native::Flow::Exporter::Template::Data


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


class Native::Flow::Exporter::Default : public ydk::Entity
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

        ydk::YLeaf description; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf export_protocol; //type: empty
        ydk::YLeaf transport; //type: empty
        ydk::YLeaf ttl; //type: empty
        class Option; //type: Native::Flow::Exporter::Default::Option
        class Template; //type: Native::Flow::Exporter::Default::Template

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Template> template_;
        
}; // Native::Flow::Exporter::Default


class Native::Flow::Exporter::Default::Option : public ydk::Entity
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

        class ApplicationAttributes; //type: Native::Flow::Exporter::Default::Option::ApplicationAttributes
        class C3plClassTable; //type: Native::Flow::Exporter::Default::Option::C3plClassTable
        class C3plPolicyTable; //type: Native::Flow::Exporter::Default::Option::C3plPolicyTable
        class ExporterStats; //type: Native::Flow::Exporter::Default::Option::ExporterStats
        class InterfaceTable; //type: Native::Flow::Exporter::Default::Option::InterfaceTable
        class MetadataVersionTable; //type: Native::Flow::Exporter::Default::Option::MetadataVersionTable
        class SamplerTable; //type: Native::Flow::Exporter::Default::Option::SamplerTable
        class SubApplicationTable; //type: Native::Flow::Exporter::Default::Option::SubApplicationTable
        class VrfTable; //type: Native::Flow::Exporter::Default::Option::VrfTable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::ApplicationAttributes> application_attributes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::C3plClassTable> c3pl_class_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::C3plPolicyTable> c3pl_policy_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::ExporterStats> exporter_stats; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::InterfaceTable> interface_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::MetadataVersionTable> metadata_version_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::SamplerTable> sampler_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::SubApplicationTable> sub_application_table; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Option::VrfTable> vrf_table; // presence node
        
}; // Native::Flow::Exporter::Default::Option


class Native::Flow::Exporter::Default::Option::ApplicationAttributes : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::ApplicationAttributes


class Native::Flow::Exporter::Default::Option::C3plClassTable : public ydk::Entity
{
    public:
        C3plClassTable();
        ~C3plClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Flow::Exporter::Default::Option::C3plClassTable


class Native::Flow::Exporter::Default::Option::C3plPolicyTable : public ydk::Entity
{
    public:
        C3plPolicyTable();
        ~C3plPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Flow::Exporter::Default::Option::C3plPolicyTable


class Native::Flow::Exporter::Default::Option::ExporterStats : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::ExporterStats


class Native::Flow::Exporter::Default::Option::InterfaceTable : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::InterfaceTable


class Native::Flow::Exporter::Default::Option::MetadataVersionTable : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::MetadataVersionTable


class Native::Flow::Exporter::Default::Option::SamplerTable : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::SamplerTable


class Native::Flow::Exporter::Default::Option::SubApplicationTable : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::SubApplicationTable


class Native::Flow::Exporter::Default::Option::VrfTable : public ydk::Entity
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


}; // Native::Flow::Exporter::Default::Option::VrfTable


class Native::Flow::Exporter::Default::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Native::Flow::Exporter::Default::Template::Data

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Exporter::Default::Template::Data> data;
        
}; // Native::Flow::Exporter::Default::Template


class Native::Flow::Exporter::Default::Template::Data : public ydk::Entity
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

        ydk::YLeaf timeout; //type: empty

}; // Native::Flow::Exporter::Default::Template::Data


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
        class Default; //type: Native::Flow::Monitor::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Cache> cache;
        ydk::YList exporter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::History> history;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record> record;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Statistics> statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default> default_;
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
        class Wireless; //type: Native::Flow::Monitor::Record::Wireless

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow> netflow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Wireless> wireless;
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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput> original_input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput> original_output; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix> prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix> source_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos> as_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos> bgp_nexthop_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos> destination_prefix_tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos> prefix_tos; // presence node
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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput> original_input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput> original_output; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix> prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix> source_prefix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop> bgp_nexthop; // presence node
        
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


class Native::Flow::Monitor::Record::Wireless : public ydk::Entity
{
    public:
        Wireless();
        ~Wireless();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avc; //type: Native::Flow::Monitor::Record::Wireless::Avc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Wireless::Avc> avc;
        
}; // Native::Flow::Monitor::Record::Wireless


class Native::Flow::Monitor::Record::Wireless::Avc : public ydk::Entity
{
    public:
        Avc();
        ~Avc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf basic; //type: empty
        ydk::YLeaf statistics; //type: empty
        class Ipv4; //type: Native::Flow::Monitor::Record::Wireless::Avc::Ipv4
        class Ipv6; //type: Native::Flow::Monitor::Record::Wireless::Avc::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Wireless::Avc::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Wireless::Avc::Ipv6> ipv6;
        
}; // Native::Flow::Monitor::Record::Wireless::Avc


class Native::Flow::Monitor::Record::Wireless::Avc::Ipv4 : public ydk::Entity
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

        ydk::YLeaf basic; //type: empty

}; // Native::Flow::Monitor::Record::Wireless::Avc::Ipv4


class Native::Flow::Monitor::Record::Wireless::Avc::Ipv6 : public ydk::Entity
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

        ydk::YLeaf basic; //type: empty

}; // Native::Flow::Monitor::Record::Wireless::Avc::Ipv6


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


class Native::Flow::Monitor::Default : public ydk::Entity
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

        ydk::YLeaf description; //type: empty
        ydk::YLeaf exporter; //type: empty
        ydk::YLeaf record; //type: empty
        class Cache; //type: Native::Flow::Monitor::Default::Cache
        class Statistics; //type: Native::Flow::Monitor::Default::Statistics

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default::Statistics> statistics;
        
}; // Native::Flow::Monitor::Default


class Native::Flow::Monitor::Default::Cache : public ydk::Entity
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
        class Timeout; //type: Native::Flow::Monitor::Default::Cache::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default::Cache::Timeout> timeout;
        
}; // Native::Flow::Monitor::Default::Cache


class Native::Flow::Monitor::Default::Cache::Timeout : public ydk::Entity
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
        class Event; //type: Native::Flow::Monitor::Default::Cache::Timeout::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default::Cache::Timeout::Event> event;
        
}; // Native::Flow::Monitor::Default::Cache::Timeout


class Native::Flow::Monitor::Default::Cache::Timeout::Event : public ydk::Entity
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

}; // Native::Flow::Monitor::Default::Cache::Timeout::Event


class Native::Flow::Monitor::Default::Statistics : public ydk::Entity
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

        class Packet; //type: Native::Flow::Monitor::Default::Statistics::Packet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Monitor::Default::Statistics::Packet> packet;
        
}; // Native::Flow::Monitor::Default::Statistics


class Native::Flow::Monitor::Default::Statistics::Packet : public ydk::Entity
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

}; // Native::Flow::Monitor::Default::Statistics::Packet


class Native::Ip : public ydk::Entity
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

        ydk::YLeaf subnet_zero; //type: boolean
        ydk::YLeaf host_routing; //type: empty
        ydk::YLeaf classless; //type: empty
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf default_gateway; //type: string
        ydk::YLeaf source_route; //type: boolean
        class Ospf; //type: Native::Ip::Ospf
        class Admission; //type: Native::Ip::Admission
        class Arp; //type: Native::Ip::Arp
        class DomainList; //type: Native::Ip::DomainList
        class Finger; //type: Native::Ip::Finger
        class Rcmd; //type: Native::Ip::Rcmd
        class BgpCommunity; //type: Native::Ip::BgpCommunity
        class Vrf; //type: Native::Ip::Vrf
        class AsPath; //type: Native::Ip::AsPath
        class Local; //type: Native::Ip::Local
        class Cef; //type: Native::Ip::Cef
        class Domain; //type: Native::Ip::Domain
        class DomainLookupConf; //type: Native::Ip::DomainLookupConf
        class DomainLookup; //type: Native::Ip::DomainLookup
        class Dns; //type: Native::Ip::Dns
        class Dhcp; //type: Native::Ip::Dhcp
        class ForwardProtocol; //type: Native::Ip::ForwardProtocol
        class GratuitousArpsConf; //type: Native::Ip::GratuitousArpsConf
        class Ftp; //type: Native::Ip::Ftp
        class Telnet; //type: Native::Ip::Telnet
        class Host; //type: Native::Ip::Host
        class Multicast; //type: Native::Ip::Multicast
        class NameServer; //type: Native::Ip::NameServer
        class Pim; //type: Native::Ip::Pim
        class PrefixList; //type: Native::Ip::PrefixList
        class Route; //type: Native::Ip::Route
        class Routing; //type: Native::Ip::Routing
        class ExplicitPath; //type: Native::Ip::ExplicitPath
        class Scp; //type: Native::Ip::Scp
        class Spd; //type: Native::Ip::Spd
        class Bootp; //type: Native::Ip::Bootp
        class Ssh; //type: Native::Ip::Ssh
        class Tcp; //type: Native::Ip::Tcp
        class Tftp; //type: Native::Ip::Tftp
        class AccessList; //type: Native::Ip::AccessList
        class Device; //type: Native::Ip::Device
        class Msdp; //type: Native::Ip::Msdp
        class McrConf; //type: Native::Ip::McrConf
        class MulticastRouting; //type: Native::Ip::MulticastRouting
        class Mroute; //type: Native::Ip::Mroute
        class Igmp; //type: Native::Ip::Igmp
        class CommunityList; //type: Native::Ip::CommunityList
        class ExtcommunityList; //type: Native::Ip::ExtcommunityList
        class Icmp; //type: Native::Ip::Icmp
        class Nat; //type: Native::Ip::Nat
        class Nbar; //type: Native::Ip::Nbar
        class Sla; //type: Native::Ip::Sla
        class Rsvp; //type: Native::Ip::Rsvp
        class Wccp; //type: Native::Ip::Wccp
        class Radius; //type: Native::Ip::Radius
        class Tacacs; //type: Native::Ip::Tacacs
        class Http; //type: Native::Ip::Http

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission> admission;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainList> domain_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Finger> finger; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rcmd> rcmd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::BgpCommunity> bgp_community;
        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef> cef; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookupConf> domain_lookup_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup> domain_lookup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ForwardProtocol> forward_protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::GratuitousArpsConf> gratuitous_arps_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp> ftp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::NameServer> name_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList> prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Routing> routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath> explicit_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Scp> scp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Spd> spd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Bootp> bootp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh> ssh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp> tftp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device> device;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp> msdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::McrConf> mcr_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Mroute> mroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList> community_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList> extcommunity_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla> sla;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp> wccp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http> http;
        
}; // Native::Ip


class Native::Ip::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name_lookup; //type: empty

}; // Native::Ip::Ospf


class Native::Ip::Admission : public ydk::Entity
{
    public:
        Admission();
        ~Admission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class WatchList; //type: Native::Ip::Admission::WatchList
        class Name; //type: Native::Ip::Admission::Name

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::WatchList> watch_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name> name;
        
}; // Native::Ip::Admission


class Native::Ip::Admission::WatchList : public ydk::Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expiry_time; //type: uint16

}; // Native::Ip::Admission::WatchList


class Native::Ip::Admission::Name : public ydk::Entity
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

        class Webauth; //type: Native::Ip::Admission::Name::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth> webauth;
        
}; // Native::Ip::Admission::Name


class Native::Ip::Admission::Name::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Proxy; //type: Native::Ip::Admission::Name::Webauth::Proxy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth::Proxy> proxy;
        
}; // Native::Ip::Admission::Name::Webauth


class Native::Ip::Admission::Name::Webauth::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf http; //type: empty

}; // Native::Ip::Admission::Name::Webauth::Proxy


class Native::Ip::Arp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Incomplete; //type: Native::Ip::Arp::Incomplete
        class Inspection; //type: Native::Ip::Arp::Inspection
        class Proxy; //type: Native::Ip::Arp::Proxy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Incomplete> incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection> inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Proxy> proxy;
        
}; // Native::Ip::Arp


class Native::Ip::Arp::Incomplete : public ydk::Entity
{
    public:
        Incomplete();
        ~Incomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint32

}; // Native::Ip::Arp::Incomplete


class Native::Ip::Arp::Inspection : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        class Filter; //type: Native::Ip::Arp::Inspection::Filter
        class Validate; //type: Native::Ip::Arp::Inspection::Validate
        class LogBuffer; //type: Native::Ip::Arp::Inspection::LogBuffer

        ydk::YList filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate> validate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer> log_buffer;
        
}; // Native::Ip::Arp::Inspection


class Native::Ip::Arp::Inspection::Filter : public ydk::Entity
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

        ydk::YLeaf arpacl; //type: string
        class Vlan; //type: Native::Ip::Arp::Inspection::Filter::Vlan

        ydk::YList vlan;
        
}; // Native::Ip::Arp::Inspection::Filter


class Native::Ip::Arp::Inspection::Filter::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan_range; //type: string
        ydk::YLeaf static_; //type: empty

}; // Native::Ip::Arp::Inspection::Filter::Vlan


class Native::Ip::Arp::Inspection::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf src_mac; //type: empty
        ydk::YLeaf dst_mac; //type: empty
        ydk::YLeaf ip; //type: empty
        class Allow; //type: Native::Ip::Arp::Inspection::Validate::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate::Allow> allow;
        
}; // Native::Ip::Arp::Inspection::Validate


class Native::Ip::Arp::Inspection::Validate::Allow : public ydk::Entity
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

        ydk::YLeaf zeros; //type: empty

}; // Native::Ip::Arp::Inspection::Validate::Allow


class Native::Ip::Arp::Inspection::LogBuffer : public ydk::Entity
{
    public:
        LogBuffer();
        ~LogBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint16
        class Logs; //type: Native::Ip::Arp::Inspection::LogBuffer::Logs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer::Logs> logs;
        
}; // Native::Ip::Arp::Inspection::LogBuffer


class Native::Ip::Arp::Inspection::LogBuffer::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint16
        ydk::YLeaf interval; //type: uint32

}; // Native::Ip::Arp::Inspection::LogBuffer::Logs


class Native::Ip::Arp::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
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

}; // Native::Ip::Arp::Proxy


class Native::Ip::DomainList : public ydk::Entity
{
    public:
        DomainList();
        ~DomainList();

        bool has_data() const override;
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
        class Vrf; //type: Native::Ip::DomainList::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainList::Vrf> vrf;
        
}; // Native::Ip::DomainList


class Native::Ip::DomainList::Vrf : public ydk::Entity
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

}; // Native::Ip::DomainList::Vrf


class Native::Ip::Finger : public ydk::Entity
{
    public:
        Finger();
        ~Finger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Ip::Finger


class Native::Ip::Rcmd : public ydk::Entity
{
    public:
        Rcmd();
        ~Rcmd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rcp_enable; //type: empty
        ydk::YLeaf rsh_enable; //type: empty

}; // Native::Ip::Rcmd


class Native::Ip::BgpCommunity : public ydk::Entity
{
    public:
        BgpCommunity();
        ~BgpCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf new_format; //type: empty

}; // Native::Ip::BgpCommunity


class Native::Ip::Vrf : public ydk::Entity
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
        ydk::YLeaf context; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf rd; //type: string
        class Bgp; //type: Native::Ip::Vrf::Bgp
        class Export; //type: Native::Ip::Vrf::Export
        class Import; //type: Native::Ip::Vrf::Import
        class Maximum; //type: Native::Ip::Vrf::Maximum
        class Mdt; //type: Native::Ip::Vrf::Mdt
        class RouteTarget; //type: Native::Ip::Vrf::RouteTarget
        class Vpn; //type: Native::Ip::Vrf::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Maximum> maximum; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Mdt> mdt; // presence node
        ydk::YList route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Vpn> vpn;
        
}; // Native::Ip::Vrf


class Native::Ip::Vrf::Bgp : public ydk::Entity
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

        class NextHop; //type: Native::Ip::Vrf::Bgp::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Bgp::NextHop> next_hop;
        
}; // Native::Ip::Vrf::Bgp


class Native::Ip::Vrf::Bgp::NextHop : public ydk::Entity
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

        ydk::YLeaf loopback; //type: uint32

}; // Native::Ip::Vrf::Bgp::NextHop


class Native::Ip::Vrf::Export : public ydk::Entity
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

        ydk::YLeaf map; //type: string
        class Ipv4; //type: Native::Ip::Vrf::Export::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Export::Ipv4> ipv4;
        
}; // Native::Ip::Vrf::Export


class Native::Ip::Vrf::Export::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_type; //type: Ipv4Type
        ydk::YLeaf upper_limit; //type: uint32
        ydk::YLeaf map; //type: string
        ydk::YLeaf map_only; //type: string
        class Ipv4Type;

}; // Native::Ip::Vrf::Export::Ipv4


class Native::Ip::Vrf::Import : public ydk::Entity
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

        ydk::YLeaf map; //type: string
        class Ipv4; //type: Native::Ip::Vrf::Import::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Import::Ipv4> ipv4;
        
}; // Native::Ip::Vrf::Import


class Native::Ip::Vrf::Import::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_type; //type: Ipv4Type
        ydk::YLeaf upper_limit; //type: uint32
        ydk::YLeaf map; //type: string
        class Ipv4Type;

}; // Native::Ip::Vrf::Import::Ipv4


class Native::Ip::Vrf::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routes; //type: uint32
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf reinstall; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Ip::Vrf::Maximum


class Native::Ip::Vrf::Mdt : public ydk::Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: string
        ydk::YLeaf log_reuse; //type: empty
        class Data; //type: Native::Ip::Vrf::Mdt::Data

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf::Mdt::Data> data;
        
}; // Native::Ip::Vrf::Mdt


class Native::Ip::Vrf::Mdt::Data : public ydk::Entity
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

        ydk::YLeaf mulicast_address; //type: string
        ydk::YLeaf wildcard_bits; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf threshold_list; //type: one of uint16, string
        ydk::YLeaf list; //type: one of uint16, string

}; // Native::Ip::Vrf::Mdt::Data


class Native::Ip::Vrf::RouteTarget : public ydk::Entity
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

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf target; //type: string
        class Direction;

}; // Native::Ip::Vrf::RouteTarget


class Native::Ip::Vrf::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

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

}; // Native::Ip::Vrf::Vpn


class Native::Ip::AsPath : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AccessList; //type: Native::Ip::AsPath::AccessList

        ydk::YList access_list;
        
}; // Native::Ip::AsPath


class Native::Ip::AsPath::AccessList : public ydk::Entity
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

        ydk::YLeaf name; //type: uint16
        class ExpandedGrouping; //type: Native::Ip::AsPath::AccessList::ExpandedGrouping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList::ExpandedGrouping> expanded_grouping;
        
}; // Native::Ip::AsPath::AccessList


class Native::Ip::AsPath::AccessList::ExpandedGrouping : public ydk::Entity
{
    public:
        ExpandedGrouping();
        ~ExpandedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedGrouping; //type: Native::Ip::AsPath::AccessList::ExpandedGrouping::ExtendedGrouping

        ydk::YList extended_grouping;
        
}; // Native::Ip::AsPath::AccessList::ExpandedGrouping


class Native::Ip::AsPath::AccessList::ExpandedGrouping::ExtendedGrouping : public ydk::Entity
{
    public:
        ExtendedGrouping();
        ~ExtendedGrouping();

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
        ydk::YLeaf string; //type: string
        class Action;

}; // Native::Ip::AsPath::AccessList::ExpandedGrouping::ExtendedGrouping


class Native::Ip::Local : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Pool; //type: Native::Ip::Local::Pool

        ydk::YList pool;
        
}; // Native::Ip::Local


class Native::Ip::Local::Pool : public ydk::Entity
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

        ydk::YLeaf id; //type: one of string, enumeration
        ydk::YLeaf start; //type: string
        ydk::YLeaf last; //type: string
        ydk::YLeaf group; //type: string
        class Id;

}; // Native::Ip::Local::Pool


class Native::Ip::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf distributed; //type: empty
        class Accounting; //type: Native::Ip::Cef::Accounting
        class Optimize; //type: Native::Ip::Cef::Optimize
        class TrafficStatistics; //type: Native::Ip::Cef::TrafficStatistics
        class LoadSharing; //type: Native::Ip::Cef::LoadSharing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::TrafficStatistics> traffic_statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing> load_sharing;
        
}; // Native::Ip::Cef


class Native::Ip::Cef::Accounting : public ydk::Entity
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

        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf non_recursive; //type: empty
        ydk::YLeaf prefix_length; //type: empty
        ydk::YLeaf load_balance_hash; //type: empty

}; // Native::Ip::Cef::Accounting


class Native::Ip::Cef::Optimize : public ydk::Entity
{
    public:
        Optimize();
        ~Optimize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Neighbor; //type: Native::Ip::Cef::Optimize::Neighbor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Optimize::Neighbor> neighbor;
        
}; // Native::Ip::Cef::Optimize


class Native::Ip::Cef::Optimize::Neighbor : public ydk::Entity
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

        ydk::YLeaf resolution; //type: empty

}; // Native::Ip::Cef::Optimize::Neighbor


class Native::Ip::Cef::TrafficStatistics : public ydk::Entity
{
    public:
        TrafficStatistics();
        ~TrafficStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf update_rate; //type: uint16

}; // Native::Ip::Cef::TrafficStatistics


class Native::Ip::Cef::LoadSharing : public ydk::Entity
{
    public:
        LoadSharing();
        ~LoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Algorithm; //type: Native::Ip::Cef::LoadSharing::Algorithm
        class KeyControl; //type: Native::Ip::Cef::LoadSharing::KeyControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::KeyControl> key_control;
        
}; // Native::Ip::Cef::LoadSharing


class Native::Ip::Cef::LoadSharing::Algorithm : public ydk::Entity
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

        class Universal; //type: Native::Ip::Cef::LoadSharing::Algorithm::Universal
        class Tunnel; //type: Native::Ip::Cef::LoadSharing::Algorithm::Tunnel
        class Original; //type: Native::Ip::Cef::LoadSharing::Algorithm::Original
        class IncludePorts; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Universal> universal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Original> original;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts> include_ports; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm


class Native::Ip::Cef::LoadSharing::Algorithm::Universal : public ydk::Entity
{
    public:
        Universal();
        ~Universal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf universal; //type: empty
        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::Universal


class Native::Ip::Cef::LoadSharing::Algorithm::Tunnel : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: empty
        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::Tunnel


class Native::Ip::Cef::LoadSharing::Algorithm::Original : public ydk::Entity
{
    public:
        Original();
        ~Original();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf original; //type: empty

}; // Native::Ip::Cef::LoadSharing::Algorithm::Original


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts : public ydk::Entity
{
    public:
        IncludePorts();
        ~IncludePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination
        class Source; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination> destination; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source> source; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination : public ydk::Entity
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

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination


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

        ydk::YLeafList domain_name; //type: list of  string
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

class Native::Flow::Exporter::ExportProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipfix;
        static const ydk::Enum::YLeaf netflow_v5;
        static const ydk::Enum::YLeaf netflow_v9;

        static int get_enum_value(const std::string & name) {
            if (name == "ipfix") return 0;
            if (name == "netflow-v5") return 1;
            if (name == "netflow-v9") return 2;
            return -1;
        }
};

class Native::Flow::Monitor::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf performance_monitor;

        static int get_enum_value(const std::string & name) {
            if (name == "performance-monitor") return 0;
            return -1;
        }
};

class Native::Flow::Monitor::Cache::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf synchronized;

        static int get_enum_value(const std::string & name) {
            if (name == "immediate") return 0;
            if (name == "normal") return 1;
            if (name == "permanent") return 2;
            if (name == "synchronized") return 3;
            return -1;
        }
};

class Native::Flow::Monitor::Record::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_rtp;
        static const ydk::Enum::YLeaf default_tcp;
        static const ydk::Enum::YLeaf netflow_original;

        static int get_enum_value(const std::string & name) {
            if (name == "default-rtp") return 0;
            if (name == "default-tcp") return 1;
            if (name == "netflow-original") return 2;
            return -1;
        }
};

class Native::Ip::Vrf::Export::Ipv4::Ipv4Type : public ydk::Enum
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

class Native::Ip::Vrf::Import::Ipv4::Ipv4Type : public ydk::Enum
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

class Native::Ip::Vrf::RouteTarget::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf import;

        static int get_enum_value(const std::string & name) {
            if (name == "both") return 0;
            if (name == "export") return 1;
            if (name == "import") return 2;
            return -1;
        }
};

class Native::Ip::AsPath::AccessList::ExpandedGrouping::ExtendedGrouping::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Native::Ip::Local::Pool::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_7_ */

