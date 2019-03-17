#ifndef _CISCO_IOS_XE_NATIVE_119_
#define _CISCO_IOS_XE_NATIVE_119_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_118.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Server::Radius::DynamicAuthor::Domain : public ydk::Entity
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

        ydk::YLeaf delimiter; //type: string
        class Stripping; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping> stripping; // presence node
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain


class Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping : public ydk::Entity
{
    public:
        Stripping();
        ~Stripping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf right_to_left; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping


class Native::Aaa::Server::Radius::DynamicAuthor::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf retransmission; //type: empty
        ydk::YLeaf server_key; //type: empty
        ydk::YLeaf session_key; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Ignore


class Native::Aaa::Server::Radius::PolicyDevice : public ydk::Entity
{
    public:
        PolicyDevice();
        ~PolicyDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Accounting; //type: Native::Aaa::Server::Radius::PolicyDevice::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::PolicyDevice::Authentication
        class Client; //type: Native::Aaa::Server::Radius::PolicyDevice::Client
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Authentication> authentication;
        ydk::YList client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator> message_authenticator;
        
}; // Native::Aaa::Server::Radius::PolicyDevice


class Native::Aaa::Server::Radius::PolicyDevice::Accounting : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16

}; // Native::Aaa::Server::Radius::PolicyDevice::Accounting


class Native::Aaa::Server::Radius::PolicyDevice::Authentication : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16

}; // Native::Aaa::Server::Radius::PolicyDevice::Authentication


class Native::Aaa::Server::Radius::PolicyDevice::Client : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        class Vrf; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Key

        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client::Key> key;
        
}; // Native::Aaa::Server::Radius::PolicyDevice::Client


class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf port; //type: uint16
        class Key; //type: Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key> key;
        
}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf


class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key


class Native::Aaa::Server::Radius::PolicyDevice::Client::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Client::Key


class Native::Aaa::Server::Radius::PolicyDevice::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::PolicyDevice::Key


class Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
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

}; // Native::Aaa::Server::Radius::PolicyDevice::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy : public ydk::Entity
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

        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::Timer
        class ClientIp; //type: Native::Aaa::Server::Radius::Proxy::ClientIp
        class ClientIpMask; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask
        class ClientIpVrf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf
        class ClientIpMaskVrf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf
        class Send; //type: Native::Aaa::Server::Radius::Proxy::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Timer> timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp> client_ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask> client_ip_mask;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf> client_ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf> client_ip_mask_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send> send;
        
}; // Native::Aaa::Server::Radius::Proxy


class Native::Aaa::Server::Radius::Proxy::Accounting : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::Accounting


class Native::Aaa::Server::Radius::Proxy::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::Authentication : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::Authentication


class Native::Aaa::Server::Radius::Proxy::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format : public ydk::Entity
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

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf none; //type: empty
        class Default; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::EapUser


class Native::Aaa::Server::Radius::Proxy::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter


class Native::Aaa::Server::Radius::Proxy::Filter::Access : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter::Access


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::Filter::Attribute : public ydk::Entity
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

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::Key


class Native::Aaa::Server::Radius::Proxy::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::Mode : public ydk::Entity
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

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Mode


class Native::Aaa::Server::Radius::Proxy::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa : public ydk::Entity
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

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::Timer : public ydk::Entity
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

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::Timer


class Native::Aaa::Server::Radius::Proxy::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIp : public ydk::Entity
{
    public:
        ClientIp();
        ~ClientIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format : public ydk::Entity
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

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
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

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute : public ydk::Entity
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

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode : public ydk::Entity
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

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication : public ydk::Entity
{
    public:
        ReAuthentication();
        ~ReAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_apply; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier : public ydk::Entity
{
    public:
        SessionIdentifier();
        ~SessionIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute; //type: uint8
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa : public ydk::Entity
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

        ydk::YLeaf vendor; //type: uint16
        ydk::YLeaf type; //type: uint8

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer : public ydk::Entity
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

        ydk::YLeaf ip_address; //type: uint16
        ydk::YLeaf reconnect; //type: uint16
        ydk::YLeaf request; //type: uint16
        ydk::YLeaf roaming; //type: uint16
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect : public ydk::Entity
{
    public:
        Disconnect();
        ~Disconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acct_stop; //type: uint16
        ydk::YLeaf reauth_fail; //type: uint16

}; // Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpMask : public ydk::Entity
{
    public:
        ClientIpMask();
        ~ClientIpMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication : public ydk::Entity
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

        ydk::YLeaf port; //type: uint16
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList : public ydk::Entity
{
    public:
        MethodList();
        ~MethodList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method_name; //type: string
        ydk::YLeaf default_; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId : public ydk::Entity
{
    public:
        CallingStationId();
        ~CallingStationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format : public ydk::Entity
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

        ydk::YLeaf msisdn; //type: empty
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
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

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
{
    public:
        OneByte();
        ~OneByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
{
    public:
        ThreeByte();
        ~ThreeByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
{
    public:
        TwoByte();
        ~TwoByte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
{
    public:
        Delimiter();
        ~Delimiter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
{
    public:
        Colon();
        ~Colon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
{
    public:
        Dot();
        ~Dot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
{
    public:
        Hyphen();
        ~Hyphen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
{
    public:
        Unformatted();
        ~Unformatted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser : public ydk::Entity
{
    public:
        EapUser();
        ~EapUser();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_open_session; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack : public ydk::Entity
{
    public:
        Ack();
        ~Ack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word1; //type: string
        ydk::YLeaf word2; //type: string
        ydk::YLeaf word3; //type: string
        ydk::YLeaf word4; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute : public ydk::Entity
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

        ydk::YLeaf allow; //type: string
        ydk::YLeaf block; //type: string

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key : public ydk::Entity
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

        ydk::YLeaf key; //type: Key_
        ydk::YLeaf string; //type: string
        class Key_;

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator : public ydk::Entity
{
    public:
        MessageAuthenticator();
        ~MessageAuthenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode : public ydk::Entity
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

        ydk::YLeaf pass_through; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession : public ydk::Entity
{
    public:
        PwlanSession();
        ~PwlanSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reconnect; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::PwlanSession

class Native::Aaa::Server::Radius::PolicyDevice::Client::Vrf::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::PolicyDevice::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::PolicyDevice::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIp::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

};

class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_119_ */

