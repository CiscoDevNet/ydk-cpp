#ifndef _CISCO_IOS_XR_IP_IARM_V4_OPER_
#define _CISCO_IOS_XR_IP_IARM_V4_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iarm_v4_oper {

class Ipv4Arm : public Entity
{
    public:
        Ipv4Arm();
        ~Ipv4Arm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value multicast_host_interface; //type: string


    class Addresses : public Entity
    {
        public:
            Addresses();
            ~Addresses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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


                class Networks : public Entity
                {
                    public:
                        Networks();
                        ~Networks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Network : public Entity
                    {
                        public:
                            Network();
                            ~Network();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value prefix_length; //type: uint32
                            Value handle; //type: string
                            Value interface_name; //type: string
                            Value referenced_interface; //type: string
                            Value vrf_name; //type: string


                        class AddressXr : public Entity
                        {
                            public:
                                AddressXr();
                                ~AddressXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix_length; //type: uint32
                                Value route_tag; //type: uint32
                                Value is_primary; //type: boolean
                                Value is_tentative; //type: boolean
                                Value producer; //type: string


                            class Address : public Entity
                            {
                                public:
                                    Address();
                                    ~Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value afi; //type: int32
                                    Value ipv4_address; //type: string
                                    Value ipv6_address; //type: string




                            }; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


                                std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;


                        }; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


                            std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;


                    }; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;


                }; // Ipv4Arm::Addresses::Vrfs::Vrf::Networks


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
                            Value interface; //type: string
                            Value referenced_interface; //type: string
                            Value vrf_name; //type: string


                        class Address : public Entity
                        {
                            public:
                                Address();
                                ~Address();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix_length; //type: uint32
                                Value route_tag; //type: uint32
                                Value is_primary; //type: boolean
                                Value is_tentative; //type: boolean
                                Value producer; //type: string


                            class Address_ : public Entity
                            {
                                public:
                                    Address_();
                                    ~Address_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value afi; //type: int32
                                    Value ipv4_address; //type: string
                                    Value ipv6_address; //type: string




                            }; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


                                std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;


                        }; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;


                    }; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;


                }; // Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf::Networks> networks;


            }; // Ipv4Arm::Addresses::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs::Vrf> > vrf;


        }; // Ipv4Arm::Addresses::Vrfs


            std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses::Vrfs> vrfs;


    }; // Ipv4Arm::Addresses


    class Summary : public Entity
    {
        public:
            Summary();
            ~Summary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value producer_count; //type: int32
            Value address_conflict_count; //type: int32
            Value unnumbered_conflict_count; //type: int32
            Value db_master_version; //type: uint32
            Value vrf_count; //type: int32




    }; // Ipv4Arm::Summary


    class VrfSummaries : public Entity
    {
        public:
            VrfSummaries();
            ~VrfSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class VrfSummary : public Entity
        {
            public:
                VrfSummary();
                ~VrfSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string
                Value vrf_id; //type: uint32
                Value vrf_name_xr; //type: string




        }; // Ipv4Arm::VrfSummaries::VrfSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries::VrfSummary> > vrf_summary;


    }; // Ipv4Arm::VrfSummaries


    class RouterId : public Entity
    {
        public:
            RouterId();
            ~RouterId();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value vrf_id; //type: uint32
            Value vrf_name; //type: string
            Value interface_name; //type: string
            Value router_id; //type: string




    }; // Ipv4Arm::RouterId


        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Addresses> addresses;
        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::RouterId> router_id;
        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::Summary> summary;
        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm::VrfSummaries> vrf_summaries;


}; // Ipv4Arm



}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V4_OPER_ */

