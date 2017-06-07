#ifndef _CISCO_IOS_XR_CRYPTO_SAM_CFG_
#define _CISCO_IOS_XR_CRYPTO_SAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_cfg {

class Crypto : public Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Sam; //type: Crypto::Sam
        class Ssh; //type: Crypto::Ssh

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam> sam;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh> ssh;
        
}; // Crypto


class Crypto::Sam : public Entity
{
    public:
        Sam();
        ~Sam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PromptInterval; //type: Crypto::Sam::PromptInterval

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam::PromptInterval> prompt_interval; // presence node
        
}; // Crypto::Sam


class Crypto::Sam::PromptInterval : public Entity
{
    public:
        PromptInterval();
        ~PromptInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: CryptoSamActionEnum
        YLeaf prompt_time; //type: uint32

}; // Crypto::Sam::PromptInterval


class Crypto::Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Crypto::Ssh::Client
        class Server; //type: Crypto::Ssh::Server

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Client> client;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server> server;
        
}; // Crypto::Ssh


class Crypto::Ssh::Client : public Entity
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

        YLeaf host_public_key; //type: string
        YLeaf client_vrf; //type: string
        YLeaf source_interface; //type: string
        YLeaf dscp; //type: uint32

}; // Crypto::Ssh::Client


class Crypto::Ssh::Server : public Entity
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

        YLeaf rekey_volume; //type: uint32
        YLeaf session_limit; //type: uint32
        YLeaf netconf; //type: uint32
        YLeaf v2; //type: empty
        YLeaf rekey_time; //type: uint32
        YLeaf logging; //type: empty
        YLeaf rate_limit; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf dscp; //type: uint32
        class Disable; //type: Crypto::Ssh::Server::Disable
        class VrfTable; //type: Crypto::Ssh::Server::VrfTable
        class NetconfVrfTable; //type: Crypto::Ssh::Server::NetconfVrfTable

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::Disable> disable;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable> netconf_vrf_table;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable> vrf_table;
        
}; // Crypto::Ssh::Server


class Crypto::Ssh::Server::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hmac; //type: Crypto::Ssh::Server::Disable::Hmac

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::Disable::Hmac> hmac;
        
}; // Crypto::Ssh::Server::Disable


class Crypto::Ssh::Server::Disable::Hmac : public Entity
{
    public:
        Hmac();
        ~Hmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hmac_sha512; //type: boolean

}; // Crypto::Ssh::Server::Disable::Hmac


class Crypto::Ssh::Server::VrfTable : public Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Crypto::Ssh::Server::VrfTable::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable::Vrf> > vrf;
        
}; // Crypto::Ssh::Server::VrfTable


class Crypto::Ssh::Server::VrfTable::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf enable; //type: empty
        YLeaf ipv4_access_list; //type: string
        YLeaf ipv6_access_list; //type: string

}; // Crypto::Ssh::Server::VrfTable::Vrf


class Crypto::Ssh::Server::NetconfVrfTable : public Entity
{
    public:
        NetconfVrfTable();
        ~NetconfVrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Crypto::Ssh::Server::NetconfVrfTable::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable::Vrf> > vrf;
        
}; // Crypto::Ssh::Server::NetconfVrfTable


class Crypto::Ssh::Server::NetconfVrfTable::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf enable; //type: empty
        YLeaf ipv4_access_list; //type: string
        YLeaf ipv6_access_list; //type: string

}; // Crypto::Ssh::Server::NetconfVrfTable::Vrf

class CryptoSamActionEnum : public Enum
{
    public:
        static const Enum::YLeaf proceed;
        static const Enum::YLeaf terminate;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_CFG_ */

