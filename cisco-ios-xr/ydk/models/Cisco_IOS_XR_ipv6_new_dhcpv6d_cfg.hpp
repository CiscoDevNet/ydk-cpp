#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg {

class Dhcpv6 : public Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf enable; //type: empty
        YLeaf allow_duid_change; //type: empty

    class Database : public Entity
    {
        public:
            Database();
            ~Database();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf proxy; //type: empty
            YLeaf server; //type: empty
            YLeaf relay; //type: empty
            YLeaf full_write_interval; //type: uint32
            YLeaf incremental_write_interval; //type: uint32



    }; // Dhcpv6::Database


    class Profiles : public Entity
    {
        public:
            Profiles();
            ~Profiles();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Profile : public Entity
        {
            public:
                Profile();
                ~Profile();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf profile_name; //type: string

            class Relay : public Entity
            {
                public:
                    Relay();
                    ~Relay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty
                    YLeaf iana_route_add; //type: empty

                class HelperAddresses : public Entity
                {
                    public:
                        HelperAddresses();
                        ~HelperAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HelperAddress : public Entity
                    {
                        public:
                            HelperAddress();
                            ~HelperAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string
                            YLeaf helper_address; //type: string



                    }; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses::HelperAddress> > helper_address;


                }; // Dhcpv6::Profiles::Profile::Relay::HelperAddresses


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay::HelperAddresses> helper_addresses;


            }; // Dhcpv6::Profiles::Profile::Relay


            class Proxy : public Entity
            {
                public:
                    Proxy();
                    ~Proxy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf link_address; //type: string
                    YLeaf src_intf_name; //type: string
                    YLeaf enable; //type: empty

                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Interface : public Entity
                    {
                        public:
                            Interface();
                            ~Interface();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string
                            YLeaf interface_id; //type: string



                    }; // Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces::Interface> > interface;


                }; // Dhcpv6::Profiles::Profile::Proxy::Interfaces


                class Relay : public Entity
                {
                    public:
                        Relay();
                        ~Relay();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Option : public Entity
                    {
                        public:
                            Option();
                            ~Option();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf subscriber_id; //type: SubscriberIdEnum
                            YLeaf link_layer_addr; //type: LinkLayerAddrEnum
                            YLeaf remote_i_dreceived; //type: int32
                            YLeaf remote_id; //type: string

                        class InterfaceId : public Entity
                        {
                            public:
                                InterfaceId();
                                ~InterfaceId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf insert; //type: InsertEnum



                        }; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option::InterfaceId> interface_id;


                    }; // Dhcpv6::Profiles::Profile::Proxy::Relay::Option


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay::Option> option;


                }; // Dhcpv6::Profiles::Profile::Proxy::Relay


                class Vrfs : public Entity
                {
                    public:
                        Vrfs();
                        ~Vrfs();

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

                        class HelperAddresses : public Entity
                        {
                            public:
                                HelperAddresses();
                                ~HelperAddresses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class HelperAddress : public Entity
                            {
                                public:
                                    HelperAddress();
                                    ~HelperAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf helper_address; //type: string
                                    YLeaf out_interface; //type: string
                                    YLeaf any_out_interface; //type: empty



                            }; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;


                        }; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf::HelperAddresses> helper_addresses;


                    }; // Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs::Vrf> > vrf;


                }; // Dhcpv6::Profiles::Profile::Proxy::Vrfs


                class Classes : public Entity
                {
                    public:
                        Classes();
                        ~Classes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Class_ : public Entity
                    {
                        public:
                            Class_();
                            ~Class_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf class_name; //type: string
                            YLeaf link_address; //type: string

                        class HelperAddresses : public Entity
                        {
                            public:
                                HelperAddresses();
                                ~HelperAddresses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class HelperAddress : public Entity
                            {
                                public:
                                    HelperAddress();
                                    ~HelperAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf vrf_name; //type: string
                                    YLeaf helper_address; //type: string



                            }; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses::HelperAddress> > helper_address;


                        }; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_::HelperAddresses> helper_addresses;


                    }; // Dhcpv6::Profiles::Profile::Proxy::Classes::Class_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes::Class_> > class_;


                }; // Dhcpv6::Profiles::Profile::Proxy::Classes


                class Sessions : public Entity
                {
                    public:
                        Sessions();
                        ~Sessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Mac : public Entity
                    {
                        public:
                            Mac();
                            ~Mac();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Throttle : public Entity
                        {
                            public:
                                Throttle();
                                ~Throttle();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf limit; //type: uint32
                                YLeaf request; //type: uint32
                                YLeaf block; //type: uint32



                        }; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac::Throttle> throttle;


                    }; // Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions::Mac> mac;


                }; // Dhcpv6::Profiles::Profile::Proxy::Sessions


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Classes> classes;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Relay> relay;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Sessions> sessions;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy::Vrfs> vrfs;


            }; // Dhcpv6::Profiles::Profile::Proxy


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


                    YLeaf address_pool; //type: string
                    YLeaf aftr_name; //type: string
                    YLeaf domain_name; //type: string
                    YLeaf preference; //type: uint32
                    YLeaf rapid_commit; //type: empty
                    YLeaf enable; //type: empty
                    YLeaf prefix_pool; //type: string

                class Sessions : public Entity
                {
                    public:
                        Sessions();
                        ~Sessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Mac : public Entity
                    {
                        public:
                            Mac();
                            ~Mac();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Throttle : public Entity
                        {
                            public:
                                Throttle();
                                ~Throttle();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf limit; //type: uint32
                                YLeaf request; //type: uint32
                                YLeaf block; //type: uint32



                        }; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac::Throttle> throttle;


                    }; // Dhcpv6::Profiles::Profile::Server::Sessions::Mac


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions::Mac> mac;


                }; // Dhcpv6::Profiles::Profile::Server::Sessions


                class DnsServers : public Entity
                {
                    public:
                        DnsServers();
                        ~DnsServers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeafList dns_server; //type: list of  string



                }; // Dhcpv6::Profiles::Profile::Server::DnsServers


                class Classes : public Entity
                {
                    public:
                        Classes();
                        ~Classes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Class_ : public Entity
                    {
                        public:
                            Class_();
                            ~Class_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf class_name; //type: string
                            YLeaf address_pool; //type: string
                            YLeaf domain_name; //type: string
                            YLeaf preference; //type: uint32
                            YLeaf prefix_pool; //type: string

                        class DnsServers : public Entity
                        {
                            public:
                                DnsServers();
                                ~DnsServers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeafList dns_server; //type: list of  string



                        }; // Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class_::DnsServers> dns_servers;


                    }; // Dhcpv6::Profiles::Profile::Server::Classes::Class_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes::Class_> > class_;


                }; // Dhcpv6::Profiles::Profile::Server::Classes


                class Lease : public Entity
                {
                    public:
                        Lease();
                        ~Lease();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf days; //type: uint32
                        YLeaf hours; //type: uint32
                        YLeaf minutes; //type: uint32
                        YLeaf infinite; //type: string



                }; // Dhcpv6::Profiles::Profile::Server::Lease


                class Dhcpv6Options : public Entity
                {
                    public:
                        Dhcpv6Options();
                        ~Dhcpv6Options();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VendorOptions : public Entity
                    {
                        public:
                            VendorOptions();
                            ~VendorOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: string
                            YLeaf vendor_options; //type: string



                    }; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options::VendorOptions> vendor_options;


                }; // Dhcpv6::Profiles::Profile::Server::Dhcpv6Options


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Classes> classes;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Dhcpv6Options> dhcpv6_options;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::DnsServers> dns_servers;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Lease> lease;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server::Sessions> sessions;


            }; // Dhcpv6::Profiles::Profile::Server


                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Proxy> proxy; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Relay> relay; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile::Server> server; // presence node


        }; // Dhcpv6::Profiles::Profile


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles::Profile> > profile;


    }; // Dhcpv6::Profiles


    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string

            class Pppoe : public Entity
            {
                public:
                    Pppoe();
                    ~Pppoe();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf profile; //type: string



            }; // Dhcpv6::Interfaces::Interface::Pppoe


            class Proxy : public Entity
            {
                public:
                    Proxy();
                    ~Proxy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf profile; //type: string



            }; // Dhcpv6::Interfaces::Interface::Proxy


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


                    YLeaf profile; //type: string



            }; // Dhcpv6::Interfaces::Interface::Server


            class Relay : public Entity
            {
                public:
                    Relay();
                    ~Relay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf profile; //type: string



            }; // Dhcpv6::Interfaces::Interface::Relay


                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Pppoe> pppoe;
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Proxy> proxy;
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Relay> relay;
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface::Server> server;


        }; // Dhcpv6::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces::Interface> > interface;


    }; // Dhcpv6::Interfaces


        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Database> database;
        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6::Profiles> profiles;


}; // Dhcpv6


class InsertEnum : public Enum
{
    public:
        static const Enum::YLeaf local;
        static const Enum::YLeaf received;
        static const Enum::YLeaf pppoe;

};

class LinkLayerAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf set;

};

class SubscriberIdEnum : public Enum
{
    public:
        static const Enum::YLeaf pppoe;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_CFG_ */

