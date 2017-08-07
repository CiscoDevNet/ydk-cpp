#ifndef _CISCO_IOS_XR_WANPHY_UI_OPER_
#define _CISCO_IOS_XR_WANPHY_UI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wanphy_ui_oper {

class Wanphy : public ydk::Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Controllers; //type: Wanphy::Controllers

        std::shared_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers> controllers;
        
}; // Wanphy


class Wanphy::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: Wanphy::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers::Controller> > controller;
        
}; // Wanphy::Controllers


class Wanphy::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_name; //type: string
        class Info; //type: Wanphy::Controllers::Controller::Info

        std::shared_ptr<Cisco_IOS_XR_wanphy_ui_oper::Wanphy::Controllers::Controller::Info> info;
        
}; // Wanphy::Controllers::Controller


class Wanphy::Controllers::Controller::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_mode; //type: WanphyModeInfo
        ydk::YLeaf port_state; //type: uint32
        ydk::YLeaf section_lof; //type: uint32
        ydk::YLeaf section_los; //type: uint32
        ydk::YLeaf section_bip; //type: uint64
        ydk::YLeaf line_ais; //type: uint32
        ydk::YLeaf line_rdi; //type: uint32
        ydk::YLeaf line_febe; //type: uint64
        ydk::YLeaf line_bip; //type: uint64
        ydk::YLeaf path_ais; //type: uint32
        ydk::YLeaf path_rdi; //type: uint32
        ydk::YLeaf path_febe; //type: uint64
        ydk::YLeaf path_bip; //type: uint64
        ydk::YLeaf path_lop; //type: uint32
        ydk::YLeaf path_newptr; //type: uint32
        ydk::YLeaf path_pse; //type: uint32
        ydk::YLeaf path_nse; //type: uint32
        ydk::YLeaf wis_alarms_ser; //type: uint32
        ydk::YLeaf wis_alarms_felcdp; //type: uint32
        ydk::YLeaf wis_alarms_feaisp; //type: uint32
        ydk::YLeaf wis_alarms_wlos; //type: uint32
        ydk::YLeaf wis_alarms_plcd; //type: uint32
        ydk::YLeaf wis_alarms_lfebip; //type: uint64
        ydk::YLeaf wis_alarms_pbec; //type: uint64
        ydk::YLeaf wis_alarms_plmp; //type: uint32
        ydk::YLeaf sf_ber_threshold; //type: uint32
        ydk::YLeaf sd_ber_threshold; //type: uint32
        ydk::YLeaf sf_ber_report; //type: WanphyAlarmRepStatus
        ydk::YLeaf sd_ber_report; //type: WanphyAlarmRepStatus
        ydk::YLeaf operational_mode; //type: WanphyModeInfo
        ydk::YLeaf remote_ip; //type: string
        ydk::YLeaf register_p_febe; //type: uint32
        ydk::YLeaf register_l_fe_bip; //type: uint32
        ydk::YLeaf register_l_bip; //type: uint32
        ydk::YLeaf register_p_bec; //type: uint32
        ydk::YLeaf register_s_bip; //type: uint32
        ydk::YLeaf register_j1_rx0; //type: uint32
        ydk::YLeaf register_j1_rx1; //type: uint32
        ydk::YLeaf register_j1_rx2; //type: uint32
        ydk::YLeaf register_j1_rx3; //type: uint32
        ydk::YLeaf register_j1_rx4; //type: uint32
        ydk::YLeaf register_j1_rx5; //type: uint32
        ydk::YLeaf register_j1_rx6; //type: uint32
        ydk::YLeaf register_j1_rx7; //type: uint32
        ydk::YLeaf wanphy_poll_timer; //type: uint32

}; // Wanphy::Controllers::Controller::Info

class WanphyAlarmRepStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class WanphyModeInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lan;
        static const ydk::Enum::YLeaf wan;

};


}
}

#endif /* _CISCO_IOS_XR_WANPHY_UI_OPER_ */

