#ifndef _CISCO_IOS_XE_NATIVE_125_
#define _CISCO_IOS_XE_NATIVE_125_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_124.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Peer::Address


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_ : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol


class Native::Crypto::Gdoi::Group::Server::Local::Registration : public ydk::Entity
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
        class Periodic; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Registration


class Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic : public ydk::Entity
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

        class Crl; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic


class Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl


class Native::Crypto::Gdoi::Group::Server::Local::Rekey : public ydk::Entity
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
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash> sig_hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport> transport;
                class Acknowledgement;

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication : public ydk::Entity
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

        class Mypubkey; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey> mypubkey;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport


class Native::Crypto::Gdoi::Group::Server::Local::Sa : public ydk::Entity
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
        class D3p; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p
        class Ipsec; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p> d3p;
        ydk::YList ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying> pair_wise_keying;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa


class Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p : public ydk::Entity
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

        class Window; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window> window;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p


class Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::D3p::Window


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec : public ydk::Entity
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
        class Default; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default
        class Match; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match
        class Replay; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay
        class Tag; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay> replay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag> tag;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default : public ydk::Entity
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
        class Match; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match
        class Replay; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay
        class Tag; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay> replay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag> tag; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address> address; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay : public ydk::Entity
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

        class Counter; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter
        class Time; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time> time; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag : public ydk::Entity
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

        class Cts; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts> cts;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts


class Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Server::Local::Default : public ydk::Entity
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
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Address
        class Authorization; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization
        class Group_; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Group_
        class Identifier; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier
        class Redundancy; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy
        class Registration; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey
        class Sa; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Sa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Group_> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy> redundancy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Sa> sa;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default


class Native::Crypto::Gdoi::Group::Server::Local::Default::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization : public ydk::Entity
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
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization


class Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Authorization::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default::Group_ : public ydk::Entity
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

        class Size; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size> size; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Group_


class Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Group_::Size


class Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Identifier


class Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Redundancy


class Native::Crypto::Gdoi::Group::Server::Local::Default::Registration : public ydk::Entity
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
        class Periodic; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Registration


class Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic : public ydk::Entity
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

        class Crl; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic


class Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Registration::Periodic::Crl


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey : public ydk::Entity
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
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address> address; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm> algorithm; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash> sig_hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport> transport;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Algorithm


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Authentication


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Lifetime


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Retransmit


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::SigHash


class Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Rekey::Transport


class Native::Crypto::Gdoi::Group::Server::Local::Default::Sa : public ydk::Entity
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
        class D3p; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p
        class Ipsec; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p> d3p; // presence node
        ydk::YList ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying> pair_wise_keying; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Sa


class Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::D3p


class Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::Ipsec


class Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Server::Local::Default::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Default : public ydk::Entity
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
        class Client; //type: Native::Crypto::Gdoi::Group::Default::Client
        class Identity; //type: Native::Crypto::Gdoi::Group::Default::Identity
        class Server; //type: Native::Crypto::Gdoi::Group::Default::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Identity> identity; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Server> server;
        
}; // Native::Crypto::Gdoi::Group::Default


class Native::Crypto::Gdoi::Group::Default::Client : public ydk::Entity
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
        class Protocol; //type: Native::Crypto::Gdoi::Group::Default::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gdoi::Group::Default::Client::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Default::Client::Rekey
        class Status; //type: Native::Crypto::Gdoi::Group::Default::Client::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck> recovery_check; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Rekey> rekey;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Status> status;
                class TransportEncryptKey;

}; // Native::Crypto::Gdoi::Group::Default::Client


class Native::Crypto::Gdoi::Group::Default::Client::Protocol : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Client::Protocol


class Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Client::RecoveryCheck


class Native::Crypto::Gdoi::Group::Default::Client::Registration : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Default::Client::Registration


class Native::Crypto::Gdoi::Group::Default::Client::Rekey : public ydk::Entity
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

        class Encryption; //type: Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption> encryption; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash> hash; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default::Client::Rekey


class Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Client::Rekey::Encryption


class Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Client::Rekey::Hash


class Native::Crypto::Gdoi::Group::Default::Client::Status : public ydk::Entity
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

        class ActiveSa; //type: Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa> active_sa; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default::Client::Status


class Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Client::Status::ActiveSa


class Native::Crypto::Gdoi::Group::Default::Identity : public ydk::Entity
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


}; // Native::Crypto::Gdoi::Group::Default::Identity


class Native::Crypto::Gdoi::Group::Default::Server : public ydk::Entity
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
        class Address; //type: Native::Crypto::Gdoi::Group::Default::Server::Address
        class Hostname; //type: Native::Crypto::Gdoi::Group::Default::Server::Hostname

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Server::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default::Server::Hostname> hostname;
        
}; // Native::Crypto::Gdoi::Group::Default::Server


class Native::Crypto::Gdoi::Group::Default::Server::Address : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Default::Server::Address


class Native::Crypto::Gdoi::Group::Default::Server::Hostname : public ydk::Entity
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

}; // Native::Crypto::Gdoi::Group::Default::Server::Hostname


class Native::Crypto::Ikev2 : public ydk::Entity
{
    public:
        Ikev2();
        ~Ikev2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf certificate_cache; //type: uint16
        ydk::YLeaf cookie_challenge; //type: uint16
        ydk::YLeaf disconnect_revoked_peers; //type: empty
        ydk::YLeaf window; //type: uint8
        class Authorization; //type: Native::Crypto::Ikev2::Authorization
        class Client; //type: Native::Crypto::Ikev2::Client
        class Cluster; //type: Native::Crypto::Ikev2::Cluster
        class Cts; //type: Native::Crypto::Ikev2::Cts
        class Diagnose; //type: Native::Crypto::Ikev2::Diagnose
        class DpdContainer; //type: Native::Crypto::Ikev2::DpdContainer
        class Fragmentation; //type: Native::Crypto::Ikev2::Fragmentation
        class HttpUrl; //type: Native::Crypto::Ikev2::HttpUrl
        class Keyring; //type: Native::Crypto::Ikev2::Keyring
        class Limit; //type: Native::Crypto::Ikev2::Limit
        class NameMangler; //type: Native::Crypto::Ikev2::NameMangler
        class Nat; //type: Native::Crypto::Ikev2::Nat
        class Policy; //type: Native::Crypto::Ikev2::Policy
        class Profile; //type: Native::Crypto::Ikev2::Profile
        class Proposal; //type: Native::Crypto::Ikev2::Proposal
        class Reconnect; //type: Native::Crypto::Ikev2::Reconnect
        class Redirect; //type: Native::Crypto::Ikev2::Redirect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cluster> cluster;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Diagnose> diagnose;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::DpdContainer> dpd_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Fragmentation> fragmentation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::HttpUrl> http_url;
        ydk::YList keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit> limit;
        ydk::YList name_mangler;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Nat> nat;
        ydk::YList policy;
        ydk::YList profile;
        ydk::YList proposal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Reconnect> reconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Redirect> redirect;
        
}; // Native::Crypto::Ikev2


class Native::Crypto::Ikev2::Authorization : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Crypto::Ikev2::Authorization::Policy

        ydk::YList policy;
        
}; // Native::Crypto::Ikev2::Authorization


class Native::Crypto::Ikev2::Authorization::Policy : public ydk::Entity
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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf backup_gateway; //type: string
        class Route; //type: Native::Crypto::Ikev2::Authorization::Policy::Route
        class Ipv6; //type: Native::Crypto::Ikev2::Authorization::Policy::Ipv6
        class Pool; //type: Native::Crypto::Ikev2::Authorization::Policy::Pool
        class Aaa; //type: Native::Crypto::Ikev2::Authorization::Policy::Aaa
        class SplitDns; //type: Native::Crypto::Ikev2::Authorization::Policy::SplitDns
        class Dns; //type: Native::Crypto::Ikev2::Authorization::Policy::Dns
        class Dhcp; //type: Native::Crypto::Ikev2::Authorization::Policy::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Pool> pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Aaa> aaa;
        ydk::YList split_dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Dhcp> dhcp;
        
}; // Native::Crypto::Ikev2::Authorization::Policy


class Native::Crypto::Ikev2::Authorization::Policy::Route : public ydk::Entity
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

        class Set; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set
        class Accept; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Accept

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set> set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Accept> accept;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set : public ydk::Entity
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

        class Interface; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface
        class AccessList; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList
        class Remote; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote
        class Local; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote> remote;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local> local;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface : public ydk::Entity
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

        ydk::YLeaf interface_default; //type: empty
        class InterfaceList; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList

        ydk::YList interface_list;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList : public ydk::Entity
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

        ydk::YLeaf access_list_range; //type: one of uint16, string
        class Ipv6; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6> ipv6;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6 : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::AccessList::Ipv6


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4
        class Ipv6; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6

        ydk::YList ipv4;
        ydk::YList ipv6;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4 : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv4


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6 : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Remote::Ipv6


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local : public ydk::Entity
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

        class Ipv4; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4
        class Ipv6; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6

        ydk::YList ipv4;
        ydk::YList ipv6;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4 : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ipv4_mask; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint16

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv4


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6 : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint16

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Local::Ipv6


class Native::Crypto::Ikev2::Authorization::Policy::Route::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Any; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any> any;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Accept


class Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any : public ydk::Entity
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

        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf tag; //type: uint64

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Accept::Any


class Native::Crypto::Ikev2::Authorization::Policy::Ipv6 : public ydk::Entity
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

        class Dns; //type: Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns
        class Pool; //type: Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool> pool;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Ipv6


class Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns : public ydk::Entity
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

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Dns


class Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool : public ydk::Entity
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

        ydk::YLeaf pool_name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Ipv6::Pool


class Native::Crypto::Ikev2::Authorization::Policy::Pool : public ydk::Entity
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

        ydk::YLeaf pool_name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Pool


class Native::Crypto::Ikev2::Authorization::Policy::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attribute; //type: Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute> attribute;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Aaa


class Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute : public ydk::Entity
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

        ydk::YLeaf aaa_attribute_list; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Aaa::Attribute


class Native::Crypto::Ikev2::Authorization::Policy::SplitDns : public ydk::Entity
{
    public:
        SplitDns();
        ~SplitDns();

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

}; // Native::Crypto::Ikev2::Authorization::Policy::SplitDns


class Native::Crypto::Ikev2::Authorization::Policy::Dns : public ydk::Entity
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

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Dns


class Native::Crypto::Ikev2::Authorization::Policy::Dhcp : public ydk::Entity
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

        ydk::YLeaf giaddr; //type: string
        ydk::YLeaf server; //type: string
        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Ikev2::Authorization::Policy::Dhcp


class Native::Crypto::Ikev2::Client : public ydk::Entity
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

        class Flexvpn; //type: Native::Crypto::Ikev2::Client::Flexvpn

        ydk::YList flexvpn;
        
}; // Native::Crypto::Ikev2::Client


class Native::Crypto::Ikev2::Client::Flexvpn : public ydk::Entity
{
    public:
        Flexvpn();
        ~Flexvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flexvpn_name; //type: string
        class Peer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer
        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Connect
        class Source; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source
        class Client_; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_
        class Backup; //type: Native::Crypto::Ikev2::Client::Flexvpn::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Connect> connect;
        ydk::YList source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Backup> backup;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn


class Native::Crypto::Ikev2::Client::Flexvpn::Peer : public ydk::Entity
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

        ydk::YLeaf reactivate; //type: empty
        class PeerIdList; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList

        ydk::YList peer_id_list;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer


class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList : public ydk::Entity
{
    public:
        PeerIdList();
        ~PeerIdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: uint8
        class PeerIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer> peer_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList


class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer : public ydk::Entity
{
    public:
        PeerIdContainer();
        ~PeerIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf track; //type: uint16
        ydk::YLeaf up_down; //type: UpDown
        class UpDown;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Connect : public ydk::Entity
{
    public:
        Connect();
        ~Connect();

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
        ydk::YLeaf up_down; //type: UpDown
        class UpDown;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Connect


class Native::Crypto::Ikev2::Client::Flexvpn::Source : public ydk::Entity
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

        ydk::YLeaf source_id; //type: uint8
        class SourceIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer> source_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Source


class Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer : public ydk::Entity
{
    public:
        SourceIdContainer();
        ~SourceIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf track; //type: uint16

}; // Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Client_ : public ydk::Entity
{
    public:
        Client_();
        ~Client_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect> connect;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_


class Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect : public ydk::Entity
{
    public:
        Connect();
        ~Connect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect


class Native::Crypto::Ikev2::Client::Flexvpn::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group> group;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Backup


class Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group : public ydk::Entity
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

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf default_; //type: boolean

}; // Native::Crypto::Ikev2::Client::Flexvpn::Backup::Group


class Native::Crypto::Ikev2::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Slave; //type: Native::Crypto::Ikev2::Cluster::Slave
        class StandbyGroup; //type: Native::Crypto::Ikev2::Cluster::StandbyGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cluster::Slave> slave;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cluster::StandbyGroup> standby_group;
        
}; // Native::Crypto::Ikev2::Cluster


class Native::Crypto::Ikev2::Cluster::Slave : public ydk::Entity
{
    public:
        Slave();
        ~Slave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf max_session; //type: uint32
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf update; //type: uint32

}; // Native::Crypto::Ikev2::Cluster::Slave


class Native::Crypto::Ikev2::Cluster::StandbyGroup : public ydk::Entity
{
    public:
        StandbyGroup();
        ~StandbyGroup();

        bool has_data() const override;
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

}; // Native::Crypto::Ikev2::Cluster::StandbyGroup


class Native::Crypto::Ikev2::Cts : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf sgt; //type: empty

}; // Native::Crypto::Ikev2::Cts


class Native::Crypto::Ikev2::Diagnose : public ydk::Entity
{
    public:
        Diagnose();
        ~Diagnose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf error; //type: uint16

}; // Native::Crypto::Ikev2::Diagnose


class Native::Crypto::Ikev2::DpdContainer : public ydk::Entity
{
    public:
        DpdContainer();
        ~DpdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dpd; //type: uint16
        ydk::YLeaf retry_interval; //type: uint8
        ydk::YLeaf dpd_query; //type: DpdQuery
        class DpdQuery;

}; // Native::Crypto::Ikev2::DpdContainer


class Native::Crypto::Ikev2::Fragmentation : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf mtu; //type: uint16

}; // Native::Crypto::Ikev2::Fragmentation


class Native::Crypto::Ikev2::HttpUrl : public ydk::Entity
{
    public:
        HttpUrl();
        ~HttpUrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cert; //type: empty

}; // Native::Crypto::Ikev2::HttpUrl


class Native::Crypto::Ikev2::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
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
        class Peer; //type: Native::Crypto::Ikev2::Keyring::Peer

        ydk::YList peer;
        
}; // Native::Crypto::Ikev2::Keyring


class Native::Crypto::Ikev2::Keyring::Peer : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf hostname; //type: string
        class Address; //type: Native::Crypto::Ikev2::Keyring::Peer::Address
        class Identity; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity
        class PreSharedKey; //type: Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey> pre_shared_key;
        
}; // Native::Crypto::Ikev2::Keyring::Peer


class Native::Crypto::Ikev2::Keyring::Peer::Address : public ydk::Entity
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

        ydk::YLeaf ipv6_prefix; //type: string
        class Ipv4; //type: Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4> ipv4;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Address


class Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4


class Native::Crypto::Ikev2::Keyring::Peer::Identity : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf key_id; //type: string
        class Email; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Email> email;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Identity


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Email : public ydk::Entity
{
    public:
        Email();
        ~Email();

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
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Email


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn : public ydk::Entity
{
    public:
        Fqdn();
        ~Fqdn();

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
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn


class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey : public ydk::Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

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
        ydk::YLeaf remote; //type: empty
        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        ydk::YLeaf hex; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey


class Native::Crypto::Ikev2::Limit : public ydk::Entity
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

        ydk::YLeaf max_sa; //type: uint32
        class MaxNegSa; //type: Native::Crypto::Ikev2::Limit::MaxNegSa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit::MaxNegSa> max_neg_sa;
        
}; // Native::Crypto::Ikev2::Limit


class Native::Crypto::Ikev2::Limit::MaxNegSa : public ydk::Entity
{
    public:
        MaxNegSa();
        ~MaxNegSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf max_in_negotation_sa; //type: uint32
        ydk::YLeaf direction; //type: Direction
        class Direction;

}; // Native::Crypto::Ikev2::Limit::MaxNegSa


class Native::Crypto::Ikev2::NameMangler : public ydk::Entity
{
    public:
        NameMangler();
        ~NameMangler();

        bool has_data() const override;
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
        ydk::YLeaf dn; //type: Dn
        ydk::YLeaf email; //type: Email
        ydk::YLeaf fqdn; //type: Fqdn
        class Eap; //type: Native::Crypto::Ikev2::NameMangler::Eap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::Eap> eap;
                class Dn;
        class Email;
        class Fqdn;

}; // Native::Crypto::Ikev2::NameMangler


class Native::Crypto::Ikev2::NameMangler::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dn; //type: Dn
        ydk::YLeaf all; //type: empty
        class Prefix; //type: Native::Crypto::Ikev2::NameMangler::Eap::Prefix
        class Suffix; //type: Native::Crypto::Ikev2::NameMangler::Eap::Suffix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::Eap::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::Eap::Suffix> suffix;
                class Dn;

}; // Native::Crypto::Ikev2::NameMangler::Eap


class Native::Crypto::Ikev2::NameMangler::Eap::Prefix : public ydk::Entity
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

        class Delimiter; //type: Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter> delimiter;
        
}; // Native::Crypto::Ikev2::NameMangler::Eap::Prefix


class Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter : public ydk::Entity
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

        ydk::YLeaf dot; //type: empty
        ydk::YLeaf at_sign; //type: empty
        ydk::YLeaf slash_sign; //type: empty

}; // Native::Crypto::Ikev2::NameMangler::Eap::Prefix::Delimiter


class Native::Crypto::Ikev2::NameMangler::Eap::Suffix : public ydk::Entity
{
    public:
        Suffix();
        ~Suffix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delimiter; //type: Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter> delimiter;
        
}; // Native::Crypto::Ikev2::NameMangler::Eap::Suffix


class Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter : public ydk::Entity
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

        ydk::YLeaf dot; //type: empty
        ydk::YLeaf at_sign; //type: empty
        ydk::YLeaf slash_sign; //type: empty

}; // Native::Crypto::Ikev2::NameMangler::Eap::Suffix::Delimiter


class Native::Crypto::Ikev2::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf keepalive; //type: uint16

}; // Native::Crypto::Ikev2::Nat


class Native::Crypto::Ikev2::Policy : public ydk::Entity
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
        ydk::YLeaf proposal; //type: string
        class Match; //type: Native::Crypto::Ikev2::Policy::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match> match;
        
}; // Native::Crypto::Ikev2::Policy


class Native::Crypto::Ikev2::Policy::Match : public ydk::Entity
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

        class Address; //type: Native::Crypto::Ikev2::Policy::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Policy::Match::Fvrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Fvrf> fvrf;
        
}; // Native::Crypto::Ikev2::Policy::Match


class Native::Crypto::Ikev2::Policy::Match::Address : public ydk::Entity
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

        ydk::YLeaf local; //type: string

}; // Native::Crypto::Ikev2::Policy::Match::Address


class Native::Crypto::Ikev2::Policy::Match::Fvrf : public ydk::Entity
{
    public:
        Fvrf();
        ~Fvrf();

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
        ydk::YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Policy::Match::Fvrf


class Native::Crypto::Ikev2::Profile : public ydk::Entity
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
        ydk::YLeaf ivrf; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Aaa; //type: Native::Crypto::Ikev2::Profile::Aaa
        class Authentication; //type: Native::Crypto::Ikev2::Profile::Authentication
        class ConfigExchange; //type: Native::Crypto::Ikev2::Profile::ConfigExchange
        class Dpd; //type: Native::Crypto::Ikev2::Profile::Dpd
        class Identity; //type: Native::Crypto::Ikev2::Profile::Identity
        class InitialContact; //type: Native::Crypto::Ikev2::Profile::InitialContact
        class Keyring; //type: Native::Crypto::Ikev2::Profile::Keyring
        class Lifetime; //type: Native::Crypto::Ikev2::Profile::Lifetime
        class Match; //type: Native::Crypto::Ikev2::Profile::Match
        class Nat; //type: Native::Crypto::Ikev2::Profile::Nat
        class Pki; //type: Native::Crypto::Ikev2::Profile::Pki
        class Reconnect; //type: Native::Crypto::Ikev2::Profile::Reconnect
        class Redirect; //type: Native::Crypto::Ikev2::Profile::Redirect
        class VirtualTemplate; //type: Native::Crypto::Ikev2::Profile::VirtualTemplate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa> aaa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::ConfigExchange> config_exchange;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Dpd> dpd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity> identity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::InitialContact> initial_contact;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring> keyring;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Pki> pki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Reconnect> reconnect; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::VirtualTemplate> virtual_template;
        
}; // Native::Crypto::Ikev2::Profile


class Native::Crypto::Ikev2::Profile::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: Native::Crypto::Ikev2::Profile::Aaa::Accounting
        class Authentication; //type: Native::Crypto::Ikev2::Profile::Aaa::Authentication
        class Authorization; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization> authorization;
        
}; // Native::Crypto::Ikev2::Profile::Aaa


class Native::Crypto::Ikev2::Profile::Aaa::Accounting : public ydk::Entity
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

        ydk::YLeaf anyconnect_eap; //type: string
        ydk::YLeaf cert; //type: string
        ydk::YLeaf eap; //type: string
        ydk::YLeaf psk; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Accounting


class Native::Crypto::Ikev2::Profile::Aaa::Authentication : public ydk::Entity
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

        ydk::YLeaf anyconnect_eap; //type: string
        ydk::YLeaf eap; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Authentication


class Native::Crypto::Ikev2::Profile::Aaa::Authorization : public ydk::Entity
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

        class Group; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group
        class User; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User> user;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group : public ydk::Entity
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

        ydk::YLeaf override; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert> cert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List

        ydk::YList list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf password; //type: empty
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        class NameMangler; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler> name_mangler;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler : public ydk::Entity
{
    public:
        NameMangler();
        ~NameMangler();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::NameMangler::name)
        ydk::YLeaf name;
        ydk::YLeaf password; //type: empty
        ydk::YLeaf encryption; //type: uint8
        ydk::YLeaf key; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::NameMangler


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert : public ydk::Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List

        ydk::YList list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert

class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default::Protocol::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf optimize;

        static int get_enum_value(const std::string & name) {
            if (name == "base") return 0;
            if (name == "optimize") return 1;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf optimize;

        static int get_enum_value(const std::string & name) {
            if (name == "base") return 0;
            if (name == "optimize") return 1;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf interoperable;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            if (name == "cisco") return 1;
            if (name == "interoperable") return 2;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha;
        static const ydk::Enum::YLeaf sha256;
        static const ydk::Enum::YLeaf sha384;
        static const ydk::Enum::YLeaf sha512;

        static int get_enum_value(const std::string & name) {
            if (name == "sha") return 0;
            if (name == "sha256") return 1;
            if (name == "sha384") return 2;
            if (name == "sha512") return 3;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

        static int get_enum_value(const std::string & name) {
            if (name == "1024") return 0;
            if (name == "128") return 1;
            if (name == "256") return 2;
            if (name == "512") return 3;
            if (name == "64") return 4;
            return -1;
        }
};

class Native::Crypto::Gdoi::Group::Default::Client::TransportEncryptKey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group_key;
        static const ydk::Enum::YLeaf pair_wise_key;

        static int get_enum_value(const std::string & name) {
            if (name == "group-key") return 0;
            if (name == "pair-wise-key") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdList::PeerIdContainer::UpDown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::DpdContainer::DpdQuery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

        static int get_enum_value(const std::string & name) {
            if (name == "on-demand") return 0;
            if (name == "periodic") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::Limit::MaxNegSa::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incoming;
        static const ydk::Enum::YLeaf outgoing;

        static int get_enum_value(const std::string & name) {
            if (name == "incoming") return 0;
            if (name == "outgoing") return 1;
            return -1;
        }
};

class Native::Crypto::Ikev2::NameMangler::Dn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common_name;
        static const ydk::Enum::YLeaf country;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf locality;
        static const ydk::Enum::YLeaf organization;
        static const ydk::Enum::YLeaf organization_unit;
        static const ydk::Enum::YLeaf state;

        static int get_enum_value(const std::string & name) {
            if (name == "common-name") return 0;
            if (name == "country") return 1;
            if (name == "domain") return 2;
            if (name == "locality") return 3;
            if (name == "organization") return 4;
            if (name == "organization-unit") return 5;
            if (name == "state") return 6;
            return -1;
        }
};

class Native::Crypto::Ikev2::NameMangler::Email : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf username;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "domain") return 1;
            if (name == "username") return 2;
            return -1;
        }
};

class Native::Crypto::Ikev2::NameMangler::Fqdn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf hostname;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "domain") return 1;
            if (name == "hostname") return 2;
            return -1;
        }
};

class Native::Crypto::Ikev2::NameMangler::Eap::Dn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf common_name;
        static const ydk::Enum::YLeaf country;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf locality;
        static const ydk::Enum::YLeaf organization;
        static const ydk::Enum::YLeaf organization_unit;
        static const ydk::Enum::YLeaf state;

        static int get_enum_value(const std::string & name) {
            if (name == "common-name") return 0;
            if (name == "country") return 1;
            if (name == "domain") return 2;
            if (name == "locality") return 3;
            if (name == "organization") return 4;
            if (name == "organization-unit") return 5;
            if (name == "state") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_125_ */

