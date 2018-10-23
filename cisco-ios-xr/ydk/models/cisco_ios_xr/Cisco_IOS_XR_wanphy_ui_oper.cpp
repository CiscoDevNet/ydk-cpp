
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_wanphy_ui_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wanphy_ui_oper {

Wanphy::Wanphy()
    :
    controllers(std::make_shared<Wanphy::Controllers>())
{
    controllers->parent = this;

    yang_name = "wanphy"; yang_parent_name = "Cisco-IOS-XR-wanphy-ui-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Wanphy::~Wanphy()
{
}

bool Wanphy::has_data() const
{
    if (is_presence_container) return true;
    return (controllers !=  nullptr && controllers->has_data());
}

bool Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Wanphy::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllers != nullptr)
    {
        _children["controllers"] = controllers;
    }

    return _children;
}

void Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Wanphy::clone_ptr() const
{
    return std::make_shared<Wanphy>();
}

std::string Wanphy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Wanphy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Wanphy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Wanphy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers")
        return true;
    return false;
}

Wanphy::Controllers::Controllers()
    :
    controller(this, {"controller_name"})
{

    yang_name = "controllers"; yang_parent_name = "wanphy"; is_top_level_class = false; has_list_ancestor = false; 
}

Wanphy::Controllers::~Controllers()
{
}

bool Wanphy::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Wanphy::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Wanphy::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy/" << get_segment_path();
    return path_buffer.str();
}

std::string Wanphy::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wanphy::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wanphy::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto ent_ = std::make_shared<Wanphy::Controllers::Controller>();
        ent_->parent = this;
        controller.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wanphy::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Wanphy::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Wanphy::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Wanphy::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Wanphy::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"}
        ,
    info(std::make_shared<Wanphy::Controllers::Controller::Info>())
{
    info->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Wanphy::Controllers::Controller::~Controller()
{
}

bool Wanphy::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| (info !=  nullptr && info->has_data());
}

bool Wanphy::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| (info !=  nullptr && info->has_operation());
}

std::string Wanphy::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-oper:wanphy/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Wanphy::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wanphy::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wanphy::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Wanphy::Controllers::Controller::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wanphy::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    return _children;
}

void Wanphy::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
}

void Wanphy::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
}

bool Wanphy::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "controller-name")
        return true;
    return false;
}

Wanphy::Controllers::Controller::Info::Info()
    :
    admin_mode{YType::enumeration, "admin-mode"},
    port_state{YType::uint32, "port-state"},
    section_lof{YType::uint32, "section-lof"},
    section_los{YType::uint32, "section-los"},
    section_bip{YType::uint64, "section-bip"},
    line_ais{YType::uint32, "line-ais"},
    line_rdi{YType::uint32, "line-rdi"},
    line_febe{YType::uint64, "line-febe"},
    line_bip{YType::uint64, "line-bip"},
    path_ais{YType::uint32, "path-ais"},
    path_rdi{YType::uint32, "path-rdi"},
    path_febe{YType::uint64, "path-febe"},
    path_bip{YType::uint64, "path-bip"},
    path_lop{YType::uint32, "path-lop"},
    path_newptr{YType::uint32, "path-newptr"},
    path_pse{YType::uint32, "path-pse"},
    path_nse{YType::uint32, "path-nse"},
    wis_alarms_ser{YType::uint32, "wis-alarms-ser"},
    wis_alarms_felcdp{YType::uint32, "wis-alarms-felcdp"},
    wis_alarms_feaisp{YType::uint32, "wis-alarms-feaisp"},
    wis_alarms_wlos{YType::uint32, "wis-alarms-wlos"},
    wis_alarms_plcd{YType::uint32, "wis-alarms-plcd"},
    wis_alarms_lfebip{YType::uint64, "wis-alarms-lfebip"},
    wis_alarms_pbec{YType::uint64, "wis-alarms-pbec"},
    wis_alarms_plmp{YType::uint32, "wis-alarms-plmp"},
    sf_ber_threshold{YType::uint32, "sf-ber-threshold"},
    sd_ber_threshold{YType::uint32, "sd-ber-threshold"},
    sf_ber_report{YType::enumeration, "sf-ber-report"},
    sd_ber_report{YType::enumeration, "sd-ber-report"},
    operational_mode{YType::enumeration, "operational-mode"},
    remote_ip{YType::str, "remote-ip"},
    register_p_febe{YType::uint32, "register-p-febe"},
    register_l_fe_bip{YType::uint32, "register-l-fe-bip"},
    register_l_bip{YType::uint32, "register-l-bip"},
    register_p_bec{YType::uint32, "register-p-bec"},
    register_s_bip{YType::uint32, "register-s-bip"},
    register_j1_rx0{YType::uint32, "register-j1-rx0"},
    register_j1_rx1{YType::uint32, "register-j1-rx1"},
    register_j1_rx2{YType::uint32, "register-j1-rx2"},
    register_j1_rx3{YType::uint32, "register-j1-rx3"},
    register_j1_rx4{YType::uint32, "register-j1-rx4"},
    register_j1_rx5{YType::uint32, "register-j1-rx5"},
    register_j1_rx6{YType::uint32, "register-j1-rx6"},
    register_j1_rx7{YType::uint32, "register-j1-rx7"},
    wanphy_poll_timer{YType::uint32, "wanphy-poll-timer"}
{

    yang_name = "info"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Wanphy::Controllers::Controller::Info::~Info()
{
}

bool Wanphy::Controllers::Controller::Info::has_data() const
{
    if (is_presence_container) return true;
    return admin_mode.is_set
	|| port_state.is_set
	|| section_lof.is_set
	|| section_los.is_set
	|| section_bip.is_set
	|| line_ais.is_set
	|| line_rdi.is_set
	|| line_febe.is_set
	|| line_bip.is_set
	|| path_ais.is_set
	|| path_rdi.is_set
	|| path_febe.is_set
	|| path_bip.is_set
	|| path_lop.is_set
	|| path_newptr.is_set
	|| path_pse.is_set
	|| path_nse.is_set
	|| wis_alarms_ser.is_set
	|| wis_alarms_felcdp.is_set
	|| wis_alarms_feaisp.is_set
	|| wis_alarms_wlos.is_set
	|| wis_alarms_plcd.is_set
	|| wis_alarms_lfebip.is_set
	|| wis_alarms_pbec.is_set
	|| wis_alarms_plmp.is_set
	|| sf_ber_threshold.is_set
	|| sd_ber_threshold.is_set
	|| sf_ber_report.is_set
	|| sd_ber_report.is_set
	|| operational_mode.is_set
	|| remote_ip.is_set
	|| register_p_febe.is_set
	|| register_l_fe_bip.is_set
	|| register_l_bip.is_set
	|| register_p_bec.is_set
	|| register_s_bip.is_set
	|| register_j1_rx0.is_set
	|| register_j1_rx1.is_set
	|| register_j1_rx2.is_set
	|| register_j1_rx3.is_set
	|| register_j1_rx4.is_set
	|| register_j1_rx5.is_set
	|| register_j1_rx6.is_set
	|| register_j1_rx7.is_set
	|| wanphy_poll_timer.is_set;
}

bool Wanphy::Controllers::Controller::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_mode.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(section_lof.yfilter)
	|| ydk::is_set(section_los.yfilter)
	|| ydk::is_set(section_bip.yfilter)
	|| ydk::is_set(line_ais.yfilter)
	|| ydk::is_set(line_rdi.yfilter)
	|| ydk::is_set(line_febe.yfilter)
	|| ydk::is_set(line_bip.yfilter)
	|| ydk::is_set(path_ais.yfilter)
	|| ydk::is_set(path_rdi.yfilter)
	|| ydk::is_set(path_febe.yfilter)
	|| ydk::is_set(path_bip.yfilter)
	|| ydk::is_set(path_lop.yfilter)
	|| ydk::is_set(path_newptr.yfilter)
	|| ydk::is_set(path_pse.yfilter)
	|| ydk::is_set(path_nse.yfilter)
	|| ydk::is_set(wis_alarms_ser.yfilter)
	|| ydk::is_set(wis_alarms_felcdp.yfilter)
	|| ydk::is_set(wis_alarms_feaisp.yfilter)
	|| ydk::is_set(wis_alarms_wlos.yfilter)
	|| ydk::is_set(wis_alarms_plcd.yfilter)
	|| ydk::is_set(wis_alarms_lfebip.yfilter)
	|| ydk::is_set(wis_alarms_pbec.yfilter)
	|| ydk::is_set(wis_alarms_plmp.yfilter)
	|| ydk::is_set(sf_ber_threshold.yfilter)
	|| ydk::is_set(sd_ber_threshold.yfilter)
	|| ydk::is_set(sf_ber_report.yfilter)
	|| ydk::is_set(sd_ber_report.yfilter)
	|| ydk::is_set(operational_mode.yfilter)
	|| ydk::is_set(remote_ip.yfilter)
	|| ydk::is_set(register_p_febe.yfilter)
	|| ydk::is_set(register_l_fe_bip.yfilter)
	|| ydk::is_set(register_l_bip.yfilter)
	|| ydk::is_set(register_p_bec.yfilter)
	|| ydk::is_set(register_s_bip.yfilter)
	|| ydk::is_set(register_j1_rx0.yfilter)
	|| ydk::is_set(register_j1_rx1.yfilter)
	|| ydk::is_set(register_j1_rx2.yfilter)
	|| ydk::is_set(register_j1_rx3.yfilter)
	|| ydk::is_set(register_j1_rx4.yfilter)
	|| ydk::is_set(register_j1_rx5.yfilter)
	|| ydk::is_set(register_j1_rx6.yfilter)
	|| ydk::is_set(register_j1_rx7.yfilter)
	|| ydk::is_set(wanphy_poll_timer.yfilter);
}

std::string Wanphy::Controllers::Controller::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Wanphy::Controllers::Controller::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_mode.is_set || is_set(admin_mode.yfilter)) leaf_name_data.push_back(admin_mode.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (section_lof.is_set || is_set(section_lof.yfilter)) leaf_name_data.push_back(section_lof.get_name_leafdata());
    if (section_los.is_set || is_set(section_los.yfilter)) leaf_name_data.push_back(section_los.get_name_leafdata());
    if (section_bip.is_set || is_set(section_bip.yfilter)) leaf_name_data.push_back(section_bip.get_name_leafdata());
    if (line_ais.is_set || is_set(line_ais.yfilter)) leaf_name_data.push_back(line_ais.get_name_leafdata());
    if (line_rdi.is_set || is_set(line_rdi.yfilter)) leaf_name_data.push_back(line_rdi.get_name_leafdata());
    if (line_febe.is_set || is_set(line_febe.yfilter)) leaf_name_data.push_back(line_febe.get_name_leafdata());
    if (line_bip.is_set || is_set(line_bip.yfilter)) leaf_name_data.push_back(line_bip.get_name_leafdata());
    if (path_ais.is_set || is_set(path_ais.yfilter)) leaf_name_data.push_back(path_ais.get_name_leafdata());
    if (path_rdi.is_set || is_set(path_rdi.yfilter)) leaf_name_data.push_back(path_rdi.get_name_leafdata());
    if (path_febe.is_set || is_set(path_febe.yfilter)) leaf_name_data.push_back(path_febe.get_name_leafdata());
    if (path_bip.is_set || is_set(path_bip.yfilter)) leaf_name_data.push_back(path_bip.get_name_leafdata());
    if (path_lop.is_set || is_set(path_lop.yfilter)) leaf_name_data.push_back(path_lop.get_name_leafdata());
    if (path_newptr.is_set || is_set(path_newptr.yfilter)) leaf_name_data.push_back(path_newptr.get_name_leafdata());
    if (path_pse.is_set || is_set(path_pse.yfilter)) leaf_name_data.push_back(path_pse.get_name_leafdata());
    if (path_nse.is_set || is_set(path_nse.yfilter)) leaf_name_data.push_back(path_nse.get_name_leafdata());
    if (wis_alarms_ser.is_set || is_set(wis_alarms_ser.yfilter)) leaf_name_data.push_back(wis_alarms_ser.get_name_leafdata());
    if (wis_alarms_felcdp.is_set || is_set(wis_alarms_felcdp.yfilter)) leaf_name_data.push_back(wis_alarms_felcdp.get_name_leafdata());
    if (wis_alarms_feaisp.is_set || is_set(wis_alarms_feaisp.yfilter)) leaf_name_data.push_back(wis_alarms_feaisp.get_name_leafdata());
    if (wis_alarms_wlos.is_set || is_set(wis_alarms_wlos.yfilter)) leaf_name_data.push_back(wis_alarms_wlos.get_name_leafdata());
    if (wis_alarms_plcd.is_set || is_set(wis_alarms_plcd.yfilter)) leaf_name_data.push_back(wis_alarms_plcd.get_name_leafdata());
    if (wis_alarms_lfebip.is_set || is_set(wis_alarms_lfebip.yfilter)) leaf_name_data.push_back(wis_alarms_lfebip.get_name_leafdata());
    if (wis_alarms_pbec.is_set || is_set(wis_alarms_pbec.yfilter)) leaf_name_data.push_back(wis_alarms_pbec.get_name_leafdata());
    if (wis_alarms_plmp.is_set || is_set(wis_alarms_plmp.yfilter)) leaf_name_data.push_back(wis_alarms_plmp.get_name_leafdata());
    if (sf_ber_threshold.is_set || is_set(sf_ber_threshold.yfilter)) leaf_name_data.push_back(sf_ber_threshold.get_name_leafdata());
    if (sd_ber_threshold.is_set || is_set(sd_ber_threshold.yfilter)) leaf_name_data.push_back(sd_ber_threshold.get_name_leafdata());
    if (sf_ber_report.is_set || is_set(sf_ber_report.yfilter)) leaf_name_data.push_back(sf_ber_report.get_name_leafdata());
    if (sd_ber_report.is_set || is_set(sd_ber_report.yfilter)) leaf_name_data.push_back(sd_ber_report.get_name_leafdata());
    if (operational_mode.is_set || is_set(operational_mode.yfilter)) leaf_name_data.push_back(operational_mode.get_name_leafdata());
    if (remote_ip.is_set || is_set(remote_ip.yfilter)) leaf_name_data.push_back(remote_ip.get_name_leafdata());
    if (register_p_febe.is_set || is_set(register_p_febe.yfilter)) leaf_name_data.push_back(register_p_febe.get_name_leafdata());
    if (register_l_fe_bip.is_set || is_set(register_l_fe_bip.yfilter)) leaf_name_data.push_back(register_l_fe_bip.get_name_leafdata());
    if (register_l_bip.is_set || is_set(register_l_bip.yfilter)) leaf_name_data.push_back(register_l_bip.get_name_leafdata());
    if (register_p_bec.is_set || is_set(register_p_bec.yfilter)) leaf_name_data.push_back(register_p_bec.get_name_leafdata());
    if (register_s_bip.is_set || is_set(register_s_bip.yfilter)) leaf_name_data.push_back(register_s_bip.get_name_leafdata());
    if (register_j1_rx0.is_set || is_set(register_j1_rx0.yfilter)) leaf_name_data.push_back(register_j1_rx0.get_name_leafdata());
    if (register_j1_rx1.is_set || is_set(register_j1_rx1.yfilter)) leaf_name_data.push_back(register_j1_rx1.get_name_leafdata());
    if (register_j1_rx2.is_set || is_set(register_j1_rx2.yfilter)) leaf_name_data.push_back(register_j1_rx2.get_name_leafdata());
    if (register_j1_rx3.is_set || is_set(register_j1_rx3.yfilter)) leaf_name_data.push_back(register_j1_rx3.get_name_leafdata());
    if (register_j1_rx4.is_set || is_set(register_j1_rx4.yfilter)) leaf_name_data.push_back(register_j1_rx4.get_name_leafdata());
    if (register_j1_rx5.is_set || is_set(register_j1_rx5.yfilter)) leaf_name_data.push_back(register_j1_rx5.get_name_leafdata());
    if (register_j1_rx6.is_set || is_set(register_j1_rx6.yfilter)) leaf_name_data.push_back(register_j1_rx6.get_name_leafdata());
    if (register_j1_rx7.is_set || is_set(register_j1_rx7.yfilter)) leaf_name_data.push_back(register_j1_rx7.get_name_leafdata());
    if (wanphy_poll_timer.is_set || is_set(wanphy_poll_timer.yfilter)) leaf_name_data.push_back(wanphy_poll_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Wanphy::Controllers::Controller::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Wanphy::Controllers::Controller::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Wanphy::Controllers::Controller::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-mode")
    {
        admin_mode = value;
        admin_mode.value_namespace = name_space;
        admin_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "section-lof")
    {
        section_lof = value;
        section_lof.value_namespace = name_space;
        section_lof.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "section-los")
    {
        section_los = value;
        section_los.value_namespace = name_space;
        section_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "section-bip")
    {
        section_bip = value;
        section_bip.value_namespace = name_space;
        section_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-ais")
    {
        line_ais = value;
        line_ais.value_namespace = name_space;
        line_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-rdi")
    {
        line_rdi = value;
        line_rdi.value_namespace = name_space;
        line_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-febe")
    {
        line_febe = value;
        line_febe.value_namespace = name_space;
        line_febe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-bip")
    {
        line_bip = value;
        line_bip.value_namespace = name_space;
        line_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-ais")
    {
        path_ais = value;
        path_ais.value_namespace = name_space;
        path_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rdi")
    {
        path_rdi = value;
        path_rdi.value_namespace = name_space;
        path_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-febe")
    {
        path_febe = value;
        path_febe.value_namespace = name_space;
        path_febe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-bip")
    {
        path_bip = value;
        path_bip.value_namespace = name_space;
        path_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-lop")
    {
        path_lop = value;
        path_lop.value_namespace = name_space;
        path_lop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-newptr")
    {
        path_newptr = value;
        path_newptr.value_namespace = name_space;
        path_newptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-pse")
    {
        path_pse = value;
        path_pse.value_namespace = name_space;
        path_pse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-nse")
    {
        path_nse = value;
        path_nse.value_namespace = name_space;
        path_nse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-ser")
    {
        wis_alarms_ser = value;
        wis_alarms_ser.value_namespace = name_space;
        wis_alarms_ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-felcdp")
    {
        wis_alarms_felcdp = value;
        wis_alarms_felcdp.value_namespace = name_space;
        wis_alarms_felcdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-feaisp")
    {
        wis_alarms_feaisp = value;
        wis_alarms_feaisp.value_namespace = name_space;
        wis_alarms_feaisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-wlos")
    {
        wis_alarms_wlos = value;
        wis_alarms_wlos.value_namespace = name_space;
        wis_alarms_wlos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-plcd")
    {
        wis_alarms_plcd = value;
        wis_alarms_plcd.value_namespace = name_space;
        wis_alarms_plcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-lfebip")
    {
        wis_alarms_lfebip = value;
        wis_alarms_lfebip.value_namespace = name_space;
        wis_alarms_lfebip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-pbec")
    {
        wis_alarms_pbec = value;
        wis_alarms_pbec.value_namespace = name_space;
        wis_alarms_pbec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wis-alarms-plmp")
    {
        wis_alarms_plmp = value;
        wis_alarms_plmp.value_namespace = name_space;
        wis_alarms_plmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf-ber-threshold")
    {
        sf_ber_threshold = value;
        sf_ber_threshold.value_namespace = name_space;
        sf_ber_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-ber-threshold")
    {
        sd_ber_threshold = value;
        sd_ber_threshold.value_namespace = name_space;
        sd_ber_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf-ber-report")
    {
        sf_ber_report = value;
        sf_ber_report.value_namespace = name_space;
        sf_ber_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-ber-report")
    {
        sd_ber_report = value;
        sd_ber_report.value_namespace = name_space;
        sd_ber_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-mode")
    {
        operational_mode = value;
        operational_mode.value_namespace = name_space;
        operational_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip")
    {
        remote_ip = value;
        remote_ip.value_namespace = name_space;
        remote_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-p-febe")
    {
        register_p_febe = value;
        register_p_febe.value_namespace = name_space;
        register_p_febe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-l-fe-bip")
    {
        register_l_fe_bip = value;
        register_l_fe_bip.value_namespace = name_space;
        register_l_fe_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-l-bip")
    {
        register_l_bip = value;
        register_l_bip.value_namespace = name_space;
        register_l_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-p-bec")
    {
        register_p_bec = value;
        register_p_bec.value_namespace = name_space;
        register_p_bec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-s-bip")
    {
        register_s_bip = value;
        register_s_bip.value_namespace = name_space;
        register_s_bip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx0")
    {
        register_j1_rx0 = value;
        register_j1_rx0.value_namespace = name_space;
        register_j1_rx0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx1")
    {
        register_j1_rx1 = value;
        register_j1_rx1.value_namespace = name_space;
        register_j1_rx1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx2")
    {
        register_j1_rx2 = value;
        register_j1_rx2.value_namespace = name_space;
        register_j1_rx2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx3")
    {
        register_j1_rx3 = value;
        register_j1_rx3.value_namespace = name_space;
        register_j1_rx3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx4")
    {
        register_j1_rx4 = value;
        register_j1_rx4.value_namespace = name_space;
        register_j1_rx4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx5")
    {
        register_j1_rx5 = value;
        register_j1_rx5.value_namespace = name_space;
        register_j1_rx5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx6")
    {
        register_j1_rx6 = value;
        register_j1_rx6.value_namespace = name_space;
        register_j1_rx6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-j1-rx7")
    {
        register_j1_rx7 = value;
        register_j1_rx7.value_namespace = name_space;
        register_j1_rx7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wanphy-poll-timer")
    {
        wanphy_poll_timer = value;
        wanphy_poll_timer.value_namespace = name_space;
        wanphy_poll_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Wanphy::Controllers::Controller::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-mode")
    {
        admin_mode.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "section-lof")
    {
        section_lof.yfilter = yfilter;
    }
    if(value_path == "section-los")
    {
        section_los.yfilter = yfilter;
    }
    if(value_path == "section-bip")
    {
        section_bip.yfilter = yfilter;
    }
    if(value_path == "line-ais")
    {
        line_ais.yfilter = yfilter;
    }
    if(value_path == "line-rdi")
    {
        line_rdi.yfilter = yfilter;
    }
    if(value_path == "line-febe")
    {
        line_febe.yfilter = yfilter;
    }
    if(value_path == "line-bip")
    {
        line_bip.yfilter = yfilter;
    }
    if(value_path == "path-ais")
    {
        path_ais.yfilter = yfilter;
    }
    if(value_path == "path-rdi")
    {
        path_rdi.yfilter = yfilter;
    }
    if(value_path == "path-febe")
    {
        path_febe.yfilter = yfilter;
    }
    if(value_path == "path-bip")
    {
        path_bip.yfilter = yfilter;
    }
    if(value_path == "path-lop")
    {
        path_lop.yfilter = yfilter;
    }
    if(value_path == "path-newptr")
    {
        path_newptr.yfilter = yfilter;
    }
    if(value_path == "path-pse")
    {
        path_pse.yfilter = yfilter;
    }
    if(value_path == "path-nse")
    {
        path_nse.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-ser")
    {
        wis_alarms_ser.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-felcdp")
    {
        wis_alarms_felcdp.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-feaisp")
    {
        wis_alarms_feaisp.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-wlos")
    {
        wis_alarms_wlos.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-plcd")
    {
        wis_alarms_plcd.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-lfebip")
    {
        wis_alarms_lfebip.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-pbec")
    {
        wis_alarms_pbec.yfilter = yfilter;
    }
    if(value_path == "wis-alarms-plmp")
    {
        wis_alarms_plmp.yfilter = yfilter;
    }
    if(value_path == "sf-ber-threshold")
    {
        sf_ber_threshold.yfilter = yfilter;
    }
    if(value_path == "sd-ber-threshold")
    {
        sd_ber_threshold.yfilter = yfilter;
    }
    if(value_path == "sf-ber-report")
    {
        sf_ber_report.yfilter = yfilter;
    }
    if(value_path == "sd-ber-report")
    {
        sd_ber_report.yfilter = yfilter;
    }
    if(value_path == "operational-mode")
    {
        operational_mode.yfilter = yfilter;
    }
    if(value_path == "remote-ip")
    {
        remote_ip.yfilter = yfilter;
    }
    if(value_path == "register-p-febe")
    {
        register_p_febe.yfilter = yfilter;
    }
    if(value_path == "register-l-fe-bip")
    {
        register_l_fe_bip.yfilter = yfilter;
    }
    if(value_path == "register-l-bip")
    {
        register_l_bip.yfilter = yfilter;
    }
    if(value_path == "register-p-bec")
    {
        register_p_bec.yfilter = yfilter;
    }
    if(value_path == "register-s-bip")
    {
        register_s_bip.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx0")
    {
        register_j1_rx0.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx1")
    {
        register_j1_rx1.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx2")
    {
        register_j1_rx2.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx3")
    {
        register_j1_rx3.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx4")
    {
        register_j1_rx4.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx5")
    {
        register_j1_rx5.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx6")
    {
        register_j1_rx6.yfilter = yfilter;
    }
    if(value_path == "register-j1-rx7")
    {
        register_j1_rx7.yfilter = yfilter;
    }
    if(value_path == "wanphy-poll-timer")
    {
        wanphy_poll_timer.yfilter = yfilter;
    }
}

bool Wanphy::Controllers::Controller::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-mode" || name == "port-state" || name == "section-lof" || name == "section-los" || name == "section-bip" || name == "line-ais" || name == "line-rdi" || name == "line-febe" || name == "line-bip" || name == "path-ais" || name == "path-rdi" || name == "path-febe" || name == "path-bip" || name == "path-lop" || name == "path-newptr" || name == "path-pse" || name == "path-nse" || name == "wis-alarms-ser" || name == "wis-alarms-felcdp" || name == "wis-alarms-feaisp" || name == "wis-alarms-wlos" || name == "wis-alarms-plcd" || name == "wis-alarms-lfebip" || name == "wis-alarms-pbec" || name == "wis-alarms-plmp" || name == "sf-ber-threshold" || name == "sd-ber-threshold" || name == "sf-ber-report" || name == "sd-ber-report" || name == "operational-mode" || name == "remote-ip" || name == "register-p-febe" || name == "register-l-fe-bip" || name == "register-l-bip" || name == "register-p-bec" || name == "register-s-bip" || name == "register-j1-rx0" || name == "register-j1-rx1" || name == "register-j1-rx2" || name == "register-j1-rx3" || name == "register-j1-rx4" || name == "register-j1-rx5" || name == "register-j1-rx6" || name == "register-j1-rx7" || name == "wanphy-poll-timer")
        return true;
    return false;
}

const Enum::YLeaf WanphyAlarmRepStatus::disable {0, "disable"};
const Enum::YLeaf WanphyAlarmRepStatus::enable {1, "enable"};

const Enum::YLeaf WanphyModeInfo::lan {0, "lan"};
const Enum::YLeaf WanphyModeInfo::wan {1, "wan"};


}
}

