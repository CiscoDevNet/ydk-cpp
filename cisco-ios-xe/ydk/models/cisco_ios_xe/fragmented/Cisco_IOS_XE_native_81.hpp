#ifndef _CISCO_IOS_XE_NATIVE_81_
#define _CISCO_IOS_XE_NATIVE_81_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_80.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication : public Entity
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

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication


class Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_ : public Entity
{
    public:
        Enrollment_();
        ~Enrollment_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        YLeaf credential; //type: string
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_


class Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url


class Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter : public Entity
{
    public:
        Parameter();
        ~Parameter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf prompt; //type: string
        YLeaf value_; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter


class Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment : public Entity
{
    public:
        Reenrollment();
        ~Reenrollment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string
        YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url> url;
        
}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment


class Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url


class Native::Crypto::Pki::Server : public Entity
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

        YLeaf name; //type: string
        YLeaf rollover; //type: empty
        YLeaf cancel; //type: empty

}; // Native::Crypto::Pki::Server


class Native::Crypto::Pki::Trustpoint : public Entity
{
    public:
        Trustpoint();
        ~Trustpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf revocation_check; //type: RevocationCheckEnum
        YLeaf auto_enroll; //type: empty
        YLeaf subject_name; //type: string
        YLeaf vrf; //type: string
        class Enrollment; //type: Native::Crypto::Pki::Trustpoint::Enrollment
        class Password; //type: Native::Crypto::Pki::Trustpoint::Password
        class Rsakeypair; //type: Native::Crypto::Pki::Trustpoint::Rsakeypair
        class SerialNumber; //type: Native::Crypto::Pki::Trustpoint::SerialNumber
        class IpAddress; //type: Native::Crypto::Pki::Trustpoint::IpAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment> enrollment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::IpAddress> ip_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Password> password; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Rsakeypair> rsakeypair;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::SerialNumber> serial_number; // presence node
                class RevocationCheckEnum;

}; // Native::Crypto::Pki::Trustpoint


class Native::Crypto::Pki::Trustpoint::Enrollment : public Entity
{
    public:
        Enrollment();
        ~Enrollment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf http_proxy; //type: string
        YLeaf pkcs12; //type: empty
        YLeaf profile; //type: string
        YLeaf selfsigned; //type: empty
        YLeaf url; //type: string
        class Mode; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Mode
        class Retry; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Retry
        class Terminal; //type: Native::Crypto::Pki::Trustpoint::Enrollment::Terminal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Retry> retry;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpoint::Enrollment::Terminal> terminal; // presence node
        
}; // Native::Crypto::Pki::Trustpoint::Enrollment


class Native::Crypto::Pki::Trustpoint::Enrollment::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ra; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Mode


class Native::Crypto::Pki::Trustpoint::Enrollment::Retry : public Entity
{
    public:
        Retry();
        ~Retry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint8
        YLeaf period; //type: uint8

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Retry


class Native::Crypto::Pki::Trustpoint::Enrollment::Terminal : public Entity
{
    public:
        Terminal();
        ~Terminal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pem; //type: empty

}; // Native::Crypto::Pki::Trustpoint::Enrollment::Terminal


class Native::Crypto::Pki::Trustpoint::Password : public Entity
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

        YLeaf encryption_type; //type: uint8
        YLeaf clear_password; //type: string

}; // Native::Crypto::Pki::Trustpoint::Password


class Native::Crypto::Pki::Trustpoint::Rsakeypair : public Entity
{
    public:
        Rsakeypair();
        ~Rsakeypair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_label; //type: string
        YLeaf gen_key; //type: uint16
        YLeaf encrypt_key; //type: uint16

}; // Native::Crypto::Pki::Trustpoint::Rsakeypair


class Native::Crypto::Pki::Trustpoint::SerialNumber : public Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty

}; // Native::Crypto::Pki::Trustpoint::SerialNumber


class Native::Crypto::Pki::Trustpoint::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_line; //type: string
        YLeaf none; //type: empty

}; // Native::Crypto::Pki::Trustpoint::IpAddress


class Native::Crypto::Pki::Token : public Entity
{
    public:
        Token();
        ~Token();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TokenName; //type: Native::Crypto::Pki::Token::TokenName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Token::TokenName> > token_name;
        
}; // Native::Crypto::Pki::Token


class Native::Crypto::Pki::Token::TokenName : public Entity
{
    public:
        TokenName();
        ~TokenName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Removal; //type: Native::Crypto::Pki::Token::TokenName::Removal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Token::TokenName::Removal> removal;
        
}; // Native::Crypto::Pki::Token::TokenName


class Native::Crypto::Pki::Token::TokenName::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint16

}; // Native::Crypto::Pki::Token::TokenName::Removal


class Native::Crypto::Pki::Trustpool : public Entity
{
    public:
        Trustpool();
        ~Trustpool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Import; //type: Native::Crypto::Pki::Trustpool::Import

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool::Import> import; // presence node
        
}; // Native::Crypto::Pki::Trustpool


class Native::Crypto::Pki::Trustpool::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clean; //type: empty
        YLeaf terminal; //type: empty
        class Url; //type: Native::Crypto::Pki::Trustpool::Import::Url

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Trustpool::Import::Url> url;
        
}; // Native::Crypto::Pki::Trustpool::Import


class Native::Crypto::Pki::Trustpool::Import::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file; //type: FileEnum
        class FileEnum;

}; // Native::Crypto::Pki::Trustpool::Import::Url


class Native::Crypto::Pki::Default_ : public Entity
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

        class Removal; //type: Native::Crypto::Pki::Default_::Removal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki::Default_::Removal> removal;
        
}; // Native::Crypto::Pki::Default_


class Native::Crypto::Pki::Default_::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint16

}; // Native::Crypto::Pki::Default_::Removal


class Native::Crypto::TlsTunnel : public Entity
{
    public:
        TlsTunnel();
        ~TlsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TlsTunnelList; //type: Native::Crypto::TlsTunnel::TlsTunnelList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList> > tls_tunnel_list;
        
}; // Native::Crypto::TlsTunnel


class Native::Crypto::TlsTunnel::TlsTunnelList : public Entity
{
    public:
        TlsTunnelList();
        ~TlsTunnelList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        class LocalInterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface
        class OverlayAddress; //type: Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress
        class Protection; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Protection
        class Psk; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk
        class Server; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress> overlay_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Protection> protection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Psk> psk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Server> server;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface : public Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        YLeaf priority; //type: uint8
        class AtmSubinterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmSubinterface


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::AtmAcrsubinterface


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::LispSubinterface


class Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::LocalInterface::PortChannelSubinterface


class Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress : public Entity
{
    public:
        OverlayAddress();
        ~OverlayAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addresses; //type: string
        YLeaf vrf; //type: string

}; // Native::Crypto::TlsTunnel::TlsTunnelList::OverlayAddress


class Native::Crypto::TlsTunnel::TlsTunnelList::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protection; //type: ProtectionEnum
        class ProtectionEnum;

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Protection


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk : public Entity
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

        class Id; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id> > id;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class Key; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key> key;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id


class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key : public Entity
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

        YLeaf key; //type: empty
        YLeaf encryption; //type: EncryptionEnum
        YLeaf unencryt_key; //type: string
        class EncryptionEnum;

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key


class Native::Crypto::TlsTunnel::TlsTunnelList::Server : public Entity
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

        class Ipv4; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4
        class Ipv6; //type: Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4> > ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6> > ipv6;
        
}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server


class Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf port; //type: uint32

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv4


class Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: string
        YLeaf port; //type: uint32

}; // Native::Crypto::TlsTunnel::TlsTunnelList::Server::Ipv6


class Native::Crypto::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: string
        YLeaf profile; //type: string
        class Authorization; //type: Native::Crypto::Ssl::Authorization
        class Diagnose; //type: Native::Crypto::Ssl::Diagnose
        class Proposal; //type: Native::Crypto::Ssl::Proposal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ssl::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ssl::Diagnose> diagnose;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ssl::Proposal> proposal;
        
}; // Native::Crypto::Ssl


class Native::Crypto::Ssl::Authorization : public Entity
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

        YLeaf policy; //type: string

}; // Native::Crypto::Ssl::Authorization


class Native::Crypto::Ssl::Diagnose : public Entity
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

}; // Native::Crypto::Ssl::Diagnose


class Native::Crypto::Ssl::Proposal : public Entity
{
    public:
        Proposal();
        ~Proposal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Protection; //type: Native::Crypto::Ssl::Proposal::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ssl::Proposal::Protection> protection;
        
}; // Native::Crypto::Ssl::Proposal


class Native::Crypto::Ssl::Proposal::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rsa_3des_ede_sha1; //type: empty
        YLeaf rsa_aes128_sha1; //type: empty
        YLeaf rsa_aes256_sha1; //type: empty
        YLeaf rsa_rc4128_md5; //type: empty

}; // Native::Crypto::Ssl::Proposal::Protection


class Native::Crypto::Vpn : public Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csd; //type: string
        class Anyconnect; //type: Native::Crypto::Vpn::Anyconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect> anyconnect;
        
}; // Native::Crypto::Vpn


class Native::Crypto::Vpn::Anyconnect : public Entity
{
    public:
        Anyconnect();
        ~Anyconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class File; //type: Native::Crypto::Vpn::Anyconnect::File
        class ProfileContainer; //type: Native::Crypto::Vpn::Anyconnect::ProfileContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect::File> file;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Vpn::Anyconnect::ProfileContainer> profile_container;
        
}; // Native::Crypto::Vpn::Anyconnect


class Native::Crypto::Vpn::Anyconnect::File : public Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filename; //type: string
        YLeaf sequence; //type: uint8

}; // Native::Crypto::Vpn::Anyconnect::File


class Native::Crypto::Vpn::Anyconnect::ProfileContainer : public Entity
{
    public:
        ProfileContainer();
        ~ProfileContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string
        YLeaf filename; //type: string

}; // Native::Crypto::Vpn::Anyconnect::ProfileContainer


class Native::Cts : public Entity
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

        YLeaf critical_authentication_conf; //type: empty
        YLeaf dot1x_server_timeout; //type: uint16
        YLeaf dot1x_supp_timeout; //type: uint16
        YLeaf logging; //type: LoggingEnum
        YLeaf sgt; //type: uint16
        class Cache; //type: Native::Cts::Cache
        class CriticalAuthentication; //type: Native::Cts::CriticalAuthentication
        class Authorization; //type: Native::Cts::Authorization
        class RoleBased; //type: Native::Cts::RoleBased
        class Server; //type: Native::Cts::Server
        class Sxp; //type: Native::Cts::Sxp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication> critical_authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased> role_based;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp> sxp;
                class LoggingEnum;

}; // Native::Cts


class Native::Cts::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class NvStorage; //type: Native::Cts::Cache::NvStorage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Cache::NvStorage> nv_storage;
        
}; // Native::Cts::Cache


class Native::Cts::Cache::NvStorage : public Entity
{
    public:
        NvStorage();
        ~NvStorage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nv_storage; //type: NvStorageEnum
        class NvStorageEnum;

}; // Native::Cts::Cache::NvStorage


class Native::Cts::CriticalAuthentication : public Entity
{
    public:
        CriticalAuthentication();
        ~CriticalAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Cts::CriticalAuthentication::Default_
        class Fallback; //type: Native::Cts::CriticalAuthentication::Fallback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Fallback> fallback;
        
}; // Native::Cts::CriticalAuthentication


class Native::Cts::CriticalAuthentication::Default_ : public Entity
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

        class PeerSgt; //type: Native::Cts::CriticalAuthentication::Default_::PeerSgt
        class Pmk; //type: Native::Cts::CriticalAuthentication::Default_::Pmk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default_::PeerSgt> peer_sgt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default_::Pmk> pmk;
        
}; // Native::Cts::CriticalAuthentication::Default_


class Native::Cts::CriticalAuthentication::Default_::PeerSgt : public Entity
{
    public:
        PeerSgt();
        ~PeerSgt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range> > range;
        
}; // Native::Cts::CriticalAuthentication::Default_::PeerSgt


class Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        YLeaf trusted; //type: empty

}; // Native::Cts::CriticalAuthentication::Default_::PeerSgt::Range


class Native::Cts::CriticalAuthentication::Default_::Pmk : public Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Cts::CriticalAuthentication::Default_::Pmk


class Native::Cts::CriticalAuthentication::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cached; //type: empty
        YLeaf default_; //type: empty

}; // Native::Cts::CriticalAuthentication::Fallback


class Native::Cts::Authorization : public Entity
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

        YLeaf list; //type: string

}; // Native::Cts::Authorization


class Native::Cts::RoleBased : public Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt_caching; //type: empty
        class Permissions; //type: Native::Cts::RoleBased::Permissions
        class Enforcement; //type: Native::Cts::RoleBased::Enforcement
        class SgtMap; //type: Native::Cts::RoleBased::SgtMap
        class SgtMapVlanList; //type: Native::Cts::RoleBased::SgtMapVlanList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Enforcement> enforcement; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions> permissions;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::SgtMap> > sgt_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::SgtMapVlanList> sgt_map_vlan_list;
        
}; // Native::Cts::RoleBased


class Native::Cts::RoleBased::Permissions : public Entity
{
    public:
        Permissions();
        ~Permissions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Cts::RoleBased::Permissions::Default_
        class From; //type: Native::Cts::RoleBased::Permissions::From

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From> from;
        
}; // Native::Cts::RoleBased::Permissions


class Native::Cts::RoleBased::Permissions::Default_ : public Entity
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

        YLeaf name; //type: string

}; // Native::Cts::RoleBased::Permissions::Default_


class Native::Cts::RoleBased::Permissions::From : public Entity
{
    public:
        From();
        ~From();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Cts::RoleBased::Permissions::From::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From::Range> > range;
        
}; // Native::Cts::RoleBased::Permissions::From


class Native::Cts::RoleBased::Permissions::From::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        class To; //type: Native::Cts::RoleBased::Permissions::From::Range::To

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From::Range::To> to;
        
}; // Native::Cts::RoleBased::Permissions::From::Range


class Native::Cts::RoleBased::Permissions::From::Range::To : public Entity
{
    public:
        To();
        ~To();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range_; //type: Native::Cts::RoleBased::Permissions::From::Range::To::Range_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From::Range::To::Range_> > range;
        
}; // Native::Cts::RoleBased::Permissions::From::Range::To


class Native::Cts::RoleBased::Permissions::From::Range::To::Range_ : public Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        YLeaf name; //type: string

}; // Native::Cts::RoleBased::Permissions::From::Range::To::Range_


class Native::Cts::RoleBased::Enforcement : public Entity
{
    public:
        Enforcement();
        ~Enforcement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging_interval; //type: uint32
        class VlanList; //type: Native::Cts::RoleBased::Enforcement::VlanList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::Enforcement::VlanList> > vlan_list;
        
}; // Native::Cts::RoleBased::Enforcement


class Native::Cts::RoleBased::Enforcement::VlanList : public Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of string, enumeration
        class IdEnum;

}; // Native::Cts::RoleBased::Enforcement::VlanList


class Native::Cts::RoleBased::SgtMap : public Entity
{
    public:
        SgtMap();
        ~SgtMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf sgt; //type: uint16
        YLeaf vrf; //type: string
        YLeaf host; //type: empty

}; // Native::Cts::RoleBased::SgtMap


class Native::Cts::RoleBased::SgtMapVlanList : public Entity
{
    public:
        SgtMapVlanList();
        ~SgtMapVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SgtMap; //type: Native::Cts::RoleBased::SgtMapVlanList::SgtMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::RoleBased::SgtMapVlanList::SgtMap> > sgt_map;
        
}; // Native::Cts::RoleBased::SgtMapVlanList


class Native::Cts::RoleBased::SgtMapVlanList::SgtMap : public Entity
{
    public:
        SgtMap();
        ~SgtMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_list; //type: one of string, enumeration
        YLeaf sgt; //type: int16
        class VlanListEnum;

}; // Native::Cts::RoleBased::SgtMapVlanList::SgtMap


class Native::Cts::Server : public Entity
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

        YLeaf deadtime; //type: uint32
        class KeyWrap; //type: Native::Cts::Server::KeyWrap
        class LoadBalance; //type: Native::Cts::Server::LoadBalance
        class Test; //type: Native::Cts::Server::Test

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::KeyWrap> key_wrap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::Test> test;
        
}; // Native::Cts::Server


class Native::Cts::Server::KeyWrap : public Entity
{
    public:
        KeyWrap();
        ~KeyWrap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Cts::Server::KeyWrap


class Native::Cts::Server::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Method; //type: Native::Cts::Server::LoadBalance::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance::Method> method;
        
}; // Native::Cts::Server::LoadBalance


class Native::Cts::Server::LoadBalance::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LeastOutstanding; //type: Native::Cts::Server::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance::Method::LeastOutstanding> least_outstanding; // presence node
        
}; // Native::Cts::Server::LoadBalance::Method


class Native::Cts::Server::LoadBalance::Method::LeastOutstanding : public Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf batch_size; //type: uint32
        YLeaf ignore_preferred_server; //type: empty

}; // Native::Cts::Server::LoadBalance::Method::LeastOutstanding


class Native::Cts::Server::Test : public Entity
{
    public:
        Test();
        ~Test();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server_; //type: Native::Cts::Server::Test::Server_
        class All; //type: Native::Cts::Server::Test::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::Test::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Server::Test::Server_> > server;
        
}; // Native::Cts::Server::Test


class Native::Cts::Server::Test::Server_ : public Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf deadtime; //type: uint32
        YLeaf enable; //type: boolean
        YLeaf idle_time; //type: uint32

}; // Native::Cts::Server::Test::Server_


class Native::Cts::Server::Test::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deadtime; //type: uint32
        YLeaf enable; //type: boolean
        YLeaf idle_time; //type: uint32

}; // Native::Cts::Server::Test::All


class Native::Cts::Sxp : public Entity
{
    public:
        Sxp();
        ~Sxp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Default_; //type: Native::Cts::Sxp::Default_
        class Connection; //type: Native::Cts::Sxp::Connection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection> connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Default_> default_;
        
}; // Native::Cts::Sxp


class Native::Cts::Sxp::Default_ : public Entity
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

        YLeaf source_ip; //type: string
        class Password; //type: Native::Cts::Sxp::Default_::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Default_::Password> password;
        
}; // Native::Cts::Sxp::Default_


class Native::Cts::Sxp::Default_::Password : public Entity
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

        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Cts::Sxp::Default_::Password


class Native::Cts::Sxp::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Cts::Sxp::Connection::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer> peer;
        
}; // Native::Cts::Sxp::Connection


class Native::Cts::Sxp::Connection::Peer : public Entity
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

        class Ipv4; //type: Native::Cts::Sxp::Connection::Peer::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4> > ipv4;
        
}; // Native::Cts::Sxp::Connection::Peer


class Native::Cts::Sxp::Connection::Peer::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        class Source; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password> > password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source> source;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source : public Entity
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

        class Ipv4_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_> > ipv4;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_ : public Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password> > password;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password : public Entity
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

        YLeaf password_type; //type: PasswordTypeEnum
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode> mode;
                class PasswordTypeEnum;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local : public Entity
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

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both : public Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener : public Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker : public Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_ : public Entity
{
    public:
        Peer_();
        ~Peer_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both : public Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener : public Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker : public Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password : public Entity
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

        YLeaf password_type; //type: PasswordTypeEnum
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode> mode;
                class PasswordTypeEnum;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local : public Entity
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

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both : public Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener : public Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker : public Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_ : public Entity
{
    public:
        Peer_();
        ~Peer_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both : public Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener : public Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker : public Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_time; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime


class Native::BfdTemplate : public Entity
{
    public:
        BfdTemplate();
        ~BfdTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SingleHop; //type: Native::BfdTemplate::SingleHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop> single_hop;
        
}; // Native::BfdTemplate


class Native::BfdTemplate::SingleHop : public Entity
{
    public:
        SingleHop();
        ~SingleHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Interval; //type: Native::BfdTemplate::SingleHop::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop::Interval> interval;
        
}; // Native::BfdTemplate::SingleHop


class Native::BfdTemplate::SingleHop::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Microseconds; //type: Native::BfdTemplate::SingleHop::Interval::Microseconds

        std::shared_ptr<Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop::Interval::Microseconds> microseconds;
        
}; // Native::BfdTemplate::SingleHop::Interval


class Native::BfdTemplate::SingleHop::Interval::Microseconds : public Entity
{
    public:
        Microseconds();
        ~Microseconds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_tx; //type: uint32
        YLeaf min_rx; //type: uint32
        YLeaf multiplier; //type: uint8

}; // Native::BfdTemplate::SingleHop::Interval::Microseconds


class Native::Pfr : public Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Border; //type: Native::Pfr::Border
        class Master; //type: Native::Pfr::Master

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border> border; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master> master; // presence node
        
}; // Native::Pfr


class Native::Pfr::Border : public Entity
{
    public:
        Border();
        ~Border();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PfrMode__ConfigPfrBr; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr> pfr_mode__config_pfr_br;
        
}; // Native::Pfr::Border


class Native::Pfr::Border::PfrMode__ConfigPfrBr : public Entity
{
    public:
        PfrMode__ConfigPfrBr();
        ~PfrMode__ConfigPfrBr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: empty
        YLeaf port; //type: uint16
        YLeaf shutdown; //type: empty
        class ActiveProbe; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe
        class Local; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local
        class Master; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Master

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe> active_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Master> master;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe : public Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address> address;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address : public Entity
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

        class Source; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source> source;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source : public Entity
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

        class Interface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface> interface;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface : public Entity
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

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::AtmAcrsubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::LispSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local : public Entity
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

        class Interface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface> interface;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface : public Entity
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

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::AtmAcrsubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::LispSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Local::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Master : public Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Pfr::Border::PfrMode__ConfigPfrBr::Master::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Border::PfrMode__ConfigPfrBr::Master::Ipv4> > ipv4;
        
}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Master


class Native::Pfr::Border::PfrMode__ConfigPfrBr::Master::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf key_chain; //type: string

}; // Native::Pfr::Border::PfrMode__ConfigPfrBr::Master::Ipv4


class Native::Pfr::Master : public Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IcmpModeConfigPfrMc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc> icmp_mode_config_pfr_mc;
        
}; // Native::Pfr::Master


class Native::Pfr::Master::IcmpModeConfigPfrMc : public Entity
{
    public:
        IcmpModeConfigPfrMc();
        ~IcmpModeConfigPfrMc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth_resolution; //type: empty
        YLeaf exporter; //type: string
        YLeaf holddown; //type: uint16
        YLeaf keepalive; //type: uint16
        YLeaf logging; //type: empty
        YLeaf periodic; //type: uint16
        YLeaf policy_rules; //type: string
        YLeaf port; //type: uint16
        YLeaf shutdown; //type: empty
        YLeaf trigger_log_percentage; //type: uint8
        class ActiveProbe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe
        class Application; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application
        class Backoff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff
        class Border; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter
        class Learn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Loss
        class Max; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max
        class MaxRangeUtilization; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization
        class McPeer; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer
        class Mode; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos
        class Probe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Probe
        class Resolve; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve
        class Rsvp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp
        class TargetDiscovery; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery
        class Traceroute; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute
        class Unreachable; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe> active_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border> border;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn> learn; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Loss> loss;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max> max;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization> max_range_utilization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer> mc_peer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos> mos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Probe> probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve> resolve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp> rsvp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery> target_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute> traceroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable> unreachable;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe : public Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf echo; //type: one of union, string
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter
        class TcpConn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter> jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn : public Entity
{
    public:
        TcpConn();
        ~TcpConn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho : public Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Define; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define

        std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define> define;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define : public Entity
{
    public:
        Define();
        ~Define();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AppDef; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef> > app_def;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef : public Entity
{
    public:
        AppDef();
        ~AppDef();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf app_def; //type: string
        YLeaf access_list; //type: string
        YLeaf nbar; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef

class Native::Crypto::Pki::Trustpoint::RevocationCheckEnum : public Enum
{
    public:
        static const Enum::YLeaf crl;
        static const Enum::YLeaf none;
        static const Enum::YLeaf ocsp;

};

class Native::Crypto::Pki::Trustpool::Import::Url::FileEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf cns__COLON__;
        static const Enum::YLeaf flash__COLON__;
        static const Enum::YLeaf ftp__COLON__;
        static const Enum::YLeaf http__COLON__;
        static const Enum::YLeaf https__COLON__;
        static const Enum::YLeaf null__COLON__;
        static const Enum::YLeaf nvram__COLON__;
        static const Enum::YLeaf pram__COLON__;
        static const Enum::YLeaf rcp__COLON__;
        static const Enum::YLeaf scp__COLON__;
        static const Enum::YLeaf system__COLON__;
        static const Enum::YLeaf tar__COLON__;
        static const Enum::YLeaf tftp__COLON__;
        static const Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::TlsTunnel::TlsTunnelList::Protection::ProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf dhe_psk_aes128_cbc_sha1;
        static const Enum::YLeaf dhe_psk_aes256_cbc_sha1;
        static const Enum::YLeaf psk_aes128_cbc_sha1;
        static const Enum::YLeaf psk_aes256_cbc_sha1;

};

class Native::Crypto::TlsTunnel::TlsTunnelList::Psk::Id::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Cts::LoggingEnum : public Enum
{
    public:
        static const Enum::YLeaf verbose;

};

class Native::Cts::Cache::NvStorage::NvStorageEnum : public Enum
{
    public:
        static const Enum::YLeaf bootflash__COLON__;
        static const Enum::YLeaf crashinfo__COLON__;
        static const Enum::YLeaf kinfo__COLON__;
        static const Enum::YLeaf slot0__COLON__;
        static const Enum::YLeaf usb0__COLON__;

};

class Native::Cts::CriticalAuthentication::Default_::Pmk::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;

};

class Native::Cts::RoleBased::Enforcement::VlanList::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Native::Cts::RoleBased::SgtMapVlanList::SgtMap::VlanListEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Native::Cts::Sxp::Default_::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;
        static const Enum::YLeaf Y_7;

};

class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf none;

};

class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf none;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_81_ */

