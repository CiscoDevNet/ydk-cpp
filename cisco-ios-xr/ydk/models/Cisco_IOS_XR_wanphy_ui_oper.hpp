#ifndef _CISCO_IOS_XR_WANPHY_UI_OPER_
#define _CISCO_IOS_XR_WANPHY_UI_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wanphy_ui_oper {

class Wanphy : public Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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

            class Info : public Entity
            {
                public:
                    Info();
                    ~Info();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf admin_mode; //type: WanphyModeInfoEnum
                    YLeaf port_state; //type: uint32
                    YLeaf section_lof; //type: uint32
                    YLeaf section_los; //type: uint32
                    YLeaf section_bip; //type: uint64
                    YLeaf line_ais; //type: uint32
                    YLeaf line_rdi; //type: uint32
                    YLeaf line_febe; //type: uint64
                    YLeaf line_bip; //type: uint64
                    YLeaf path_ais; //type: uint32
                    YLeaf path_rdi; //type: uint32
                    YLeaf path_febe; //type: uint64
                    YLeaf path_bip; //type: uint64
                    YLeaf path_lop; //type: uint32
                    YLeaf path_newptr; //type: uint32
                    YLeaf path_pse; //type: uint32
                    YLeaf path_nse; //type: uint32
                    YLeaf wis_alarms_ser; //type: uint32
                    YLeaf wis_alarms_felcdp; //type: uint32
                    YLeaf wis_alarms_feaisp; //type: uint32
                    YLeaf wis_alarms_wlos; //type: uint32
                    YLeaf wis_alarms_plcd; //type: uint32
                    YLeaf wis_alarms_lfebip; //type: uint64
                    YLeaf wis_alarms_pbec; //type: uint64
                    YLeaf wis_alarms_plmp; //type: uint32
                    YLeaf sf_ber_threshold; //type: uint32
                    YLeaf sd_ber_threshold; //type: uint32
                    YLeaf sf_ber_report; //type: WanphyAlarmRepStatusEnum
                    YLeaf sd_ber_report; //type: WanphyAlarmRepStatusEnum
                    YLeaf operational_mode; //type: WanphyModeInfoEnum
                    YLeaf remote_ip; //type: string
                    YLeaf register_p_febe; //type: uint32
                    YLeaf register_l_fe_bip; //type: uint32
                    YLeaf register_l_bip; //type: uint32
                    YLeaf register_p_bec; //type: uint32
                    YLeaf register_s_bip; //type: uint32
                    YLeaf register_j1_rx0; //type: uint32
                    YLeaf register_j1_rx1; //type: uint32
                    YLeaf register_j1_rx2; //type: uint32
                    YLeaf register_j1_rx3; //type: uint32
                    YLeaf register_j1_rx4; //type: uint32
                    YLeaf register_j1_rx5; //type: uint32
                    YLeaf register_j1_rx6; //type: uint32
                    YLeaf register_j1_rx7; //type: uint32
                    YLeaf wanphy_poll_timer; //type: uint32



            }; // Wanphy::Controllers::Controller::Info


                std::unique_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers::Controller::Info> info;


        }; // Wanphy::Controllers::Controller


            std::vector<std::unique_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers::Controller> > controller;


    }; // Wanphy::Controllers


        std::unique_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers> controllers;


}; // Wanphy


class WanphyAlarmRepStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class WanphyModeInfoEnum : public Enum
{
    public:
        static const Enum::YLeaf lan;
        static const Enum::YLeaf wan;

};


}
}

#endif /* _CISCO_IOS_XR_WANPHY_UI_OPER_ */

