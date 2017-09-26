#ifndef _CISCO_IOS_XE_NATIVE_75_
#define _CISCO_IOS_XE_NATIVE_75_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_74.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree : public ydk::Entity
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

        ydk::YLeaf status; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree


class Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus : public ydk::Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bulk; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus


class Native::Interface::Vlan::CiscoIOSXEInterfacesMdix : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMdix();
        ~CiscoIOSXEInterfacesMdix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMdix


class Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMdix_();
        ~CiscoIOSXEInterfacesMdix_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_


class Native::Interface::Vlan::CiscoIOSXEInterfacesMop : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMop();
        ~CiscoIOSXEInterfacesMop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMop


class Native::Interface::Vlan::CiscoIOSXEInterfacesMop_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMop_();
        ~CiscoIOSXEInterfacesMop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMop_


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMpls();
        ~CiscoIOSXEInterfacesMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMpls_();
        ~CiscoIOSXEInterfacesMpls_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPeer();
        ~CiscoIOSXEInterfacesPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_> default_;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_ : public ydk::Entity
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

        class Ip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip> ip;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address> address;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address : public ydk::Entity
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

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool : public ydk::Entity
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

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPeer_();
        ~CiscoIOSXEInterfacesPeer_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_> default_;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_ : public ydk::Entity
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

        class Ip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip> ip;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address> address;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address : public ydk::Entity
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

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool


class Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool : public ydk::Entity
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

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool


class Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPmPath();
        ~CiscoIOSXEInterfacesPmPath();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath


class Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPmPath_();
        ~CiscoIOSXEInterfacesPmPath_();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPriorityQueue();
        ~CiscoIOSXEInterfacesPriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap


class Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesPriorityQueue_();
        ~CiscoIOSXEInterfacesPriorityQueue_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap> cos_map;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_


class Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap


class Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesRcvQueue();
        ~CiscoIOSXEInterfacesRcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap


class Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesRcvQueue_();
        ~CiscoIOSXEInterfacesRcvQueue_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap> > cos_map;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_


class Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesStandby();
        ~CiscoIOSXEInterfacesStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Version
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay
        class UseBia; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia
        class StandbyList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay> delay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList> > standby_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia> use_bia; // presence node
                class Version;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList : public ydk::Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf follow; //type: string
        ydk::YLeaf ipv6; //type: one of string, enumeration
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers
        class Track; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track> > track;
                class Ipv6;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf text; //type: string
        class Md5; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip : public ydk::Entity
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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf sync; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect : public ydk::Entity
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

        ydk::YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers : public ydk::Entity
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

        ydk::YLeaf advertisement; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers : public ydk::Entity
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

        class HelloInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track : public ydk::Entity
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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia : public ydk::Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Scope; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope> scope;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope : public ydk::Entity
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

        ydk::YLeaf interface; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesStandby_();
        ~CiscoIOSXEInterfacesStandby_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Version
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay
        class UseBia; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia
        class StandbyList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay> delay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList> > standby_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia> use_bia; // presence node
                class Version;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList : public ydk::Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf follow; //type: string
        ydk::YLeaf ipv6; //type: one of string, enumeration
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication
        class Ip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip
        class Preempt; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect
        class Timers; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers
        class Track; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track> > track;
                class Ipv6;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf text; //type: string
        class Md5; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip : public ydk::Entity
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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf sync; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect : public ydk::Entity
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

        ydk::YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers : public ydk::Entity
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

        ydk::YLeaf advertisement; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers : public ydk::Entity
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

        class HelloInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track : public ydk::Entity
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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia : public ydk::Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Scope; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope> scope;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia


class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope : public ydk::Entity
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

        ydk::YLeaf interface; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesStormControl();
        ~CiscoIOSXEInterfacesStormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action
        class Broadcast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast
        class Multicast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast
        class Unicast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Include; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include
        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesStormControl_();
        ~CiscoIOSXEInterfacesStormControl_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action
        class Broadcast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast
        class Multicast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast
        class Unicast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Include; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include
        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps


class Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchport();
        ~CiscoIOSXEInterfacesSwitchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchportConf();
        ~CiscoIOSXEInterfacesSwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchportConf_();
        ~CiscoIOSXEInterfacesSwitchportConf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchport_();
        ~CiscoIOSXEInterfacesSwitchport_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_


class Native::Interface::Vlan::CiscoIOSXEInterfacesTrust : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesTrust();
        ~CiscoIOSXEInterfacesTrust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesTrust


class Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesTrust_();
        ~CiscoIOSXEInterfacesTrust_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_


class Native::Interface::Vlan::CiscoIOSXEInterfacesUtd : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesUtd();
        ~CiscoIOSXEInterfacesUtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesUtd


class Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesUtd_();
        ~CiscoIOSXEInterfacesUtd_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_


class Native::Interface::Vlan::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::Vlan::Crypto::Map
        class Ipsec; //type: Native::Interface::Vlan::Crypto::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto::Map> map;
        
}; // Native::Interface::Vlan::Crypto


class Native::Interface::Vlan::Crypto::Ipsec : public ydk::Entity
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

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        class DfBit;
        class Fragmentation;

}; // Native::Interface::Vlan::Crypto::Ipsec


class Native::Interface::Vlan::Crypto::Map : public ydk::Entity
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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf redundancy; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Interface::Vlan::Crypto::Map


class Native::Interface::Vlan::Cts : public ydk::Entity
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

        class Manual; //type: Native::Interface::Vlan::Cts::Manual

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual> manual; // presence node
        
}; // Native::Interface::Vlan::Cts


class Native::Interface::Vlan::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::Vlan::Cts::Manual::Policy
        class Sap; //type: Native::Interface::Vlan::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::Vlan::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Propagate> propagate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap> sap;
        
}; // Native::Interface::Vlan::Cts::Manual


class Native::Interface::Vlan::Cts::Manual::Policy : public ydk::Entity
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

        class Static_; //type: Native::Interface::Vlan::Cts::Manual::Policy::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::Vlan::Cts::Manual::Policy


class Native::Interface::Vlan::Cts::Manual::Policy::Static_ : public ydk::Entity
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

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Policy::Static_


class Native::Interface::Vlan::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::Vlan::Cts::Manual::Propagate


class Native::Interface::Vlan::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Vlan::Cts::Manual::Sap


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Vlan::Glbp : public ydk::Entity
{
    public:
        Glbp();
        ~Glbp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Interface::Vlan::Glbp::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range> > range;
        
}; // Native::Interface::Vlan::Glbp


class Native::Interface::Vlan::Glbp::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf name; //type: string
        class Forwarder; //type: Native::Interface::Vlan::Glbp::Range::Forwarder
        class Ip; //type: Native::Interface::Vlan::Glbp::Range::Ip
        class Preempt; //type: Native::Interface::Vlan::Glbp::Range::Preempt
        class Weighting; //type: Native::Interface::Vlan::Glbp::Range::Weighting
        class Timers; //type: Native::Interface::Vlan::Glbp::Range::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder> forwarder;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting> weighting;
        
}; // Native::Interface::Vlan::Glbp::Range


class Native::Interface::Vlan::Glbp::Range::Forwarder : public ydk::Entity
{
    public:
        Forwarder();
        ~Forwarder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Preempt; //type: Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt> preempt; // presence node
        
}; // Native::Interface::Vlan::Glbp::Range::Forwarder


class Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt


class Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay


class Native::Interface::Vlan::Glbp::Range::Ip : public ydk::Entity
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

        class Ipv4; //type: Native::Interface::Vlan::Glbp::Range::Ip::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Ip::Ipv4> > ipv4;
        
}; // Native::Interface::Vlan::Glbp::Range::Ip


class Native::Interface::Vlan::Glbp::Range::Ip::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Interface::Vlan::Glbp::Range::Ip::Ipv4


class Native::Interface::Vlan::Glbp::Range::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::Glbp::Range::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::Glbp::Range::Preempt


class Native::Interface::Vlan::Glbp::Range::Preempt::Delay : public ydk::Entity
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

        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::Vlan::Glbp::Range::Preempt::Delay


class Native::Interface::Vlan::Glbp::Range::Timers : public ydk::Entity
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

        class Msec; //type: Native::Interface::Vlan::Glbp::Range::Timers::Msec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers::Msec> msec;
        
}; // Native::Interface::Vlan::Glbp::Range::Timers


class Native::Interface::Vlan::Glbp::Range::Timers::Msec : public ydk::Entity
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

        class Range_; //type: Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_> > range;
        
}; // Native::Interface::Vlan::Glbp::Range::Timers::Msec


class Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_ : public ydk::Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf range0; //type: uint8

}; // Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_


class Native::Interface::Vlan::Glbp::Range::Weighting : public ydk::Entity
{
    public:
        Weighting();
        ~Weighting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Value_
        class Track; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Track> track;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Value_> > value_;
        
}; // Native::Interface::Vlan::Glbp::Range::Weighting


class Native::Interface::Vlan::Glbp::Range::Weighting::Track : public ydk::Entity
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

        class Range_; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_> > range;
        
}; // Native::Interface::Vlan::Glbp::Range::Weighting::Track


class Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_ : public ydk::Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf decrement; //type: uint8

}; // Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_


class Native::Interface::Vlan::Glbp::Range::Weighting::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: int8
        ydk::YLeaf upper; //type: int8
        ydk::YLeaf lower; //type: int8

}; // Native::Interface::Vlan::Glbp::Range::Weighting::Value_


class Native::Interface::Vlan::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Vlan::IpVrf::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf


class Native::Interface::Vlan::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf::Ip


class Native::Interface::Vlan::IpVrf::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::IpVrf::Ip::Vrf


class Native::Interface::Vlan::IpVrf_ : public ydk::Entity
{
    public:
        IpVrf_();
        ~IpVrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Vlan::IpVrf_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf_::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf_


class Native::Interface::Vlan::IpVrf_::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf_::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf_::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf_::Ip


class Native::Interface::Vlan::IpVrf_::Ip::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::IpVrf_::Ip::Vrf


class Native::Interface::Vlan::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::Vlan::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Interface::Vlan::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_75_ */

