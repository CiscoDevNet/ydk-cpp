#ifndef _CISCO_IOS_XR_IP_IARM_V6_OPER_
#define _CISCO_IOS_XR_IP_IARM_V6_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iarm_v6_oper {

class Ipv6Arm : public Entity
{
    public:
        Ipv6Arm();
        ~Ipv6Arm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf multicast_host_interface; //type: string

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


                    YLeaf vrf_name; //type: string

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


                            YLeaf address; //type: string
                            YLeaf prefix_length; //type: uint32
                            YLeaf handle; //type: string
                            YLeaf interface_name; //type: string
                            YLeaf referenced_interface; //type: string
                            YLeaf vrf_name; //type: string

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


                                YLeaf prefix_length; //type: uint32
                                YLeaf route_tag; //type: uint32
                                YLeaf is_primary; //type: boolean
                                YLeaf is_tentative; //type: boolean
                                YLeaf producer; //type: string

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


                                    YLeaf afi; //type: int32
                                    YLeaf ipv4_address; //type: string
                                    YLeaf ipv6_address; //type: string



                            }; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address


                                std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address> address;


                        }; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr


                            std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr> address_xr;


                    }; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network> > network;


                }; // Ipv6Arm::Addresses::Vrfs::Vrf::Networks


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


                            YLeaf interface; //type: string
                            YLeaf referenced_interface; //type: string
                            YLeaf vrf_name; //type: string

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


                                YLeaf prefix_length; //type: uint32
                                YLeaf route_tag; //type: uint32
                                YLeaf is_primary; //type: boolean
                                YLeaf is_tentative; //type: boolean
                                YLeaf producer; //type: string

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


                                    YLeaf afi; //type: int32
                                    YLeaf ipv4_address; //type: string
                                    YLeaf ipv6_address; //type: string



                            }; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_


                                std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_> address;


                        }; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address> > address;


                    }; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface> > interface;


                }; // Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf::Networks> networks;


            }; // Ipv6Arm::Addresses::Vrfs::Vrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs::Vrf> > vrf;


        }; // Ipv6Arm::Addresses::Vrfs


            std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses::Vrfs> vrfs;


    }; // Ipv6Arm::Addresses


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


            YLeaf producer_count; //type: int32
            YLeaf address_conflict_count; //type: int32
            YLeaf unnumbered_conflict_count; //type: int32
            YLeaf db_master_version; //type: uint32
            YLeaf vrf_count; //type: int32



    }; // Ipv6Arm::Summary


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


                YLeaf vrf_name; //type: string
                YLeaf vrf_id; //type: uint32
                YLeaf vrf_name_xr; //type: string



        }; // Ipv6Arm::VrfSummaries::VrfSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries::VrfSummary> > vrf_summary;


    }; // Ipv6Arm::VrfSummaries


        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Addresses> addresses;
        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::Summary> summary;
        std::unique_ptr<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm::VrfSummaries> vrf_summaries;


}; // Ipv6Arm



}
}

#endif /* _CISCO_IOS_XR_IP_IARM_V6_OPER_ */

