#ifndef _CISCO_IOS_XE_NATIVE_120_
#define _CISCO_IOS_XE_NATIVE_120_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_118.hpp"
#include "Cisco_IOS_XE_native_119.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier : public ydk::Entity
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
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer : public ydk::Entity
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
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMask::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf : public ydk::Entity
{
    public:
        ClientIpVrf();
        ~ClientIpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client : public ydk::Entity
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
        ydk::YLeaf vrf; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting : public ydk::Entity
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
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication : public ydk::Entity
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
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId : public ydk::Entity
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

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format : public ydk::Entity
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
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress : public ydk::Entity
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
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator : public ydk::Entity
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

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier : public ydk::Entity
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
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer : public ydk::Entity
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
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf : public ydk::Entity
{
    public:
        ClientIpMaskVrf();
        ~ClientIpMaskVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Client; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client

        ydk::YList client;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client : public ydk::Entity
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
        ydk::YLeaf vrf; //type: string
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting
        class Authentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication
        class CallingStationId; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId
        class EapUser; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser
        class Filter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter
        class Key; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator
        class Mode; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode
        class PwlanSession; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession
        class ReAuthentication; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication
        class SessionIdentifier; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier
        class Timer; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId> calling_station_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser> eap_user;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator> message_authenticator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession> pwlan_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication> re_authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier> session_identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer> timer;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting : public ydk::Entity
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
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication : public ydk::Entity
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
        class MethodList; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList> method_list;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId : public ydk::Entity
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

        class Format; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format> format;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format : public ydk::Entity
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
        class MacAddress; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress> mac_address;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress : public ydk::Entity
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
        class Default; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default
        class Ietf; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf
        class OneByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte
        class ThreeByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte
        class TwoByte; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte
        class Unformatted; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default> default_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf> ietf; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte> one_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte> three_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte> two_byte;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted> unformatted; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte : public ydk::Entity
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

        class Delimiter; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter> delimiter;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter : public ydk::Entity
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

        class Colon; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon
        class Dot; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot
        class Hyphen; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon> colon; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot> dot; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen> hyphen; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter : public ydk::Entity
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

        class Access; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access
        class Accounting; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting
        class Attribute; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute> attribute;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting : public ydk::Entity
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

        class Ack; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack
        class Drop; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop
        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack> ack;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop> drop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore> ignore;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator : public ydk::Entity
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

        class Ignore; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore> ignore; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier : public ydk::Entity
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
        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer : public ydk::Entity
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
        class Disconnect; //type: Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect> disconnect;
        
}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer


class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect


class Native::Aaa::Server::Radius::Proxy::Send : public ydk::Entity
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

        class Vsa; //type: Native::Aaa::Server::Radius::Proxy::Send::Vsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send::Vsa> vsa;
        
}; // Native::Aaa::Server::Radius::Proxy::Send


class Native::Aaa::Server::Radius::Proxy::Send::Vsa : public ydk::Entity
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

        class RpclientSourceAddress; //type: Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress> rpclient_source_address; // presence node
        
}; // Native::Aaa::Server::Radius::Proxy::Send::Vsa


class Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress : public ydk::Entity
{
    public:
        RpclientSourceAddress();
        ~RpclientSourceAddress();

        bool has_data() const override;
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
        ydk::YLeaf authentication; //type: empty

}; // Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress


class Native::Aaa::Server::Radius::Sesm : public ydk::Entity
{
    public:
        Sesm();
        ~Sesm();

        bool has_data() const override;
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
        class Client; //type: Native::Aaa::Server::Radius::Sesm::Client
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Key
        class MessageAuthenticator; //type: Native::Aaa::Server::Radius::Sesm::MessageAuthenticator

        ydk::YList client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::MessageAuthenticator> message_authenticator;
        
}; // Native::Aaa::Server::Radius::Sesm


class Native::Aaa::Server::Radius::Sesm::Client : public ydk::Entity
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
        class Vrf; //type: Native::Aaa::Server::Radius::Sesm::Client::Vrf
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Client::Key

        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Client::Key> key;
        
}; // Native::Aaa::Server::Radius::Sesm::Client


class Native::Aaa::Server::Radius::Sesm::Client::Vrf : public ydk::Entity
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
        class Key; //type: Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key> key;
        
}; // Native::Aaa::Server::Radius::Sesm::Client::Vrf


class Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key


class Native::Aaa::Server::Radius::Sesm::Client::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::Client::Key


class Native::Aaa::Server::Radius::Sesm::Key : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::Key


class Native::Aaa::Server::Radius::Sesm::MessageAuthenticator : public ydk::Entity
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

}; // Native::Aaa::Server::Radius::Sesm::MessageAuthenticator


class Native::Aaa::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf display; //type: Display
        ydk::YLeaf success_track_conf_time; //type: uint8
        class Display;

}; // Native::Aaa::Login


class Native::Aaa::Memory : public ydk::Entity
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

        class Threshold; //type: Native::Aaa::Memory::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold> threshold;
        
}; // Native::Aaa::Memory


class Native::Aaa::Memory::Threshold : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Accounting; //type: Native::Aaa::Memory::Threshold::Accounting
        class Authentication; //type: Native::Aaa::Memory::Threshold::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Memory::Threshold::Authentication> authentication;
        
}; // Native::Aaa::Memory::Threshold


class Native::Aaa::Memory::Threshold::Accounting : public ydk::Entity
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

        ydk::YLeaf disable; //type: uint8

}; // Native::Aaa::Memory::Threshold::Accounting


class Native::Aaa::Memory::Threshold::Authentication : public ydk::Entity
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

        ydk::YLeaf reject; //type: uint8

}; // Native::Aaa::Memory::Threshold::Authentication


class Native::Aaa::Policy : public ydk::Entity
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

        ydk::YLeaf interface_config; //type: InterfaceConfig
        class InterfaceConfig;

}; // Native::Aaa::Policy


class Native::Aaa::Route : public ydk::Entity
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

        class Download; //type: Native::Aaa::Route::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Aaa::Route::Download> download;
        
}; // Native::Aaa::Route


class Native::Aaa::Route::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf update_period; //type: uint16
        ydk::YLeaf authorization; //type: string

}; // Native::Aaa::Route::Download


class Native::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mode; //type: Native::Privilege::Mode

        ydk::YList mode;
        
}; // Native::Privilege


class Native::Privilege::Mode : public ydk::Entity
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

        ydk::YLeaf name; //type: Name
        class All; //type: Native::Privilege::Mode::All
        class Level; //type: Native::Privilege::Mode::Level
        class Reset; //type: Native::Privilege::Mode::Reset

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Privilege::Mode::All> all;
        ydk::YList level;
        ydk::YList reset;
                class Name;

}; // Native::Privilege::Mode


class Native::Privilege::Mode::All : public ydk::Entity
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

        class Level; //type: Native::Privilege::Mode::All::Level
        class Reset; //type: Native::Privilege::Mode::All::Reset

        ydk::YList level;
        ydk::YList reset;
        
}; // Native::Privilege::Mode::All


class Native::Privilege::Mode::All::Level : public ydk::Entity
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

        ydk::YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Mode::All::Level::CommandList

        ydk::YList command_list;
        
}; // Native::Privilege::Mode::All::Level


class Native::Privilege::Mode::All::Level::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Mode::All::Level::CommandList


class Native::Privilege::Mode::All::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Mode::All::Reset


class Native::Privilege::Mode::Level : public ydk::Entity
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

        ydk::YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Mode::Level::CommandList

        ydk::YList command_list;
        
}; // Native::Privilege::Mode::Level


class Native::Privilege::Mode::Level::CommandList : public ydk::Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Mode::Level::CommandList


class Native::Privilege::Mode::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf command; //type: string

}; // Native::Privilege::Mode::Reset


class Native::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: uint8
        class OnFailure; //type: Native::Login::OnFailure
        class OnSuccess; //type: Native::Login::OnSuccess

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnFailure> on_failure; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnSuccess> on_success; // presence node
        
}; // Native::Login


class Native::Login::OnFailure : public ydk::Entity
{
    public:
        OnFailure();
        ~OnFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Log; //type: Native::Login::OnFailure::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnFailure::Log> log; // presence node
        
}; // Native::Login::OnFailure


class Native::Login::OnFailure::Log : public ydk::Entity
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

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnFailure::Log


class Native::Login::OnSuccess : public ydk::Entity
{
    public:
        OnSuccess();
        ~OnSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Log; //type: Native::Login::OnSuccess::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Login::OnSuccess::Log> log; // presence node
        
}; // Native::Login::OnSuccess


class Native::Login::OnSuccess::Log : public ydk::Entity
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

        ydk::YLeaf every; //type: uint16

}; // Native::Login::OnSuccess::Log


class Native::Multilink : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: BundleName
        ydk::YLeaf virtual_template; //type: uint16
        class BundleName;

}; // Native::Multilink


class Native::MacAddressTable : public ydk::Entity
{
    public:
        MacAddressTable();
        ~MacAddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EvcXconnect; //type: Native::MacAddressTable::EvcXconnect
        class Limit; //type: Native::MacAddressTable::Limit
        class Learning; //type: Native::MacAddressTable::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::EvcXconnect> evc_xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::MacAddressTable::Learning> learning;
        
}; // Native::MacAddressTable


class Native::MacAddressTable::EvcXconnect : public ydk::Entity
{
    public:
        EvcXconnect();
        ~EvcXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf l2pt_forward_all; //type: empty

}; // Native::MacAddressTable::EvcXconnect


class Native::MacAddressTable::Limit : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Bdomain; //type: Native::MacAddressTable::Limit::Bdomain

        ydk::YList bdomain;
        
}; // Native::MacAddressTable::Limit


class Native::MacAddressTable::Limit::Bdomain : public ydk::Entity
{
    public:
        Bdomain();
        ~Bdomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf action; //type: Action
        ydk::YLeaf maximum; //type: uint32
        class Action;

}; // Native::MacAddressTable::Limit::Bdomain


class Native::MacAddressTable::Learning : public ydk::Entity
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

        class Vlan; //type: Native::MacAddressTable::Learning::Vlan

        ydk::YList vlan;
        
}; // Native::MacAddressTable::Learning


class Native::MacAddressTable::Learning::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf module; //type: uint8

}; // Native::MacAddressTable::Learning::Vlan


class Native::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maintenance_mode; //type: empty
        ydk::YLeaf mode; //type: Mode
        class MainCpu; //type: Native::Redundancy::MainCpu
        class Policy; //type: Native::Redundancy::Policy
        class Timer; //type: Native::Redundancy::Timer
        class Interchassis; //type: Native::Redundancy::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu> main_cpu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Timer> timer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Interchassis> interchassis;
                class Mode;

}; // Native::Redundancy


class Native::Redundancy::MainCpu : public ydk::Entity
{
    public:
        MainCpu();
        ~MainCpu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AutoSync; //type: Native::Redundancy::MainCpu::AutoSync
        class Standby; //type: Native::Redundancy::MainCpu::Standby

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::AutoSync> auto_sync;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby> standby;
        
}; // Native::Redundancy::MainCpu


class Native::Redundancy::MainCpu::AutoSync : public ydk::Entity
{
    public:
        AutoSync();
        ~AutoSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf config_register; //type: empty
        ydk::YLeaf bootvar; //type: empty
        ydk::YLeaf standard; //type: empty

}; // Native::Redundancy::MainCpu::AutoSync


class Native::Redundancy::MainCpu::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Console; //type: Native::Redundancy::MainCpu::Standby::Console
        class Initialization; //type: Native::Redundancy::MainCpu::Standby::Initialization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Console> console;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization> initialization;
        
}; // Native::Redundancy::MainCpu::Standby


class Native::Redundancy::MainCpu::Standby::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
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

}; // Native::Redundancy::MainCpu::Standby::Console


class Native::Redundancy::MainCpu::Standby::Initialization : public ydk::Entity
{
    public:
        Initialization();
        ~Initialization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Delay; //type: Native::Redundancy::MainCpu::Standby::Initialization::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization::Delay> delay;
        
}; // Native::Redundancy::MainCpu::Standby::Initialization


class Native::Redundancy::MainCpu::Standby::Initialization::Delay : public ydk::Entity
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

        ydk::YLeaf second; //type: uint16
        ydk::YLeaf boot_only; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Initialization::Delay


class Native::Redundancy::Policy : public ydk::Entity
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

        class ConfigSync; //type: Native::Redundancy::Policy::ConfigSync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync> config_sync;
        
}; // Native::Redundancy::Policy


class Native::Redundancy::Policy::ConfigSync : public ydk::Entity
{
    public:
        ConfigSync();
        ~ConfigSync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bulk; //type: Native::Redundancy::Policy::ConfigSync::Bulk
        class Lbl; //type: Native::Redundancy::Policy::ConfigSync::Lbl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk> bulk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl> lbl;
        
}; // Native::Redundancy::Policy::ConfigSync


class Native::Redundancy::Policy::ConfigSync::Bulk : public ydk::Entity
{
    public:
        Bulk();
        ~Bulk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Bulk::Prc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Bulk

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lower_case;
        static const ydk::Enum::YLeaf upper_case;

        static int get_enum_value(const std::string & name) {
            if (name == "lower-case") return 0;
            if (name == "upper-case") return 1;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Sesm::Client::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Server::Radius::Sesm::Key::Key_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Aaa::Login::Display : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_failure;
        static const ydk::Enum::YLeaf last_success;
        static const ydk::Enum::YLeaf number_failures;

        static int get_enum_value(const std::string & name) {
            if (name == "last-failure") return 0;
            if (name == "last-success") return 1;
            if (name == "number-failures") return 2;
            return -1;
        }
};

class Native::Aaa::Policy::InterfaceConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow_subinterface;

        static int get_enum_value(const std::string & name) {
            if (name == "allow-subinterface") return 0;
            return -1;
        }
};

class Native::Privilege::Mode::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configure;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf router;

        static int get_enum_value(const std::string & name) {
            if (name == "configure") return 0;
            if (name == "exec") return 1;
            if (name == "interface") return 2;
            if (name == "router") return 3;
            return -1;
        }
};

class Native::Multilink::BundleName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authenticated;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf endpoint;
        static const ydk::Enum::YLeaf rfc;

        static int get_enum_value(const std::string & name) {
            if (name == "authenticated") return 0;
            if (name == "both") return 1;
            if (name == "endpoint") return 2;
            if (name == "rfc") return 3;
            return -1;
        }
};

class Native::MacAddressTable::Limit::Bdomain::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf limit;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "warning") return 0;
            if (name == "limit") return 1;
            if (name == "shutdown") return 2;
            return -1;
        }
};

class Native::Redundancy::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpr;
        static const ydk::Enum::YLeaf rpr_plus;
        static const ydk::Enum::YLeaf sso;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "rpr") return 0;
            if (name == "rpr-plus") return 1;
            if (name == "sso") return 2;
            if (name == "none") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_120_ */

