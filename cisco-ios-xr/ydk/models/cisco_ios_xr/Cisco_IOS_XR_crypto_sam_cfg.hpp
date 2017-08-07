#ifndef _CISCO_IOS_XR_CRYPTO_SAM_CFG_
#define _CISCO_IOS_XR_CRYPTO_SAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_sam_cfg {

class Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Sam; //type: Crypto::Sam
        class Ssh; //type: Crypto::Ssh

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam> sam;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh> ssh;
        
}; // Crypto


class Crypto::Sam : public ydk::Entity
{
    public:
        Sam();
        ~Sam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PromptInterval; //type: Crypto::Sam::PromptInterval

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam::PromptInterval> prompt_interval; // presence node
        
}; // Crypto::Sam


class Crypto::Sam::PromptInterval : public ydk::Entity
{
    public:
        PromptInterval();
        ~PromptInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: CryptoSamAction
        ydk::YLeaf prompt_time; //type: uint32

}; // Crypto::Sam::PromptInterval


class Crypto::Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Crypto::Ssh::Client
        class Server; //type: Crypto::Ssh::Server

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Client> client;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server> server;
        
}; // Crypto::Ssh


class Crypto::Ssh::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_public_key; //type: string
        ydk::YLeaf client_vrf; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf dscp; //type: uint32

}; // Crypto::Ssh::Client


class Crypto::Ssh::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rekey_volume; //type: uint32
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf netconf; //type: uint32
        ydk::YLeaf v2; //type: empty
        ydk::YLeaf rekey_time; //type: uint32
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf rate_limit; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        class Disable; //type: Crypto::Ssh::Server::Disable
        class VrfTable; //type: Crypto::Ssh::Server::VrfTable
        class Capability; //type: Crypto::Ssh::Server::Capability
        class NetconfVrfTable; //type: Crypto::Ssh::Server::NetconfVrfTable

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::Capability> capability;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::Disable> disable;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable> netconf_vrf_table;
        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable> vrf_table;
        
}; // Crypto::Ssh::Server


class Crypto::Ssh::Server::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hmac; //type: Crypto::Ssh::Server::Disable::Hmac

        std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::Disable::Hmac> hmac;
        
}; // Crypto::Ssh::Server::Disable


class Crypto::Ssh::Server::Disable::Hmac : public ydk::Entity
{
    public:
        Hmac();
        ~Hmac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha512; //type: boolean

}; // Crypto::Ssh::Server::Disable::Hmac


class Crypto::Ssh::Server::VrfTable : public ydk::Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Crypto::Ssh::Server::VrfTable::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable::Vrf> > vrf;
        
}; // Crypto::Ssh::Server::VrfTable


class Crypto::Ssh::Server::VrfTable::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf ipv4_access_list; //type: string
        ydk::YLeaf ipv6_access_list; //type: string

}; // Crypto::Ssh::Server::VrfTable::Vrf


class Crypto::Ssh::Server::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf netconf_xml; //type: boolean

}; // Crypto::Ssh::Server::Capability


class Crypto::Ssh::Server::NetconfVrfTable : public ydk::Entity
{
    public:
        NetconfVrfTable();
        ~NetconfVrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Crypto::Ssh::Server::NetconfVrfTable::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable::Vrf> > vrf;
        
}; // Crypto::Ssh::Server::NetconfVrfTable


class Crypto::Ssh::Server::NetconfVrfTable::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf ipv4_access_list; //type: string
        ydk::YLeaf ipv6_access_list; //type: string

}; // Crypto::Ssh::Server::NetconfVrfTable::Vrf

class CryptoSamAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf proceed;
        static const ydk::Enum::YLeaf terminate;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_CFG_ */

