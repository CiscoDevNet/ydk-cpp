#ifndef _CISCO_IOS_XR_IPV4_HSRP_OPER_
#define _CISCO_IOS_XR_IPV4_HSRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_hsrp_oper {

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


                    YLeaf interface_name; //type: string
                    YLeaf group_number; //type: int32
                    YLeaf authentication_string; //type: string
                    YLeaf virtual_mac_address; //type: string
                    YLeaf hsrp_group_number; //type: uint32
                    YLeaf address_family; //type: HsrpBAfEnum
                    YLeaf version; //type: uint8
                    YLeaf session_name; //type: string
                    YLeaf slaves; //type: uint32
                    YLeaf is_slave; //type: boolean
                    YLeaf followed_session_name; //type: string
                    YLeaf configured_priority; //type: uint8
                    YLeaf preempt_delay; //type: uint32
                    YLeaf preempt_timer_secs; //type: uint32
                    YLeaf hello_time; //type: uint32
                    YLeaf hold_time; //type: uint32
                    YLeaf learned_hello_time; //type: uint32
                    YLeaf learned_hold_time; //type: uint32
                    YLeaf min_delay_time; //type: uint32
                    YLeaf reload_delay_time; //type: uint32
                    YLeaf virtual_ip_address; //type: string
                    YLeaf virtual_linklocal_ipv6_address; //type: string
                    YLeaf active_ip_address; //type: string
                    YLeaf active_ipv6_address; //type: string
                    YLeaf active_mac_address; //type: string
                    YLeaf standby_ip_address; //type: string
                    YLeaf standby_ipv6_address; //type: string
                    YLeaf standby_mac_address; //type: string
                    YLeaf hsrp_router_state; //type: StandbyGrpStateEnum
                    YLeaf interface_name_xr; //type: string
                    YLeaf interface; //type: string
                    YLeaf router_priority; //type: uint8
                    YLeaf active_priority; //type: uint8
                    YLeaf active_timer_flag; //type: boolean
                    YLeaf active_timer_secs; //type: uint32
                    YLeaf active_timer_msecs; //type: uint32
                    YLeaf standby_timer_flag; //type: boolean
                    YLeaf standby_timer_secs; //type: uint32
                    YLeaf standby_timer_msecs; //type: uint32
                    YLeaf hello_timer_flag; //type: boolean
                    YLeaf hello_timer_secs; //type: uint32
                    YLeaf hello_timer_msecs; //type: uint32
                    YLeaf delay_timer_flag; //type: boolean
                    YLeaf delay_timer_secs; //type: uint32
                    YLeaf delay_timer_msecs; //type: uint32
                    YLeaf current_state_timer_secs; //type: uint32
                    YLeaf state_change_count; //type: uint32
                    YLeaf tracked_interface_count; //type: uint32
                    YLeaf tracked_interface_up_count; //type: uint32
                    YLeaf preempt_enabled; //type: boolean
                    YLeaf use_configured_timers; //type: boolean
                    YLeaf use_configured_virtual_ip; //type: boolean
                    YLeaf use_bia_configured; //type: boolean
                    YLeaf configured_timers; //type: boolean
                    YLeaf configured_mac_address; //type: boolean
                    YLeaf redirects_disabled; //type: boolean
                    YLeaf bfd_enabled; //type: boolean
                    YLeaf bfd_interface; //type: string
                    YLeaf bfd_peer_ip_address; //type: string
                    YLeaf bfd_peer_ipv6_address; //type: string
                    YLeaf bfd_session_state; //type: HsrpBfdSessionStateEnum
                    YLeaf bfd_interval; //type: uint32
                    YLeaf bfd_multiplier; //type: uint32
                    YLeaf virtual_mac_address_state; //type: HsrpVmacStateEnum
                    YLeafList secondary_address; //type: list of  string

                class ResignSentTime : public Entity
                {
                    public:
                        ResignSentTime();
                        ~ResignSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv4::Groups::Group::ResignSentTime


                class ResignReceivedTime : public Entity
                {
                    public:
                        ResignReceivedTime();
                        ~ResignReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv4::Groups::Group::ResignReceivedTime


                class CoupSentTime : public Entity
                {
                    public:
                        CoupSentTime();
                        ~CoupSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv4::Groups::Group::CoupSentTime


                class CoupReceivedTime : public Entity
                {
                    public:
                        CoupReceivedTime();
                        ~CoupReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv4::Groups::Group::CoupReceivedTime


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf active_transitions; //type: uint32
                        YLeaf standby_transitions; //type: uint32
                        YLeaf speak_transitions; //type: uint32
                        YLeaf listen_transitions; //type: uint32
                        YLeaf learn_transitions; //type: uint32
                        YLeaf init_transitions; //type: uint32
                        YLeaf hello_packets_sent; //type: uint32
                        YLeaf resign_packets_sent; //type: uint32
                        YLeaf coup_packets_sent; //type: uint32
                        YLeaf hello_packets_received; //type: uint32
                        YLeaf resign_packets_received; //type: uint32
                        YLeaf coup_packets_received; //type: uint32
                        YLeaf auth_fail_received; //type: uint32
                        YLeaf invalid_timer_received; //type: uint32
                        YLeaf mismatch_virtual_ip_address_received; //type: uint32



                }; // Hsrp::Ipv4::Groups::Group::Statistics


                class GlobalAddress : public Entity
                {
                    public:
                        GlobalAddress();
                        ~GlobalAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipv6_address; //type: string



                }; // Hsrp::Ipv4::Groups::Group::GlobalAddress


                class StateChangeHistory : public Entity
                {
                    public:
                        StateChangeHistory();
                        ~StateChangeHistory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf old_state; //type: StandbyGrpStateEnum
                        YLeaf new_state; //type: StandbyGrpStateEnum
                        YLeaf reason; //type: HsrpStateChangeReasonEnum

                    class Time : public Entity
                    {
                        public:
                            Time();
                            ~Time();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf seconds; //type: uint32
                            YLeaf nanoseconds; //type: uint32



                    }; // Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time


                        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time> time;


                }; // Hsrp::Ipv4::Groups::Group::StateChangeHistory


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::CoupReceivedTime> coup_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::CoupSentTime> coup_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::GlobalAddress> > global_address;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::ResignReceivedTime> resign_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::ResignSentTime> resign_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::StateChangeHistory> > state_change_history;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::Statistics> statistics;


            }; // Hsrp::Ipv4::Groups::Group


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group> > group;


        }; // Hsrp::Ipv4::Groups


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


                    YLeaf interface_name; //type: string
                    YLeaf group_number; //type: int32
                    YLeaf tracked_interface_name; //type: string
                    YLeaf interface; //type: string
                    YLeaf hsrp_group_number; //type: uint32
                    YLeaf priority_decrement; //type: uint32
                    YLeaf interface_up_flag; //type: boolean
                    YLeaf tracked_interface_name_xr; //type: string
                    YLeaf is_object; //type: boolean



            }; // Hsrp::Ipv4::TrackedInterfaces::TrackedInterface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::TrackedInterfaces::TrackedInterface> > tracked_interface;


        }; // Hsrp::Ipv4::TrackedInterfaces


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
                    YLeaf interface; //type: string
                    YLeaf use_bia_flag; //type: boolean

                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf advert_packets_sent; //type: uint32
                        YLeaf advert_packets_received; //type: uint32
                        YLeaf long_packets_received; //type: uint32
                        YLeaf short_packets_received; //type: uint32
                        YLeaf invalid_version_received; //type: uint32
                        YLeaf invalid_operation_code_received; //type: uint32
                        YLeaf unknown_group_received; //type: uint32
                        YLeaf inoperational_group_received; //type: uint32
                        YLeaf conflict_source_ip_address_received; //type: uint32



                }; // Hsrp::Ipv4::Interfaces::Interface::Statistics


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces::Interface::Statistics> statistics;


            }; // Hsrp::Ipv4::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces::Interface> > interface;


        }; // Hsrp::Ipv4::Interfaces


            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups> groups;
            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::TrackedInterfaces> tracked_interfaces;


    }; // Hsrp::Ipv4


    class MgoSessions : public Entity
    {
        public:
            MgoSessions();
            ~MgoSessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class MgoSession : public Entity
        {
            public:
                MgoSession();
                ~MgoSession();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf session_name; //type: string
                YLeaf primary_session_name; //type: string
                YLeaf primary_session_interface; //type: string
                YLeaf primary_af_name; //type: HsrpBAfEnum
                YLeaf primary_session_number; //type: uint32
                YLeaf primary_session_state; //type: StandbyGrpStateEnum

            class Slave : public Entity
            {
                public:
                    Slave();
                    ~Slave();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf slave_group_interface; //type: string
                    YLeaf slave_group_number; //type: uint32



            }; // Hsrp::MgoSessions::MgoSession::Slave


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions::MgoSession::Slave> > slave;


        }; // Hsrp::MgoSessions::MgoSession


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions::MgoSession> > mgo_session;


    }; // Hsrp::MgoSessions


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


                    YLeaf interface_name; //type: string
                    YLeaf group_number; //type: int32
                    YLeaf tracked_interface_name; //type: string
                    YLeaf interface; //type: string
                    YLeaf hsrp_group_number; //type: uint32
                    YLeaf priority_decrement; //type: uint32
                    YLeaf interface_up_flag; //type: boolean
                    YLeaf tracked_interface_name_xr; //type: string
                    YLeaf is_object; //type: boolean



            }; // Hsrp::Ipv6::TrackedInterfaces::TrackedInterface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::TrackedInterfaces::TrackedInterface> > tracked_interface;


        }; // Hsrp::Ipv6::TrackedInterfaces


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


                    YLeaf interface_name; //type: string
                    YLeaf group_number; //type: int32
                    YLeaf authentication_string; //type: string
                    YLeaf virtual_mac_address; //type: string
                    YLeaf hsrp_group_number; //type: uint32
                    YLeaf address_family; //type: HsrpBAfEnum
                    YLeaf version; //type: uint8
                    YLeaf session_name; //type: string
                    YLeaf slaves; //type: uint32
                    YLeaf is_slave; //type: boolean
                    YLeaf followed_session_name; //type: string
                    YLeaf configured_priority; //type: uint8
                    YLeaf preempt_delay; //type: uint32
                    YLeaf preempt_timer_secs; //type: uint32
                    YLeaf hello_time; //type: uint32
                    YLeaf hold_time; //type: uint32
                    YLeaf learned_hello_time; //type: uint32
                    YLeaf learned_hold_time; //type: uint32
                    YLeaf min_delay_time; //type: uint32
                    YLeaf reload_delay_time; //type: uint32
                    YLeaf virtual_ip_address; //type: string
                    YLeaf virtual_linklocal_ipv6_address; //type: string
                    YLeaf active_ip_address; //type: string
                    YLeaf active_ipv6_address; //type: string
                    YLeaf active_mac_address; //type: string
                    YLeaf standby_ip_address; //type: string
                    YLeaf standby_ipv6_address; //type: string
                    YLeaf standby_mac_address; //type: string
                    YLeaf hsrp_router_state; //type: StandbyGrpStateEnum
                    YLeaf interface_name_xr; //type: string
                    YLeaf interface; //type: string
                    YLeaf router_priority; //type: uint8
                    YLeaf active_priority; //type: uint8
                    YLeaf active_timer_flag; //type: boolean
                    YLeaf active_timer_secs; //type: uint32
                    YLeaf active_timer_msecs; //type: uint32
                    YLeaf standby_timer_flag; //type: boolean
                    YLeaf standby_timer_secs; //type: uint32
                    YLeaf standby_timer_msecs; //type: uint32
                    YLeaf hello_timer_flag; //type: boolean
                    YLeaf hello_timer_secs; //type: uint32
                    YLeaf hello_timer_msecs; //type: uint32
                    YLeaf delay_timer_flag; //type: boolean
                    YLeaf delay_timer_secs; //type: uint32
                    YLeaf delay_timer_msecs; //type: uint32
                    YLeaf current_state_timer_secs; //type: uint32
                    YLeaf state_change_count; //type: uint32
                    YLeaf tracked_interface_count; //type: uint32
                    YLeaf tracked_interface_up_count; //type: uint32
                    YLeaf preempt_enabled; //type: boolean
                    YLeaf use_configured_timers; //type: boolean
                    YLeaf use_configured_virtual_ip; //type: boolean
                    YLeaf use_bia_configured; //type: boolean
                    YLeaf configured_timers; //type: boolean
                    YLeaf configured_mac_address; //type: boolean
                    YLeaf redirects_disabled; //type: boolean
                    YLeaf bfd_enabled; //type: boolean
                    YLeaf bfd_interface; //type: string
                    YLeaf bfd_peer_ip_address; //type: string
                    YLeaf bfd_peer_ipv6_address; //type: string
                    YLeaf bfd_session_state; //type: HsrpBfdSessionStateEnum
                    YLeaf bfd_interval; //type: uint32
                    YLeaf bfd_multiplier; //type: uint32
                    YLeaf virtual_mac_address_state; //type: HsrpVmacStateEnum
                    YLeafList secondary_address; //type: list of  string

                class ResignSentTime : public Entity
                {
                    public:
                        ResignSentTime();
                        ~ResignSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv6::Groups::Group::ResignSentTime


                class ResignReceivedTime : public Entity
                {
                    public:
                        ResignReceivedTime();
                        ~ResignReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv6::Groups::Group::ResignReceivedTime


                class CoupSentTime : public Entity
                {
                    public:
                        CoupSentTime();
                        ~CoupSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv6::Groups::Group::CoupSentTime


                class CoupReceivedTime : public Entity
                {
                    public:
                        CoupReceivedTime();
                        ~CoupReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf seconds; //type: uint32
                        YLeaf nanoseconds; //type: uint32



                }; // Hsrp::Ipv6::Groups::Group::CoupReceivedTime


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf active_transitions; //type: uint32
                        YLeaf standby_transitions; //type: uint32
                        YLeaf speak_transitions; //type: uint32
                        YLeaf listen_transitions; //type: uint32
                        YLeaf learn_transitions; //type: uint32
                        YLeaf init_transitions; //type: uint32
                        YLeaf hello_packets_sent; //type: uint32
                        YLeaf resign_packets_sent; //type: uint32
                        YLeaf coup_packets_sent; //type: uint32
                        YLeaf hello_packets_received; //type: uint32
                        YLeaf resign_packets_received; //type: uint32
                        YLeaf coup_packets_received; //type: uint32
                        YLeaf auth_fail_received; //type: uint32
                        YLeaf invalid_timer_received; //type: uint32
                        YLeaf mismatch_virtual_ip_address_received; //type: uint32



                }; // Hsrp::Ipv6::Groups::Group::Statistics


                class GlobalAddress : public Entity
                {
                    public:
                        GlobalAddress();
                        ~GlobalAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipv6_address; //type: string



                }; // Hsrp::Ipv6::Groups::Group::GlobalAddress


                class StateChangeHistory : public Entity
                {
                    public:
                        StateChangeHistory();
                        ~StateChangeHistory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf old_state; //type: StandbyGrpStateEnum
                        YLeaf new_state; //type: StandbyGrpStateEnum
                        YLeaf reason; //type: HsrpStateChangeReasonEnum

                    class Time : public Entity
                    {
                        public:
                            Time();
                            ~Time();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf seconds; //type: uint32
                            YLeaf nanoseconds; //type: uint32



                    }; // Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time


                        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time> time;


                }; // Hsrp::Ipv6::Groups::Group::StateChangeHistory


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::CoupReceivedTime> coup_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::CoupSentTime> coup_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::GlobalAddress> > global_address;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::ResignReceivedTime> resign_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::ResignSentTime> resign_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::StateChangeHistory> > state_change_history;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::Statistics> statistics;


            }; // Hsrp::Ipv6::Groups::Group


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group> > group;


        }; // Hsrp::Ipv6::Groups


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
                    YLeaf interface; //type: string
                    YLeaf use_bia_flag; //type: boolean

                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf advert_packets_sent; //type: uint32
                        YLeaf advert_packets_received; //type: uint32
                        YLeaf long_packets_received; //type: uint32
                        YLeaf short_packets_received; //type: uint32
                        YLeaf invalid_version_received; //type: uint32
                        YLeaf invalid_operation_code_received; //type: uint32
                        YLeaf unknown_group_received; //type: uint32
                        YLeaf inoperational_group_received; //type: uint32
                        YLeaf conflict_source_ip_address_received; //type: uint32



                }; // Hsrp::Ipv6::Interfaces::Interface::Statistics


                    std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces::Interface::Statistics> statistics;


            }; // Hsrp::Ipv6::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces::Interface> > interface;


        }; // Hsrp::Ipv6::Interfaces


            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups> groups;
            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::TrackedInterfaces> tracked_interfaces;


    }; // Hsrp::Ipv6


    class BfdSessions : public Entity
    {
        public:
            BfdSessions();
            ~BfdSessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class BfdSession : public Entity
        {
            public:
                BfdSession();
                ~BfdSession();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string
                YLeaf ip_address; //type: string
                YLeaf bfd_interface_name; //type: string
                YLeaf session_address_family; //type: HsrpBAfEnum
                YLeaf destination_address; //type: string
                YLeaf destination_ipv6_address; //type: string
                YLeaf bfd_session_state; //type: HsrpBfdSessionStateEnum
                YLeaf bfd_interval; //type: uint32
                YLeaf bfd_multiplier; //type: uint32

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


                    YLeaf interface_name; //type: string
                    YLeaf hsrp_group_number; //type: uint32



            }; // Hsrp::BfdSessions::BfdSession::Group


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions::BfdSession::Group> > group;


        }; // Hsrp::BfdSessions::BfdSession


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions::BfdSession> > bfd_session;


    }; // Hsrp::BfdSessions


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


            YLeaf ipv4_sessions_active; //type: uint32
            YLeaf ipv4_sessions_standby; //type: uint32
            YLeaf ipv4_sessions_speak; //type: uint32
            YLeaf ipv4_sessions_listen; //type: uint32
            YLeaf ipv4_sessions_learn; //type: uint32
            YLeaf ipv4_sessions_init; //type: uint32
            YLeaf ipv4_slaves_active; //type: uint32
            YLeaf ipv4_slaves_standby; //type: uint32
            YLeaf ipv4_slaves_speak; //type: uint32
            YLeaf ipv4_slaves_listen; //type: uint32
            YLeaf ipv4_slaves_learn; //type: uint32
            YLeaf ipv4_slaves_init; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_active_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_active_down; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_standby_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_standby_down; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_speak_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_speak_down; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_listen_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_listen_down; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_learn_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_learn_down; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_init_up; //type: uint32
            YLeaf ipv4_virtual_ip_addresses_init_down; //type: uint32
            YLeaf ipv6_sessions_active; //type: uint32
            YLeaf ipv6_sessions_standby; //type: uint32
            YLeaf ipv6_sessions_speak; //type: uint32
            YLeaf ipv6_sessions_listen; //type: uint32
            YLeaf ipv6_sessions_learn; //type: uint32
            YLeaf ipv6_sessions_init; //type: uint32
            YLeaf ipv6_slaves_active; //type: uint32
            YLeaf ipv6_slaves_standby; //type: uint32
            YLeaf ipv6_slaves_speak; //type: uint32
            YLeaf ipv6_slaves_listen; //type: uint32
            YLeaf ipv6_slaves_learn; //type: uint32
            YLeaf ipv6_slaves_init; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_active_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_active_down; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_standby_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_standby_down; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_speak_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_speak_down; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_listen_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_listen_down; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_learn_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_learn_down; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_init_up; //type: uint32
            YLeaf ipv6_virtual_ip_addresses_init_down; //type: uint32
            YLeaf interfaces_ipv4_state_up; //type: uint32
            YLeaf interfaces_ipv4_state_down; //type: uint32
            YLeaf tracked_interfaces_ipv4_state_up; //type: uint32
            YLeaf tracked_interfaces_ipv4_state_down; //type: uint32
            YLeaf tracked_objects_up; //type: uint32
            YLeaf tracked_objects_down; //type: uint32
            YLeaf interfaces_ipv6_state_up; //type: uint32
            YLeaf interfaces_ipv6_state_down; //type: uint32
            YLeaf tracked_interfaces_ipv6_state_up; //type: uint32
            YLeaf tracked_interfaces_ipv6_state_down; //type: uint32
            YLeaf bfd_sessions_up; //type: uint32
            YLeaf bfd_sessions_down; //type: uint32
            YLeaf bfd_session_inactive; //type: uint32



    }; // Hsrp::Summary


        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions> bfd_sessions;
        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4> ipv4;
        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6> ipv6;
        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions> mgo_sessions;
        std::unique_ptr<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Summary> summary;


}; // Hsrp


class HsrpVmacStateEnum : public Enum
{
    public:
        static const Enum::YLeaf stored;
        static const Enum::YLeaf reserved;
        static const Enum::YLeaf active;
        static const Enum::YLeaf reserving;

};

class StandbyGrpStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_initial;
        static const Enum::YLeaf state_learn;
        static const Enum::YLeaf state_listen;
        static const Enum::YLeaf state_speak;
        static const Enum::YLeaf state_standby;
        static const Enum::YLeaf state_active;

};

class HsrpStateChangeReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf state_change_bfd_down;
        static const Enum::YLeaf state_change_vip_learnt;
        static const Enum::YLeaf state_change_interface_ip;
        static const Enum::YLeaf state_change_delay_timer;
        static const Enum::YLeaf state_change_startup;
        static const Enum::YLeaf state_change_shutdown;
        static const Enum::YLeaf state_change_interface_up;
        static const Enum::YLeaf state_change_interface_down;
        static const Enum::YLeaf state_change_active_timer;
        static const Enum::YLeaf state_change_standby_timer;
        static const Enum::YLeaf state_change_resign;
        static const Enum::YLeaf state_change_coup;
        static const Enum::YLeaf state_change_higher_priority_speak;
        static const Enum::YLeaf state_change_higher_priority_standby;
        static const Enum::YLeaf state_change_lower_priority_standby;
        static const Enum::YLeaf state_change_higher_priority_active;
        static const Enum::YLeaf state_change_lower_priority_active;
        static const Enum::YLeaf state_change_virtual_ip_configured;
        static const Enum::YLeaf state_change_virtual_ip_lost;
        static const Enum::YLeaf state_change_recovered_from_checkpoint;
        static const Enum::YLeaf state_change_mac_update;
        static const Enum::YLeaf state_change_admin;
        static const Enum::YLeaf state_change_parent;
        static const Enum::YLeaf state_change_chkpt_update;
        static const Enum::YLeaf state_change_issu_resync;
        static const Enum::YLeaf state_change_max;

};

class HsrpBAfEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf count;

};

class HsrpBfdSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_state_none;
        static const Enum::YLeaf bfd_state_inactive;
        static const Enum::YLeaf bfd_state_up;
        static const Enum::YLeaf bfd_state_down;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_HSRP_OPER_ */

