#ifndef _CISCO_IOS_XR_IPV4_VRRP_CFG_
#define _CISCO_IOS_XR_IPV4_VRRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_vrrp_cfg {

class Vrrp : public Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


            YLeaf state_change_disable; //type: empty



    }; // Vrrp::Logging


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
                YLeaf mac_refresh; //type: uint32

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



                class Version3 : public Entity
                {
                    public:
                        Version3();
                        ~Version3();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VirtualRouters : public Entity
                    {
                        public:
                            VirtualRouters();
                            ~VirtualRouters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class VirtualRouter : public Entity
                        {
                            public:
                                VirtualRouter();
                                ~VirtualRouter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf vr_id; //type: uint32
                                YLeaf bfd; //type: string
                                YLeaf priority; //type: uint32
                                YLeaf accept_mode_disable; //type: empty
                                YLeaf preempt; //type: uint32
                                YLeaf session_name; //type: string

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


                                        YLeaf ip_address; //type: string



                                }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


                            }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses


                            class Tracks : public Entity
                            {
                                public:
                                    Tracks();
                                    ~Tracks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Track : public Entity
                                {
                                    public:
                                        Track();
                                        ~Track();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf interface_name; //type: string
                                        YLeaf priority; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track> > track;


                            }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks


                            class Timer : public Entity
                            {
                                public:
                                    Timer();
                                    ~Timer();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_msec; //type: boolean
                                    YLeaf advertisement_time_in_msec; //type: uint32
                                    YLeaf advertisement_time_in_sec; //type: uint32
                                    YLeaf forced; //type: boolean



                            }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer


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


                                        YLeaf object_name; //type: string
                                        YLeaf priority_decrement; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects


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


                                    YLeaf ip_address; //type: string
                                    YLeaf auto_configure; //type: boolean



                            }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address


                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses> global_ipv6_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address> link_local_ipv6_address;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer> timer;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks> tracks;


                        }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter> > virtual_router;


                    }; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters


                        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters> virtual_routers;


                }; // Vrrp::Interfaces::Interface::Ipv6::Version3


                class SlaveVirtualRouters : public Entity
                {
                    public:
                        SlaveVirtualRouters();
                        ~SlaveVirtualRouters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SlaveVirtualRouter : public Entity
                    {
                        public:
                            SlaveVirtualRouter();
                            ~SlaveVirtualRouter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf slave_virtual_router_id; //type: uint32
                            YLeaf follow; //type: string
                            YLeaf accept_mode_disable; //type: empty

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


                                YLeaf ip_address; //type: string
                                YLeaf auto_configure; //type: boolean



                        }; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address


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


                                    YLeaf ip_address; //type: string



                            }; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


                        }; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses


                            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses> global_ipv6_addresses;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address> link_local_ipv6_address;


                    }; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter> > slave_virtual_router;


                }; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters


                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters> slave_virtual_routers;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3> version3;


            }; // Vrrp::Interfaces::Interface::Ipv6


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


                    YLeaf min_delay; //type: uint32
                    YLeaf reload_delay; //type: uint32



            }; // Vrrp::Interfaces::Interface::Delay


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



                class Version3 : public Entity
                {
                    public:
                        Version3();
                        ~Version3();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VirtualRouters : public Entity
                    {
                        public:
                            VirtualRouters();
                            ~VirtualRouters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class VirtualRouter : public Entity
                        {
                            public:
                                VirtualRouter();
                                ~VirtualRouter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf vr_id; //type: uint32
                                YLeaf session_name; //type: string
                                YLeaf bfd; //type: string
                                YLeaf primary_ipv4_address; //type: string
                                YLeaf preempt; //type: uint32
                                YLeaf accept_mode_disable; //type: empty
                                YLeaf priority; //type: uint32

                            class Timer : public Entity
                            {
                                public:
                                    Timer();
                                    ~Timer();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_msec; //type: boolean
                                    YLeaf advertisement_time_in_msec; //type: uint32
                                    YLeaf advertisement_time_in_sec; //type: uint32
                                    YLeaf forced; //type: boolean



                            }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer


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


                                        YLeaf ip_address; //type: string



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses


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


                                        YLeaf object_name; //type: string
                                        YLeaf priority_decrement; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects


                            class Tracks : public Entity
                            {
                                public:
                                    Tracks();
                                    ~Tracks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Track : public Entity
                                {
                                    public:
                                        Track();
                                        ~Track();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf interface_name; //type: string
                                        YLeaf priority; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track> > track;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks


                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer> timer;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks> tracks;


                        }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter> > virtual_router;


                    }; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters


                        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters> virtual_routers;


                }; // Vrrp::Interfaces::Interface::Ipv4::Version3


                class SlaveVirtualRouters : public Entity
                {
                    public:
                        SlaveVirtualRouters();
                        ~SlaveVirtualRouters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SlaveVirtualRouter : public Entity
                    {
                        public:
                            SlaveVirtualRouter();
                            ~SlaveVirtualRouter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf slave_virtual_router_id; //type: uint32
                            YLeaf follow; //type: string
                            YLeaf accept_mode_disable; //type: empty
                            YLeaf primary_ipv4_address; //type: string

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


                                    YLeaf ip_address; //type: string



                            }; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                        }; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses


                            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;


                    }; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter> > slave_virtual_router;


                }; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters


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



                    class VirtualRouters : public Entity
                    {
                        public:
                            VirtualRouters();
                            ~VirtualRouters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class VirtualRouter : public Entity
                        {
                            public:
                                VirtualRouter();
                                ~VirtualRouter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf vr_id; //type: uint32
                                YLeaf priority; //type: uint32
                                YLeaf primary_ipv4_address; //type: string
                                YLeaf preempt; //type: uint32
                                YLeaf text_password; //type: string
                                YLeaf bfd; //type: string
                                YLeaf session_name; //type: string
                                YLeaf accept_mode_disable; //type: empty

                            class Timer : public Entity
                            {
                                public:
                                    Timer();
                                    ~Timer();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_msec; //type: boolean
                                    YLeaf advertisement_time_in_msec; //type: uint32
                                    YLeaf advertisement_time_in_sec; //type: uint32
                                    YLeaf forced; //type: boolean



                            }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer


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


                                        YLeaf ip_address; //type: string



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses


                            class Tracks : public Entity
                            {
                                public:
                                    Tracks();
                                    ~Tracks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Track : public Entity
                                {
                                    public:
                                        Track();
                                        ~Track();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf interface_name; //type: string
                                        YLeaf priority; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track> > track;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks


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


                                        YLeaf object_name; //type: string
                                        YLeaf priority_decrement; //type: uint32



                                }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;


                            }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects


                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer> timer;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks> tracks;


                        }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter> > virtual_router;


                    }; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters


                        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters> virtual_routers;


                }; // Vrrp::Interfaces::Interface::Ipv4::Version2


                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters> slave_virtual_routers;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2> version2;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3> version3;


            }; // Vrrp::Interfaces::Interface::Ipv4


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


                    YLeaf interval; //type: uint32
                    YLeaf detection_multiplier; //type: uint32



            }; // Vrrp::Interfaces::Interface::Bfd


                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Bfd> bfd;
                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Delay> delay;
                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6> ipv6;


        }; // Vrrp::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface> > interface;


    }; // Vrrp::Interfaces


        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Logging> logging;


}; // Vrrp



}
}

#endif /* _CISCO_IOS_XR_IPV4_VRRP_CFG_ */

