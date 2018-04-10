#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Nat::Translation : public ydk::Entity
{
    public:
        Translation();
        ~Translation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DnsTimeout; //type: Native::Ip::Nat::Translation::DnsTimeout
        class FinrstTimeout; //type: Native::Ip::Nat::Translation::FinrstTimeout
        class IcmpTimeout; //type: Native::Ip::Nat::Translation::IcmpTimeout
        class RoutemapEntryTimeout; //type: Native::Ip::Nat::Translation::RoutemapEntryTimeout
        class SynTimeout; //type: Native::Ip::Nat::Translation::SynTimeout
        class TcpTimeout; //type: Native::Ip::Nat::Translation::TcpTimeout
        class Timeout; //type: Native::Ip::Nat::Translation::Timeout
        class UdpTimeout; //type: Native::Ip::Nat::Translation::UdpTimeout
        class PortTimeout; //type: Native::Ip::Nat::Translation::PortTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::DnsTimeout> dns_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::FinrstTimeout> finrst_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::IcmpTimeout> icmp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::RoutemapEntryTimeout> routemap_entry_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::SynTimeout> syn_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::TcpTimeout> tcp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::UdpTimeout> udp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout> port_timeout;
        
}; // Native::Ip::Nat::Translation


class Native::Ip::Nat::Translation::DnsTimeout : public ydk::Entity
{
    public:
        DnsTimeout();
        ~DnsTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::DnsTimeout


class Native::Ip::Nat::Translation::FinrstTimeout : public ydk::Entity
{
    public:
        FinrstTimeout();
        ~FinrstTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::FinrstTimeout


class Native::Ip::Nat::Translation::IcmpTimeout : public ydk::Entity
{
    public:
        IcmpTimeout();
        ~IcmpTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::IcmpTimeout


class Native::Ip::Nat::Translation::RoutemapEntryTimeout : public ydk::Entity
{
    public:
        RoutemapEntryTimeout();
        ~RoutemapEntryTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::RoutemapEntryTimeout


class Native::Ip::Nat::Translation::SynTimeout : public ydk::Entity
{
    public:
        SynTimeout();
        ~SynTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::SynTimeout


class Native::Ip::Nat::Translation::TcpTimeout : public ydk::Entity
{
    public:
        TcpTimeout();
        ~TcpTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::TcpTimeout


class Native::Ip::Nat::Translation::Timeout : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::Timeout


class Native::Ip::Nat::Translation::UdpTimeout : public ydk::Entity
{
    public:
        UdpTimeout();
        ~UdpTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::UdpTimeout


class Native::Ip::Nat::Translation::PortTimeout : public ydk::Entity
{
    public:
        PortTimeout();
        ~PortTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Tcp; //type: Native::Ip::Nat::Translation::PortTimeout::Tcp
        class Udp; //type: Native::Ip::Nat::Translation::PortTimeout::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Udp> udp;
        
}; // Native::Ip::Nat::Translation::PortTimeout


class Native::Ip::Nat::Translation::PortTimeout::Tcp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Protocol; //type: Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol> protocol;
        
}; // Native::Ip::Nat::Translation::PortTimeout::Tcp


class Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol : public ydk::Entity
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

        ydk::YLeaf port_numer; //type: uint16
        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol


class Native::Ip::Nat::Translation::PortTimeout::Udp : public ydk::Entity
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

        class Protocol; //type: Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol> protocol;
        
}; // Native::Ip::Nat::Translation::PortTimeout::Udp


class Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol : public ydk::Entity
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

        ydk::YLeaf port_numer; //type: uint16
        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol


class Native::Ip::Nbar : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf http_services; //type: empty
        class Attribute; //type: Native::Ip::Nbar::Attribute
        class AttributeMap; //type: Native::Ip::Nbar::AttributeMap
        class AttributeSet; //type: Native::Ip::Nbar::AttributeSet
        class Classification; //type: Native::Ip::Nbar::Classification
        class Custom; //type: Native::Ip::Nbar::Custom
        class ProtocolPack; //type: Native::Ip::Nbar::ProtocolPack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute> attribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap> > attribute_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeSet> > attribute_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification> classification;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom> > custom;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack> protocol_pack;
        
}; // Native::Ip::Nbar


class Native::Ip::Nbar::Attribute : public ydk::Entity
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

        class ApplicationGroup; //type: Native::Ip::Nbar::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Attribute::ApplicationSet
        class Category; //type: Native::Ip::Nbar::Attribute::Category
        class SubCategory; //type: Native::Ip::Nbar::Attribute::SubCategory

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet> application_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category> category;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory> sub_category;
        
}; // Native::Ip::Nbar::Attribute


class Native::Ip::Nbar::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationGroup::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationGroup


class Native::Ip::Nbar::Attribute::ApplicationGroup::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationGroup::Custom


class Native::Ip::Nbar::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationSet::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationSet


class Native::Ip::Nbar::Attribute::ApplicationSet::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationSet::Custom


class Native::Ip::Nbar::Attribute::Category : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::Category::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::Category


class Native::Ip::Nbar::Attribute::Category::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::Category::Custom


class Native::Ip::Nbar::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::SubCategory::Custom

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::SubCategory


class Native::Ip::Nbar::Attribute::SubCategory::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::SubCategory::Custom


class Native::Ip::Nbar::AttributeMap : public ydk::Entity
{
    public:
        AttributeMap();
        ~AttributeMap();

        bool has_data() const override;
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
        class Attribute; //type: Native::Ip::Nbar::AttributeMap::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap::Attribute> attribute;
        
}; // Native::Ip::Nbar::AttributeMap


class Native::Ip::Nbar::AttributeMap::Attribute : public ydk::Entity
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

        ydk::YLeaf application_group; //type: string
        ydk::YLeaf application_set; //type: string
        ydk::YLeaf business_relevance; //type: string
        ydk::YLeaf category; //type: string
        ydk::YLeaf encrypted; //type: string
        ydk::YLeaf sub_category; //type: string
        ydk::YLeaf traffic_class; //type: string
        ydk::YLeaf tunnel; //type: string

}; // Native::Ip::Nbar::AttributeMap::Attribute


class Native::Ip::Nbar::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf profile_name; //type: string

}; // Native::Ip::Nbar::AttributeSet


class Native::Ip::Nbar::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoLearn; //type: Native::Ip::Nbar::Classification::AutoLearn
        class Dns; //type: Native::Ip::Nbar::Classification::Dns
        class Granularity; //type: Native::Ip::Nbar::Classification::Granularity
        class TunneledTraffic; //type: Native::Ip::Nbar::Classification::TunneledTraffic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn> auto_learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity> granularity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::TunneledTraffic> tunneled_traffic;
        
}; // Native::Ip::Nbar::Classification


class Native::Ip::Nbar::Classification::AutoLearn : public ydk::Entity
{
    public:
        AutoLearn();
        ~AutoLearn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf top_asymmetric_socket; //type: empty
        class TopHosts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopHosts
        class TopPorts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopPorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopHosts> top_hosts; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopPorts> top_ports; // presence node
        
}; // Native::Ip::Nbar::Classification::AutoLearn


class Native::Ip::Nbar::Classification::AutoLearn::TopHosts : public ydk::Entity
{
    public:
        TopHosts();
        ~TopHosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopHosts


class Native::Ip::Nbar::Classification::AutoLearn::TopPorts : public ydk::Entity
{
    public:
        TopPorts();
        ~TopPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopPorts


class Native::Ip::Nbar::Classification::Dns : public ydk::Entity
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

        ydk::YLeaf classify_by_domain; //type: empty
        class Learning; //type: Native::Ip::Nbar::Classification::Dns::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns::Learning> learning; // presence node
        
}; // Native::Ip::Nbar::Classification::Dns


class Native::Ip::Nbar::Classification::Dns::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf guard; //type: empty

}; // Native::Ip::Nbar::Classification::Dns::Learning


class Native::Ip::Nbar::Classification::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf coarse_grain; //type: empty
        class FineGrain; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain> fine_grain; // presence node
        
}; // Native::Ip::Nbar::Classification::Granularity


class Native::Ip::Nbar::Classification::Granularity::FineGrain : public ydk::Entity
{
    public:
        FineGrain();
        ~FineGrain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Attribute; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute
        class Protocol; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol> protocol;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute : public ydk::Entity
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

        class ApplicationGroup; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance
        class Category; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category
        class Encrypted; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted
        class SubCategory; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory
        class TrafficClass; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass
        class Tunnel; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup> > application_group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet> > application_set;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance> > business_relevance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category> > category;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted> > encrypted;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory> > sub_category;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass> > traffic_class;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel> > tunnel;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol : public ydk::Entity
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

        class ProtocolsList; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList> > protocols_list;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList


class Native::Ip::Nbar::Classification::TunneledTraffic : public ydk::Entity
{
    public:
        TunneledTraffic();
        ~TunneledTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf capwap; //type: empty
        ydk::YLeaf ipv6inip; //type: empty
        ydk::YLeaf teredo; //type: empty

}; // Native::Ip::Nbar::Classification::TunneledTraffic


class Native::Ip::Nbar::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
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
        class Composite; //type: Native::Ip::Nbar::Custom::Composite
        class Dns; //type: Native::Ip::Nbar::Custom::Dns
        class Http; //type: Native::Ip::Nbar::Custom::Http
        class Ssl; //type: Native::Ip::Nbar::Custom::Ssl
        class Transport; //type: Native::Ip::Nbar::Custom::Transport
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite> composite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_> ip;
        
}; // Native::Ip::Nbar::Custom


class Native::Ip::Nbar::Custom::Composite : public ydk::Entity
{
    public:
        Composite();
        ~Composite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerName; //type: Native::Ip::Nbar::Custom::Composite::ServerName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite::ServerName> > server_name;
        
}; // Native::Ip::Nbar::Custom::Composite


class Native::Ip::Nbar::Custom::Composite::ServerName : public ydk::Entity
{
    public:
        ServerName();
        ~ServerName();

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
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Composite::ServerName


class Native::Ip::Nbar::Custom::Dns : public ydk::Entity
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

        class DomainName; //type: Native::Ip::Nbar::Custom::Dns::DomainName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns::DomainName> > domain_name;
        
}; // Native::Ip::Nbar::Custom::Dns


class Native::Ip::Nbar::Custom::Dns::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Dns::DomainName


class Native::Ip::Nbar::Custom::Http : public ydk::Entity
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

        ydk::YLeaf cookie; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf method; //type: string
        ydk::YLeaf referer; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf user_agent; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf via; //type: string
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Http


class Native::Ip::Nbar::Custom::Ssl : public ydk::Entity
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

        class UniqueName; //type: Native::Ip::Nbar::Custom::Ssl::UniqueName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl::UniqueName> > unique_name;
        
}; // Native::Ip::Nbar::Custom::Ssl


class Native::Ip::Nbar::Custom::Ssl::UniqueName : public ydk::Entity
{
    public:
        UniqueName();
        ~UniqueName();

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
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Ssl::UniqueName


class Native::Ip::Nbar::Custom::Transport : public ydk::Entity
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

        class Tcp; //type: Native::Ip::Nbar::Custom::Transport::Tcp
        class Udp; //type: Native::Ip::Nbar::Custom::Transport::Udp
        class UdpTcp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp> tcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp> udp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp> udp_tcp; // presence node
        
}; // Native::Ip::Nbar::Custom::Transport


class Native::Ip::Nbar::Custom::Transport::Tcp : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp


class Native::Ip::Nbar::Custom::Transport::Tcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Dscp


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Direction


class Native::Ip::Nbar::Custom::Transport::Tcp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range


class Native::Ip::Nbar::Custom::Transport::Udp : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Udp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Udp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp


class Native::Ip::Nbar::Custom::Transport::Udp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Dscp


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Direction


class Native::Ip::Nbar::Custom::Transport::Udp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Port


class Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Udp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::Range


class Native::Ip::Nbar::Custom::Transport::UdpTcp : public ydk::Entity
{
    public:
        UdpTcp();
        ~UdpTcp();

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
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range


class Native::Ip::Nbar::Custom::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Any; //type: Native::Ip::Nbar::Custom::Ip_::Any

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any> any; // presence node
        
}; // Native::Ip::Nbar::Custom::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

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
        class Dscp; //type: Native::Ip::Nbar::Custom::Ip_::Any::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Ip_::Any::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port> port;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any


class Native::Ip::Nbar::Custom::Ip_::Any::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Dscp


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address> > address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Direction


class Native::Ip::Nbar::Custom::Ip_::Any::Port : public ydk::Entity
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

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers> > port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Port


class Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers


class Native::Ip::Nbar::Custom::Ip_::Any::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::Range


class Native::Ip::Nbar::ProtocolPack : public ydk::Entity
{
    public:
        ProtocolPack();
        ~ProtocolPack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Filepath; //type: Native::Ip::Nbar::ProtocolPack::Filepath

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack::Filepath> > filepath;
        
}; // Native::Ip::Nbar::ProtocolPack


class Native::Ip::Nbar::ProtocolPack::Filepath : public ydk::Entity
{
    public:
        Filepath();
        ~Filepath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filepath; //type: string
        ydk::YLeaf force; //type: empty

}; // Native::Ip::Nbar::ProtocolPack::Filepath


class Native::Ip::Rsvp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Authentication; //type: Native::Ip::Rsvp::Authentication
        class Signalling; //type: Native::Ip::Rsvp::Signalling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling> signalling;
        
}; // Native::Ip::Rsvp


class Native::Ip::Rsvp::Authentication : public ydk::Entity
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

        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Neighbor; //type: Native::Ip::Rsvp::Authentication::Neighbor
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication


class Native::Ip::Rsvp::Authentication::Neighbor : public ydk::Entity
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

        class AccessList; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList
        class Address; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address> address;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList : public ydk::Entity
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

        class Number; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number
        class Name; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number> > number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name> > name;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number : public ydk::Entity
{
    public:
        Number();
        ~Number();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acl_number; //type: uint8
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4> > ipv4;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::Address


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime : public ydk::Entity
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

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime


class Native::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Lifetime


class Native::Ip::Rsvp::Signalling : public ydk::Entity
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

        ydk::YLeaf initial_retransmit_delay; //type: uint16
        class FastLocalRepair; //type: Native::Ip::Rsvp::Signalling::FastLocalRepair
        class Hello; //type: Native::Ip::Rsvp::Signalling::Hello
        class Patherr; //type: Native::Ip::Rsvp::Signalling::Patherr
        class RateLimit; //type: Native::Ip::Rsvp::Signalling::RateLimit
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::FastLocalRepair> fast_local_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello> hello; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr> patherr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::RateLimit> rate_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh> refresh;
        
}; // Native::Ip::Rsvp::Signalling


class Native::Ip::Rsvp::Signalling::FastLocalRepair : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf notifications; //type: uint16
        ydk::YLeaf rate; //type: uint16

}; // Native::Ip::Rsvp::Signalling::FastLocalRepair


class Native::Ip::Rsvp::Signalling::Hello : public ydk::Entity
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

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf statistics; //type: empty
        class GracefulRestart; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart> graceful_restart;
        
}; // Native::Ip::Rsvp::Signalling::Hello


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf dscp; //type: uint8
        class Mode; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh
        class Send; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh> refresh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send> send;
        
}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode : public ydk::Entity
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

        ydk::YLeaf full; //type: empty
        ydk::YLeaf help_neighbor; //type: empty

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf misses; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send : public ydk::Entity
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

        ydk::YLeaf recovery_time; //type: uint32

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send


class Native::Ip::Rsvp::Signalling::Patherr : public ydk::Entity
{
    public:
        Patherr();
        ~Patherr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StateRemoval; //type: Native::Ip::Rsvp::Signalling::Patherr::StateRemoval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr::StateRemoval> state_removal; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Patherr


class Native::Ip::Rsvp::Signalling::Patherr::StateRemoval : public ydk::Entity
{
    public:
        StateRemoval();
        ~StateRemoval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf neighbor; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Patherr::StateRemoval


class Native::Ip::Rsvp::Signalling::RateLimit : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf burst; //type: uint16
        ydk::YLeaf limit; //type: uint16
        ydk::YLeaf maxsize; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Ip::Rsvp::Signalling::RateLimit


class Native::Ip::Rsvp::Signalling::Refresh : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf misses; //type: uint8
        class Reduction; //type: Native::Ip::Rsvp::Signalling::Refresh::Reduction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh::Reduction> reduction; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Refresh


class Native::Ip::Rsvp::Signalling::Refresh::Reduction : public ydk::Entity
{
    public:
        Reduction();
        ~Reduction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ack_delay; //type: uint16

}; // Native::Ip::Rsvp::Signalling::Refresh::Reduction


class Native::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Entry; //type: Native::Ip::Sla::Entry
        class Enable; //type: Native::Ip::Sla::Enable
        class Responder; //type: Native::Ip::Sla::Responder
        class Logging; //type: Native::Ip::Sla::Logging
        class Group; //type: Native::Ip::Sla::Group
        class Schedule; //type: Native::Ip::Sla::Schedule
        class ReactionConfiguration; //type: Native::Ip::Sla::ReactionConfiguration
        class Server; //type: Native::Ip::Sla::Server

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry> > entry;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder> responder; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group> group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Schedule> > schedule;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration> > reaction_configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Server> server;
        
}; // Native::Ip::Sla


class Native::Ip::Sla::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
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
        class IcmpEcho; //type: Native::Ip::Sla::Entry::IcmpEcho
        class PathEcho; //type: Native::Ip::Sla::Entry::PathEcho
        class PathJitter; //type: Native::Ip::Sla::Entry::PathJitter
        class UdpEcho; //type: Native::Ip::Sla::Entry::UdpEcho
        class UdpJitter; //type: Native::Ip::Sla::Entry::UdpJitter
        class Http; //type: Native::Ip::Sla::Entry::Http
        class Dhcp; //type: Native::Ip::Sla::Entry::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho> icmp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathEcho> path_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter> path_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter> udp_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Dhcp> dhcp;
        
}; // Native::Ip::Sla::Entry


class Native::Ip::Sla::Entry::IcmpEcho : public ydk::Entity
{
    public:
        IcmpEcho();
        ~IcmpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf data_pattern; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::IcmpEcho::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History> history;
        
}; // Native::Ip::Sla::Entry::IcmpEcho


class Native::Ip::Sla::Entry::IcmpEcho::History : public ydk::Entity
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

        ydk::YLeaf buckets_kept; //type: uint8
        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf filter; //type: Filter
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf lives_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced> enhanced;
                class Filter;

}; // Native::Ip::Sla::Entry::IcmpEcho::History


class Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced


class Native::Ip::Sla::Entry::PathEcho : public ydk::Entity
{
    public:
        PathEcho();
        ~PathEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf paths_of_statistics_kept; //type: uint8
        ydk::YLeaf samples_of_history_kept; //type: uint8
        ydk::YLeaf hops_of_statistics_kept; //type: uint8

}; // Native::Ip::Sla::Entry::PathEcho


class Native::Ip::Sla::Entry::PathJitter : public ydk::Entity
{
    public:
        PathJitter();
        ~PathJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeafList lsr_path; //type: list of  string
        class Default; //type: Native::Ip::Sla::Entry::PathJitter::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter::Default> default_;
        
}; // Native::Ip::Sla::Entry::PathJitter


class Native::Ip::Sla::Entry::PathJitter::Default : public ydk::Entity
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

        ydk::YLeaf frequency; //type: empty
        ydk::YLeaf lsr_path; //type: empty
        ydk::YLeaf owner; //type: empty
        ydk::YLeaf request_data_size; //type: empty
        ydk::YLeaf tag; //type: empty
        ydk::YLeaf threshold; //type: empty
        ydk::YLeaf timeout; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: empty

}; // Native::Ip::Sla::Entry::PathJitter::Default


class Native::Ip::Sla::Entry::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of string, union
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16

}; // Native::Ip::Sla::Entry::UdpEcho


class Native::Ip::Sla::Entry::UdpJitter : public ydk::Entity
{
    public:
        UdpJitter();
        ~UdpJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of string, union
        ydk::YLeaf portno; //type: uint16
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf num_packets; //type: uint16
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint16
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::UdpJitter::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History> history;
        
}; // Native::Ip::Sla::Entry::UdpJitter


class Native::Ip::Sla::Entry::UdpJitter::History : public ydk::Entity
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

        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::UdpJitter::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History::Enhanced> enhanced;
        
}; // Native::Ip::Sla::Entry::UdpJitter::History


class Native::Ip::Sla::Entry::UdpJitter::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

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
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::UdpJitter::History::Enhanced


class Native::Ip::Sla::Entry::Http : public ydk::Entity
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

        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf vrf; //type: string
        class Get; //type: Native::Ip::Sla::Entry::Http::Get
        class Raw; //type: Native::Ip::Sla::Entry::Http::Raw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Get> get;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Raw> raw;
        
}; // Native::Ip::Sla::Entry::Http


class Native::Ip::Sla::Entry::Http::Get : public ydk::Entity
{
    public:
        Get();
        ~Get();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of string, union

}; // Native::Ip::Sla::Entry::Http::Get


class Native::Ip::Sla::Entry::Http::Raw : public ydk::Entity
{
    public:
        Raw();
        ~Raw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of string, union

}; // Native::Ip::Sla::Entry::Http::Raw


class Native::Ip::Sla::Entry::Dhcp : public ydk::Entity
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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ip::Sla::Entry::Dhcp


class Native::Ip::Sla::Enable : public ydk::Entity
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

        ydk::YLeaf reaction_alerts; //type: empty

}; // Native::Ip::Sla::Enable


class Native::Ip::Sla::Responder : public ydk::Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UdpEcho; //type: Native::Ip::Sla::Responder::UdpEcho
        class TcpConnect; //type: Native::Ip::Sla::Responder::TcpConnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect> tcp_connect;
        
}; // Native::Ip::Sla::Responder


class Native::Ip::Sla::Responder::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::UdpEcho::Ipaddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho::Ipaddress> > ipaddress;
        
}; // Native::Ip::Sla::Responder::UdpEcho

class Native::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Sla::Entry::IcmpEcho::History::Filter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf failures;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf overThreshold;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

