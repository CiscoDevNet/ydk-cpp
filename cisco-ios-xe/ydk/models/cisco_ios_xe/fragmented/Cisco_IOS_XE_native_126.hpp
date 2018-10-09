#ifndef _CISCO_IOS_XE_NATIVE_126_
#define _CISCO_IOS_XE_NATIVE_126_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_124.hpp"
#include "Cisco_IOS_XE_native_125.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Ikev2::Redirect::Client : public ydk::Entity
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

        ydk::YLeaf max_redirects; //type: uint8

}; // Native::Crypto::Ikev2::Redirect::Client


class Native::Crypto::Gkm : public ydk::Entity
{
    public:
        Gkm();
        ~Gkm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Group; //type: Native::Crypto::Gkm::Group

        ydk::YList group;
        
}; // Native::Crypto::Gkm


class Native::Crypto::Gkm::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
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
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gkm::Group::Client
        class Identity; //type: Native::Crypto::Gkm::Group::Identity
        class Server; //type: Native::Crypto::Gkm::Group::Server
        class Default; //type: Native::Crypto::Gkm::Group::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default> default_;
        
}; // Native::Crypto::Gkm::Group


class Native::Crypto::Gkm::Group::Client : public ydk::Entity
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

        ydk::YLeaf bypass_policy; //type: empty
        ydk::YLeaf transport_encrypt_key; //type: TransportEncryptKey
        ydk::YLeafList transform_sets; //type: list of  string
        class Protocol; //type: Native::Crypto::Gkm::Group::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gkm::Group::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gkm::Group::Client::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Client::Rekey
        class Status; //type: Native::Crypto::Gkm::Group::Client::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::RecoveryCheck> recovery_check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Status> status;
                class TransportEncryptKey;

}; // Native::Crypto::Gkm::Group::Client


class Native::Crypto::Gkm::Group::Client::Protocol : public ydk::Entity
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

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: string

}; // Native::Crypto::Gkm::Group::Client::Protocol


class Native::Crypto::Gkm::Group::Client::RecoveryCheck : public ydk::Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

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

}; // Native::Crypto::Gkm::Group::Client::RecoveryCheck


class Native::Crypto::Gkm::Group::Client::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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

}; // Native::Crypto::Gkm::Group::Client::Registration


class Native::Crypto::Gkm::Group::Client::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encryption; //type: Native::Crypto::Gkm::Group::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gkm::Group::Client::Rekey::Hash

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Rekey::Hash> hash;
        
}; // Native::Crypto::Gkm::Group::Client::Rekey


class Native::Crypto::Gkm::Group::Client::Rekey::Encryption : public ydk::Entity
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

        ydk::YLeaf rekey_3des_cbc; //type: empty
        ydk::YLeaf aes_128; //type: empty
        ydk::YLeaf aes_192; //type: empty
        ydk::YLeaf aes_256; //type: empty
        ydk::YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gkm::Group::Client::Rekey::Encryption


class Native::Crypto::Gkm::Group::Client::Rekey::Hash : public ydk::Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sha; //type: empty
        ydk::YLeaf sha256; //type: empty
        ydk::YLeaf sha384; //type: empty
        ydk::YLeaf sha512; //type: empty

}; // Native::Crypto::Gkm::Group::Client::Rekey::Hash


class Native::Crypto::Gkm::Group::Client::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveSa; //type: Native::Crypto::Gkm::Group::Client::Status::ActiveSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Client::Status::ActiveSa> active_sa;
        
}; // Native::Crypto::Gkm::Group::Client::Status


class Native::Crypto::Gkm::Group::Client::Status::ActiveSa : public ydk::Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf track; //type: uint16

}; // Native::Crypto::Gkm::Group::Client::Status::ActiveSa


class Native::Crypto::Gkm::Group::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint64
        class Address; //type: Native::Crypto::Gkm::Group::Identity::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Identity::Address> address;
        
}; // Native::Crypto::Gkm::Group::Identity


class Native::Crypto::Gkm::Group::Identity::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Identity::Address


class Native::Crypto::Gkm::Group::Server : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Address
        class Hostname; //type: Native::Crypto::Gkm::Group::Server::Hostname
        class Local; //type: Native::Crypto::Gkm::Group::Server::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local> local;
        
}; // Native::Crypto::Gkm::Group::Server


class Native::Crypto::Gkm::Group::Server::Address : public ydk::Entity
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

        ydk::YLeafList ipv4; //type: list of  string
        ydk::YLeafList ipv6; //type: list of  string

}; // Native::Crypto::Gkm::Group::Server::Address


class Native::Crypto::Gkm::Group::Server::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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

}; // Native::Crypto::Gkm::Group::Server::Hostname


class Native::Crypto::Gkm::Group::Server::Local : public ydk::Entity
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

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: string
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Address
        class Authorization; //type: Native::Crypto::Gkm::Group::Server::Local::Authorization
        class Group_; //type: Native::Crypto::Gkm::Group::Server::Local::Group_
        class Identifier; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier
        class Redundancy; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy
        class Registration; //type: Native::Crypto::Gkm::Group::Server::Local::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey
        class Sa; //type: Native::Crypto::Gkm::Group::Server::Local::Sa
        class Default; //type: Native::Crypto::Gkm::Group::Server::Local::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Group_> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier> identifier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa> sa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default> default_;
        
}; // Native::Crypto::Gkm::Group::Server::Local


class Native::Crypto::Gkm::Group::Server::Local::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Address


class Native::Crypto::Gkm::Group::Server::Local::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identity; //type: string
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Authorization::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Authorization::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Authorization


class Native::Crypto::Gkm::Group::Server::Local::Authorization::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gkm::Group::Server::Local::Authorization::Address


class Native::Crypto::Gkm::Group::Server::Local::Group_ : public ydk::Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Size; //type: Native::Crypto::Gkm::Group::Server::Local::Group_::Size

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Group_::Size> size;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Group_


class Native::Crypto::Gkm::Group::Server::Local::Group_::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf large; //type: empty
        ydk::YLeaf medium; //type: empty
        ydk::YLeaf small; //type: Small
        class Small;

}; // Native::Crypto::Gkm::Group::Server::Local::Group_::Size


class Native::Crypto::Gkm::Group::Server::Local::Identifier : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint8
        class Default; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Default
        class Range; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Range> range;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Identifier


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Default : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint8
        class Range; //type: Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range> range;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Default


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range : public ydk::Entity
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

        ydk::YLeaf lowest; //type: uint8
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf highest; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Default::Range


class Native::Crypto::Gkm::Group::Server::Local::Identifier::Range : public ydk::Entity
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

        ydk::YLeaf lowest; //type: uint8
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf highest; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Identifier::Range


class Native::Crypto::Gkm::Group::Server::Local::Redundancy : public ydk::Entity
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

        class Default; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default
        class Local_; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_
        class Peer; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer
        class Protocol; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default : public ydk::Entity
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

        class Local_; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_
        class Peer; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer
        class Protocol; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_ : public ydk::Entity
{
    public:
        Local_();
        ~Local_();

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

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Local_


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Peer::Address


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol : public ydk::Entity
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

        ydk::YLeaf pdu; //type: uint32
        ydk::YLeaf version; //type: Version
        class Version;

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_ : public ydk::Entity
{
    public:
        Local_();
        ~Local_();

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

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Local_


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Peer::Address


class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol : public ydk::Entity
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

        ydk::YLeaf pdu; //type: uint32
        ydk::YLeaf version; //type: Version
        class Version;

}; // Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol


class Native::Crypto::Gkm::Group::Server::Local::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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
        class Periodic; //type: Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Registration


class Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crl; //type: Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic


class Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl : public ydk::Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trustpoint; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Registration::Periodic::Crl


class Native::Crypto::Gkm::Group::Server::Local::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acknowledgement; //type: Acknowledgement
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash> sig_hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport> transport;
                class Acknowledgement;

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Address


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm : public ydk::Entity
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

        ydk::YLeaf a3des_cbc; //type: empty
        ydk::YLeaf aes_128; //type: empty
        ydk::YLeaf aes_192; //type: empty
        ydk::YLeaf aes_256; //type: empty
        ydk::YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Algorithm


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication : public ydk::Entity
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

        class Mypubkey; //type: Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey> mypubkey;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey : public ydk::Entity
{
    public:
        Mypubkey();
        ~Mypubkey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsa; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Authentication::Mypubkey


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf seconds; //type: uint64

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Lifetime


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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
        ydk::YLeaf number; //type: uint8
        ydk::YLeaf periodic; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Retransmit


class Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash : public ydk::Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algorithm; //type: Algorithm
        class Algorithm;

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash


class Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport : public ydk::Entity
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

        ydk::YLeaf unicast; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Rekey::Transport


class Native::Crypto::Gkm::Group::Server::Local::Sa : public ydk::Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive_only; //type: empty
        class D3p; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::D3p
        class Ipsec; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::D3p> d3p;
        ydk::YList ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying> pair_wise_keying;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa


class Native::Crypto::Gkm::Group::Server::Local::Sa::D3p : public ydk::Entity
{
    public:
        D3p();
        ~D3p();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Window; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window> window;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::D3p


class Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window : public ydk::Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msec; //type: uint32
        ydk::YLeaf sec; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::D3p::Window


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec : public ydk::Entity
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

        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf profile; //type: string
        class Default; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default
        class Match; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match
        class Replay; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay
        class Tag; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay> replay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag> tag;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default : public ydk::Entity
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

        ydk::YLeaf profile; //type: empty
        class Match; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match
        class Replay; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay
        class Tag; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay> replay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag> tag; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address> address; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Match::Address


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Replay


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Default::Tag


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: one of uint16, string
        ydk::YLeaf ipv6; //type: string

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Match::Address


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter
        class Time; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time> time; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter : public ydk::Entity
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

        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window_size; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Time


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cts; //type: Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts> cts;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag


class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts : public ydk::Entity
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

        ydk::YLeaf sgt; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Tag::Cts


class Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying : public ydk::Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf safety_limit; //type: uint8

}; // Native::Crypto::Gkm::Group::Server::Local::Sa::PairWiseKeying


class Native::Crypto::Gkm::Group::Server::Local::Default : public ydk::Entity
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

        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf gikev2; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Address
        class Authorization; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Authorization
        class Group_; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Group_
        class Identifier; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Identifier
        class Redundancy; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy
        class Registration; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey
        class Sa; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Sa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Group_> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy> redundancy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Sa> sa;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default


class Native::Crypto::Gkm::Group::Server::Local::Default::Address : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Address


class Native::Crypto::Gkm::Group::Server::Local::Default::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identity; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address> address;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Authorization


class Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Authorization::Address


class Native::Crypto::Gkm::Group::Server::Local::Default::Group_ : public ydk::Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Size; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size> size; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Group_


class Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Group_::Size


class Native::Crypto::Gkm::Group::Server::Local::Default::Identifier : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Identifier


class Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Redundancy


class Native::Crypto::Gkm::Group::Server::Local::Default::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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
        class Periodic; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Registration


class Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Crl; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic


class Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl : public ydk::Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trustpoint; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Registration::Periodic::Crl


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acknowledgement; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm> algorithm; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash> sig_hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport> transport;
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Address


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Algorithm


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Authentication


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Lifetime


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Retransmit


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash : public ydk::Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algorithm; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::SigHash


class Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport : public ydk::Entity
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

        ydk::YLeaf unicast; //type: empty

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Rekey::Transport


class Native::Crypto::Gkm::Group::Server::Local::Default::Sa : public ydk::Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive_only; //type: empty
        class D3p; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p
        class Ipsec; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p> d3p; // presence node
        ydk::YList ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying> pair_wise_keying; // presence node
        
}; // Native::Crypto::Gkm::Group::Server::Local::Default::Sa


class Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p : public ydk::Entity
{
    public:
        D3p();
        ~D3p();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Sa::D3p


class Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec : public ydk::Entity
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

        ydk::YLeaf sequence; //type: uint16

}; // Native::Crypto::Gkm::Group::Server::Local::Default::Sa::Ipsec


class Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying : public ydk::Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Server::Local::Default::Sa::PairWiseKeying


class Native::Crypto::Gkm::Group::Default : public ydk::Entity
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

        ydk::YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gkm::Group::Default::Client
        class Identity; //type: Native::Crypto::Gkm::Group::Default::Identity
        class Server; //type: Native::Crypto::Gkm::Group::Default::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Identity> identity; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Server> server;
        
}; // Native::Crypto::Gkm::Group::Default


class Native::Crypto::Gkm::Group::Default::Client : public ydk::Entity
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

        ydk::YLeaf bypass_policy; //type: empty
        ydk::YLeaf transform_sets; //type: empty
        ydk::YLeaf transport_encrypt_key; //type: TransportEncryptKey
        class Protocol; //type: Native::Crypto::Gkm::Group::Default::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gkm::Group::Default::Client::Registration
        class Rekey; //type: Native::Crypto::Gkm::Group::Default::Client::Rekey
        class Status; //type: Native::Crypto::Gkm::Group::Default::Client::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck> recovery_check; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Status> status;
                class TransportEncryptKey;

}; // Native::Crypto::Gkm::Group::Default::Client


class Native::Crypto::Gkm::Group::Default::Client::Protocol : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Default::Client::Protocol


class Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck : public ydk::Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Default::Client::RecoveryCheck


class Native::Crypto::Gkm::Group::Default::Client::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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

}; // Native::Crypto::Gkm::Group::Default::Client::Registration


class Native::Crypto::Gkm::Group::Default::Client::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encryption; //type: Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption> encryption; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash> hash; // presence node
        
}; // Native::Crypto::Gkm::Group::Default::Client::Rekey


class Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption : public ydk::Entity
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


}; // Native::Crypto::Gkm::Group::Default::Client::Rekey::Encryption


class Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash : public ydk::Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Default::Client::Rekey::Hash


class Native::Crypto::Gkm::Group::Default::Client::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveSa; //type: Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa> active_sa; // presence node
        
}; // Native::Crypto::Gkm::Group::Default::Client::Status


class Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa : public ydk::Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Default::Client::Status::ActiveSa


class Native::Crypto::Gkm::Group::Default::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Gkm::Group::Default::Identity


class Native::Crypto::Gkm::Group::Default::Server : public ydk::Entity
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

        ydk::YLeaf local; //type: empty
        class Address; //type: Native::Crypto::Gkm::Group::Default::Server::Address
        class Hostname; //type: Native::Crypto::Gkm::Group::Default::Server::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gkm::Group::Default::Server::Hostname> hostname;
        
}; // Native::Crypto::Gkm::Group::Default::Server


class Native::Crypto::Gkm::Group::Default::Server::Address : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string

}; // Native::Crypto::Gkm::Group::Default::Server::Address


class Native::Crypto::Gkm::Group::Default::Server::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

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

}; // Native::Crypto::Gkm::Group::Default::Server::Hostname


class Native::Crypto::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
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
        ydk::YLeaf dn; //type: string
        ydk::YLeaf fqdn; //type: string
        class Default; //type: Native::Crypto::Identity::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Identity::Default> default_;
        
}; // Native::Crypto::Identity


class Native::Crypto::Identity::Default : public ydk::Entity
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
        ydk::YLeaf dn; //type: string
        ydk::YLeaf fqdn; //type: string

}; // Native::Crypto::Identity::Default


class Native::Crypto::Ipsec : public ydk::Entity
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

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        ydk::YLeaf ipv4_deny; //type: Ipv4Deny
        ydk::YLeaf nat_transparency; //type: NatTransparency
        class Optional; //type: Native::Crypto::Ipsec::Optional
        class Profile; //type: Native::Crypto::Ipsec::Profile
        class SecurityAssociation; //type: Native::Crypto::Ipsec::SecurityAssociation
        class TransformSet; //type: Native::Crypto::Ipsec::TransformSet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Optional> optional; // presence node
        ydk::YList profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation> security_association;
        ydk::YList transform_set;
                class DfBit;
        class Fragmentation;
        class Ipv4Deny;
        class NatTransparency;

}; // Native::Crypto::Ipsec


class Native::Crypto::Ipsec::Optional : public ydk::Entity
{
    public:
        Optional();
        ~Optional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf retry; //type: uint32

}; // Native::Crypto::Ipsec::Optional


class Native::Crypto::Ipsec::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
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
        ydk::YLeaf responder_only; //type: empty
        class Default; //type: Native::Crypto::Ipsec::Profile::Default
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Dialer
        class Redundancy; //type: Native::Crypto::Ipsec::Profile::Redundancy
        class Set; //type: Native::Crypto::Ipsec::Profile::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set> set;
        
}; // Native::Crypto::Ipsec::Profile


class Native::Crypto::Ipsec::Profile::Default : public ydk::Entity
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
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf responder_only; //type: empty
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Default::Dialer
        class Set; //type: Native::Crypto::Ipsec::Profile::Default::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set> set;
        
}; // Native::Crypto::Ipsec::Profile::Default


class Native::Crypto::Ipsec::Profile::Default::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default::Dialer


class Native::Crypto::Ipsec::Profile::Default::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: empty
        ydk::YLeaf mixed_mode; //type: empty
        ydk::YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Default::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation> security_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Default::Set


class Native::Crypto::Ipsec::Profile::Default::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default::Set::Pfs


class Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay> replay;
                class Level;

}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

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
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy : public ydk::Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Default::Set::SecurityPolicy


class Native::Crypto::Ipsec::Profile::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::Ipsec::Profile::Dialer


class Native::Crypto::Ipsec::Profile::Redundancy : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Crypto::Ipsec::Profile::Redundancy


class Native::Crypto::Ipsec::Profile::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf identity; //type: string
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf mixed_mode; //type: empty
        ydk::YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::Ipsec::Profile::Set::Peer
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityPolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::ReverseRoute> reverse_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation> security_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Set


class Native::Crypto::Ipsec::Profile::Set::Peer : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf dynamic; //type: empty

}; // Native::Crypto::Ipsec::Profile::Set::Peer


class Native::Crypto::Ipsec::Profile::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Crypto::Ipsec::Profile::Set::Pfs


class Native::Crypto::Ipsec::Profile::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf tag; //type: uint64

}; // Native::Crypto::Ipsec::Profile::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: Dfbit
        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay> replay;
                class Dfbit;
        class Ecn;
        class Level;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

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
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Set::SecurityPolicy : public ydk::Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Set::SecurityPolicy


class Native::Crypto::Ipsec::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf idle_time; //type: uint32
        class Dummy; //type: Native::Crypto::Ipsec::SecurityAssociation::Dummy
        class Lifetime; //type: Native::Crypto::Ipsec::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Replay> replay;
                class Ecn;

}; // Native::Crypto::Ipsec::SecurityAssociation


class Native::Crypto::Ipsec::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::Ipsec::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::SecurityAssociation::Lifetime : public ydk::Entity
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

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::Ipsec::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
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
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Ipsec::SecurityAssociation::Replay


class Native::Crypto::Ipsec::TransformSet : public ydk::Entity
{
    public:
        TransformSet();
        ~TransformSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: string
        ydk::YLeaf ah_hmac; //type: AhHmac
        ydk::YLeaf comp_lzs; //type: empty
        ydk::YLeaf esp; //type: Esp
        ydk::YLeaf key_bit; //type: KeyBit
        ydk::YLeaf esp_hmac; //type: EspHmac
        class Default; //type: Native::Crypto::Ipsec::TransformSet::Default
        class Mode; //type: Native::Crypto::Ipsec::TransformSet::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode> mode;
                class AhHmac;
        class Esp;
        class KeyBit;
        class EspHmac;

}; // Native::Crypto::Ipsec::TransformSet


class Native::Crypto::Ipsec::TransformSet::Default : public ydk::Entity
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

        ydk::YLeaf mode; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Default


class Native::Crypto::Ipsec::TransformSet::Mode : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: empty
        class Transport; //type: Native::Crypto::Ipsec::TransformSet::Mode::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode::Transport> transport; // presence node
        
}; // Native::Crypto::Ipsec::TransformSet::Mode


class Native::Crypto::Ipsec::TransformSet::Mode::Transport : public ydk::Entity
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

        ydk::YLeaf require; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Mode::Transport


class Native::Crypto::Key : public ydk::Entity
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

        ydk::YLeaf storage; //type: string
        class Decrypt; //type: Native::Crypto::Key::Decrypt
        class Encrypt; //type: Native::Crypto::Key::Encrypt
        class Export; //type: Native::Crypto::Key::Export
        class Generate; //type: Native::Crypto::Key::Generate
        class Import; //type: Native::Crypto::Key::Import
        class Move; //type: Native::Crypto::Key::Move
        class PubkeyChain; //type: Native::Crypto::Key::PubkeyChain
        class Zeroize; //type: Native::Crypto::Key::Zeroize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt> decrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt> encrypt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Generate> generate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Move> move;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::PubkeyChain> pubkey_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Zeroize> zeroize;
        
}; // Native::Crypto::Key


class Native::Crypto::Key::Decrypt : public ydk::Entity
{
    public:
        Decrypt();
        ~Decrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ec; //type: Native::Crypto::Key::Decrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Rsa
        class Write; //type: Native::Crypto::Key::Decrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write> write;
        
}; // Native::Crypto::Key::Decrypt


class Native::Crypto::Key::Decrypt::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Ec


class Native::Crypto::Key::Decrypt::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Rsa


class Native::Crypto::Key::Decrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ec; //type: Native::Crypto::Key::Decrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Decrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Decrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Decrypt::Write


class Native::Crypto::Key::Decrypt::Write::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Ec


class Native::Crypto::Key::Decrypt::Write::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Decrypt::Write::Rsa


class Native::Crypto::Key::Encrypt : public ydk::Entity
{
    public:
        Encrypt();
        ~Encrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ec; //type: Native::Crypto::Key::Encrypt::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Rsa
        class Write; //type: Native::Crypto::Key::Encrypt::Write

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Rsa> rsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write> write;
        
}; // Native::Crypto::Key::Encrypt


class Native::Crypto::Key::Encrypt::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Ec


class Native::Crypto::Key::Encrypt::Rsa : public ydk::Entity
{
    public:
        Rsa();
        ~Rsa();

        bool has_data() const override;
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
        ydk::YLeaf passphrase; //type: string

}; // Native::Crypto::Key::Encrypt::Rsa


class Native::Crypto::Key::Encrypt::Write : public ydk::Entity
{
    public:
        Write();
        ~Write();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ec; //type: Native::Crypto::Key::Encrypt::Write::Ec
        class Rsa; //type: Native::Crypto::Key::Encrypt::Write::Rsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Ec> ec; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Key::Encrypt::Write::Rsa> rsa; // presence node
        
}; // Native::Crypto::Key::Encrypt::Write

class Native::Crypto::Gkm::Group::Client::TransportEncryptKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group_key;
        static const ydk::Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Gkm::Group::Server::Local::Group_::Size::Small : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_12;
        static const ydk::Enum::YLeaf Y_16;
        static const ydk::Enum::YLeaf Y_8;

};

class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Default::Protocol::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf optimize;

};

class Native::Crypto::Gkm::Group::Server::Local::Redundancy::Protocol::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf optimize;

};

class Native::Crypto::Gkm::Group::Server::Local::Rekey::Acknowledgement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf interoperable;

};

class Native::Crypto::Gkm::Group::Server::Local::Rekey::SigHash::Algorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha;
        static const ydk::Enum::YLeaf sha256;
        static const ydk::Enum::YLeaf sha384;
        static const ydk::Enum::YLeaf sha512;

};

class Native::Crypto::Gkm::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Gkm::Group::Default::Client::TransportEncryptKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group_key;
        static const ydk::Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Crypto::Ipsec::Ipv4Deny : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf jump;

};

class Native::Crypto::Ipsec::NatTransparency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spi_matching;
        static const ydk::Enum::YLeaf udp_encapsulation;

};

class Native::Crypto::Ipsec::Profile::Default::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::Ipsec::Profile::Set::Pfs::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group1;
        static const ydk::Enum::YLeaf group14;
        static const ydk::Enum::YLeaf group15;
        static const ydk::Enum::YLeaf group16;
        static const ydk::Enum::YLeaf group19;
        static const ydk::Enum::YLeaf group2;
        static const ydk::Enum::YLeaf group20;
        static const ydk::Enum::YLeaf group21;
        static const ydk::Enum::YLeaf group24;
        static const ydk::Enum::YLeaf group5;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::TransformSet::AhHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ah_md5_hmac;
        static const ydk::Enum::YLeaf ah_sha_hmac;
        static const ydk::Enum::YLeaf ah_sha256_hmac;
        static const ydk::Enum::YLeaf ah_sha384_hmac;
        static const ydk::Enum::YLeaf ah_sha512_hmac;

};

class Native::Crypto::Ipsec::TransformSet::Esp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_3des;
        static const ydk::Enum::YLeaf esp_aes;
        static const ydk::Enum::YLeaf esp_des;
        static const ydk::Enum::YLeaf esp_gcm;
        static const ydk::Enum::YLeaf esp_gmac;
        static const ydk::Enum::YLeaf esp_null;
        static const ydk::Enum::YLeaf esp_seal;

};

class Native::Crypto::Ipsec::TransformSet::KeyBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_192;
        static const ydk::Enum::YLeaf Y_256;

};

class Native::Crypto::Ipsec::TransformSet::EspHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_md5_hmac;
        static const ydk::Enum::YLeaf esp_sha_hmac;
        static const ydk::Enum::YLeaf esp_sha256_hmac;
        static const ydk::Enum::YLeaf esp_sha384_hmac;
        static const ydk::Enum::YLeaf esp_sha512_hmac;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_126_ */

