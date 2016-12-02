#ifndef _CISCO_IOS_XR_IPV4_HSRP_CFG_
#define _CISCO_IOS_XR_IPV4_HSRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_hsrp_cfg {

class Hsrp : public Entity
{
    public:
        Hsrp();
        ~Hsrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
                Value mac_refresh; //type: uint32
                Value use_bia; //type: empty
                Value redirects_disable; //type: empty


            class Ipv6 : public Entity
            {
                public:
                    Ipv6();
                    ~Ipv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Version2 : public Entity
                {
                    public:
                        Version2();
                        ~Version2();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Groups : public Entity
                    {
                        public:
                            Groups();
                            ~Groups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Group : public Entity
                        {
                            public:
                                Group();
                                ~Group();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_number; //type: uint32
                                Value priority; //type: uint32
                                Value preempt; //type: int32
                                Value session_name; //type: string
                                Value virtual_mac_address; //type: string


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value interface_name; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd


                            class TrackedInterfaces : public Entity
                            {
                                public:
                                    TrackedInterfaces();
                                    ~TrackedInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedInterface : public Entity
                                {
                                    public:
                                        TrackedInterface();
                                        ~TrackedInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces


                            class TrackedObjects : public Entity
                            {
                                public:
                                    TrackedObjects();
                                    ~TrackedObjects();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedObject : public Entity
                                {
                                    public:
                                        TrackedObject();
                                        ~TrackedObject();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value object_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects


                            class Timers : public Entity
                            {
                                public:
                                    Timers();
                                    ~Timers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value hello_msec_flag; //type: boolean
                                    Value hello_msec; //type: uint32
                                    Value hello_sec; //type: uint32
                                    Value hold_msec_flag; //type: boolean
                                    Value hold_msec; //type: uint32
                                    Value hold_sec; //type: uint32




                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers


                            class LinkLocalIpv6Address : public Entity
                            {
                                public:
                                    LinkLocalIpv6Address();
                                    ~LinkLocalIpv6Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value auto_configure; //type: HsrpLinklocalEnum


                                    class HsrpLinklocalEnum;


                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address


                            class GlobalIpv6Addresses : public Entity
                            {
                                public:
                                    GlobalIpv6Addresses();
                                    ~GlobalIpv6Addresses();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class GlobalIpv6Address : public Entity
                                {
                                    public:
                                        GlobalIpv6Address();
                                        ~GlobalIpv6Address();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


                            }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses


                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses> global_ipv6_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address> link_local_ipv6_address;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers> timers;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects> tracked_objects;


                        }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group> > group;


                    }; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups


                        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups> groups;


                }; // Hsrp::Interfaces::Interface::Ipv6::Version2


                class SlaveGroups : public Entity
                {
                    public:
                        SlaveGroups();
                        ~SlaveGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SlaveGroup : public Entity
                    {
                        public:
                            SlaveGroup();
                            ~SlaveGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value slave_group_number; //type: uint32
                            Value follow; //type: string
                            Value virtual_mac_address; //type: string


                        class LinkLocalIpv6Address : public Entity
                        {
                            public:
                                LinkLocalIpv6Address();
                                ~LinkLocalIpv6Address();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value auto_configure; //type: HsrpLinklocalEnum


                                class HsrpLinklocalEnum;


                        }; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address


                        class GlobalIpv6Addresses : public Entity
                        {
                            public:
                                GlobalIpv6Addresses();
                                ~GlobalIpv6Addresses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class GlobalIpv6Address : public Entity
                            {
                                public:
                                    GlobalIpv6Address();
                                    ~GlobalIpv6Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


                        }; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses


                            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses> global_ipv6_addresses;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address> link_local_ipv6_address;


                    }; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup> > slave_group;


                }; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups> slave_groups;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2> version2;


            }; // Hsrp::Interfaces::Interface::Ipv6


            class Bfd : public Entity
            {
                public:
                    Bfd();
                    ~Bfd();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value detection_multiplier; //type: uint32
                    Value interval; //type: uint32




            }; // Hsrp::Interfaces::Interface::Bfd


            class Delay : public Entity
            {
                public:
                    Delay();
                    ~Delay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value minimum_delay; //type: uint32
                    Value reload_delay; //type: uint32




            }; // Hsrp::Interfaces::Interface::Delay


            class Ipv4 : public Entity
            {
                public:
                    Ipv4();
                    ~Ipv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SlaveGroups : public Entity
                {
                    public:
                        SlaveGroups();
                        ~SlaveGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SlaveGroup : public Entity
                    {
                        public:
                            SlaveGroup();
                            ~SlaveGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value slave_group_number; //type: uint32
                            Value follow; //type: string
                            Value virtual_mac_address; //type: string
                            Value primary_ipv4_address; //type: string


                        class SecondaryIpv4Addresses : public Entity
                        {
                            public:
                                SecondaryIpv4Addresses();
                                ~SecondaryIpv4Addresses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SecondaryIpv4Address : public Entity
                            {
                                public:
                                    SecondaryIpv4Address();
                                    ~SecondaryIpv4Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                        }; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses


                            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses> secondary_ipv4_addresses;


                    }; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup> > slave_group;


                }; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups


                class Version1 : public Entity
                {
                    public:
                        Version1();
                        ~Version1();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Groups : public Entity
                    {
                        public:
                            Groups();
                            ~Groups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Group : public Entity
                        {
                            public:
                                Group();
                                ~Group();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_number; //type: uint32
                                Value authentication; //type: string
                                Value session_name; //type: string
                                Value priority; //type: uint32
                                Value preempt; //type: int32
                                Value virtual_mac_address; //type: string


                            class TrackedInterfaces : public Entity
                            {
                                public:
                                    TrackedInterfaces();
                                    ~TrackedInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedInterface : public Entity
                                {
                                    public:
                                        TrackedInterface();
                                        ~TrackedInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value interface_name; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd


                            class TrackedObjects : public Entity
                            {
                                public:
                                    TrackedObjects();
                                    ~TrackedObjects();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedObject : public Entity
                                {
                                    public:
                                        TrackedObject();
                                        ~TrackedObject();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value object_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects


                            class Timers : public Entity
                            {
                                public:
                                    Timers();
                                    ~Timers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value hello_msec_flag; //type: boolean
                                    Value hello_msec; //type: uint32
                                    Value hello_sec; //type: uint32
                                    Value hold_msec_flag; //type: boolean
                                    Value hold_msec; //type: uint32
                                    Value hold_sec; //type: uint32




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers


                            class PrimaryIpv4Address : public Entity
                            {
                                public:
                                    PrimaryIpv4Address();
                                    ~PrimaryIpv4Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_ip_learn; //type: boolean
                                    Value address; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address


                            class SecondaryIpv4Addresses : public Entity
                            {
                                public:
                                    SecondaryIpv4Addresses();
                                    ~SecondaryIpv4Addresses();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class SecondaryIpv4Address : public Entity
                                {
                                    public:
                                        SecondaryIpv4Address();
                                        ~SecondaryIpv4Address();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses


                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers> timers;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces> tracked_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects> tracked_objects;


                        }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group> > group;


                    }; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups


                        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups> groups;


                }; // Hsrp::Interfaces::Interface::Ipv4::Version1


                class Version2 : public Entity
                {
                    public:
                        Version2();
                        ~Version2();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Groups : public Entity
                    {
                        public:
                            Groups();
                            ~Groups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Group : public Entity
                        {
                            public:
                                Group();
                                ~Group();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_number; //type: uint32
                                Value preempt; //type: int32
                                Value priority; //type: uint32
                                Value virtual_mac_address; //type: string
                                Value session_name; //type: string


                            class SecondaryIpv4Addresses : public Entity
                            {
                                public:
                                    SecondaryIpv4Addresses();
                                    ~SecondaryIpv4Addresses();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class SecondaryIpv4Address : public Entity
                                {
                                    public:
                                        SecondaryIpv4Address();
                                        ~SecondaryIpv4Address();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value interface_name; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd


                            class PrimaryIpv4Address : public Entity
                            {
                                public:
                                    PrimaryIpv4Address();
                                    ~PrimaryIpv4Address();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_ip_learn; //type: boolean
                                    Value address; //type: string




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address


                            class TrackedObjects : public Entity
                            {
                                public:
                                    TrackedObjects();
                                    ~TrackedObjects();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedObject : public Entity
                                {
                                    public:
                                        TrackedObject();
                                        ~TrackedObject();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value object_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects


                            class TrackedInterfaces : public Entity
                            {
                                public:
                                    TrackedInterfaces();
                                    ~TrackedInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TrackedInterface : public Entity
                                {
                                    public:
                                        TrackedInterface();
                                        ~TrackedInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string
                                        Value priority_decrement; //type: uint32




                                }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces


                            class Timers : public Entity
                            {
                                public:
                                    Timers();
                                    ~Timers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value hello_msec_flag; //type: boolean
                                    Value hello_msec; //type: uint32
                                    Value hello_sec; //type: uint32
                                    Value hold_msec_flag; //type: boolean
                                    Value hold_msec; //type: uint32
                                    Value hold_sec; //type: uint32




                            }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers


                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers> timers;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects> tracked_objects;


                        }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group> > group;


                    }; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups


                        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups> groups;


                }; // Hsrp::Interfaces::Interface::Ipv4::Version2


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups> slave_groups;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1> version1;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2> version2;


            }; // Hsrp::Interfaces::Interface::Ipv4


                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Bfd> bfd;
                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Delay> delay;
                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6> ipv6;


        }; // Hsrp::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface> > interface;


    }; // Hsrp::Interfaces


    class Logging : public Entity
    {
        public:
            Logging();
            ~Logging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value state_change_disable; //type: empty




    }; // Hsrp::Logging


        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Logging> logging;


}; // Hsrp


class HsrpLinklocalEnum : public Enum
{
    public:
        static const Enum::Value manual;
        static const Enum::Value auto_;
        static const Enum::Value legacy;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_HSRP_CFG_ */

