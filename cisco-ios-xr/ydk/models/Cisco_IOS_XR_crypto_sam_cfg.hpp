#ifndef _CISCO_IOS_XR_CRYPTO_SAM_CFG_
#define _CISCO_IOS_XR_CRYPTO_SAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_cfg {

class Crypto : public Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Sam : public Entity
    {
        public:
            Sam();
            ~Sam();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class PromptInterval : public Entity
        {
            public:
                PromptInterval();
                ~PromptInterval();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf action; //type: CryptoSamActionEnum
                YLeaf prompt_time; //type: uint32



        }; // Crypto::Sam::PromptInterval


            std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam::PromptInterval> prompt_interval; // presence node


    }; // Crypto::Sam


    class Ssh : public Entity
    {
        public:
            Ssh();
            ~Ssh();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Client : public Entity
        {
            public:
                Client();
                ~Client();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf host_public_key; //type: string
                YLeaf client_vrf; //type: string
                YLeaf source_interface; //type: string
                YLeaf dscp; //type: uint32



        }; // Crypto::Ssh::Client


        class Server : public Entity
        {
            public:
                Server();
                ~Server();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf session_limit; //type: uint32
                YLeaf netconf; //type: uint32
                YLeaf v2; //type: empty
                YLeaf logging; //type: empty
                YLeaf rate_limit; //type: uint32
                YLeaf timeout; //type: uint32
                YLeaf dscp; //type: uint32

            class VrfTable : public Entity
            {
                public:
                    VrfTable();
                    ~VrfTable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vrf_name; //type: string
                        YLeaf enable; //type: empty
                        YLeaf ipv4_access_list; //type: string
                        YLeaf ipv6_access_list; //type: string



                }; // Crypto::Ssh::Server::VrfTable::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable::Vrf> > vrf;


            }; // Crypto::Ssh::Server::VrfTable


            class NetconfVrfTable : public Entity
            {
                public:
                    NetconfVrfTable();
                    ~NetconfVrfTable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vrf_name; //type: string
                        YLeaf enable; //type: empty
                        YLeaf ipv4_access_list; //type: string
                        YLeaf ipv6_access_list; //type: string



                }; // Crypto::Ssh::Server::NetconfVrfTable::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable::Vrf> > vrf;


            }; // Crypto::Ssh::Server::NetconfVrfTable


                std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::NetconfVrfTable> netconf_vrf_table;
                std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server::VrfTable> vrf_table;


        }; // Crypto::Ssh::Server


            std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Client> client;
            std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh::Server> server;


    }; // Crypto::Ssh


        std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Sam> sam;
        std::unique_ptr<Cisco_IOS_XR_crypto_sam_cfg::Crypto::Ssh> ssh;


}; // Crypto


class CryptoSamActionEnum : public Enum
{
    public:
        static const Enum::YLeaf proceed;
        static const Enum::YLeaf terminate;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SAM_CFG_ */

