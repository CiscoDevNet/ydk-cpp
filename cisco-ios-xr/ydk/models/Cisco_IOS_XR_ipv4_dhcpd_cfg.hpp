#ifndef _CISCO_IOS_XR_IPV4_DHCPD_CFG_
#define _CISCO_IOS_XR_IPV4_DHCPD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

class Ipv4Dhcpd : public Entity
{
    public:
        Ipv4Dhcpd();
        ~Ipv4Dhcpd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty
        Value allow_client_id_change; //type: empty


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
                Value vrf_name; //type: string


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
                    Value vrf_profile_name; //type: string
                    Value mode; //type: Ipv4DhcpdModeEnum


                    class Ipv4DhcpdModeEnum;


            }; // Ipv4Dhcpd::Vrfs::Vrf::Profile


                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf::Profile> profile; // presence node


        }; // Ipv4Dhcpd::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf> > vrf;


    }; // Ipv4Dhcpd::Vrfs


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
                Value profile_name; //type: string


            class Modes : public Entity
            {
                public:
                    Modes();
                    ~Modes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Mode : public Entity
                {
                    public:
                        Mode();
                        ~Mode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value mode; //type: Ipv4DhcpdModeEnum
                        Value enable; //type: empty


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




                    }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server


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


                        class GiAddrPolicy : public Entity
                        {
                            public:
                                GiAddrPolicy();
                                ~GiAddrPolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value policy; //type: Ipv4DhcpdGiaddrPolicyEnum


                                class Ipv4DhcpdGiaddrPolicyEnum;


                        }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy


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
                                    Value vrf_name; //type: string


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
                                            Value ip_address; //type: string
                                            Value enable; //type: empty
                                            Value gateway_address; //type: string




                                    }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;


                                }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses> helper_addresses;


                            }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf> > vrf;


                        }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs


                        class RelayInformationOption : public Entity
                        {
                            public:
                                RelayInformationOption();
                                ~RelayInformationOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnModeEnum
                                Value subscriber_id; //type: string
                                Value insert; //type: empty
                                Value check; //type: empty
                                Value vpn; //type: empty
                                Value allow_untrusted; //type: empty
                                Value policy; //type: Ipv4DhcpdRelayInfoOptionPolicyEnum


                                class Ipv4DhcpdRelayInfoOptionPolicyEnum;
                                class Ipv4DhcpdRelayInfoOptionvpnModeEnum;


                        }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption


                        class BroadcastPolicy : public Entity
                        {
                            public:
                                BroadcastPolicy();
                                ~BroadcastPolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value policy; //type: Ipv4DhcpdBroadcastFlagPolicyEnum


                                class Ipv4DhcpdBroadcastFlagPolicyEnum;


                        }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy


                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy> broadcast_policy;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy> gi_addr_policy;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption> relay_information_option;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs> vrfs;


                    }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay


                        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay> relay;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server> server;
                        class Ipv4DhcpdModeEnum;


                }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode> > mode;


            }; // Ipv4Dhcpd::Profiles::Profile::Modes


                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes> modes;


        }; // Ipv4Dhcpd::Profiles::Profile


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile> > profile;


    }; // Ipv4Dhcpd::Profiles


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
            Value proxy; //type: empty
            Value server; //type: empty
            Value snoop; //type: empty
            Value full_write_interval; //type: uint32
            Value incremental_write_interval; //type: uint32




    }; // Ipv4Dhcpd::Database


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
                Value interface_name; //type: string
                Value none; //type: empty


            class ProxyInterface : public Entity
            {
                public:
                    ProxyInterface();
                    ~ProxyInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string


                class DhcpCircuitId : public Entity
                {
                    public:
                        DhcpCircuitId();
                        ~DhcpCircuitId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value circuit_id; //type: string
                        Value format; //type: Ipv4DhcpdFmtEnum
                        Value argument1; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument2; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument3; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument4; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument5; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument6; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument7; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument8; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument9; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument10; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument11; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument12; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument13; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument14; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument15; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument16; //type: Ipv4DhcpdFmtSpecifierEnum


                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtEnum;


                }; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId


                    std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId> dhcp_circuit_id; // presence node


            }; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface


            class BaseInterface : public Entity
            {
                public:
                    BaseInterface();
                    ~BaseInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string




            }; // Ipv4Dhcpd::Interfaces::Interface::BaseInterface


            class RelayInterface : public Entity
            {
                public:
                    RelayInterface();
                    ~RelayInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RelayDhcpCircuitId : public Entity
                {
                    public:
                        RelayDhcpCircuitId();
                        ~RelayDhcpCircuitId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value circuit_id; //type: string
                        Value format; //type: Ipv4DhcpdFmtEnum
                        Value argument1; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument2; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument3; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument4; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument5; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument6; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument7; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument8; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument9; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument10; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument11; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument12; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument13; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument14; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument15; //type: Ipv4DhcpdFmtSpecifierEnum
                        Value argument16; //type: Ipv4DhcpdFmtSpecifierEnum


                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtSpecifierEnum;
                        class Ipv4DhcpdFmtEnum;


                }; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId


                    std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId> relay_dhcp_circuit_id; // presence node


            }; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface


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
                    Value profile_name; //type: string
                    Value mode; //type: Ipv4DhcpdModeEnum


                    class Ipv4DhcpdModeEnum;


            }; // Ipv4Dhcpd::Interfaces::Interface::Profile


            class ServerInterface : public Entity
            {
                public:
                    ServerInterface();
                    ~ServerInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string




            }; // Ipv4Dhcpd::Interfaces::Interface::ServerInterface


            class SnoopInterface : public Entity
            {
                public:
                    SnoopInterface();
                    ~SnoopInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SnoopCircuitId : public Entity
                {
                    public:
                        SnoopCircuitId();
                        ~SnoopCircuitId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value format_type; //type: uint32
                        Value circuit_id_value; //type: string




                }; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId


                    std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId> snoop_circuit_id;


            }; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface


                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::BaseInterface> base_interface;
                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::Profile> profile; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ProxyInterface> proxy_interface;
                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::RelayInterface> relay_interface;
                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ServerInterface> server_interface;
                std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::SnoopInterface> snoop_interface;


        }; // Ipv4Dhcpd::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface> > interface;


    }; // Ipv4Dhcpd::Interfaces


    class DuplicateMacAllowed : public Entity
    {
        public:
            DuplicateMacAllowed();
            ~DuplicateMacAllowed();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value duplicate_mac; //type: empty
            Value exclude_vlan; //type: empty




    }; // Ipv4Dhcpd::DuplicateMacAllowed


    class RateLimit : public Entity
    {
        public:
            RateLimit();
            ~RateLimit();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value num_period; //type: uint32
            Value num_discover; //type: uint32




    }; // Ipv4Dhcpd::RateLimit


        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Database> database;
        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::DuplicateMacAllowed> duplicate_mac_allowed; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles> profiles;
        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::RateLimit> rate_limit;
        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs> vrfs;


}; // Ipv4Dhcpd


class Ipv4DhcpdFmtEnum : public Enum
{
    public:
        static const Enum::Value no_format;
        static const Enum::Value format;

};

class Ipv4DhcpdFmtSpecifierEnum : public Enum
{
    public:
        static const Enum::Value physical_chassis;
        static const Enum::Value physical_slot;
        static const Enum::Value physical_sub_slot;
        static const Enum::Value physical_port;
        static const Enum::Value physical_sub_port;
        static const Enum::Value inner_vlan_id;
        static const Enum::Value outer_vlan_id;
        static const Enum::Value l2_interface;

};

class Ipv4DhcpdRelayInfoOptionPolicyEnum : public Enum
{
    public:
        static const Enum::Value replace;
        static const Enum::Value keep;
        static const Enum::Value drop;
        static const Enum::Value encapsulate;

};

class Ipv4DhcpdBroadcastFlagPolicyEnum : public Enum
{
    public:
        static const Enum::Value ignore;
        static const Enum::Value check;
        static const Enum::Value unicast_always;

};

class Ipv4DhcpdModeEnum : public Enum
{
    public:
        static const Enum::Value base;
        static const Enum::Value relay;
        static const Enum::Value snoop;
        static const Enum::Value server;
        static const Enum::Value proxy;
        static const Enum::Value base2;

};

class Ipv4DhcpdGiaddrPolicyEnum : public Enum
{
    public:
        static const Enum::Value keep;
        static const Enum::Value replace;
        static const Enum::Value drop;

};

class Ipv4DhcpdRelayInfoOptionvpnModeEnum : public Enum
{
    public:
        static const Enum::Value rfc;
        static const Enum::Value cisco;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_CFG_ */

