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


        YLeaf enable; //type: empty
        YLeaf allow_client_id_change; //type: empty

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


                    YLeaf vrf_profile_name; //type: string
                    YLeaf mode; //type: Ipv4DhcpdModeEnum



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


                YLeaf profile_name; //type: string

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


                        YLeaf mode; //type: Ipv4DhcpdModeEnum
                        YLeaf enable; //type: empty

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


                                YLeaf policy; //type: Ipv4DhcpdGiaddrPolicyEnum



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


                                            YLeaf ip_address; //type: string
                                            YLeaf enable; //type: empty
                                            YLeaf gateway_address; //type: string



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


                                YLeaf vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnModeEnum
                                YLeaf subscriber_id; //type: string
                                YLeaf insert; //type: empty
                                YLeaf check; //type: empty
                                YLeaf vpn; //type: empty
                                YLeaf allow_untrusted; //type: empty
                                YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicyEnum



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


                                YLeaf policy; //type: Ipv4DhcpdBroadcastFlagPolicyEnum



                        }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy


                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy> broadcast_policy;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy> gi_addr_policy;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption> relay_information_option;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs> vrfs;


                    }; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay


                        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay> relay;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server> server;


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


            YLeaf proxy; //type: empty
            YLeaf server; //type: empty
            YLeaf snoop; //type: empty
            YLeaf full_write_interval; //type: uint32
            YLeaf incremental_write_interval; //type: uint32



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


                YLeaf interface_name; //type: string
                YLeaf none; //type: empty

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


                    YLeaf profile; //type: string

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


                        YLeaf circuit_id; //type: string
                        YLeaf format; //type: Ipv4DhcpdFmtEnum
                        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum



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


                    YLeaf profile; //type: string



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


                        YLeaf circuit_id; //type: string
                        YLeaf format; //type: Ipv4DhcpdFmtEnum
                        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
                        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum



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


                    YLeaf profile_name; //type: string
                    YLeaf mode; //type: Ipv4DhcpdModeEnum



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


                    YLeaf profile; //type: string



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


                        YLeaf format_type; //type: uint32
                        YLeaf circuit_id_value; //type: string



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


            YLeaf duplicate_mac; //type: empty
            YLeaf exclude_vlan; //type: empty



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


            YLeaf num_period; //type: uint32
            YLeaf num_discover; //type: uint32



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
        static const Enum::YLeaf no_format;
        static const Enum::YLeaf format;

};

class Ipv4DhcpdFmtSpecifierEnum : public Enum
{
    public:
        static const Enum::YLeaf physical_chassis;
        static const Enum::YLeaf physical_slot;
        static const Enum::YLeaf physical_sub_slot;
        static const Enum::YLeaf physical_port;
        static const Enum::YLeaf physical_sub_port;
        static const Enum::YLeaf inner_vlan_id;
        static const Enum::YLeaf outer_vlan_id;
        static const Enum::YLeaf l2_interface;

};

class Ipv4DhcpdRelayInfoOptionPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf replace;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;

};

class Ipv4DhcpdBroadcastFlagPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore;
        static const Enum::YLeaf check;
        static const Enum::YLeaf unicast_always;

};

class Ipv4DhcpdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf relay;
        static const Enum::YLeaf snoop;
        static const Enum::YLeaf server;
        static const Enum::YLeaf proxy;
        static const Enum::YLeaf base2;

};

class Ipv4DhcpdGiaddrPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf drop;

};

class Ipv4DhcpdRelayInfoOptionvpnModeEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc;
        static const Enum::YLeaf cisco;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_CFG_ */

