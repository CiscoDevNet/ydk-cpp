#ifndef _CISCO_IOS_XR_IP_RSVP_CFG_
#define _CISCO_IOS_XR_IP_RSVP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_cfg {

class Rsvp : public Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Neighbors : public Entity
    {
        public:
            Neighbors();
            ~Neighbors();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Neighbor : public Entity
        {
            public:
                Neighbor();
                ~Neighbor();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf neighbor; //type: string

            class Authentication : public Entity
            {
                public:
                    Authentication();
                    ~Authentication();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf life_time; //type: uint32
                    YLeaf enable; //type: boolean
                    YLeaf window_size; //type: uint32
                    YLeaf key_chain; //type: string



            }; // Rsvp::Neighbors::Neighbor::Authentication


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Neighbors::Neighbor::Authentication> authentication;


        }; // Rsvp::Neighbors::Neighbor


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Neighbors::Neighbor> > neighbor;


    }; // Rsvp::Neighbors


    class Controllers : public Entity
    {
        public:
            Controllers();
            ~Controllers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Controller : public Entity
        {
            public:
                Controller();
                ~Controller();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf controller_name; //type: string
                YLeaf enable; //type: empty

            class CntlSignalling : public Entity
            {
                public:
                    CntlSignalling();
                    ~CntlSignalling();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OutOfBand : public Entity
                {
                    public:
                        OutOfBand();
                        ~OutOfBand();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf missed_messages; //type: uint32
                        YLeaf refresh_interval; //type: uint32



                }; // Rsvp::Controllers::Controller::CntlSignalling::OutOfBand


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers::Controller::CntlSignalling::OutOfBand> out_of_band;


            }; // Rsvp::Controllers::Controller::CntlSignalling


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers::Controller::CntlSignalling> cntl_signalling;


        }; // Rsvp::Controllers::Controller


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers::Controller> > controller;


    }; // Rsvp::Controllers


    class GlobalLogging : public Entity
    {
        public:
            GlobalLogging();
            ~GlobalLogging();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf log_nsr_status; //type: empty
            YLeaf log_issu_status; //type: empty



    }; // Rsvp::GlobalLogging


    class GlobalBandwidth : public Entity
    {
        public:
            GlobalBandwidth();
            ~GlobalBandwidth();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class DefaultInterfacePercent : public Entity
        {
            public:
                DefaultInterfacePercent();
                ~DefaultInterfacePercent();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Mam : public Entity
            {
                public:
                    Mam();
                    ~Mam();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf max_res_percent; //type: uint32
                    YLeaf bc0_percent; //type: uint32
                    YLeaf bc1_percent; //type: uint32



            }; // Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam


            class Rdm : public Entity
            {
                public:
                    Rdm();
                    ~Rdm();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf bc0_percent; //type: uint32
                    YLeaf bc1_percent; //type: uint32



            }; // Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam> mam;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm> rdm;


        }; // Rsvp::GlobalBandwidth::DefaultInterfacePercent


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent> default_interface_percent;


    }; // Rsvp::GlobalBandwidth


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


                YLeaf name; //type: string
                YLeaf enable; //type: empty

            class IfSignalling : public Entity
            {
                public:
                    IfSignalling();
                    ~IfSignalling();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dscp; //type: uint32
                    YLeaf missed_messages; //type: uint32
                    YLeaf hello_graceful_restart_if_based; //type: empty
                    YLeaf pacing; //type: empty
                    YLeaf refresh_interval; //type: uint32

                class RefreshReduction : public Entity
                {
                    public:
                        RefreshReduction();
                        ~RefreshReduction();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf disable; //type: empty
                        YLeaf reliable_ack_max_size; //type: uint32
                        YLeaf reliable_ack_hold_time; //type: uint32
                        YLeaf reliable_retransmit_time; //type: uint32
                        YLeaf reliable_s_refresh; //type: empty
                        YLeaf summary_max_size; //type: uint32
                        YLeaf bundle_message_max_size; //type: uint32



                }; // Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction


                class IntervalRate : public Entity
                {
                    public:
                        IntervalRate();
                        ~IntervalRate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf messages_per_interval; //type: uint32
                        YLeaf interval_size; //type: uint32



                }; // Rsvp::Interfaces::Interface::IfSignalling::IntervalRate


                class OutOfBand : public Entity
                {
                    public:
                        OutOfBand();
                        ~OutOfBand();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf missed_messages; //type: uint32
                        YLeaf refresh_interval; //type: uint32



                }; // Rsvp::Interfaces::Interface::IfSignalling::OutOfBand


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::IntervalRate> interval_rate;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::OutOfBand> out_of_band;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction> refresh_reduction;


            }; // Rsvp::Interfaces::Interface::IfSignalling


            class Bandwidth : public Entity
            {
                public:
                    Bandwidth();
                    ~Bandwidth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Mam : public Entity
                {
                    public:
                        Mam();
                        ~Mam();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf max_resv_bandwidth; //type: uint32
                        YLeaf max_resv_flow; //type: uint32
                        YLeaf bc0_bandwidth; //type: uint32
                        YLeaf bc1_bandwidth; //type: uint32
                        YLeaf bandwidth_mode; //type: RsvpBwCfgEnum



                }; // Rsvp::Interfaces::Interface::Bandwidth::Mam


                class Rdm : public Entity
                {
                    public:
                        Rdm();
                        ~Rdm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf max_resv_flow; //type: uint32
                        YLeaf bc0_bandwidth; //type: uint32
                        YLeaf bc1_bandwidth; //type: uint32
                        YLeaf rdm_keyword; //type: RsvpRdmEnum
                        YLeaf bc0_keyword; //type: RsvpBc0Enum
                        YLeaf bc1_keyword; //type: RsvpBc1Enum
                        YLeaf bandwidth_mode; //type: RsvpBwCfgEnum



                }; // Rsvp::Interfaces::Interface::Bandwidth::Rdm


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth::Mam> mam;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth::Rdm> rdm;


            }; // Rsvp::Interfaces::Interface::Bandwidth


            class Authentication : public Entity
            {
                public:
                    Authentication();
                    ~Authentication();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf life_time; //type: uint32
                    YLeaf enable; //type: boolean
                    YLeaf window_size; //type: uint32
                    YLeaf key_chain; //type: string



            }; // Rsvp::Interfaces::Interface::Authentication


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Authentication> authentication;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth> bandwidth;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling> if_signalling;


        }; // Rsvp::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface> > interface;


    }; // Rsvp::Interfaces


    class Signalling : public Entity
    {
        public:
            Signalling();
            ~Signalling();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf hello_graceful_restart_misses; //type: uint32
            YLeaf hello_graceful_restart_interval; //type: uint32

        class GlobalOutOfBand : public Entity
        {
            public:
                GlobalOutOfBand();
                ~GlobalOutOfBand();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf; //type: string



        }; // Rsvp::Signalling::GlobalOutOfBand


        class GracefulRestart : public Entity
        {
            public:
                GracefulRestart();
                ~GracefulRestart();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf enable; //type: boolean
                YLeaf restart_time; //type: uint32
                YLeaf recovery_time; //type: uint32



        }; // Rsvp::Signalling::GracefulRestart


        class PrefixFiltering : public Entity
        {
            public:
                PrefixFiltering();
                ~PrefixFiltering();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf acl; //type: string

            class DefaultDenyAction : public Entity
            {
                public:
                    DefaultDenyAction();
                    ~DefaultDenyAction();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf drop; //type: empty



            }; // Rsvp::Signalling::PrefixFiltering::DefaultDenyAction


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::PrefixFiltering::DefaultDenyAction> default_deny_action;


        }; // Rsvp::Signalling::PrefixFiltering


        class Pesr : public Entity
        {
            public:
                Pesr();
                ~Pesr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf disable; //type: empty



        }; // Rsvp::Signalling::Pesr


        class Checksum : public Entity
        {
            public:
                Checksum();
                ~Checksum();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf disable; //type: empty



        }; // Rsvp::Signalling::Checksum


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::Checksum> checksum;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::GlobalOutOfBand> global_out_of_band;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::GracefulRestart> graceful_restart;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::Pesr> pesr;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::PrefixFiltering> prefix_filtering;


    }; // Rsvp::Signalling


    class Authentication : public Entity
    {
        public:
            Authentication();
            ~Authentication();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf life_time; //type: uint32
            YLeaf enable; //type: boolean
            YLeaf window_size; //type: uint32
            YLeaf key_chain; //type: string



    }; // Rsvp::Authentication


        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Authentication> authentication;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers> controllers;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth> global_bandwidth;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalLogging> global_logging;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Neighbors> neighbors;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling> signalling;


}; // Rsvp


class RsvpBwCfgEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf percentage;

};

class RsvpBc0Enum : public Enum
{
    public:
        static const Enum::YLeaf bc0;
        static const Enum::YLeaf global_pool;
        static const Enum::YLeaf not_specified;

};

class RsvpBc1Enum : public Enum
{
    public:
        static const Enum::YLeaf bc1;
        static const Enum::YLeaf sub_pool;

};

class RsvpRdmEnum : public Enum
{
    public:
        static const Enum::YLeaf rdm;
        static const Enum::YLeaf not_specified;
        static const Enum::YLeaf use_default_bandwidth;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_CFG_ */

