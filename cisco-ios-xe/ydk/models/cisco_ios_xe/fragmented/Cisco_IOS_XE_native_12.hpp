#ifndef _CISCO_IOS_XE_NATIVE_12_
#define _CISCO_IOS_XE_NATIVE_12_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


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


class Native::Ip::Wccp : public ydk::Entity
{
    public:
        Wccp();
        ~Wccp();

        bool has_data() const override;
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
        class WccpList; //type: Native::Ip::Wccp::WccpList
        class WebCache; //type: Native::Ip::Wccp::WebCache
        class Check; //type: Native::Ip::Wccp::Check
        class Vrf; //type: Native::Ip::Wccp::Vrf

        ydk::YList wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache> web_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check> check;
        ydk::YList vrf;
        
}; // Native::Ip::Wccp


class Native::Ip::Wccp::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of uint16, string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of uint16, string
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WccpList::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WccpList::Password> password;
                class Mode;

}; // Native::Ip::Wccp::WccpList


class Native::Ip::Wccp::WccpList::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::WccpList::Password


class Native::Ip::Wccp::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of uint16, string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of uint16, string
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WebCache::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache::Password> password;
                class Mode;

}; // Native::Ip::Wccp::WebCache


class Native::Ip::Wccp::WebCache::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::WebCache::Password


class Native::Ip::Wccp::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Acl; //type: Native::Ip::Wccp::Check::Acl
        class Services; //type: Native::Ip::Wccp::Check::Services

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Services> services;
        
}; // Native::Ip::Wccp::Check


class Native::Ip::Wccp::Check::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf outbound; //type: empty

}; // Native::Ip::Wccp::Check::Acl


class Native::Ip::Wccp::Check::Services : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty

}; // Native::Ip::Wccp::Check::Services


class Native::Ip::Wccp::Vrf : public ydk::Entity
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
        ydk::YLeaf source_interface; //type: string
        class WccpList; //type: Native::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Ip::Wccp::Vrf::WebCache

        ydk::YList wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Ip::Wccp::Vrf


class Native::Ip::Wccp::Vrf::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

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
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of uint16, string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of uint16, string
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WccpList::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WccpList::Password> password;
                class Mode;

}; // Native::Ip::Wccp::Vrf::WccpList


class Native::Ip::Wccp::Vrf::WccpList::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::Vrf::WccpList::Password


class Native::Ip::Wccp::Vrf::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of uint16, string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of uint16, string
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WebCache::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache::Password> password;
                class Mode;

}; // Native::Ip::Wccp::Vrf::WebCache


class Native::Ip::Wccp::Vrf::WebCache::Password : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::Vrf::WebCache::Password


class Native::Ip::Radius : public ydk::Entity
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

        class SourceInterface; //type: Native::Ip::Radius::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface> source_interface;
        
}; // Native::Ip::Radius


class Native::Ip::Radius::SourceInterface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Ip::Radius::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Radius::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Radius::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Radius::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Radius::SourceInterface


class Native::Ip::Radius::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ip::Radius::SourceInterface::ATMSubinterface


class Native::Ip::Radius::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ip::Radius::SourceInterface::ATMACRsubinterface


class Native::Ip::Radius::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ip::Radius::SourceInterface::LISPSubinterface


class Native::Ip::Radius::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ip::Radius::SourceInterface::PortChannelSubinterface


class Native::Ip::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SourceInterface; //type: Native::Ip::Tacacs::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Ip::Tacacs


class Native::Ip::Tacacs::SourceInterface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Ip::Tacacs::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Tacacs::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Tacacs::SourceInterface


class Native::Ip::Tacacs::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ip::Tacacs::SourceInterface::ATMSubinterface


class Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface


class Native::Ip::Tacacs::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ip::Tacacs::SourceInterface::LISPSubinterface


class Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Ip::Http : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf access_class; //type: uint8
        ydk::YLeaf server; //type: boolean
        ydk::YLeaf secure_server; //type: boolean
        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf max_connections; //type: uint16
        ydk::YLeaf active_session_modules; //type: one of string, enumeration
        ydk::YLeaf secure_active_session_modules; //type: one of string, enumeration
        ydk::YLeaf secure_client_auth; //type: empty
        class Authentication; //type: Native::Ip::Http::Authentication
        class TimeoutPolicy; //type: Native::Ip::Http::TimeoutPolicy
        class Client; //type: Native::Ip::Http::Client

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::TimeoutPolicy> timeout_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client> client;
                class ActiveSessionModules;
        class SecureActiveSessionModules;

}; // Native::Ip::Http


class Native::Ip::Http::Authentication : public ydk::Entity
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

        ydk::YLeaf aaa; //type: empty
        ydk::YLeaf local; //type: empty

}; // Native::Ip::Http::Authentication


class Native::Ip::Http::TimeoutPolicy : public ydk::Entity
{
    public:
        TimeoutPolicy();
        ~TimeoutPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf idle; //type: uint16
        ydk::YLeaf life; //type: uint32
        ydk::YLeaf requests; //type: uint32

}; // Native::Ip::Http::TimeoutPolicy


class Native::Ip::Http::Client : public ydk::Entity
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

        ydk::YLeaf secure_trustpoint; //type: string
        ydk::YLeaf source_interface; //type: string
        class ProxyServer; //type: Native::Ip::Http::Client::ProxyServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http::Client::ProxyServer> proxy_server;
        
}; // Native::Ip::Http::Client


class Native::Ip::Http::Client::ProxyServer : public ydk::Entity
{
    public:
        ProxyServer();
        ~ProxyServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf proxy_server_name; //type: string
        ydk::YLeaf proxy_port; //type: uint16

}; // Native::Ip::Http::Client::ProxyServer


class Native::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Mka::Policy

        ydk::YList policy;
        
}; // Native::Mka


class Native::Mka::Policy : public ydk::Entity
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
        ydk::YLeaf confidentiality_offset; //type: ConfidentialityOffset
        class KeyServer; //type: Native::Mka::Policy::KeyServer
        class MacsecCipherSuite; //type: Native::Mka::Policy::MacsecCipherSuite

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka::Policy::KeyServer> key_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka::Policy::MacsecCipherSuite> macsec_cipher_suite;
                class ConfidentialityOffset;

}; // Native::Mka::Policy


class Native::Mka::Policy::KeyServer : public ydk::Entity
{
    public:
        KeyServer();
        ~KeyServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8

}; // Native::Mka::Policy::KeyServer


class Native::Mka::Policy::MacsecCipherSuite : public ydk::Entity
{
    public:
        MacsecCipherSuite();
        ~MacsecCipherSuite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_aes_128; //type: empty
        ydk::YLeaf gcm_aes_256; //type: empty

}; // Native::Mka::Policy::MacsecCipherSuite


class Native::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Global; //type: Native::Macro::Global
        class Auto; //type: Native::Macro::Auto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Auto> auto_;
        
}; // Native::Macro


class Native::Macro::Global : public ydk::Entity
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

        ydk::YLeaf description; //type: string

}; // Native::Macro::Global


class Native::Macro::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Execute; //type: Native::Macro::Auto::Execute
        class Device; //type: Native::Macro::Auto::Device
        class Global; //type: Native::Macro::Auto::Global

        ydk::YList execute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Auto::Device> device;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Auto::Global> global;
        
}; // Native::Macro::Auto


class Native::Macro::Auto::Execute : public ydk::Entity
{
    public:
        Execute();
        ~Execute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trigger_event; //type: string
        class Builtin; //type: Native::Macro::Auto::Execute::Builtin

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Auto::Execute::Builtin> builtin;
        
}; // Native::Macro::Auto::Execute


class Native::Macro::Auto::Execute::Builtin : public ydk::Entity
{
    public:
        Builtin();
        ~Builtin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf smart_port_configuration; //type: SmartPortConfiguration
        ydk::YLeaf parameters; //type: string
        class SmartPortConfiguration;

}; // Native::Macro::Auto::Execute::Builtin


class Native::Macro::Auto::Device : public ydk::Entity
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

        ydk::YLeaf media_player; //type: string
        ydk::YLeaf ip_camera; //type: string

}; // Native::Macro::Auto::Device


class Native::Macro::Auto::Global : public ydk::Entity
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

        ydk::YLeaf processing; //type: empty

}; // Native::Macro::Auto::Global


class Native::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf flowset; //type: empty
        ydk::YLeaf unicast_routing; //type: empty
        ydk::YLeaf source_route; //type: boolean
        class SourceGuard; //type: Native::Ipv6::SourceGuard
        class DestinationGuard; //type: Native::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Ipv6::Dhcp
        class AccessList; //type: Native::Ipv6::AccessList
        class Multicast; //type: Native::Ipv6::Multicast
        class Cef; //type: Native::Ipv6::Cef
        class Nd; //type: Native::Ipv6::Nd
        class Pim; //type: Native::Ipv6::Pim
        class Route; //type: Native::Ipv6::Route
        class Router; //type: Native::Ipv6::Router
        class Spd; //type: Native::Ipv6::Spd
        class PrefixList; //type: Native::Ipv6::PrefixList
        class Neighbor; //type: Native::Ipv6::Neighbor
        class MulticastRouting; //type: Native::Ipv6::MulticastRouting
        class Rip; //type: Native::Ipv6::Rip
        class Mld; //type: Native::Ipv6::Mld

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard> source_guard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard> destination_guard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef> cef; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Spd> spd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList> prefix_list;
        ydk::YList neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Mld> mld;
        
}; // Native::Ipv6


class Native::Ipv6::SourceGuard : public ydk::Entity
{
    public:
        SourceGuard();
        ~SourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Ipv6::SourceGuard::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::SourceGuard


class Native::Ipv6::SourceGuard::Policy : public ydk::Entity
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

        ydk::YLeaf source_guard_policy_name; //type: string
        class Validate; //type: Native::Ipv6::SourceGuard::Policy::Validate
        class Deny; //type: Native::Ipv6::SourceGuard::Policy::Deny
        class Permit; //type: Native::Ipv6::SourceGuard::Policy::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Validate> validate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Permit> permit;
        
}; // Native::Ipv6::SourceGuard::Policy


class Native::Ipv6::SourceGuard::Policy::Validate : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf prefix; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Validate


class Native::Ipv6::SourceGuard::Policy::Deny : public ydk::Entity
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

        ydk::YLeaf global_autoconf; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Deny


class Native::Ipv6::SourceGuard::Policy::Permit : public ydk::Entity
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

        ydk::YLeaf link_local; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Permit


class Native::Ipv6::DestinationGuard : public ydk::Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Ipv6::DestinationGuard::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::DestinationGuard


class Native::Ipv6::DestinationGuard::Policy : public ydk::Entity
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

        ydk::YLeaf destination_guard_policy_name; //type: string
        class Enforcement; //type: Native::Ipv6::DestinationGuard::Policy::Enforcement

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard::Policy::Enforcement> enforcement;
        
}; // Native::Ipv6::DestinationGuard::Policy


class Native::Ipv6::DestinationGuard::Policy::Enforcement : public ydk::Entity
{
    public:
        Enforcement();
        ~Enforcement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty
        ydk::YLeaf stressed; //type: empty

}; // Native::Ipv6::DestinationGuard::Policy::Enforcement


class Native::Ipv6::Dhcp : public ydk::Entity
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

        class Server; //type: Native::Ipv6::Dhcp::Server
        class Guard; //type: Native::Ipv6::Dhcp::Guard
        class Pool; //type: Native::Ipv6::Dhcp::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard> guard;
        ydk::YList pool;
        
}; // Native::Ipv6::Dhcp


class Native::Ipv6::Dhcp::Server : public ydk::Entity
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

        class Vrf; //type: Native::Ipv6::Dhcp::Server::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server::Vrf> vrf;
        
}; // Native::Ipv6::Dhcp::Server


class Native::Ipv6::Dhcp::Server::Vrf : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty

}; // Native::Ipv6::Dhcp::Server::Vrf


class Native::Ipv6::Dhcp::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Ipv6::Dhcp::Guard::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::Dhcp::Guard


class Native::Ipv6::Dhcp::Guard::Policy : public ydk::Entity
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

        ydk::YLeaf dhcp_guard_policy_name; //type: string
        class DeviceRole; //type: Native::Ipv6::Dhcp::Guard::Policy::DeviceRole
        class Match; //type: Native::Ipv6::Dhcp::Guard::Policy::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::Match> match;
        
}; // Native::Ipv6::Dhcp::Guard::Policy


class Native::Ipv6::Dhcp::Guard::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

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
        ydk::YLeaf client; //type: empty

}; // Native::Ipv6::Dhcp::Guard::Policy::DeviceRole


class Native::Ipv6::Dhcp::Guard::Policy::Match : public ydk::Entity
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

        class Server; //type: Native::Ipv6::Dhcp::Guard::Policy::Match::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::Match::Server> server;
        
}; // Native::Ipv6::Dhcp::Guard::Policy::Match


class Native::Ipv6::Dhcp::Guard::Policy::Match::Server : public ydk::Entity
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

        ydk::YLeaf access_list; //type: string

}; // Native::Ipv6::Dhcp::Guard::Policy::Match::Server


class Native::Ipv6::Dhcp::Pool : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf bootfile_url; //type: string
        ydk::YLeafList dns_server; //type: list of  string
        class Address; //type: Native::Ipv6::Dhcp::Pool::Address
        class Import; //type: Native::Ipv6::Dhcp::Pool::Import
        class LinkAddress; //type: Native::Ipv6::Dhcp::Pool::LinkAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import> import;
        ydk::YList link_address;
        
}; // Native::Ipv6::Dhcp::Pool


class Native::Ipv6::Dhcp::Pool::Address : public ydk::Entity
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

        class Prefix; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix

        ydk::YList prefix;
        
}; // Native::Ipv6::Dhcp::Pool::Address


class Native::Ipv6::Dhcp::Pool::Address::Prefix : public ydk::Entity
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

        ydk::YLeaf ipv6_address; //type: string
        class Lifetime; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime> lifetime;
        
}; // Native::Ipv6::Dhcp::Pool::Address::Prefix


class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime : public ydk::Entity
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

        ydk::YLeaf valid_lifetime; //type: one of uint32, enumeration
        ydk::YLeaf preferred_lifetime; //type: one of uint32, enumeration
        class ValidLifetime;
        class PreferredLifetime;

}; // Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime


class Native::Ipv6::Dhcp::Pool::Import : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        class Interface; //type: Native::Ipv6::Dhcp::Pool::Import::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import::Interface> interface;
        
}; // Native::Ipv6::Dhcp::Pool::Import


class Native::Ipv6::Dhcp::Pool::Import::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ipv6::Dhcp::Pool::Import::Interface


class Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::Ipv6::Dhcp::Pool::Import::Interface::ATMSubinterface


class Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Ipv6::Dhcp::Pool::Import::Interface::ATMACRsubinterface


class Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::Ipv6::Dhcp::Pool::Import::Interface::LISPSubinterface


class Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Ipv6::Dhcp::Pool::Import::Interface::PortChannelSubinterface


class Native::Ipv6::Dhcp::Pool::LinkAddress : public ydk::Entity
{
    public:
        LinkAddress();
        ~LinkAddress();

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

}; // Native::Ipv6::Dhcp::Pool::LinkAddress


class Native::Ipv6::AccessList : public ydk::Entity
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

        ydk::YLeaf match_local_traffic; //type: empty
        class NamedAcl; //type: Native::Ipv6::AccessList::NamedAcl
        class NamedRbAcl; //type: Native::Ipv6::AccessList::NamedRbAcl
        class LogUpdate; //type: Native::Ipv6::AccessList::LogUpdate

        ydk::YList named_acl;
        ydk::YList named_rb_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::LogUpdate> log_update;
        
}; // Native::Ipv6::AccessList


class Native::Ipv6::AccessList::NamedAcl : public ydk::Entity
{
    public:
        NamedAcl();
        ~NamedAcl();

        bool has_data() const override;
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
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule
        class Default; //type: Native::Ipv6::AccessList::NamedAcl::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default> default_;
        
}; // Native::Ipv6::AccessList::NamedAcl


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

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
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedAcl::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default


class Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

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
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl : public ydk::Entity
{
    public:
        NamedRbAcl();
        ~NamedRbAcl();

        bool has_data() const override;
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
        ydk::YLeaf role_based; //type: empty
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule
        class Default; //type: Native::Ipv6::AccessList::NamedRbAcl::Default

        ydk::YList access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default> default_;
        
}; // Native::Ipv6::AccessList::NamedRbAcl


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

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
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl::Default : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule

        ydk::YList access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default


class Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

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
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf source_host; //type: one of union, string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of union, string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: uint64

}; // Native::Ipv6::AccessList::LogUpdate


class Native::Ipv6::Multicast : public ydk::Entity
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

        ydk::YLeaf vrf; //type: string
        class Rpf; //type: Native::Ipv6::Multicast::Rpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf> rpf;
        
}; // Native::Ipv6::Multicast


class Native::Ipv6::Multicast::Rpf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf use_bgp; //type: empty
        class Backoff; //type: Native::Ipv6::Multicast::Rpf::Backoff

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf::Backoff> backoff;
        
}; // Native::Ipv6::Multicast::Rpf


class Native::Ipv6::Multicast::Rpf::Backoff : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf initial_delay; //type: uint16
        ydk::YLeaf max_delay; //type: uint16

}; // Native::Ipv6::Multicast::Rpf::Backoff


class Native::Ipv6::Cef : public ydk::Entity
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
        class Accounting; //type: Native::Ipv6::Cef::Accounting
        class Optimize; //type: Native::Ipv6::Cef::Optimize
        class TrafficStatistics; //type: Native::Ipv6::Cef::TrafficStatistics
        class LoadSharing; //type: Native::Ipv6::Cef::LoadSharing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::TrafficStatistics> traffic_statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing> load_sharing;
        
}; // Native::Ipv6::Cef


class Native::Ipv6::Cef::Accounting : public ydk::Entity
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

}; // Native::Ipv6::Cef::Accounting


class Native::Ipv6::Cef::Optimize : public ydk::Entity
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

        class Neighbor; //type: Native::Ipv6::Cef::Optimize::Neighbor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Optimize::Neighbor> neighbor;
        
}; // Native::Ipv6::Cef::Optimize


class Native::Ipv6::Cef::Optimize::Neighbor : public ydk::Entity
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

}; // Native::Ipv6::Cef::Optimize::Neighbor


class Native::Ipv6::Cef::TrafficStatistics : public ydk::Entity
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

}; // Native::Ipv6::Cef::TrafficStatistics


class Native::Ipv6::Cef::LoadSharing : public ydk::Entity
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

        class Algorithm; //type: Native::Ipv6::Cef::LoadSharing::Algorithm
        class KeyControl; //type: Native::Ipv6::Cef::LoadSharing::KeyControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::KeyControl> key_control;
        
}; // Native::Ipv6::Cef::LoadSharing


class Native::Ipv6::Cef::LoadSharing::Algorithm : public ydk::Entity
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

        class Tunnel; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel
        class Universal; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Universal
        class Original; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Original
        class IncludePorts; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Universal> universal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Original> original;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts> include_ports; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm


class Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel


class Native::Ipv6::Cef::LoadSharing::Algorithm::Universal : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Universal


class Native::Ipv6::Cef::LoadSharing::Algorithm::Original : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Original


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts : public ydk::Entity
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

        class Destination; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination
        class Source; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination> destination; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source> source; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source : public ydk::Entity
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
        class Destination; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination> destination; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination : public ydk::Entity
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
        class Gtp; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp> gtp; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp


class Native::Ipv6::Cef::LoadSharing::KeyControl : public ydk::Entity
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


}; // Native::Ipv6::Cef::LoadSharing::KeyControl


class Native::Ipv6::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Inspection; //type: Native::Ipv6::Nd::Inspection
        class Cache; //type: Native::Ipv6::Nd::Cache
        class Raguard; //type: Native::Ipv6::Nd::Raguard
        class DefaultRoute; //type: Native::Ipv6::Nd::DefaultRoute
        class Suppress; //type: Native::Ipv6::Nd::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection> inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard> raguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::DefaultRoute> default_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Suppress> suppress;
        
}; // Native::Ipv6::Nd


class Native::Ipv6::Nd::Inspection : public ydk::Entity
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

        class Policy; //type: Native::Ipv6::Nd::Inspection::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::Nd::Inspection


class Native::Ipv6::Nd::Inspection::Policy : public ydk::Entity
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

        ydk::YLeaf name_nd_inspection_policy; //type: string
        ydk::YLeaf drop_unsecure; //type: empty
        ydk::YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Inspection::Policy::DeviceRole
        class Limit; //type: Native::Ipv6::Nd::Inspection::Policy::Limit
        class SecLevel; //type: Native::Ipv6::Nd::Inspection::Policy::SecLevel
        class Tracking; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking
        class Validate; //type: Native::Ipv6::Nd::Inspection::Policy::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::SecLevel> sec_level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking> tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Validate> validate;
        
}; // Native::Ipv6::Nd::Inspection::Policy


class Native::Ipv6::Nd::Inspection::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

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
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf router; //type: empty
        ydk::YLeaf switch_; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::DeviceRole


class Native::Ipv6::Nd::Inspection::Policy::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_count; //type: uint16

}; // Native::Ipv6::Nd::Inspection::Policy::Limit


class Native::Ipv6::Nd::Inspection::Policy::SecLevel : public ydk::Entity
{
    public:
        SecLevel();
        ~SecLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Inspection::Policy::SecLevel


class Native::Ipv6::Nd::Inspection::Policy::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Disable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable
        class Enable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable> disable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable> enable; // presence node
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaleLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime> stale_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime : public ydk::Entity
{
    public:
        StaleLifetime();
        ~StaleLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable : public ydk::Entity
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

        class ReachableLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime> reachable_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime : public ydk::Entity
{
    public:
        ReachableLifetime();
        ~ReachableLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime


class Native::Ipv6::Nd::Inspection::Policy::Validate : public ydk::Entity
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

        ydk::YLeaf source_mac; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Validate


class Native::Ipv6::Nd::Cache : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Expire; //type: Native::Ipv6::Nd::Cache::Expire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache::Expire> expire;
        
}; // Native::Ipv6::Nd::Cache


class Native::Ipv6::Nd::Cache::Expire : public ydk::Entity
{
    public:
        Expire();
        ~Expire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time; //type: uint16
        ydk::YLeaf refresh; //type: empty

}; // Native::Ipv6::Nd::Cache::Expire


class Native::Ipv6::Nd::Raguard : public ydk::Entity
{
    public:
        Raguard();
        ~Raguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attach_policy; //type: string
        class Policy; //type: Native::Ipv6::Nd::Raguard::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::Nd::Raguard


class Native::Ipv6::Nd::Raguard::Policy : public ydk::Entity
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

        ydk::YLeaf raguard_policy_name; //type: string
        ydk::YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Raguard::Policy::DeviceRole
        class HopLimit; //type: Native::Ipv6::Nd::Raguard::Policy::HopLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::HopLimit> hop_limit;
        
}; // Native::Ipv6::Nd::Raguard::Policy


class Native::Ipv6::Nd::Raguard::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

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
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf router; //type: empty
        ydk::YLeaf switch_; //type: empty

}; // Native::Ipv6::Nd::Raguard::Policy::DeviceRole


class Native::Ipv6::Nd::Raguard::Policy::HopLimit : public ydk::Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint8
        ydk::YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Raguard::Policy::HopLimit


class Native::Ipv6::Nd::DefaultRoute : public ydk::Entity
{
    public:
        DefaultRoute();
        ~DefaultRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf limit; //type: uint8
        class Vrf; //type: Native::Ipv6::Nd::DefaultRoute::Vrf

        ydk::YList vrf;
        
}; // Native::Ipv6::Nd::DefaultRoute


class Native::Ipv6::Nd::DefaultRoute::Vrf : public ydk::Entity
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
        ydk::YLeaf limit; //type: uint8

}; // Native::Ipv6::Nd::DefaultRoute::Vrf


class Native::Ipv6::Nd::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Ipv6::Nd::Suppress::Policy

        ydk::YList policy;
        
}; // Native::Ipv6::Nd::Suppress


class Native::Ipv6::Nd::Suppress::Policy : public ydk::Entity
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

        ydk::YLeaf nd_suppress_policy_name; //type: string

}; // Native::Ipv6::Nd::Suppress::Policy


class Native::Ipv6::Pim : public ydk::Entity
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

        class RpAddress; //type: Native::Ipv6::Pim::RpAddress
        class Vrf; //type: Native::Ipv6::Pim::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim::RpAddress> rp_address;
        ydk::YList vrf;
        
}; // Native::Ipv6::Pim


class Native::Ipv6::Pim::RpAddress : public ydk::Entity
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
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::RpAddress


class Native::Ipv6::Pim::Vrf : public ydk::Entity
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
        class RpAddress; //type: Native::Ipv6::Pim::Vrf::RpAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim::Vrf::RpAddress> rp_address;
        
}; // Native::Ipv6::Pim::Vrf


class Native::Ipv6::Pim::Vrf::RpAddress : public ydk::Entity
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
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::Vrf::RpAddress


class Native::Ipv6::Route : public ydk::Entity
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

        class Ipv6RouteList; //type: Native::Ipv6::Route::Ipv6RouteList
        class Vrf; //type: Native::Ipv6::Route::Vrf
        class Static; //type: Native::Ipv6::Route::Static

        ydk::YList ipv6_route_list;
        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Static> static_;
        
}; // Native::Ipv6::Route


class Native::Ipv6::Route::Ipv6RouteList : public ydk::Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

        bool has_data() const override;
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
        class Ipv6FwdList; //type: Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList

        ydk::YList ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Ipv6RouteList


class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList : public ydk::Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string
        class InterfaceNextHop; //type: Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop

        ydk::YList interface_next_hop;
                class Fwd;

}; // Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop : public ydk::Entity
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

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop


class Native::Ipv6::Route::Vrf : public ydk::Entity
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
        class Ipv6RouteList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList

        ydk::YList ipv6_route_list;
        
}; // Native::Ipv6::Route::Vrf


class Native::Ipv6::Route::Vrf::Ipv6RouteList : public ydk::Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

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
        class Ipv6FwdList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList

        ydk::YList ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Vrf::Ipv6RouteList


class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList : public ydk::Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string
        class InterfaceNextHop; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop

        ydk::YList interface_next_hop;
                class Fwd;

}; // Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop : public ydk::Entity
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

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop


class Native::Ipv6::Route::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bfd; //type: Native::Ipv6::Route::Static::Bfd
        class Resolve; //type: Native::Ipv6::Route::Static::Resolve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Static::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Static::Resolve> resolve;
        
}; // Native::Ipv6::Route::Static


class Native::Ipv6::Route::Static::Bfd : public ydk::Entity
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

        class IfaceName; //type: Native::Ipv6::Route::Static::Bfd::IfaceName
        class Vrf; //type: Native::Ipv6::Route::Static::Bfd::Vrf

        ydk::YList iface_name;
        ydk::YList vrf;
        
}; // Native::Ipv6::Route::Static::Bfd


class Native::Ipv6::Route::Static::Bfd::IfaceName : public ydk::Entity
{
    public:
        IfaceName();
        ~IfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: one of string, enumeration
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf unassociate; //type: empty
        class Interface;

}; // Native::Ipv6::Route::Static::Bfd::IfaceName


class Native::Ipv6::Route::Static::Bfd::Vrf : public ydk::Entity
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
        ydk::YLeaf interface; //type: one of string, enumeration
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf unassociate; //type: empty
        class Interface;

}; // Native::Ipv6::Route::Static::Bfd::Vrf

class Native::Ip::Wccp::WccpList::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 0;
            if (name == "open") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::WccpList::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::WebCache::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 0;
            if (name == "open") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::WebCache::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::Vrf::WccpList::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 0;
            if (name == "open") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::Vrf::WccpList::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::Vrf::WebCache::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 0;
            if (name == "open") return 1;
            return -1;
        }
};

class Native::Ip::Wccp::Vrf::WebCache::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 1;
            return -1;
        }
};

class Native::Ip::Http::ActiveSessionModules : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "all") return 1;
            return -1;
        }
};

class Native::Ip::Http::SecureActiveSessionModules : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "all") return 1;
            return -1;
        }
};

class Native::Mka::Policy::ConfidentialityOffset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_30;
        static const ydk::Enum::YLeaf Y_50;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "30") return 1;
            if (name == "50") return 2;
            return -1;
        }
};

class Native::Macro::Auto::Execute::Builtin::SmartPortConfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CISCO_AP_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_DMP_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_DMP_AUTO_SMARTPORT_V1;
        static const ydk::Enum::YLeaf CISCO_IP_CAMERA_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_LAST_RESORT_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_LIGHT_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_LWAP_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_PHONE_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_PHONE_AUTO_SMARTPORT_V1;
        static const ydk::Enum::YLeaf CISCO_ROUTER_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf CISCO_SWITCH_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf MS_IP_CAMERA_AUTO_SMARTPORT;
        static const ydk::Enum::YLeaf MS_VIDEO_CONF_AUTO_SMARTPORT;

        static int get_enum_value(const std::string & name) {
            if (name == "CISCO_AP_AUTO_SMARTPORT") return 0;
            if (name == "CISCO_DMP_AUTO_SMARTPORT") return 1;
            if (name == "CISCO_DMP_AUTO_SMARTPORT_V1") return 2;
            if (name == "CISCO_IP_CAMERA_AUTO_SMARTPORT") return 3;
            if (name == "CISCO_LAST_RESORT_SMARTPORT") return 4;
            if (name == "CISCO_LIGHT_AUTO_SMARTPORT") return 5;
            if (name == "CISCO_LWAP_AUTO_SMARTPORT") return 6;
            if (name == "CISCO_PHONE_AUTO_SMARTPORT") return 7;
            if (name == "CISCO_PHONE_AUTO_SMARTPORT_V1") return 8;
            if (name == "CISCO_ROUTER_AUTO_SMARTPORT") return 9;
            if (name == "CISCO_SWITCH_AUTO_SMARTPORT") return 10;
            if (name == "MS_IP_CAMERA_AUTO_SMARTPORT") return 11;
            if (name == "MS_VIDEO_CONF_AUTO_SMARTPORT") return 12;
            return -1;
        }
};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

        static int get_enum_value(const std::string & name) {
            if (name == "infinite") return 0;
            return -1;
        }
};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

        static int get_enum_value(const std::string & name) {
            if (name == "infinite") return 0;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Action : public ydk::Enum
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

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "ahp") return 0;
            if (name == "esp") return 1;
            if (name == "hbh") return 2;
            if (name == "icmp") return 3;
            if (name == "ipv6") return 4;
            if (name == "pcp") return 5;
            if (name == "sctp") return 6;
            if (name == "tcp") return 7;
            if (name == "udp") return 8;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

        static int get_enum_value(const std::string & name) {
            if (name == "beyond-scope") return 0;
            if (name == "destination-unreachable") return 1;
            if (name == "dhaad-reply") return 2;
            if (name == "dhaad-request") return 3;
            if (name == "echo-reply") return 4;
            if (name == "echo-request") return 5;
            if (name == "header") return 6;
            if (name == "hop-limit") return 7;
            if (name == "mld-query") return 8;
            if (name == "mld-reduction") return 9;
            if (name == "mld-report") return 10;
            if (name == "mpd-advertisement") return 11;
            if (name == "mpd-solicitation") return 12;
            if (name == "nd-na") return 13;
            if (name == "nd-ns") return 14;
            if (name == "next-header") return 15;
            if (name == "no-admin") return 16;
            if (name == "no-route") return 17;
            if (name == "packet-too-big") return 18;
            if (name == "parameter-option") return 19;
            if (name == "parameter-problem") return 20;
            if (name == "port-unreachable") return 21;
            if (name == "reassembly-timeout") return 22;
            if (name == "redirect") return 23;
            if (name == "reject-route") return 24;
            if (name == "renum-command") return 25;
            if (name == "renum-result") return 26;
            if (name == "renum-seq-number") return 27;
            if (name == "router-advertisement") return 28;
            if (name == "router-renumbering") return 29;
            if (name == "router-solicitation") return 30;
            if (name == "source-policy") return 31;
            if (name == "time-exceeded") return 32;
            if (name == "unreachable") return 33;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
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

class Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "ahp") return 0;
            if (name == "esp") return 1;
            if (name == "hbh") return 2;
            if (name == "icmp") return 3;
            if (name == "ipv6") return 4;
            if (name == "pcp") return 5;
            if (name == "sctp") return 6;
            if (name == "tcp") return 7;
            if (name == "udp") return 8;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedAcl::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

        static int get_enum_value(const std::string & name) {
            if (name == "beyond-scope") return 0;
            if (name == "destination-unreachable") return 1;
            if (name == "dhaad-reply") return 2;
            if (name == "dhaad-request") return 3;
            if (name == "echo-reply") return 4;
            if (name == "echo-request") return 5;
            if (name == "header") return 6;
            if (name == "hop-limit") return 7;
            if (name == "mld-query") return 8;
            if (name == "mld-reduction") return 9;
            if (name == "mld-report") return 10;
            if (name == "mpd-advertisement") return 11;
            if (name == "mpd-solicitation") return 12;
            if (name == "nd-na") return 13;
            if (name == "nd-ns") return 14;
            if (name == "next-header") return 15;
            if (name == "no-admin") return 16;
            if (name == "no-route") return 17;
            if (name == "packet-too-big") return 18;
            if (name == "parameter-option") return 19;
            if (name == "parameter-problem") return 20;
            if (name == "port-unreachable") return 21;
            if (name == "reassembly-timeout") return 22;
            if (name == "redirect") return 23;
            if (name == "reject-route") return 24;
            if (name == "renum-command") return 25;
            if (name == "renum-result") return 26;
            if (name == "renum-seq-number") return 27;
            if (name == "router-advertisement") return 28;
            if (name == "router-renumbering") return 29;
            if (name == "router-solicitation") return 30;
            if (name == "source-policy") return 31;
            if (name == "time-exceeded") return 32;
            if (name == "unreachable") return 33;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Action : public ydk::Enum
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

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "ahp") return 0;
            if (name == "esp") return 1;
            if (name == "hbh") return 2;
            if (name == "icmp") return 3;
            if (name == "ipv6") return 4;
            if (name == "pcp") return 5;
            if (name == "sctp") return 6;
            if (name == "tcp") return 7;
            if (name == "udp") return 8;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

        static int get_enum_value(const std::string & name) {
            if (name == "beyond-scope") return 0;
            if (name == "destination-unreachable") return 1;
            if (name == "dhaad-reply") return 2;
            if (name == "dhaad-request") return 3;
            if (name == "echo-reply") return 4;
            if (name == "echo-request") return 5;
            if (name == "header") return 6;
            if (name == "hop-limit") return 7;
            if (name == "mld-query") return 8;
            if (name == "mld-reduction") return 9;
            if (name == "mld-report") return 10;
            if (name == "mpd-advertisement") return 11;
            if (name == "mpd-solicitation") return 12;
            if (name == "nd-na") return 13;
            if (name == "nd-ns") return 14;
            if (name == "next-header") return 15;
            if (name == "no-admin") return 16;
            if (name == "no-route") return 17;
            if (name == "packet-too-big") return 18;
            if (name == "parameter-option") return 19;
            if (name == "parameter-problem") return 20;
            if (name == "port-unreachable") return 21;
            if (name == "reassembly-timeout") return 22;
            if (name == "redirect") return 23;
            if (name == "reject-route") return 24;
            if (name == "renum-command") return 25;
            if (name == "renum-result") return 26;
            if (name == "renum-seq-number") return 27;
            if (name == "router-advertisement") return 28;
            if (name == "router-renumbering") return 29;
            if (name == "router-solicitation") return 30;
            if (name == "source-policy") return 31;
            if (name == "time-exceeded") return 32;
            if (name == "unreachable") return 33;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Action : public ydk::Enum
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

class Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "ahp") return 0;
            if (name == "esp") return 1;
            if (name == "hbh") return 2;
            if (name == "icmp") return 3;
            if (name == "ipv6") return 4;
            if (name == "pcp") return 5;
            if (name == "sctp") return 6;
            if (name == "tcp") return 7;
            if (name == "udp") return 8;
            return -1;
        }
};

class Native::Ipv6::AccessList::NamedRbAcl::Default::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

        static int get_enum_value(const std::string & name) {
            if (name == "beyond-scope") return 0;
            if (name == "destination-unreachable") return 1;
            if (name == "dhaad-reply") return 2;
            if (name == "dhaad-request") return 3;
            if (name == "echo-reply") return 4;
            if (name == "echo-request") return 5;
            if (name == "header") return 6;
            if (name == "hop-limit") return 7;
            if (name == "mld-query") return 8;
            if (name == "mld-reduction") return 9;
            if (name == "mld-report") return 10;
            if (name == "mpd-advertisement") return 11;
            if (name == "mpd-solicitation") return 12;
            if (name == "nd-na") return 13;
            if (name == "nd-ns") return 14;
            if (name == "next-header") return 15;
            if (name == "no-admin") return 16;
            if (name == "no-route") return 17;
            if (name == "packet-too-big") return 18;
            if (name == "parameter-option") return 19;
            if (name == "parameter-problem") return 20;
            if (name == "port-unreachable") return 21;
            if (name == "reassembly-timeout") return 22;
            if (name == "redirect") return 23;
            if (name == "reject-route") return 24;
            if (name == "renum-command") return 25;
            if (name == "renum-result") return 26;
            if (name == "renum-seq-number") return 27;
            if (name == "router-advertisement") return 28;
            if (name == "router-renumbering") return 29;
            if (name == "router-solicitation") return 30;
            if (name == "source-policy") return 31;
            if (name == "time-exceeded") return 32;
            if (name == "unreachable") return 33;
            return -1;
        }
};

class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

        static int get_enum_value(const std::string & name) {
            if (name == "Null0") return 0;
            return -1;
        }
};

class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

        static int get_enum_value(const std::string & name) {
            if (name == "Null0") return 0;
            return -1;
        }
};

class Native::Ipv6::Route::Static::Bfd::IfaceName::Interface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

        static int get_enum_value(const std::string & name) {
            if (name == "Null0") return 0;
            return -1;
        }
};

class Native::Ipv6::Route::Static::Bfd::Vrf::Interface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

        static int get_enum_value(const std::string & name) {
            if (name == "Null0") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_12_ */

