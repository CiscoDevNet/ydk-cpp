#ifndef _CISCO_IOS_XE_NATIVE_77_
#define _CISCO_IOS_XE_NATIVE_77_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pdu; //type: uint32
        YLeaf version; //type: VersionEnum
        class VersionEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol


class Native::Crypto::Gdoi::Group::Server::Local::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        class Periodic; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Registration


class Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crl; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic


class Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl : public Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trustpoint; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl


class Native::Crypto::Gdoi::Group::Server::Local::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: AcknowledgementEnum
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm> algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash> sig_hash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport> transport;
                class AcknowledgementEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm : public Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf a3des_cbc; //type: empty
        YLeaf aes_128; //type: empty
        YLeaf aes_192; //type: empty
        YLeaf aes_256; //type: empty
        YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mypubkey; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey> mypubkey;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey : public Entity
{
    public:
        Mypubkey();
        ~Mypubkey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsa; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint8
        YLeaf seconds; //type: uint64

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf number; //type: uint8
        YLeaf periodic; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash : public Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf algorithm; //type: AlgorithmEnum
        class AlgorithmEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash


class Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport


class Native::Crypto::Gdoi::Group::Server::Local::Sa : public Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive_only; //type: empty
        class D3P; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P
        class Ipsec; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P> d3p;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec> > ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying> pair_wise_keying;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa


class Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P : public Entity
{
    public:
        D3P();
        ~D3P();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Window; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window> window;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P


class Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window : public Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msec; //type: uint32
        YLeaf sec; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint16
        YLeaf profile; //type: string
        class Default_; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_
        class Match; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match
        class Replay; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay
        class Tag; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay> replay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag> tag;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: empty
        class Match; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match
        class Replay; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay
        class Tag; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay> replay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag> tag; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address> address; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: one of uint16, string
        YLeaf ipv6; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter
        class Time; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time> time; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window_size; //type: WindowSizeEnum
        class WindowSizeEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window_size; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cts; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts> cts;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag


class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts


class Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying : public Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf safety_limit; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Server::Local::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Address
        class Authorization; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization
        class Group_; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_
        class Identifier; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier
        class Redundancy; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy
        class Registration; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey
        class Sa; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Address> address; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier> identifier; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy> redundancy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa> sa;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identity; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_ : public Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Size; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size> size; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size : public Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        class Periodic; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic> periodic;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crl; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl> crl;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl : public Entity
{
    public:
        Crl();
        ~Crl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trustpoint; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address
        class Algorithm; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm
        class Authentication; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication
        class Lifetime; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime
        class Retransmit; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit
        class SigHash; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash
        class Transport; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address> address; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm> algorithm; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash> sig_hash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport> transport;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm : public Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: empty
        YLeaf seconds; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash : public Entity
{
    public:
        SigHash();
        ~SigHash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf algorithm; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa : public Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive_only; //type: empty
        class D3P; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P
        class Ipsec; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec
        class PairWiseKeying; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P> d3p; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec> > ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying> pair_wise_keying; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P : public Entity
{
    public:
        D3P();
        ~D3P();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence; //type: uint16

}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec


class Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying : public Entity
{
    public:
        PairWiseKeying();
        ~PairWiseKeying();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying


class Native::Crypto::Gdoi::Group::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gdoi::Group::Default_::Client
        class Identity; //type: Native::Crypto::Gdoi::Group::Default_::Identity
        class Server; //type: Native::Crypto::Gdoi::Group::Default_::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Identity> identity; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server> server;
        
}; // Native::Crypto::Gdoi::Group::Default_


class Native::Crypto::Gdoi::Group::Default_::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bypass_policy; //type: empty
        YLeaf transform_sets; //type: empty
        YLeaf transport_encrypt_key; //type: TransportEncryptKeyEnum
        class Protocol; //type: Native::Crypto::Gdoi::Group::Default_::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gdoi::Group::Default_::Client::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey
        class Status; //type: Native::Crypto::Gdoi::Group::Default_::Client::Status

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Protocol> protocol; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck> recovery_check; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Status> status;
                class TransportEncryptKeyEnum;

}; // Native::Crypto::Gdoi::Group::Default_::Client


class Native::Crypto::Gdoi::Group::Default_::Client::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::Protocol


class Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck : public Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck


class Native::Crypto::Gdoi::Group::Default_::Client::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Crypto::Gdoi::Group::Default_::Client::Registration


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encryption; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption> encryption; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash> hash; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption


class Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash : public Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash


class Native::Crypto::Gdoi::Group::Default_::Client::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActiveSa; //type: Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa> active_sa; // presence node
        
}; // Native::Crypto::Gdoi::Group::Default_::Client::Status


class Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa : public Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa


class Native::Crypto::Gdoi::Group::Default_::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::Gdoi::Group::Default_::Identity


class Native::Crypto::Gdoi::Group::Default_::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        class Address; //type: Native::Crypto::Gdoi::Group::Default_::Server::Address
        class Hostname; //type: Native::Crypto::Gdoi::Group::Default_::Server::Hostname

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_::Server::Hostname> hostname;
        
}; // Native::Crypto::Gdoi::Group::Default_::Server


class Native::Crypto::Gdoi::Group::Default_::Server::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Default_::Server::Address


class Native::Crypto::Gdoi::Group::Default_::Server::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Default_::Server::Hostname


class Native::Crypto::Ikev2 : public Entity
{
    public:
        Ikev2();
        ~Ikev2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf certificate_cache; //type: uint16
        YLeaf cluster; //type: empty
        YLeaf cookie_challenge; //type: uint16
        YLeaf disconnect_revoked_peers; //type: empty
        YLeaf name_mangler; //type: string
        YLeaf window; //type: uint8
        class Authorization; //type: Native::Crypto::Ikev2::Authorization
        class Client; //type: Native::Crypto::Ikev2::Client
        class Cts; //type: Native::Crypto::Ikev2::Cts
        class Diagnose; //type: Native::Crypto::Ikev2::Diagnose
        class DpdContainer; //type: Native::Crypto::Ikev2::DpdContainer
        class Fragmentation; //type: Native::Crypto::Ikev2::Fragmentation
        class HttpUrl; //type: Native::Crypto::Ikev2::HttpUrl
        class Keyring; //type: Native::Crypto::Ikev2::Keyring
        class Limit; //type: Native::Crypto::Ikev2::Limit
        class Nat; //type: Native::Crypto::Ikev2::Nat
        class Policy; //type: Native::Crypto::Ikev2::Policy
        class Profile; //type: Native::Crypto::Ikev2::Profile
        class Proposal; //type: Native::Crypto::Ikev2::Proposal
        class Reconnect; //type: Native::Crypto::Ikev2::Reconnect
        class Redirect; //type: Native::Crypto::Ikev2::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Diagnose> diagnose;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::DpdContainer> dpd_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Fragmentation> fragmentation; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::HttpUrl> http_url;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring> > keyring;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Nat> nat;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy> > policy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile> > profile;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal> > proposal;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Reconnect> reconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Redirect> redirect;
        
}; // Native::Crypto::Ikev2


class Native::Crypto::Ikev2::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Crypto::Ikev2::Authorization::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy> > policy;
        
}; // Native::Crypto::Ikev2::Authorization


class Native::Crypto::Ikev2::Authorization::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        class Route; //type: Native::Crypto::Ikev2::Authorization::Policy::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route> route;
        
}; // Native::Crypto::Ikev2::Authorization::Policy


class Native::Crypto::Ikev2::Authorization::Policy::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Set; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set> set;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface> interface;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_default; //type: empty
        class InterfaceList; //type: Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList> > interface_list;
        
}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface


class Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList


class Native::Crypto::Ikev2::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flexvpn; //type: Native::Crypto::Ikev2::Client::Flexvpn

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn> > flexvpn;
        
}; // Native::Crypto::Ikev2::Client


class Native::Crypto::Ikev2::Client::Flexvpn : public Entity
{
    public:
        Flexvpn();
        ~Flexvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flexvpn_name; //type: string
        class Peer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer
        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Connect
        class Source; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source
        class Client_; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Connect> connect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer> > peer;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Source> > source;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn


class Native::Crypto::Ikev2::Client::Flexvpn::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: uint8
        class PeerIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer> peer_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer


class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer : public Entity
{
    public:
        PeerIdContainer();
        ~PeerIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf track; //type: uint16
        YLeaf up_down; //type: UpDownEnum
        class UpDownEnum;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Connect : public Entity
{
    public:
        Connect();
        ~Connect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf track; //type: uint16
        YLeaf up_down; //type: UpDownEnum
        class UpDownEnum;

}; // Native::Crypto::Ikev2::Client::Flexvpn::Connect


class Native::Crypto::Ikev2::Client::Flexvpn::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_id; //type: uint8
        class SourceIdContainer; //type: Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer> source_id_container;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Source


class Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer : public Entity
{
    public:
        SourceIdContainer();
        ~SourceIdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf track; //type: uint16

}; // Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer


class Native::Crypto::Ikev2::Client::Flexvpn::Client_ : public Entity
{
    public:
        Client_();
        ~Client_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Connect; //type: Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect> connect;
        
}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_


class Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect : public Entity
{
    public:
        Connect();
        ~Connect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: uint32

}; // Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect


class Native::Crypto::Ikev2::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: empty

}; // Native::Crypto::Ikev2::Cts


class Native::Crypto::Ikev2::Diagnose : public Entity
{
    public:
        Diagnose();
        ~Diagnose();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error; //type: uint16

}; // Native::Crypto::Ikev2::Diagnose


class Native::Crypto::Ikev2::DpdContainer : public Entity
{
    public:
        DpdContainer();
        ~DpdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dpd; //type: uint16
        YLeaf retry_interval; //type: uint8
        YLeaf dpd_query; //type: DpdQueryEnum
        class DpdQueryEnum;

}; // Native::Crypto::Ikev2::DpdContainer


class Native::Crypto::Ikev2::Fragmentation : public Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint16

}; // Native::Crypto::Ikev2::Fragmentation


class Native::Crypto::Ikev2::HttpUrl : public Entity
{
    public:
        HttpUrl();
        ~HttpUrl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cert; //type: empty

}; // Native::Crypto::Ikev2::HttpUrl


class Native::Crypto::Ikev2::Keyring : public Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Peer; //type: Native::Crypto::Ikev2::Keyring::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer> > peer;
        
}; // Native::Crypto::Ikev2::Keyring


class Native::Crypto::Ikev2::Keyring::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf hostname; //type: string
        class Address; //type: Native::Crypto::Ikev2::Keyring::Peer::Address
        class Identity; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity
        class PreSharedKey; //type: Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity> identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey> pre_shared_key;
        
}; // Native::Crypto::Ikev2::Keyring::Peer


class Native::Crypto::Ikev2::Keyring::Peer::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_prefix; //type: string
        class Ipv4; //type: Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4> ipv4;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Address


class Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4


class Native::Crypto::Ikev2::Keyring::Peer::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf key_id; //type: string
        class Email; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Email> email;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Keyring::Peer::Identity


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Email : public Entity
{
    public:
        Email();
        ~Email();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Email


class Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn : public Entity
{
    public:
        Fqdn();
        ~Fqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn


class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey : public Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: empty
        YLeaf remote; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        YLeaf hex; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey


class Native::Crypto::Ikev2::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_sa; //type: uint32
        class MaxNegSa; //type: Native::Crypto::Ikev2::Limit::MaxNegSa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Limit::MaxNegSa> max_neg_sa;
        
}; // Native::Crypto::Ikev2::Limit


class Native::Crypto::Ikev2::Limit::MaxNegSa : public Entity
{
    public:
        MaxNegSa();
        ~MaxNegSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_in_negotation_sa; //type: uint32
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Crypto::Ikev2::Limit::MaxNegSa


class Native::Crypto::Ikev2::Nat : public Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keepalive; //type: uint16

}; // Native::Crypto::Ikev2::Nat


class Native::Crypto::Ikev2::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf proposal; //type: string
        class Match; //type: Native::Crypto::Ikev2::Policy::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match> match;
        
}; // Native::Crypto::Ikev2::Policy


class Native::Crypto::Ikev2::Policy::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Ikev2::Policy::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Policy::Match::Fvrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Policy::Match::Fvrf> fvrf;
        
}; // Native::Crypto::Ikev2::Policy::Match


class Native::Crypto::Ikev2::Policy::Match::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: string

}; // Native::Crypto::Ikev2::Policy::Match::Address


class Native::Crypto::Ikev2::Policy::Match::Fvrf : public Entity
{
    public:
        Fvrf();
        ~Fvrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Policy::Match::Fvrf


class Native::Crypto::Ikev2::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf ivrf; //type: string
        YLeaf shutdown; //type: empty
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

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::ConfigExchange> config_exchange;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Dpd> dpd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity> identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::InitialContact> initial_contact;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring> keyring;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Pki> pki;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Reconnect> reconnect; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::VirtualTemplate> virtual_template;
        
}; // Native::Crypto::Ikev2::Profile


class Native::Crypto::Ikev2::Profile::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accounting; //type: Native::Crypto::Ikev2::Profile::Aaa::Accounting
        class Authentication; //type: Native::Crypto::Ikev2::Profile::Aaa::Authentication
        class Authorization; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization> authorization;
        
}; // Native::Crypto::Ikev2::Profile::Aaa


class Native::Crypto::Ikev2::Profile::Aaa::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf anyconnect_eap; //type: string
        YLeaf cert; //type: string
        YLeaf eap; //type: string
        YLeaf psk; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Accounting


class Native::Crypto::Ikev2::Profile::Aaa::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf anyconnect_eap; //type: string
        YLeaf eap; //type: string

}; // Native::Crypto::Ikev2::Profile::Aaa::Authentication


class Native::Crypto::Ikev2::Profile::Aaa::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group
        class User; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User> user;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf override; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert> cert;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap> eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap : public Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert : public Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk : public Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert> cert;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap> eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap : public Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert : public Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk : public Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf username; //type: string
        YLeaf local; //type: empty
        YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Authentication::Local
        class Remote; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Authentication


class Native::Crypto::Ikev2::Profile::Authentication::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ecdsa_sig; //type: empty
        YLeaf rsa_sig; //type: empty
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap> eap; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gtc; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc
        class Md5; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5
        class Mschapv2; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc> gtc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2> mschapv2;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc : public Entity
{
    public:
        Gtc();
        ~Gtc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2 : public Entity
{
    public:
        Mschapv2();
        ~Mschapv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare : public Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key


class Native::Crypto::Ikev2::Profile::Authentication::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ecdsa_sig; //type: empty
        YLeaf rsa_sig; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap> eap; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap : public Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aggregate; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate> aggregate; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate : public Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cert_request; //type: empty

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate


class Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf query_identity; //type: empty
        YLeaf timeout; //type: uint8

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare : public Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare

class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf optimize;

};

class Native::Crypto::Gdoi::Group::Server::Local::Rekey::AcknowledgementEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf interoperable;

};

class Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::AlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf sha;
        static const Enum::YLeaf sha256;
        static const Enum::YLeaf sha384;
        static const Enum::YLeaf sha512;

};

class Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKeyEnum : public Enum
{
    public:
        static const Enum::YLeaf group_key;
        static const Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDownEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDownEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class Native::Crypto::Ikev2::DpdContainer::DpdQueryEnum : public Enum
{
    public:
        static const Enum::YLeaf on_demand;
        static const Enum::YLeaf periodic;

};

class Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Limit::MaxNegSa::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf incoming;
        static const Enum::YLeaf outgoing;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_77_ */

