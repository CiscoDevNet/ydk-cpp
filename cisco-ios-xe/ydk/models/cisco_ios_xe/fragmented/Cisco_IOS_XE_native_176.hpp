#ifndef _CISCO_IOS_XE_NATIVE_176_
#define _CISCO_IOS_XE_NATIVE_176_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_175.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_ : public ydk::Entity
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

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf : public ydk::Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public ydk::Entity
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

        class StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public ydk::Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public ydk::Entity
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

        ydk::YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_> index_;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_ : public ydk::Entity
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

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_


class Native::SegmentRouting::Mpls::SetAttributes : public ydk::Entity
{
    public:
        SetAttributes();
        ~SetAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::SetAttributes


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily : public ydk::Entity
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

        class Ipv4; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4 : public ydk::Entity
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

        ydk::YLeaf explicit_null; //type: empty
        ydk::YLeaf sr_label_preferred; //type: empty

}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4


class Native::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf password_encryption; //type: empty
        ydk::YLeaf password_recovery; //type: boolean
        ydk::YLeaf call_home; //type: empty
        ydk::YLeaf compress_config; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf disable_ip_fast_frag; //type: empty
        ydk::YLeaf exec_callback; //type: empty
        ydk::YLeaf exec_wait; //type: empty
        ydk::YLeaf finger; //type: empty
        ydk::YLeaf hide_telnet_addresses; //type: empty
        ydk::YLeaf linenumber; //type: empty
        ydk::YLeaf log_hidden; //type: empty
        ydk::YLeaf nagle; //type: empty
        ydk::YLeaf old_slip_prompts; //type: empty
        ydk::YLeaf pt_vty_logging; //type: empty
        ydk::YLeaf sequence_numbers; //type: empty
        ydk::YLeaf slave_log; //type: empty
        ydk::YLeaf tcp_keepalives_in; //type: empty
        ydk::YLeaf tcp_keepalives_out; //type: empty
        ydk::YLeaf telnet_zeroidle; //type: empty
        ydk::YLeaf tcp_small_servers; //type: empty
        ydk::YLeaf udp_small_servers; //type: empty
        ydk::YLeaf unsupported_transceiver; //type: empty
        class PadConf; //type: Native::Service::PadConf
        class Pad; //type: Native::Service::Pad
        class Timestamps; //type: Native::Service::Timestamps
        class Alignment; //type: Native::Service::Alignment
        class Counters; //type: Native::Service::Counters
        class Heartbeat; //type: Native::Service::Heartbeat
        class Prompt; //type: Native::Service::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Alignment> alignment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Counters> counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Heartbeat> heartbeat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Pad> pad; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::PadConf> pad_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Prompt> prompt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps> timestamps; // presence node
        
}; // Native::Service


class Native::Service::Alignment : public ydk::Entity
{
    public:
        Alignment();
        ~Alignment();

        bool has_data() const override;
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
        ydk::YLeaf logging; //type: empty

}; // Native::Service::Alignment


class Native::Service::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Max; //type: Native::Service::Counters::Max

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Counters::Max> max;
        
}; // Native::Service::Counters


class Native::Service::Counters::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf age; //type: uint8

}; // Native::Service::Counters::Max


class Native::Service::Heartbeat : public ydk::Entity
{
    public:
        Heartbeat();
        ~Heartbeat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fatal_count; //type: uint8
        ydk::YLeaf interrupt_interval; //type: uint8
        ydk::YLeaf interrupt_max; //type: uint8
        ydk::YLeaf transmit_interval; //type: uint8
        ydk::YLeaf warning_timeout; //type: uint8

}; // Native::Service::Heartbeat


class Native::Service::Pad : public ydk::Entity
{
    public:
        Pad();
        ~Pad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cmns; //type: empty
        ydk::YLeaf from_xot; //type: empty
        ydk::YLeaf to_xot; //type: empty

}; // Native::Service::Pad


class Native::Service::PadConf : public ydk::Entity
{
    public:
        PadConf();
        ~PadConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pad; //type: boolean

}; // Native::Service::PadConf


class Native::Service::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf config; //type: empty

}; // Native::Service::Prompt


class Native::Service::Timestamps : public ydk::Entity
{
    public:
        Timestamps();
        ~Timestamps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Debug; //type: Native::Service::Timestamps::Debug
        class Log; //type: Native::Service::Timestamps::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug> debug;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Log> log;
        
}; // Native::Service::Timestamps


class Native::Service::Timestamps::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Debug::Datetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Debug


class Native::Service::Timestamps::Debug::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime


class Native::Service::Timestamps::Debug::Datetime::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Localtime::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Localtime::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Localtime


class Native::Service::Timestamps::Debug::Datetime::Localtime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Msec


class Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Localtime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Localtime::Year


class Native::Service::Timestamps::Debug::Datetime::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Localtime
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::Msec::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone> show_timezone; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Msec::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Msec


class Native::Service::Timestamps::Debug::Datetime::Msec::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Localtime


class Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::Msec::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Msec::Year


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec
        class Year; //type: Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year> year; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec


class Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year


class Native::Service::Timestamps::Debug::Datetime::Year : public ydk::Entity
{
    public:
        Year();
        ~Year();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Localtime; //type: Native::Service::Timestamps::Debug::Datetime::Year::Localtime
        class Msec; //type: Native::Service::Timestamps::Debug::Datetime::Year::Msec
        class ShowTimezone; //type: Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Localtime> localtime; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::Msec> msec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone> show_timezone; // presence node
        
}; // Native::Service::Timestamps::Debug::Datetime::Year


class Native::Service::Timestamps::Debug::Datetime::Year::Localtime : public ydk::Entity
{
    public:
        Localtime();
        ~Localtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Localtime


class Native::Service::Timestamps::Debug::Datetime::Year::Msec : public ydk::Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::Msec


class Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone : public ydk::Entity
{
    public:
        ShowTimezone();
        ~ShowTimezone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf msec; //type: empty

}; // Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone


class Native::Service::Timestamps::Log : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf uptime; //type: empty
        class Datetime; //type: Native::Service::Timestamps::Log::Datetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Service::Timestamps::Log::Datetime> datetime; // presence node
        
}; // Native::Service::Timestamps::Log


class Native::Service::Timestamps::Log::Datetime : public ydk::Entity
{
    public:
        Datetime();
        ~Datetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf msec; //type: empty
        ydk::YLeaf localtime; //type: empty
        ydk::YLeaf show_timezone; //type: empty
        ydk::YLeaf year; //type: empty

}; // Native::Service::Timestamps::Log::Datetime


class Native::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceFunction; //type: Native::ServiceChain::ServiceFunction
        class ServiceFunctionForwarder; //type: Native::ServiceChain::ServiceFunctionForwarder
        class ServicePath; //type: Native::ServiceChain::ServicePath

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction> > service_function;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder> service_function_forwarder;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath> > service_path;
        
}; // Native::ServiceChain


class Native::ServiceChain::ServiceFunction : public ydk::Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

        bool has_data() const override;
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
        class ConfigServiceChainSfMode; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode> config_service_chain_sf_mode;
        
}; // Native::ServiceChain::ServiceFunction


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode : public ydk::Entity
{
    public:
        ConfigServiceChainSfMode();
        ~ConfigServiceChainSfMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class Encapsulation; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation
        class Ip; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        class Gre; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre> gre; // presence node
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre : public ydk::Entity
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

        ydk::YLeaf enhanced; //type: Enhanced
        class Enhanced;

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip : public ydk::Entity
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

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip


class Native::ServiceChain::ServiceFunctionForwarder : public ydk::Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceFfName; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName
        class Local; //type: Native::ServiceChain::ServiceFunctionForwarder::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local> local; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName> > service_ff_name;
        
}; // Native::ServiceChain::ServiceFunctionForwarder


class Native::ServiceChain::ServiceFunctionForwarder::Local : public ydk::Entity
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

        ydk::YLeaf description; //type: string
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::Local::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::Local


class Native::ServiceChain::ServiceFunctionForwarder::Local::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Native::ServiceChain::ServiceFunctionForwarder::Local::Ip


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName : public ydk::Entity
{
    public:
        ServiceFfName();
        ~ServiceFfName();

        bool has_data() const override;
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
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip : public ydk::Entity
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

}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip


class Native::ServiceChain::ServicePath : public ydk::Entity
{
    public:
        ServicePath();
        ~ServicePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_path_id; //type: uint32
        class ConfigServiceChainPathMode; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode> config_service_chain_path_mode;
        
}; // Native::ServiceChain::ServicePath


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode : public ydk::Entity
{
    public:
        ConfigServiceChainPathMode();
        ~ConfigServiceChainPathMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class ServiceIndex; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex> service_index;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex : public ydk::Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Services; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services> > services;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_index_id; //type: uint8
        ydk::YLeaf service_function; //type: string
        ydk::YLeaf service_function_forwarder; //type: string
        ydk::YLeaf terminate; //type: empty

}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services


class Native::ServiceInsertion : public ydk::Entity
{
    public:
        ServiceInsertion();
        ~ServiceInsertion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acg_reload_delay; //type: uint16
        class AppnavControllerGroup; //type: Native::ServiceInsertion::AppnavControllerGroup
        class ServiceContext; //type: Native::ServiceInsertion::ServiceContext
        class ServiceNodeGroup; //type: Native::ServiceInsertion::ServiceNodeGroup
        class Swap; //type: Native::ServiceInsertion::Swap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::AppnavControllerGroup> > appnav_controller_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext> service_context;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceNodeGroup> > service_node_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::Swap> swap;
        
}; // Native::ServiceInsertion


class Native::ServiceInsertion::AppnavControllerGroup : public ydk::Entity
{
    public:
        AppnavControllerGroup();
        ~AppnavControllerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeafList appnav_controller; //type: list of  string

}; // Native::ServiceInsertion::AppnavControllerGroup


class Native::ServiceInsertion::ServiceContext : public ydk::Entity
{
    public:
        ServiceContext();
        ~ServiceContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Waas; //type: Native::ServiceInsertion::ServiceContext::Waas

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas> > waas;
        
}; // Native::ServiceInsertion::ServiceContext


class Native::ServiceInsertion::ServiceContext::Waas : public ydk::Entity
{
    public:
        Waas();
        ~Waas();

        bool has_data() const override;
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
        ydk::YLeaf appnav_controller_group; //type: string
        ydk::YLeaf service_node_group; //type: string
        ydk::YLeaf service_policy; //type: string
        ydk::YLeaf enable; //type: empty
        class Authentication; //type: Native::ServiceInsertion::ServiceContext::Waas::Authentication
        class Vrf; //type: Native::ServiceInsertion::ServiceContext::Waas::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Vrf> vrf;
        
}; // Native::ServiceInsertion::ServiceContext::Waas


class Native::ServiceInsertion::ServiceContext::Waas::Authentication : public ydk::Entity
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

        ydk::YLeaf sha1; //type: empty
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::ServiceInsertion::ServiceContext::Waas::Authentication


class Native::ServiceInsertion::ServiceContext::Waas::Vrf : public ydk::Entity
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

        ydk::YLeaf default_; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string

}; // Native::ServiceInsertion::ServiceContext::Waas::Vrf


class Native::ServiceInsertion::ServiceNodeGroup : public ydk::Entity
{
    public:
        ServiceNodeGroup();
        ~ServiceNodeGroup();

        bool has_data() const override;
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
        ydk::YLeaf node_discovery; //type: NodeDiscovery
        ydk::YLeafList service_node; //type: list of  string
        class NodeDiscovery;

}; // Native::ServiceInsertion::ServiceNodeGroup


class Native::ServiceInsertion::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf src_ip; //type: empty

}; // Native::ServiceInsertion::Swap


class Native::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MdnsSd; //type: Native::ServiceList::MdnsSd

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd> > mdns_sd;
        
}; // Native::ServiceList


class Native::ServiceList::MdnsSd : public ydk::Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_list_name; //type: string
        class Deny; //type: Native::ServiceList::MdnsSd::Deny
        class Permit; //type: Native::ServiceList::MdnsSd::Permit
        class Query; //type: Native::ServiceList::MdnsSd::Query

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny> > deny;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit> > permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Query> query;
        
}; // Native::ServiceList::MdnsSd


class Native::ServiceList::MdnsSd::Deny : public ydk::Entity
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

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Deny::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match> match;
        
}; // Native::ServiceList::MdnsSd::Deny


class Native::ServiceList::MdnsSd::Deny::Match : public ydk::Entity
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

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Deny::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Deny::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Deny::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Deny::Match


class Native::ServiceList::MdnsSd::Deny::Match::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Deny::Match::Location


class Native::ServiceList::MdnsSd::Deny::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Deny::Match::MessageType


class Native::ServiceList::MdnsSd::Permit : public ydk::Entity
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

        ydk::YLeaf deny_pack; //type: uint8
        class Match; //type: Native::ServiceList::MdnsSd::Permit::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match> match;
        
}; // Native::ServiceList::MdnsSd::Permit


class Native::ServiceList::MdnsSd::Permit::Match : public ydk::Entity
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

        ydk::YLeaf learnt_interface; //type: empty
        ydk::YLeaf service_instance; //type: string
        ydk::YLeaf service_type; //type: string
        class Location; //type: Native::ServiceList::MdnsSd::Permit::Match::Location
        class MessageType; //type: Native::ServiceList::MdnsSd::Permit::Match::MessageType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::Location> location; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceList::MdnsSd::Permit::Match::MessageType> message_type; // presence node
        
}; // Native::ServiceList::MdnsSd::Permit::Match


class Native::ServiceList::MdnsSd::Permit::Match::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf civic; //type: string

}; // Native::ServiceList::MdnsSd::Permit::Match::Location


class Native::ServiceList::MdnsSd::Permit::Match::MessageType : public ydk::Entity
{
    public:
        MessageType();
        ~MessageType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announcement; //type: empty
        ydk::YLeaf query; //type: empty
        ydk::YLeaf any; //type: empty

}; // Native::ServiceList::MdnsSd::Permit::Match::MessageType


class Native::ServiceList::MdnsSd::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_type; //type: string

}; // Native::ServiceList::MdnsSd::Query


class Native::ServiceRouting : public ydk::Entity
{
    public:
        ServiceRouting();
        ~ServiceRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capabilities_manager; //type: boolean
        ydk::YLeaf mdns_sd; //type: empty

}; // Native::ServiceRouting


class Native::ServiceTemplate : public ydk::Entity
{
    public:
        ServiceTemplate();
        ~ServiceTemplate();

        bool has_data() const override;
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
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf sgt; //type: uint16
        class InactivityTimer; //type: Native::ServiceTemplate::InactivityTimer
        class Linksec; //type: Native::ServiceTemplate::Linksec
        class Voice; //type: Native::ServiceTemplate::Voice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceTemplate::InactivityTimer> inactivity_timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceTemplate::Linksec> linksec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceTemplate::Voice> voice;
        
}; // Native::ServiceTemplate


class Native::ServiceTemplate::InactivityTimer : public ydk::Entity
{
    public:
        InactivityTimer();
        ~InactivityTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf probe; //type: empty

}; // Native::ServiceTemplate::InactivityTimer


class Native::ServiceTemplate::Linksec : public ydk::Entity
{
    public:
        Linksec();
        ~Linksec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Policy
        class Policy;

}; // Native::ServiceTemplate::Linksec


class Native::ServiceTemplate::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: empty

}; // Native::ServiceTemplate::Voice


class Native::Setup : public ydk::Entity
{
    public:
        Setup();
        ~Setup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf express; //type: boolean

}; // Native::Setup


class Native::Snmp : public ydk::Entity
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

        class Ifmib; //type: Native::Snmp::Ifmib
        class Mib; //type: Native::Snmp::Mib

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib> ifmib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib> mib;
        
}; // Native::Snmp


class Native::Snmp::Ifmib : public ydk::Entity
{
    public:
        Ifmib();
        ~Ifmib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ifindex; //type: Native::Snmp::Ifmib::Ifindex
        class Ifalias; //type: Native::Snmp::Ifmib::Ifalias

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifalias> ifalias;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifindex> ifindex;
        
}; // Native::Snmp::Ifmib


class Native::Snmp::Ifmib::Ifalias : public ydk::Entity
{
    public:
        Ifalias();
        ~Ifalias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Snmp::Ifmib::Ifalias


class Native::Snmp::Ifmib::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf persist; //type: empty

}; // Native::Snmp::Ifmib::Ifindex


class Native::Snmp::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CommunityMap; //type: Native::Snmp::Mib::CommunityMap
        class Bulkstat; //type: Native::Snmp::Mib::Bulkstat
        class Persist; //type: Native::Snmp::Mib::Persist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat> bulkstat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap> community_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::Persist> persist; // presence node
        
}; // Native::Snmp::Mib


class Native::Snmp::Mib::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ObjectList; //type: Native::Snmp::Mib::Bulkstat::ObjectList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat::ObjectList> > object_list;
        
}; // Native::Snmp::Mib::Bulkstat


class Native::Snmp::Mib::Bulkstat::ObjectList : public ydk::Entity
{
    public:
        ObjectList();
        ~ObjectList();

        bool has_data() const override;
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

}; // Native::Snmp::Mib::Bulkstat::ObjectList


class Native::Snmp::Mib::CommunityMap : public ydk::Entity
{
    public:
        CommunityMap();
        ~CommunityMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CommunityMapList; //type: Native::Snmp::Mib::CommunityMap::CommunityMapList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap::CommunityMapList> > community_map_list;
        
}; // Native::Snmp::Mib::CommunityMap


class Native::Snmp::Mib::CommunityMap::CommunityMapList : public ydk::Entity
{
    public:
        CommunityMapList();
        ~CommunityMapList();

        bool has_data() const override;
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
        ydk::YLeaf engineid; //type: string

}; // Native::Snmp::Mib::CommunityMap::CommunityMapList


class Native::Snmp::Mib::Persist : public ydk::Entity
{
    public:
        Persist();
        ~Persist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf persist_enum; //type: PersistEnum
        class PersistEnum;

}; // Native::Snmp::Mib::Persist


class Native::SnmpServer : public ydk::Entity
{
    public:
        SnmpServer();
        ~SnmpServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf contact; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf packetsize; //type: uint32
        ydk::YLeaf queue_length; //type: uint16
        ydk::YLeaf system_shutdown; //type: empty
        ydk::YLeaf tftp_server_list; //type: one of string, uint8
        class Community; //type: Native::SnmpServer::Community
        class Context; //type: Native::SnmpServer::Context
        class Enable; //type: Native::SnmpServer::Enable
        class Engineid; //type: Native::SnmpServer::Engineid
        class Group; //type: Native::SnmpServer::Group
        class Host; //type: Native::SnmpServer::Host
        class Ip; //type: Native::SnmpServer::Ip
        class Ifindex; //type: Native::SnmpServer::Ifindex
        class Manager; //type: Native::SnmpServer::Manager
        class SourceInterface; //type: Native::SnmpServer::SourceInterface
        class Trap; //type: Native::SnmpServer::Trap
        class TrapSource; //type: Native::SnmpServer::TrapSource
        class User; //type: Native::SnmpServer::User
        class View; //type: Native::SnmpServer::View

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Community> > community;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Context> > context;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Engineid> engineid;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group> > group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Host> > host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Ifindex> ifindex;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Manager> manager; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface> source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Trap> trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource> trap_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User> user;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::View> > view;
        
}; // Native::SnmpServer


class Native::SnmpServer::Community : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf view; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf access_list_name; //type: one of string, uint16

}; // Native::SnmpServer::Community


class Native::SnmpServer::Context : public ydk::Entity
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

}; // Native::SnmpServer::Context


class Native::SnmpServer::Enable : public ydk::Entity
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

        class EnableChoice; //type: Native::SnmpServer::Enable::EnableChoice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice> enable_choice;
        
}; // Native::SnmpServer::Enable


class Native::SnmpServer::Enable::EnableChoice : public ydk::Entity
{
    public:
        EnableChoice();
        ~EnableChoice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf informs; //type: empty
        class Traps; //type: Native::SnmpServer::Enable::EnableChoice::Traps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps> traps; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice


class Native::SnmpServer::Enable::EnableChoice::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf local_auth; //type: empty
        ydk::YLeaf authenticate_fail; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf c2900; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf ccme; //type: empty
        ydk::YLeaf cluster; //type: empty
        ydk::YLeaf channel; //type: empty
        ydk::YLeaf chassis; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf copy_config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu_threshold; //type: empty
        ydk::YLeaf dial; //type: empty
        ydk::YLeaf director; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf deauthenticate; //type: empty
        ydk::YLeaf disassociate; //type: empty
        ydk::YLeaf dnis; //type: empty
        ydk::YLeaf dot11_qos; //type: empty
        ydk::YLeaf ds0_busyout; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf ds1_loopback; //type: empty
        ydk::YLeaf ds3; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf ether_oam; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gatekeeper; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf icsudsu; //type: empty
        ydk::YLeaf ima; //type: empty
        ydk::YLeaf ipmobile; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf module; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf pppoe; //type: empty
        ydk::YLeaf rep; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rogue_ap; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf rtr; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srst; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf switch_over; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf vlancreate; //type: empty
        ydk::YLeaf vlandelete; //type: empty
        ydk::YLeaf vlan_mac_limit; //type: empty
        ydk::YLeaf vlan_membership; //type: empty
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf vsimaster; //type: empty
        ydk::YLeaf vtp; //type: empty
        ydk::YLeaf wlan_wep; //type: empty
        ydk::YLeaf xgcp; //type: empty
        class TrustsecSxp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp
        class Vswitch; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch
        class TrustsecServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer
        class Trustsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec
        class TrustsecInterface; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface
        class TrustsecPolicy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy
        class Ospfv3; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3
        class Ike; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike
        class Alarms; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Alarms
        class Atm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm
        class AuthFramework; //type: Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework
        class BgpConf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf
        class Bridge; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bridge
        class Bulkstat; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat
        class CallHome; //type: Native::SnmpServer::Enable::EnableChoice::Traps::CallHome
        class C6Kxbar; //type: Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar
        class Cef; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cef
        class Cpu; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cpu
        class Csg; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Csg
        class Dot1X; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X
        class Dsp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dsp
        class Energywise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Energywise
        class EntityDiag; //type: Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag
        class Envmon; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Envmon
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable
        class Ethernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet
        class Firewall; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Firewall
        class Flash; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Flash
        class FlexLinks; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks
        class FrameRelay; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay
        class Ipsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec
        class Isakmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp
        class Isdn; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isdn
        class L2Tc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc
        class L2Tun; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun
        class License; //type: Native::SnmpServer::Enable::EnableChoice::Traps::License
        class MacNotification; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification
        class MacNotification2; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2
        class Memory; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Memory
        class Mpls; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls
        class Nhrp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp
        class Ospf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf
        class Pim; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pim
        class Plogd; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Plogd
        class PortSecurity; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity
        class PowerEthernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet
        class Pw; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pw
        class Slb; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Slb
        class Snmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Snmp
        class Stackwise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise
        class Stpx; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stpx
        class Transceiver; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver
        class Udld; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Udld
        class Vrfmib; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib
        class Vstack; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vstack
        class Wireless; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Alarms> alarms; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm> atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework> auth_framework; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf> bgp_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bridge> bridge; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat> bulkstat; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar> c6kxbar; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::CallHome> call_home; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cef> cef;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cpu> cpu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Csg> csg; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dsp> dsp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag> entity_diag; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Envmon> envmon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable> errdisable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Firewall> firewall; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Flash> flash; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks> flex_links; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike> ike;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp> isakmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isdn> isdn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc> l2tc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun> l2tun;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::License> license; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification> mac_notification; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2> mac_notification2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Memory> memory; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls> mpls; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp> nhrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pim> pim; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Plogd> plogd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet> power_ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pw> pw; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Slb> slb; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise> stackwise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stpx> stpx; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver> transceiver;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec> trustsec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface> trustsec_interface; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy> trustsec_policy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer> trustsec_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp> trustsec_sxp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Udld> udld; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib> vrfmib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vstack> vstack; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch> vswitch; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless> wireless; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps


class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms : public ydk::Entity
{
    public:
        Alarms();
        ~Alarms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarm_type; //type: one of uint8, enumeration
        class AlarmType;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Alarms


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm : public ydk::Entity
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

        class Pvc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc> pvc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf fail_interval; //type: uint16
        class Extension; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension> extension;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension : public ydk::Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf down; //type: empty
        ydk::YLeaf up; //type: empty
        ydk::YLeaf mibversion; //type: Mibversion
        class Oam; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam> oam;
                class Mibversion;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Failure; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure> failure;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loopback; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf count; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework : public ydk::Entity
{
    public:
        AuthFramework();
        ~AuthFramework();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sec_violation; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework


class Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf : public ydk::Entity
{
    public:
        BgpConf();
        ~BgpConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cbgp2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf


class Native::SnmpServer::Enable::EnableChoice::Traps::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf newroot; //type: empty
        ydk::YLeaf topologychange; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bridge


class Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf collection; //type: empty
        ydk::YLeaf transfer; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat


class Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar : public ydk::Entity
{
    public:
        C6Kxbar();
        ~C6Kxbar();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf intbus_crcexcd; //type: empty
        ydk::YLeaf intbus_crcrcvrd; //type: empty
        ydk::YLeaf swbus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar


class Native::SnmpServer::Enable::EnableChoice::Traps::CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf message_send_fail; //type: empty
        ydk::YLeaf server_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::CallHome


class Native::SnmpServer::Enable::EnableChoice::Traps::Cef : public ydk::Entity
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

        ydk::YLeaf resource_failure; //type: empty
        ydk::YLeaf peer_state_change; //type: empty
        ydk::YLeaf peer_fib_state_change; //type: empty
        ydk::YLeaf inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cef


class Native::SnmpServer::Enable::EnableChoice::Traps::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cpu


class Native::SnmpServer::Enable::EnableChoice::Traps::Csg : public ydk::Entity
{
    public:
        Csg();
        ~Csg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf agent; //type: empty
        ydk::YLeaf database; //type: empty
        ydk::YLeaf quota_server; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Csg


class Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf auth_fail_vlan; //type: empty
        ydk::YLeaf guest_vlan; //type: empty
        ydk::YLeaf no_auth_fail_vlan; //type: empty
        ydk::YLeaf no_guest_vlan; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X


class Native::SnmpServer::Enable::EnableChoice::Traps::Dsp : public ydk::Entity
{
    public:
        Dsp();
        ~Dsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf card_status; //type: empty
        ydk::YLeaf oper_state; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dsp


class Native::SnmpServer::Enable::EnableChoice::Traps::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf event_occured; //type: empty
        ydk::YLeaf level_change; //type: empty
        ydk::YLeaf neighbor_added; //type: empty
        ydk::YLeaf neighbor_deleted; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Energywise


class Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag : public ydk::Entity
{
    public:
        EntityDiag();
        ~EntityDiag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf boot_up_fail; //type: empty
        ydk::YLeaf hm_test_recover; //type: empty
        ydk::YLeaf hm_thresh_reached; //type: empty
        ydk::YLeaf scheduled_test_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag


class Native::SnmpServer::Enable::EnableChoice::Traps::Envmon : public ydk::Entity
{
    public:
        Envmon();
        ~Envmon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fan; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf supply; //type: empty
        ydk::YLeaf temperature; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Envmon


class Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cfm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm
        class Evc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm> cfm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc> evc; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarm; //type: empty
        class Cc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc
        class Crosscheck; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc> cc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck> crosscheck; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc : public ydk::Entity
{
    public:
        Cc();
        ~Cc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf config; //type: empty
        ydk::YLeaf cross_connect; //type: empty
        ydk::YLeaf loop; //type: empty
        ydk::YLeaf mep_down; //type: empty
        ydk::YLeaf mep_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mep_missing; //type: empty
        ydk::YLeaf mep_unknown; //type: empty
        ydk::YLeaf service_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf create; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc


class Native::SnmpServer::Enable::EnableChoice::Traps::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf serverstatus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Firewall


class Native::SnmpServer::Enable::EnableChoice::Traps::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insertion; //type: empty
        ydk::YLeaf removal; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Flash


class Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks : public ydk::Entity
{
    public:
        FlexLinks();
        ~FlexLinks();

        bool has_data() const override;
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

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Multilink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink> multilink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_mismatch; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike : public ydk::Entity
{
    public:
        Ike();
        ~Ike();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy : public ydk::Entity
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

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel : public ydk::Entity
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

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf too_many_sas; //type: empty
        class Cryptomap; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap> cryptomap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap : public ydk::Entity
{
    public:
        Cryptomap();
        ~Cryptomap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf attach; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf detach; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel : public ydk::Entity
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

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy : public ydk::Entity
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

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel : public ydk::Entity
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

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isdn : public ydk::Entity
{
    public:
        Isdn();
        ~Isdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf call_information; //type: empty
        ydk::YLeaf chan_not_avail; //type: empty
        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf layer2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isdn


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc : public ydk::Entity
{
    public:
        L2Tc();
        ~L2Tc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sys_threshold; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun : public ydk::Entity
{
    public:
        L2Tun();
        ~L2Tun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: empty
        class Pseudowire; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire> pseudowire;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire : public ydk::Entity
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

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire


class Native::SnmpServer::Enable::EnableChoice::Traps::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deploy; //type: empty
        ydk::YLeaf error; //type: empty
        ydk::YLeaf usage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::License


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification : public ydk::Entity
{
    public:
        MacNotification();
        ~MacNotification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2 : public ydk::Entity
{
    public:
        MacNotification2();
        ~MacNotification2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2


class Native::SnmpServer::Enable::EnableChoice::Traps::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bufferpeak; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Memory


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls : public ydk::Entity
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

        ydk::YLeaf vpn; //type: empty
        class TrafficEng; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng
        class FastReroute; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute
        class Rfc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc
        class Ldp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute> fast_reroute; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp> ldp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc> rfc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng> traffic_eng; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute : public ydk::Entity
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

        ydk::YLeaf protected_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp : public ydk::Entity
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

        ydk::YLeaf pv_limit; //type: empty
        ydk::YLeaf session_down; //type: empty
        ydk::YLeaf session_up; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc : public ydk::Entity
{
    public:
        Rfc();
        ~Rfc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ldp; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc

class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::Enhanced : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf divert;

};

class Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::ServiceTemplate::Linksec::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf must_not_secure;
        static const ydk::Enum::YLeaf must_secure;
        static const ydk::Enum::YLeaf should_secure;

};

class Native::Snmp::Mib::Persist::PersistEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbqos;
        static const ydk::Enum::YLeaf circuit;
        static const ydk::Enum::YLeaf v3mibs;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_176_ */

