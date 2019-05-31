
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_odu_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_odu_oper {

Odu::Odu()
    :
    controllers(std::make_shared<Odu::Controllers>())
{
    controllers->parent = this;

    yang_name = "odu"; yang_parent_name = "Cisco-IOS-XR-controller-odu-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Odu::~Odu()
{
}

bool Odu::has_data() const
{
    if (is_presence_container) return true;
    return (controllers !=  nullptr && controllers->has_data());
}

bool Odu::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-odu-oper:odu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Odu::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllers != nullptr)
    {
        _children["controllers"] = controllers;
    }

    return _children;
}

void Odu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Odu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Odu::clone_ptr() const
{
    return std::make_shared<Odu>();
}

std::string Odu::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Odu::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Odu::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Odu::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Odu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers")
        return true;
    return false;
}

Odu::Controllers::Controllers()
    :
    controller(this, {"controller_name"})
{

    yang_name = "controllers"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = false; 
}

Odu::Controllers::~Controllers()
{
}

bool Odu::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Odu::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Odu::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-odu-oper:odu/" << get_segment_path();
    return path_buffer.str();
}

std::string Odu::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto ent_ = std::make_shared<Odu::Controllers::Controller>();
        ent_->parent = this;
        controller.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::get_children() const
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

void Odu::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Odu::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Odu::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Odu::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"}
        ,
    prbs(std::make_shared<Odu::Controllers::Controller::Prbs>())
    , info(std::make_shared<Odu::Controllers::Controller::Info>())
{
    prbs->parent = this;
    info->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Odu::Controllers::Controller::~Controller()
{
}

bool Odu::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| (prbs !=  nullptr && prbs->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool Odu::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string Odu::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-odu-oper:odu/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Odu::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<Odu::Controllers::Controller::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Odu::Controllers::Controller::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prbs != nullptr)
    {
        _children["prbs"] = prbs;
    }

    if(info != nullptr)
    {
        _children["info"] = info;
    }

    return _children;
}

void Odu::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs" || name == "info" || name == "controller-name")
        return true;
    return false;
}

Odu::Controllers::Controller::Prbs::Prbs()
    :
    odu_prbs_test{YType::enumeration, "odu-prbs-test"},
    odu_prbs_mode{YType::enumeration, "odu-prbs-mode"},
    odu_prbs_pattern{YType::enumeration, "odu-prbs-pattern"},
    odu_prbs_status{YType::enumeration, "odu-prbs-status"}
{

    yang_name = "prbs"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Prbs::~Prbs()
{
}

bool Odu::Controllers::Controller::Prbs::has_data() const
{
    if (is_presence_container) return true;
    return odu_prbs_test.is_set
	|| odu_prbs_mode.is_set
	|| odu_prbs_pattern.is_set
	|| odu_prbs_status.is_set;
}

bool Odu::Controllers::Controller::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_prbs_test.yfilter)
	|| ydk::is_set(odu_prbs_mode.yfilter)
	|| ydk::is_set(odu_prbs_pattern.yfilter)
	|| ydk::is_set(odu_prbs_status.yfilter);
}

std::string Odu::Controllers::Controller::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_prbs_test.is_set || is_set(odu_prbs_test.yfilter)) leaf_name_data.push_back(odu_prbs_test.get_name_leafdata());
    if (odu_prbs_mode.is_set || is_set(odu_prbs_mode.yfilter)) leaf_name_data.push_back(odu_prbs_mode.get_name_leafdata());
    if (odu_prbs_pattern.is_set || is_set(odu_prbs_pattern.yfilter)) leaf_name_data.push_back(odu_prbs_pattern.get_name_leafdata());
    if (odu_prbs_status.is_set || is_set(odu_prbs_status.yfilter)) leaf_name_data.push_back(odu_prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-prbs-test")
    {
        odu_prbs_test = value;
        odu_prbs_test.value_namespace = name_space;
        odu_prbs_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odu-prbs-mode")
    {
        odu_prbs_mode = value;
        odu_prbs_mode.value_namespace = name_space;
        odu_prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odu-prbs-pattern")
    {
        odu_prbs_pattern = value;
        odu_prbs_pattern.value_namespace = name_space;
        odu_prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odu-prbs-status")
    {
        odu_prbs_status = value;
        odu_prbs_status.value_namespace = name_space;
        odu_prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-prbs-test")
    {
        odu_prbs_test.yfilter = yfilter;
    }
    if(value_path == "odu-prbs-mode")
    {
        odu_prbs_mode.yfilter = yfilter;
    }
    if(value_path == "odu-prbs-pattern")
    {
        odu_prbs_pattern.yfilter = yfilter;
    }
    if(value_path == "odu-prbs-status")
    {
        odu_prbs_status.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-prbs-test" || name == "odu-prbs-mode" || name == "odu-prbs-pattern" || name == "odu-prbs-status")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Info()
    :
    state{YType::enumeration, "state"},
    sf{YType::uint8, "sf"},
    sd{YType::uint8, "sd"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    derived_mode{YType::enumeration, "derived-mode"},
    inherit_sec_state{YType::enumeration, "inherit-sec-state"},
    config_sec_state{YType::enumeration, "config-sec-state"},
    gcc_mode{YType::boolean, "gcc-mode"},
    child_name{YType::str, "child-name"},
    max_odu_child{YType::uint8, "max-odu-child"},
    od_uuser{YType::enumeration, "od-uuser"},
    resource_state{YType::enumeration, "resource-state"},
    pt_type{YType::enumeration, "pt-type"},
    flex_type{YType::enumeration, "flex-type"},
    flex_bw{YType::uint32, "flex-bw"},
    flex_tolerence{YType::uint16, "flex-tolerence"},
    option{YType::uint8, "option"},
    tpn_value{YType::uint8, "tpn-value"},
    num_ts{YType::uint8, "num-ts"},
    ts_g{YType::enumeration, "ts-g"},
    ts_b{YType::str, "ts-b"},
    tpn_b{YType::str, "tpn-b"},
    pts_b{YType::str, "pts-b"},
    fwd_ref{YType::str, "fwd-ref"},
    xc_id{YType::uint32, "xc-id"},
    xconnect_name{YType::str, "xconnect-name"},
    fwd_ref_ifhandle{YType::uint32, "fwd-ref-ifhandle"},
    no_parent_slot{YType::uint32, "no-parent-slot"},
    xc_resp_code{YType::enumeration, "xc-resp-code"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    pmtimca{YType::enumeration, "pmtimca"},
    pm_mode{YType::enumeration, "pm-mode"},
    nv_optical_support{YType::boolean, "nv-optical-support"},
    gmpls_tti_mode{YType::enumeration, "gmpls-tti-mode"},
    gmpls_tcm_id{YType::uint8, "gmpls-tcm-id"}
        ,
    local(std::make_shared<Odu::Controllers::Controller::Info::Local>())
    , remote(std::make_shared<Odu::Controllers::Controller::Info::Remote>())
    , tti_mode(std::make_shared<Odu::Controllers::Controller::Info::TtiMode>())
    , odu_fwd_ref(std::make_shared<Odu::Controllers::Controller::Info::OduFwdRef>())
    , alarm(std::make_shared<Odu::Controllers::Controller::Info::Alarm>())
    , te_ctx_data(std::make_shared<Odu::Controllers::Controller::Info::TeCtxData>())
    , xc_add_ctx_data(std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData>())
    , xc_rem_ctx_data(std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData>())
    , odu_delay(std::make_shared<Odu::Controllers::Controller::Info::OduDelay>())
    , odu_terminate_ether(std::make_shared<Odu::Controllers::Controller::Info::OduTerminateEther>())
    , ains_info(std::make_shared<Odu::Controllers::Controller::Info::AinsInfo>())
    , odu(this, {})
    , odutcm(this, {})
{
    local->parent = this;
    remote->parent = this;
    tti_mode->parent = this;
    odu_fwd_ref->parent = this;
    alarm->parent = this;
    te_ctx_data->parent = this;
    xc_add_ctx_data->parent = this;
    xc_rem_ctx_data->parent = this;
    odu_delay->parent = this;
    odu_terminate_ether->parent = this;
    ains_info->parent = this;

    yang_name = "info"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::~Info()
{
}

bool Odu::Controllers::Controller::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu.len(); index++)
    {
        if(odu[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odutcm.len(); index++)
    {
        if(odutcm[index]->has_data())
            return true;
    }
    return state.is_set
	|| sf.is_set
	|| sd.is_set
	|| loopback_mode.is_set
	|| derived_mode.is_set
	|| inherit_sec_state.is_set
	|| config_sec_state.is_set
	|| gcc_mode.is_set
	|| child_name.is_set
	|| max_odu_child.is_set
	|| od_uuser.is_set
	|| resource_state.is_set
	|| pt_type.is_set
	|| flex_type.is_set
	|| flex_bw.is_set
	|| flex_tolerence.is_set
	|| option.is_set
	|| tpn_value.is_set
	|| num_ts.is_set
	|| ts_g.is_set
	|| ts_b.is_set
	|| tpn_b.is_set
	|| pts_b.is_set
	|| fwd_ref.is_set
	|| xc_id.is_set
	|| xconnect_name.is_set
	|| fwd_ref_ifhandle.is_set
	|| no_parent_slot.is_set
	|| xc_resp_code.is_set
	|| performance_monitoring.is_set
	|| pmtimca.is_set
	|| pm_mode.is_set
	|| nv_optical_support.is_set
	|| gmpls_tti_mode.is_set
	|| gmpls_tcm_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data())
	|| (tti_mode !=  nullptr && tti_mode->has_data())
	|| (odu_fwd_ref !=  nullptr && odu_fwd_ref->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (te_ctx_data !=  nullptr && te_ctx_data->has_data())
	|| (xc_add_ctx_data !=  nullptr && xc_add_ctx_data->has_data())
	|| (xc_rem_ctx_data !=  nullptr && xc_rem_ctx_data->has_data())
	|| (odu_delay !=  nullptr && odu_delay->has_data())
	|| (odu_terminate_ether !=  nullptr && odu_terminate_ether->has_data())
	|| (ains_info !=  nullptr && ains_info->has_data());
}

bool Odu::Controllers::Controller::Info::has_operation() const
{
    for (std::size_t index=0; index<odu.len(); index++)
    {
        if(odu[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odutcm.len(); index++)
    {
        if(odutcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(sf.yfilter)
	|| ydk::is_set(sd.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(derived_mode.yfilter)
	|| ydk::is_set(inherit_sec_state.yfilter)
	|| ydk::is_set(config_sec_state.yfilter)
	|| ydk::is_set(gcc_mode.yfilter)
	|| ydk::is_set(child_name.yfilter)
	|| ydk::is_set(max_odu_child.yfilter)
	|| ydk::is_set(od_uuser.yfilter)
	|| ydk::is_set(resource_state.yfilter)
	|| ydk::is_set(pt_type.yfilter)
	|| ydk::is_set(flex_type.yfilter)
	|| ydk::is_set(flex_bw.yfilter)
	|| ydk::is_set(flex_tolerence.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(tpn_value.yfilter)
	|| ydk::is_set(num_ts.yfilter)
	|| ydk::is_set(ts_g.yfilter)
	|| ydk::is_set(ts_b.yfilter)
	|| ydk::is_set(tpn_b.yfilter)
	|| ydk::is_set(pts_b.yfilter)
	|| ydk::is_set(fwd_ref.yfilter)
	|| ydk::is_set(xc_id.yfilter)
	|| ydk::is_set(xconnect_name.yfilter)
	|| ydk::is_set(fwd_ref_ifhandle.yfilter)
	|| ydk::is_set(no_parent_slot.yfilter)
	|| ydk::is_set(xc_resp_code.yfilter)
	|| ydk::is_set(performance_monitoring.yfilter)
	|| ydk::is_set(pmtimca.yfilter)
	|| ydk::is_set(pm_mode.yfilter)
	|| ydk::is_set(nv_optical_support.yfilter)
	|| ydk::is_set(gmpls_tti_mode.yfilter)
	|| ydk::is_set(gmpls_tcm_id.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation())
	|| (tti_mode !=  nullptr && tti_mode->has_operation())
	|| (odu_fwd_ref !=  nullptr && odu_fwd_ref->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (te_ctx_data !=  nullptr && te_ctx_data->has_operation())
	|| (xc_add_ctx_data !=  nullptr && xc_add_ctx_data->has_operation())
	|| (xc_rem_ctx_data !=  nullptr && xc_rem_ctx_data->has_operation())
	|| (odu_delay !=  nullptr && odu_delay->has_operation())
	|| (odu_terminate_ether !=  nullptr && odu_terminate_ether->has_operation())
	|| (ains_info !=  nullptr && ains_info->has_operation());
}

std::string Odu::Controllers::Controller::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sf.is_set || is_set(sf.yfilter)) leaf_name_data.push_back(sf.get_name_leafdata());
    if (sd.is_set || is_set(sd.yfilter)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (derived_mode.is_set || is_set(derived_mode.yfilter)) leaf_name_data.push_back(derived_mode.get_name_leafdata());
    if (inherit_sec_state.is_set || is_set(inherit_sec_state.yfilter)) leaf_name_data.push_back(inherit_sec_state.get_name_leafdata());
    if (config_sec_state.is_set || is_set(config_sec_state.yfilter)) leaf_name_data.push_back(config_sec_state.get_name_leafdata());
    if (gcc_mode.is_set || is_set(gcc_mode.yfilter)) leaf_name_data.push_back(gcc_mode.get_name_leafdata());
    if (child_name.is_set || is_set(child_name.yfilter)) leaf_name_data.push_back(child_name.get_name_leafdata());
    if (max_odu_child.is_set || is_set(max_odu_child.yfilter)) leaf_name_data.push_back(max_odu_child.get_name_leafdata());
    if (od_uuser.is_set || is_set(od_uuser.yfilter)) leaf_name_data.push_back(od_uuser.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());
    if (pt_type.is_set || is_set(pt_type.yfilter)) leaf_name_data.push_back(pt_type.get_name_leafdata());
    if (flex_type.is_set || is_set(flex_type.yfilter)) leaf_name_data.push_back(flex_type.get_name_leafdata());
    if (flex_bw.is_set || is_set(flex_bw.yfilter)) leaf_name_data.push_back(flex_bw.get_name_leafdata());
    if (flex_tolerence.is_set || is_set(flex_tolerence.yfilter)) leaf_name_data.push_back(flex_tolerence.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (tpn_value.is_set || is_set(tpn_value.yfilter)) leaf_name_data.push_back(tpn_value.get_name_leafdata());
    if (num_ts.is_set || is_set(num_ts.yfilter)) leaf_name_data.push_back(num_ts.get_name_leafdata());
    if (ts_g.is_set || is_set(ts_g.yfilter)) leaf_name_data.push_back(ts_g.get_name_leafdata());
    if (ts_b.is_set || is_set(ts_b.yfilter)) leaf_name_data.push_back(ts_b.get_name_leafdata());
    if (tpn_b.is_set || is_set(tpn_b.yfilter)) leaf_name_data.push_back(tpn_b.get_name_leafdata());
    if (pts_b.is_set || is_set(pts_b.yfilter)) leaf_name_data.push_back(pts_b.get_name_leafdata());
    if (fwd_ref.is_set || is_set(fwd_ref.yfilter)) leaf_name_data.push_back(fwd_ref.get_name_leafdata());
    if (xc_id.is_set || is_set(xc_id.yfilter)) leaf_name_data.push_back(xc_id.get_name_leafdata());
    if (xconnect_name.is_set || is_set(xconnect_name.yfilter)) leaf_name_data.push_back(xconnect_name.get_name_leafdata());
    if (fwd_ref_ifhandle.is_set || is_set(fwd_ref_ifhandle.yfilter)) leaf_name_data.push_back(fwd_ref_ifhandle.get_name_leafdata());
    if (no_parent_slot.is_set || is_set(no_parent_slot.yfilter)) leaf_name_data.push_back(no_parent_slot.get_name_leafdata());
    if (xc_resp_code.is_set || is_set(xc_resp_code.yfilter)) leaf_name_data.push_back(xc_resp_code.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.yfilter)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (pmtimca.is_set || is_set(pmtimca.yfilter)) leaf_name_data.push_back(pmtimca.get_name_leafdata());
    if (pm_mode.is_set || is_set(pm_mode.yfilter)) leaf_name_data.push_back(pm_mode.get_name_leafdata());
    if (nv_optical_support.is_set || is_set(nv_optical_support.yfilter)) leaf_name_data.push_back(nv_optical_support.get_name_leafdata());
    if (gmpls_tti_mode.is_set || is_set(gmpls_tti_mode.yfilter)) leaf_name_data.push_back(gmpls_tti_mode.get_name_leafdata());
    if (gmpls_tcm_id.is_set || is_set(gmpls_tcm_id.yfilter)) leaf_name_data.push_back(gmpls_tcm_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Odu::Controllers::Controller::Info::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Odu::Controllers::Controller::Info::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<Odu::Controllers::Controller::Info::TtiMode>();
        }
        return tti_mode;
    }

    if(child_yang_name == "odu-fwd-ref")
    {
        if(odu_fwd_ref == nullptr)
        {
            odu_fwd_ref = std::make_shared<Odu::Controllers::Controller::Info::OduFwdRef>();
        }
        return odu_fwd_ref;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Odu::Controllers::Controller::Info::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "te-ctx-data")
    {
        if(te_ctx_data == nullptr)
        {
            te_ctx_data = std::make_shared<Odu::Controllers::Controller::Info::TeCtxData>();
        }
        return te_ctx_data;
    }

    if(child_yang_name == "xc-add-ctx-data")
    {
        if(xc_add_ctx_data == nullptr)
        {
            xc_add_ctx_data = std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData>();
        }
        return xc_add_ctx_data;
    }

    if(child_yang_name == "xc-rem-ctx-data")
    {
        if(xc_rem_ctx_data == nullptr)
        {
            xc_rem_ctx_data = std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData>();
        }
        return xc_rem_ctx_data;
    }

    if(child_yang_name == "odu-delay")
    {
        if(odu_delay == nullptr)
        {
            odu_delay = std::make_shared<Odu::Controllers::Controller::Info::OduDelay>();
        }
        return odu_delay;
    }

    if(child_yang_name == "odu-terminate-ether")
    {
        if(odu_terminate_ether == nullptr)
        {
            odu_terminate_ether = std::make_shared<Odu::Controllers::Controller::Info::OduTerminateEther>();
        }
        return odu_terminate_ether;
    }

    if(child_yang_name == "ains-info")
    {
        if(ains_info == nullptr)
        {
            ains_info = std::make_shared<Odu::Controllers::Controller::Info::AinsInfo>();
        }
        return ains_info;
    }

    if(child_yang_name == "odu")
    {
        auto ent_ = std::make_shared<Odu::Controllers::Controller::Info::Odu_>();
        ent_->parent = this;
        odu.append(ent_);
        return ent_;
    }

    if(child_yang_name == "odutcm")
    {
        auto ent_ = std::make_shared<Odu::Controllers::Controller::Info::Odutcm>();
        ent_->parent = this;
        odutcm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    if(tti_mode != nullptr)
    {
        _children["tti-mode"] = tti_mode;
    }

    if(odu_fwd_ref != nullptr)
    {
        _children["odu-fwd-ref"] = odu_fwd_ref;
    }

    if(alarm != nullptr)
    {
        _children["alarm"] = alarm;
    }

    if(te_ctx_data != nullptr)
    {
        _children["te-ctx-data"] = te_ctx_data;
    }

    if(xc_add_ctx_data != nullptr)
    {
        _children["xc-add-ctx-data"] = xc_add_ctx_data;
    }

    if(xc_rem_ctx_data != nullptr)
    {
        _children["xc-rem-ctx-data"] = xc_rem_ctx_data;
    }

    if(odu_delay != nullptr)
    {
        _children["odu-delay"] = odu_delay;
    }

    if(odu_terminate_ether != nullptr)
    {
        _children["odu-terminate-ether"] = odu_terminate_ether;
    }

    if(ains_info != nullptr)
    {
        _children["ains-info"] = ains_info;
    }

    count_ = 0;
    for (auto ent_ : odu.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : odutcm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf")
    {
        sf = value;
        sf.value_namespace = name_space;
        sf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd")
    {
        sd = value;
        sd.value_namespace = name_space;
        sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "derived-mode")
    {
        derived_mode = value;
        derived_mode.value_namespace = name_space;
        derived_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-sec-state")
    {
        inherit_sec_state = value;
        inherit_sec_state.value_namespace = name_space;
        inherit_sec_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-sec-state")
    {
        config_sec_state = value;
        config_sec_state.value_namespace = name_space;
        config_sec_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gcc-mode")
    {
        gcc_mode = value;
        gcc_mode.value_namespace = name_space;
        gcc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "child-name")
    {
        child_name = value;
        child_name.value_namespace = name_space;
        child_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-odu-child")
    {
        max_odu_child = value;
        max_odu_child.value_namespace = name_space;
        max_odu_child.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "od-uuser")
    {
        od_uuser = value;
        od_uuser.value_namespace = name_space;
        od_uuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pt-type")
    {
        pt_type = value;
        pt_type.value_namespace = name_space;
        pt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-type")
    {
        flex_type = value;
        flex_type.value_namespace = name_space;
        flex_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-bw")
    {
        flex_bw = value;
        flex_bw.value_namespace = name_space;
        flex_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-tolerence")
    {
        flex_tolerence = value;
        flex_tolerence.value_namespace = name_space;
        flex_tolerence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpn-value")
    {
        tpn_value = value;
        tpn_value.value_namespace = name_space;
        tpn_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ts")
    {
        num_ts = value;
        num_ts.value_namespace = name_space;
        num_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts-g")
    {
        ts_g = value;
        ts_g.value_namespace = name_space;
        ts_g.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts-b")
    {
        ts_b = value;
        ts_b.value_namespace = name_space;
        ts_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpn-b")
    {
        tpn_b = value;
        tpn_b.value_namespace = name_space;
        tpn_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pts-b")
    {
        pts_b = value;
        pts_b.value_namespace = name_space;
        pts_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-ref")
    {
        fwd_ref = value;
        fwd_ref.value_namespace = name_space;
        fwd_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-id")
    {
        xc_id = value;
        xc_id.value_namespace = name_space;
        xc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name = value;
        xconnect_name.value_namespace = name_space;
        xconnect_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-ref-ifhandle")
    {
        fwd_ref_ifhandle = value;
        fwd_ref_ifhandle.value_namespace = name_space;
        fwd_ref_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-parent-slot")
    {
        no_parent_slot = value;
        no_parent_slot.value_namespace = name_space;
        no_parent_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xc-resp-code")
    {
        xc_resp_code = value;
        xc_resp_code.value_namespace = name_space;
        xc_resp_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
        performance_monitoring.value_namespace = name_space;
        performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmtimca")
    {
        pmtimca = value;
        pmtimca.value_namespace = name_space;
        pmtimca.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-mode")
    {
        pm_mode = value;
        pm_mode.value_namespace = name_space;
        pm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-optical-support")
    {
        nv_optical_support = value;
        nv_optical_support.value_namespace = name_space;
        nv_optical_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-tti-mode")
    {
        gmpls_tti_mode = value;
        gmpls_tti_mode.value_namespace = name_space;
        gmpls_tti_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-tcm-id")
    {
        gmpls_tcm_id = value;
        gmpls_tcm_id.value_namespace = name_space;
        gmpls_tcm_id.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "sf")
    {
        sf.yfilter = yfilter;
    }
    if(value_path == "sd")
    {
        sd.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "derived-mode")
    {
        derived_mode.yfilter = yfilter;
    }
    if(value_path == "inherit-sec-state")
    {
        inherit_sec_state.yfilter = yfilter;
    }
    if(value_path == "config-sec-state")
    {
        config_sec_state.yfilter = yfilter;
    }
    if(value_path == "gcc-mode")
    {
        gcc_mode.yfilter = yfilter;
    }
    if(value_path == "child-name")
    {
        child_name.yfilter = yfilter;
    }
    if(value_path == "max-odu-child")
    {
        max_odu_child.yfilter = yfilter;
    }
    if(value_path == "od-uuser")
    {
        od_uuser.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
    if(value_path == "pt-type")
    {
        pt_type.yfilter = yfilter;
    }
    if(value_path == "flex-type")
    {
        flex_type.yfilter = yfilter;
    }
    if(value_path == "flex-bw")
    {
        flex_bw.yfilter = yfilter;
    }
    if(value_path == "flex-tolerence")
    {
        flex_tolerence.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "tpn-value")
    {
        tpn_value.yfilter = yfilter;
    }
    if(value_path == "num-ts")
    {
        num_ts.yfilter = yfilter;
    }
    if(value_path == "ts-g")
    {
        ts_g.yfilter = yfilter;
    }
    if(value_path == "ts-b")
    {
        ts_b.yfilter = yfilter;
    }
    if(value_path == "tpn-b")
    {
        tpn_b.yfilter = yfilter;
    }
    if(value_path == "pts-b")
    {
        pts_b.yfilter = yfilter;
    }
    if(value_path == "fwd-ref")
    {
        fwd_ref.yfilter = yfilter;
    }
    if(value_path == "xc-id")
    {
        xc_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name.yfilter = yfilter;
    }
    if(value_path == "fwd-ref-ifhandle")
    {
        fwd_ref_ifhandle.yfilter = yfilter;
    }
    if(value_path == "no-parent-slot")
    {
        no_parent_slot.yfilter = yfilter;
    }
    if(value_path == "xc-resp-code")
    {
        xc_resp_code.yfilter = yfilter;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "pmtimca")
    {
        pmtimca.yfilter = yfilter;
    }
    if(value_path == "pm-mode")
    {
        pm_mode.yfilter = yfilter;
    }
    if(value_path == "nv-optical-support")
    {
        nv_optical_support.yfilter = yfilter;
    }
    if(value_path == "gmpls-tti-mode")
    {
        gmpls_tti_mode.yfilter = yfilter;
    }
    if(value_path == "gmpls-tcm-id")
    {
        gmpls_tcm_id.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tti-mode" || name == "odu-fwd-ref" || name == "alarm" || name == "te-ctx-data" || name == "xc-add-ctx-data" || name == "xc-rem-ctx-data" || name == "odu-delay" || name == "odu-terminate-ether" || name == "ains-info" || name == "odu" || name == "odutcm" || name == "state" || name == "sf" || name == "sd" || name == "loopback-mode" || name == "derived-mode" || name == "inherit-sec-state" || name == "config-sec-state" || name == "gcc-mode" || name == "child-name" || name == "max-odu-child" || name == "od-uuser" || name == "resource-state" || name == "pt-type" || name == "flex-type" || name == "flex-bw" || name == "flex-tolerence" || name == "option" || name == "tpn-value" || name == "num-ts" || name == "ts-g" || name == "ts-b" || name == "tpn-b" || name == "pts-b" || name == "fwd-ref" || name == "xc-id" || name == "xconnect-name" || name == "fwd-ref-ifhandle" || name == "no-parent-slot" || name == "xc-resp-code" || name == "performance-monitoring" || name == "pmtimca" || name == "pm-mode" || name == "nv-optical-support" || name == "gmpls-tti-mode" || name == "gmpls-tcm-id")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Local::Local()
    :
    router_id{YType::uint32, "router-id"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "local"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Local::~Local()
{
}

bool Odu::Controllers::Controller::Info::Local::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| if_index.is_set;
}

bool Odu::Controllers::Controller::Info::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string Odu::Controllers::Controller::Info::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "if-index")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Remote::Remote()
    :
    router_id{YType::uint32, "router-id"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "remote"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Remote::~Remote()
{
}

bool Odu::Controllers::Controller::Info::Remote::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| if_index.is_set;
}

bool Odu::Controllers::Controller::Info::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string Odu::Controllers::Controller::Info::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "if-index")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TtiMode::TtiMode()
    :
    g709tti_sent_mode{YType::enumeration, "g709tti-sent-mode"},
    g709tti_exp_mode{YType::enumeration, "g709tti-exp-mode"},
    g709tti_rec_mode{YType::enumeration, "g709tti-rec-mode"}
        ,
    tx(std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Tx>())
    , exp(std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Exp>())
    , rec(std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Rec>())
{
    tx->parent = this;
    exp->parent = this;
    rec->parent = this;

    yang_name = "tti-mode"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TtiMode::~TtiMode()
{
}

bool Odu::Controllers::Controller::Info::TtiMode::has_data() const
{
    if (is_presence_container) return true;
    return g709tti_sent_mode.is_set
	|| g709tti_exp_mode.is_set
	|| g709tti_rec_mode.is_set
	|| (tx !=  nullptr && tx->has_data())
	|| (exp !=  nullptr && exp->has_data())
	|| (rec !=  nullptr && rec->has_data());
}

bool Odu::Controllers::Controller::Info::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g709tti_sent_mode.yfilter)
	|| ydk::is_set(g709tti_exp_mode.yfilter)
	|| ydk::is_set(g709tti_rec_mode.yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (exp !=  nullptr && exp->has_operation())
	|| (rec !=  nullptr && rec->has_operation());
}

std::string Odu::Controllers::Controller::Info::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g709tti_sent_mode.is_set || is_set(g709tti_sent_mode.yfilter)) leaf_name_data.push_back(g709tti_sent_mode.get_name_leafdata());
    if (g709tti_exp_mode.is_set || is_set(g709tti_exp_mode.yfilter)) leaf_name_data.push_back(g709tti_exp_mode.get_name_leafdata());
    if (g709tti_rec_mode.is_set || is_set(g709tti_rec_mode.yfilter)) leaf_name_data.push_back(g709tti_rec_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "rec")
    {
        if(rec == nullptr)
        {
            rec = std::make_shared<Odu::Controllers::Controller::Info::TtiMode::Rec>();
        }
        return rec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TtiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(exp != nullptr)
    {
        _children["exp"] = exp;
    }

    if(rec != nullptr)
    {
        _children["rec"] = rec;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "g709tti-sent-mode")
    {
        g709tti_sent_mode = value;
        g709tti_sent_mode.value_namespace = name_space;
        g709tti_sent_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709tti-exp-mode")
    {
        g709tti_exp_mode = value;
        g709tti_exp_mode.value_namespace = name_space;
        g709tti_exp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709tti-rec-mode")
    {
        g709tti_rec_mode = value;
        g709tti_rec_mode.value_namespace = name_space;
        g709tti_rec_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "g709tti-sent-mode")
    {
        g709tti_sent_mode.yfilter = yfilter;
    }
    if(value_path == "g709tti-exp-mode")
    {
        g709tti_exp_mode.yfilter = yfilter;
    }
    if(value_path == "g709tti-rec-mode")
    {
        g709tti_rec_mode.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "exp" || name == "rec" || name == "g709tti-sent-mode" || name == "g709tti-exp-mode" || name == "g709tti-rec-mode")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TtiMode::Tx::Tx()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "tx"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TtiMode::Tx::~Tx()
{
}

bool Odu::Controllers::Controller::Info::TtiMode::Tx::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::TtiMode::Tx::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::TtiMode::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TtiMode::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TtiMode::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TtiMode::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::TtiMode::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::TtiMode::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TtiMode::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TtiMode::Exp::Exp()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "exp"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TtiMode::Exp::~Exp()
{
}

bool Odu::Controllers::Controller::Info::TtiMode::Exp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::TtiMode::Exp::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::TtiMode::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TtiMode::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TtiMode::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TtiMode::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::TtiMode::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::TtiMode::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TtiMode::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TtiMode::Rec::Rec()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "rec"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TtiMode::Rec::~Rec()
{
}

bool Odu::Controllers::Controller::Info::TtiMode::Rec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::TtiMode::Rec::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::TtiMode::Rec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TtiMode::Rec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TtiMode::Rec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TtiMode::Rec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::TtiMode::Rec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::TtiMode::Rec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TtiMode::Rec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::OduFwdRef::OduFwdRef()
    :
    od_uuser{YType::enumeration, "od-uuser"},
    resource_state{YType::enumeration, "resource-state"}
{

    yang_name = "odu-fwd-ref"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::OduFwdRef::~OduFwdRef()
{
}

bool Odu::Controllers::Controller::Info::OduFwdRef::has_data() const
{
    if (is_presence_container) return true;
    return od_uuser.is_set
	|| resource_state.is_set;
}

bool Odu::Controllers::Controller::Info::OduFwdRef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(od_uuser.yfilter)
	|| ydk::is_set(resource_state.yfilter);
}

std::string Odu::Controllers::Controller::Info::OduFwdRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-fwd-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::OduFwdRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (od_uuser.is_set || is_set(od_uuser.yfilter)) leaf_name_data.push_back(od_uuser.get_name_leafdata());
    if (resource_state.is_set || is_set(resource_state.yfilter)) leaf_name_data.push_back(resource_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::OduFwdRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::OduFwdRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::OduFwdRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "od-uuser")
    {
        od_uuser = value;
        od_uuser.value_namespace = name_space;
        od_uuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-state")
    {
        resource_state = value;
        resource_state.value_namespace = name_space;
        resource_state.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::OduFwdRef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "od-uuser")
    {
        od_uuser.yfilter = yfilter;
    }
    if(value_path == "resource-state")
    {
        resource_state.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::OduFwdRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "od-uuser" || name == "resource-state")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Alarm()
    :
    oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Oci>())
    , ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Ais>())
    , lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Lck>())
    , bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Bdi>())
    , eoc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Eoc>())
    , ptim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Ptim>())
    , tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tim>())
    , iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Iae>())
    , biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Biae>())
    , sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::SfBer>())
    , sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::SdBer>())
    , csf(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Csf>())
    , tcm1_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Ais>())
    , tcm1_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc>())
    , tcm1_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Oci>())
    , tcm1_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Lck>())
    , tcm1_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Iae>())
    , tcm1_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Biae>())
    , tcm1_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi>())
    , tcm1_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Tim>())
    , tcm1_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer>())
    , tcm1_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer>())
    , tcm2_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Ais>())
    , tcm2_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc>())
    , tcm2_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Oci>())
    , tcm2_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Lck>())
    , tcm2_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Iae>())
    , tcm2_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Biae>())
    , tcm2_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi>())
    , tcm2_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Tim>())
    , tcm2_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer>())
    , tcm2_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer>())
    , tcm3_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Ais>())
    , tcm3_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc>())
    , tcm3_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Oci>())
    , tcm3_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Lck>())
    , tcm3_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Iae>())
    , tcm3_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Biae>())
    , tcm3_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi>())
    , tcm3_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Tim>())
    , tcm3_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer>())
    , tcm3_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer>())
    , tcm4_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Ais>())
    , tcm4_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc>())
    , tcm4_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Oci>())
    , tcm4_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Lck>())
    , tcm4_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Iae>())
    , tcm4_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Biae>())
    , tcm4_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi>())
    , tcm4_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Tim>())
    , tcm4_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer>())
    , tcm4_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer>())
    , tcm5_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Ais>())
    , tcm5_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc>())
    , tcm5_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Oci>())
    , tcm5_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Lck>())
    , tcm5_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Iae>())
    , tcm5_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Biae>())
    , tcm5_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi>())
    , tcm5_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Tim>())
    , tcm5_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer>())
    , tcm5_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer>())
    , tcm6_ais(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Ais>())
    , tcm6_ltc(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc>())
    , tcm6_oci(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Oci>())
    , tcm6_lck(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Lck>())
    , tcm6_iae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Iae>())
    , tcm6_biae(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Biae>())
    , tcm6_bdi(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi>())
    , tcm6_tim(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Tim>())
    , tcm6_sf_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer>())
    , tcm6_sd_ber(std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer>())
    , gfp_lfd(std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLfd>())
    , gfp_locs(std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLocs>())
    , gfp_loccs(std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLoccs>())
    , gfp_upm(std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpUpm>())
{
    oci->parent = this;
    ais->parent = this;
    lck->parent = this;
    bdi->parent = this;
    eoc->parent = this;
    ptim->parent = this;
    tim->parent = this;
    iae->parent = this;
    biae->parent = this;
    sf_ber->parent = this;
    sd_ber->parent = this;
    csf->parent = this;
    tcm1_ais->parent = this;
    tcm1_ltc->parent = this;
    tcm1_oci->parent = this;
    tcm1_lck->parent = this;
    tcm1_iae->parent = this;
    tcm1_biae->parent = this;
    tcm1_bdi->parent = this;
    tcm1_tim->parent = this;
    tcm1_sf_ber->parent = this;
    tcm1_sd_ber->parent = this;
    tcm2_ais->parent = this;
    tcm2_ltc->parent = this;
    tcm2_oci->parent = this;
    tcm2_lck->parent = this;
    tcm2_iae->parent = this;
    tcm2_biae->parent = this;
    tcm2_bdi->parent = this;
    tcm2_tim->parent = this;
    tcm2_sf_ber->parent = this;
    tcm2_sd_ber->parent = this;
    tcm3_ais->parent = this;
    tcm3_ltc->parent = this;
    tcm3_oci->parent = this;
    tcm3_lck->parent = this;
    tcm3_iae->parent = this;
    tcm3_biae->parent = this;
    tcm3_bdi->parent = this;
    tcm3_tim->parent = this;
    tcm3_sf_ber->parent = this;
    tcm3_sd_ber->parent = this;
    tcm4_ais->parent = this;
    tcm4_ltc->parent = this;
    tcm4_oci->parent = this;
    tcm4_lck->parent = this;
    tcm4_iae->parent = this;
    tcm4_biae->parent = this;
    tcm4_bdi->parent = this;
    tcm4_tim->parent = this;
    tcm4_sf_ber->parent = this;
    tcm4_sd_ber->parent = this;
    tcm5_ais->parent = this;
    tcm5_ltc->parent = this;
    tcm5_oci->parent = this;
    tcm5_lck->parent = this;
    tcm5_iae->parent = this;
    tcm5_biae->parent = this;
    tcm5_bdi->parent = this;
    tcm5_tim->parent = this;
    tcm5_sf_ber->parent = this;
    tcm5_sd_ber->parent = this;
    tcm6_ais->parent = this;
    tcm6_ltc->parent = this;
    tcm6_oci->parent = this;
    tcm6_lck->parent = this;
    tcm6_iae->parent = this;
    tcm6_biae->parent = this;
    tcm6_bdi->parent = this;
    tcm6_tim->parent = this;
    tcm6_sf_ber->parent = this;
    tcm6_sd_ber->parent = this;
    gfp_lfd->parent = this;
    gfp_locs->parent = this;
    gfp_loccs->parent = this;
    gfp_upm->parent = this;

    yang_name = "alarm"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::~Alarm()
{
}

bool Odu::Controllers::Controller::Info::Alarm::has_data() const
{
    if (is_presence_container) return true;
    return (oci !=  nullptr && oci->has_data())
	|| (ais !=  nullptr && ais->has_data())
	|| (lck !=  nullptr && lck->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (ptim !=  nullptr && ptim->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (iae !=  nullptr && iae->has_data())
	|| (biae !=  nullptr && biae->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (csf !=  nullptr && csf->has_data())
	|| (tcm1_ais !=  nullptr && tcm1_ais->has_data())
	|| (tcm1_ltc !=  nullptr && tcm1_ltc->has_data())
	|| (tcm1_oci !=  nullptr && tcm1_oci->has_data())
	|| (tcm1_lck !=  nullptr && tcm1_lck->has_data())
	|| (tcm1_iae !=  nullptr && tcm1_iae->has_data())
	|| (tcm1_biae !=  nullptr && tcm1_biae->has_data())
	|| (tcm1_bdi !=  nullptr && tcm1_bdi->has_data())
	|| (tcm1_tim !=  nullptr && tcm1_tim->has_data())
	|| (tcm1_sf_ber !=  nullptr && tcm1_sf_ber->has_data())
	|| (tcm1_sd_ber !=  nullptr && tcm1_sd_ber->has_data())
	|| (tcm2_ais !=  nullptr && tcm2_ais->has_data())
	|| (tcm2_ltc !=  nullptr && tcm2_ltc->has_data())
	|| (tcm2_oci !=  nullptr && tcm2_oci->has_data())
	|| (tcm2_lck !=  nullptr && tcm2_lck->has_data())
	|| (tcm2_iae !=  nullptr && tcm2_iae->has_data())
	|| (tcm2_biae !=  nullptr && tcm2_biae->has_data())
	|| (tcm2_bdi !=  nullptr && tcm2_bdi->has_data())
	|| (tcm2_tim !=  nullptr && tcm2_tim->has_data())
	|| (tcm2_sf_ber !=  nullptr && tcm2_sf_ber->has_data())
	|| (tcm2_sd_ber !=  nullptr && tcm2_sd_ber->has_data())
	|| (tcm3_ais !=  nullptr && tcm3_ais->has_data())
	|| (tcm3_ltc !=  nullptr && tcm3_ltc->has_data())
	|| (tcm3_oci !=  nullptr && tcm3_oci->has_data())
	|| (tcm3_lck !=  nullptr && tcm3_lck->has_data())
	|| (tcm3_iae !=  nullptr && tcm3_iae->has_data())
	|| (tcm3_biae !=  nullptr && tcm3_biae->has_data())
	|| (tcm3_bdi !=  nullptr && tcm3_bdi->has_data())
	|| (tcm3_tim !=  nullptr && tcm3_tim->has_data())
	|| (tcm3_sf_ber !=  nullptr && tcm3_sf_ber->has_data())
	|| (tcm3_sd_ber !=  nullptr && tcm3_sd_ber->has_data())
	|| (tcm4_ais !=  nullptr && tcm4_ais->has_data())
	|| (tcm4_ltc !=  nullptr && tcm4_ltc->has_data())
	|| (tcm4_oci !=  nullptr && tcm4_oci->has_data())
	|| (tcm4_lck !=  nullptr && tcm4_lck->has_data())
	|| (tcm4_iae !=  nullptr && tcm4_iae->has_data())
	|| (tcm4_biae !=  nullptr && tcm4_biae->has_data())
	|| (tcm4_bdi !=  nullptr && tcm4_bdi->has_data())
	|| (tcm4_tim !=  nullptr && tcm4_tim->has_data())
	|| (tcm4_sf_ber !=  nullptr && tcm4_sf_ber->has_data())
	|| (tcm4_sd_ber !=  nullptr && tcm4_sd_ber->has_data())
	|| (tcm5_ais !=  nullptr && tcm5_ais->has_data())
	|| (tcm5_ltc !=  nullptr && tcm5_ltc->has_data())
	|| (tcm5_oci !=  nullptr && tcm5_oci->has_data())
	|| (tcm5_lck !=  nullptr && tcm5_lck->has_data())
	|| (tcm5_iae !=  nullptr && tcm5_iae->has_data())
	|| (tcm5_biae !=  nullptr && tcm5_biae->has_data())
	|| (tcm5_bdi !=  nullptr && tcm5_bdi->has_data())
	|| (tcm5_tim !=  nullptr && tcm5_tim->has_data())
	|| (tcm5_sf_ber !=  nullptr && tcm5_sf_ber->has_data())
	|| (tcm5_sd_ber !=  nullptr && tcm5_sd_ber->has_data())
	|| (tcm6_ais !=  nullptr && tcm6_ais->has_data())
	|| (tcm6_ltc !=  nullptr && tcm6_ltc->has_data())
	|| (tcm6_oci !=  nullptr && tcm6_oci->has_data())
	|| (tcm6_lck !=  nullptr && tcm6_lck->has_data())
	|| (tcm6_iae !=  nullptr && tcm6_iae->has_data())
	|| (tcm6_biae !=  nullptr && tcm6_biae->has_data())
	|| (tcm6_bdi !=  nullptr && tcm6_bdi->has_data())
	|| (tcm6_tim !=  nullptr && tcm6_tim->has_data())
	|| (tcm6_sf_ber !=  nullptr && tcm6_sf_ber->has_data())
	|| (tcm6_sd_ber !=  nullptr && tcm6_sd_ber->has_data())
	|| (gfp_lfd !=  nullptr && gfp_lfd->has_data())
	|| (gfp_locs !=  nullptr && gfp_locs->has_data())
	|| (gfp_loccs !=  nullptr && gfp_loccs->has_data())
	|| (gfp_upm !=  nullptr && gfp_upm->has_data());
}

bool Odu::Controllers::Controller::Info::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| (oci !=  nullptr && oci->has_operation())
	|| (ais !=  nullptr && ais->has_operation())
	|| (lck !=  nullptr && lck->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (ptim !=  nullptr && ptim->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (iae !=  nullptr && iae->has_operation())
	|| (biae !=  nullptr && biae->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (csf !=  nullptr && csf->has_operation())
	|| (tcm1_ais !=  nullptr && tcm1_ais->has_operation())
	|| (tcm1_ltc !=  nullptr && tcm1_ltc->has_operation())
	|| (tcm1_oci !=  nullptr && tcm1_oci->has_operation())
	|| (tcm1_lck !=  nullptr && tcm1_lck->has_operation())
	|| (tcm1_iae !=  nullptr && tcm1_iae->has_operation())
	|| (tcm1_biae !=  nullptr && tcm1_biae->has_operation())
	|| (tcm1_bdi !=  nullptr && tcm1_bdi->has_operation())
	|| (tcm1_tim !=  nullptr && tcm1_tim->has_operation())
	|| (tcm1_sf_ber !=  nullptr && tcm1_sf_ber->has_operation())
	|| (tcm1_sd_ber !=  nullptr && tcm1_sd_ber->has_operation())
	|| (tcm2_ais !=  nullptr && tcm2_ais->has_operation())
	|| (tcm2_ltc !=  nullptr && tcm2_ltc->has_operation())
	|| (tcm2_oci !=  nullptr && tcm2_oci->has_operation())
	|| (tcm2_lck !=  nullptr && tcm2_lck->has_operation())
	|| (tcm2_iae !=  nullptr && tcm2_iae->has_operation())
	|| (tcm2_biae !=  nullptr && tcm2_biae->has_operation())
	|| (tcm2_bdi !=  nullptr && tcm2_bdi->has_operation())
	|| (tcm2_tim !=  nullptr && tcm2_tim->has_operation())
	|| (tcm2_sf_ber !=  nullptr && tcm2_sf_ber->has_operation())
	|| (tcm2_sd_ber !=  nullptr && tcm2_sd_ber->has_operation())
	|| (tcm3_ais !=  nullptr && tcm3_ais->has_operation())
	|| (tcm3_ltc !=  nullptr && tcm3_ltc->has_operation())
	|| (tcm3_oci !=  nullptr && tcm3_oci->has_operation())
	|| (tcm3_lck !=  nullptr && tcm3_lck->has_operation())
	|| (tcm3_iae !=  nullptr && tcm3_iae->has_operation())
	|| (tcm3_biae !=  nullptr && tcm3_biae->has_operation())
	|| (tcm3_bdi !=  nullptr && tcm3_bdi->has_operation())
	|| (tcm3_tim !=  nullptr && tcm3_tim->has_operation())
	|| (tcm3_sf_ber !=  nullptr && tcm3_sf_ber->has_operation())
	|| (tcm3_sd_ber !=  nullptr && tcm3_sd_ber->has_operation())
	|| (tcm4_ais !=  nullptr && tcm4_ais->has_operation())
	|| (tcm4_ltc !=  nullptr && tcm4_ltc->has_operation())
	|| (tcm4_oci !=  nullptr && tcm4_oci->has_operation())
	|| (tcm4_lck !=  nullptr && tcm4_lck->has_operation())
	|| (tcm4_iae !=  nullptr && tcm4_iae->has_operation())
	|| (tcm4_biae !=  nullptr && tcm4_biae->has_operation())
	|| (tcm4_bdi !=  nullptr && tcm4_bdi->has_operation())
	|| (tcm4_tim !=  nullptr && tcm4_tim->has_operation())
	|| (tcm4_sf_ber !=  nullptr && tcm4_sf_ber->has_operation())
	|| (tcm4_sd_ber !=  nullptr && tcm4_sd_ber->has_operation())
	|| (tcm5_ais !=  nullptr && tcm5_ais->has_operation())
	|| (tcm5_ltc !=  nullptr && tcm5_ltc->has_operation())
	|| (tcm5_oci !=  nullptr && tcm5_oci->has_operation())
	|| (tcm5_lck !=  nullptr && tcm5_lck->has_operation())
	|| (tcm5_iae !=  nullptr && tcm5_iae->has_operation())
	|| (tcm5_biae !=  nullptr && tcm5_biae->has_operation())
	|| (tcm5_bdi !=  nullptr && tcm5_bdi->has_operation())
	|| (tcm5_tim !=  nullptr && tcm5_tim->has_operation())
	|| (tcm5_sf_ber !=  nullptr && tcm5_sf_ber->has_operation())
	|| (tcm5_sd_ber !=  nullptr && tcm5_sd_ber->has_operation())
	|| (tcm6_ais !=  nullptr && tcm6_ais->has_operation())
	|| (tcm6_ltc !=  nullptr && tcm6_ltc->has_operation())
	|| (tcm6_oci !=  nullptr && tcm6_oci->has_operation())
	|| (tcm6_lck !=  nullptr && tcm6_lck->has_operation())
	|| (tcm6_iae !=  nullptr && tcm6_iae->has_operation())
	|| (tcm6_biae !=  nullptr && tcm6_biae->has_operation())
	|| (tcm6_bdi !=  nullptr && tcm6_bdi->has_operation())
	|| (tcm6_tim !=  nullptr && tcm6_tim->has_operation())
	|| (tcm6_sf_ber !=  nullptr && tcm6_sf_ber->has_operation())
	|| (tcm6_sd_ber !=  nullptr && tcm6_sd_ber->has_operation())
	|| (gfp_lfd !=  nullptr && gfp_lfd->has_operation())
	|| (gfp_locs !=  nullptr && gfp_locs->has_operation())
	|| (gfp_loccs !=  nullptr && gfp_loccs->has_operation())
	|| (gfp_upm !=  nullptr && gfp_upm->has_operation());
}

std::string Odu::Controllers::Controller::Info::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oci")
    {
        if(oci == nullptr)
        {
            oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Oci>();
        }
        return oci;
    }

    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "lck")
    {
        if(lck == nullptr)
        {
            lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Lck>();
        }
        return lck;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "ptim")
    {
        if(ptim == nullptr)
        {
            ptim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Ptim>();
        }
        return ptim;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "iae")
    {
        if(iae == nullptr)
        {
            iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Iae>();
        }
        return iae;
    }

    if(child_yang_name == "biae")
    {
        if(biae == nullptr)
        {
            biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Biae>();
        }
        return biae;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "csf")
    {
        if(csf == nullptr)
        {
            csf = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Csf>();
        }
        return csf;
    }

    if(child_yang_name == "tcm1-ais")
    {
        if(tcm1_ais == nullptr)
        {
            tcm1_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Ais>();
        }
        return tcm1_ais;
    }

    if(child_yang_name == "tcm1-ltc")
    {
        if(tcm1_ltc == nullptr)
        {
            tcm1_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc>();
        }
        return tcm1_ltc;
    }

    if(child_yang_name == "tcm1-oci")
    {
        if(tcm1_oci == nullptr)
        {
            tcm1_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Oci>();
        }
        return tcm1_oci;
    }

    if(child_yang_name == "tcm1-lck")
    {
        if(tcm1_lck == nullptr)
        {
            tcm1_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Lck>();
        }
        return tcm1_lck;
    }

    if(child_yang_name == "tcm1-iae")
    {
        if(tcm1_iae == nullptr)
        {
            tcm1_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Iae>();
        }
        return tcm1_iae;
    }

    if(child_yang_name == "tcm1-biae")
    {
        if(tcm1_biae == nullptr)
        {
            tcm1_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Biae>();
        }
        return tcm1_biae;
    }

    if(child_yang_name == "tcm1-bdi")
    {
        if(tcm1_bdi == nullptr)
        {
            tcm1_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi>();
        }
        return tcm1_bdi;
    }

    if(child_yang_name == "tcm1-tim")
    {
        if(tcm1_tim == nullptr)
        {
            tcm1_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1Tim>();
        }
        return tcm1_tim;
    }

    if(child_yang_name == "tcm1-sf-ber")
    {
        if(tcm1_sf_ber == nullptr)
        {
            tcm1_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer>();
        }
        return tcm1_sf_ber;
    }

    if(child_yang_name == "tcm1-sd-ber")
    {
        if(tcm1_sd_ber == nullptr)
        {
            tcm1_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer>();
        }
        return tcm1_sd_ber;
    }

    if(child_yang_name == "tcm2-ais")
    {
        if(tcm2_ais == nullptr)
        {
            tcm2_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Ais>();
        }
        return tcm2_ais;
    }

    if(child_yang_name == "tcm2-ltc")
    {
        if(tcm2_ltc == nullptr)
        {
            tcm2_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc>();
        }
        return tcm2_ltc;
    }

    if(child_yang_name == "tcm2-oci")
    {
        if(tcm2_oci == nullptr)
        {
            tcm2_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Oci>();
        }
        return tcm2_oci;
    }

    if(child_yang_name == "tcm2-lck")
    {
        if(tcm2_lck == nullptr)
        {
            tcm2_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Lck>();
        }
        return tcm2_lck;
    }

    if(child_yang_name == "tcm2-iae")
    {
        if(tcm2_iae == nullptr)
        {
            tcm2_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Iae>();
        }
        return tcm2_iae;
    }

    if(child_yang_name == "tcm2-biae")
    {
        if(tcm2_biae == nullptr)
        {
            tcm2_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Biae>();
        }
        return tcm2_biae;
    }

    if(child_yang_name == "tcm2-bdi")
    {
        if(tcm2_bdi == nullptr)
        {
            tcm2_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi>();
        }
        return tcm2_bdi;
    }

    if(child_yang_name == "tcm2-tim")
    {
        if(tcm2_tim == nullptr)
        {
            tcm2_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2Tim>();
        }
        return tcm2_tim;
    }

    if(child_yang_name == "tcm2-sf-ber")
    {
        if(tcm2_sf_ber == nullptr)
        {
            tcm2_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer>();
        }
        return tcm2_sf_ber;
    }

    if(child_yang_name == "tcm2-sd-ber")
    {
        if(tcm2_sd_ber == nullptr)
        {
            tcm2_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer>();
        }
        return tcm2_sd_ber;
    }

    if(child_yang_name == "tcm3-ais")
    {
        if(tcm3_ais == nullptr)
        {
            tcm3_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Ais>();
        }
        return tcm3_ais;
    }

    if(child_yang_name == "tcm3-ltc")
    {
        if(tcm3_ltc == nullptr)
        {
            tcm3_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc>();
        }
        return tcm3_ltc;
    }

    if(child_yang_name == "tcm3-oci")
    {
        if(tcm3_oci == nullptr)
        {
            tcm3_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Oci>();
        }
        return tcm3_oci;
    }

    if(child_yang_name == "tcm3-lck")
    {
        if(tcm3_lck == nullptr)
        {
            tcm3_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Lck>();
        }
        return tcm3_lck;
    }

    if(child_yang_name == "tcm3-iae")
    {
        if(tcm3_iae == nullptr)
        {
            tcm3_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Iae>();
        }
        return tcm3_iae;
    }

    if(child_yang_name == "tcm3-biae")
    {
        if(tcm3_biae == nullptr)
        {
            tcm3_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Biae>();
        }
        return tcm3_biae;
    }

    if(child_yang_name == "tcm3-bdi")
    {
        if(tcm3_bdi == nullptr)
        {
            tcm3_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi>();
        }
        return tcm3_bdi;
    }

    if(child_yang_name == "tcm3-tim")
    {
        if(tcm3_tim == nullptr)
        {
            tcm3_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3Tim>();
        }
        return tcm3_tim;
    }

    if(child_yang_name == "tcm3-sf-ber")
    {
        if(tcm3_sf_ber == nullptr)
        {
            tcm3_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer>();
        }
        return tcm3_sf_ber;
    }

    if(child_yang_name == "tcm3-sd-ber")
    {
        if(tcm3_sd_ber == nullptr)
        {
            tcm3_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer>();
        }
        return tcm3_sd_ber;
    }

    if(child_yang_name == "tcm4-ais")
    {
        if(tcm4_ais == nullptr)
        {
            tcm4_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Ais>();
        }
        return tcm4_ais;
    }

    if(child_yang_name == "tcm4-ltc")
    {
        if(tcm4_ltc == nullptr)
        {
            tcm4_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc>();
        }
        return tcm4_ltc;
    }

    if(child_yang_name == "tcm4-oci")
    {
        if(tcm4_oci == nullptr)
        {
            tcm4_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Oci>();
        }
        return tcm4_oci;
    }

    if(child_yang_name == "tcm4-lck")
    {
        if(tcm4_lck == nullptr)
        {
            tcm4_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Lck>();
        }
        return tcm4_lck;
    }

    if(child_yang_name == "tcm4-iae")
    {
        if(tcm4_iae == nullptr)
        {
            tcm4_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Iae>();
        }
        return tcm4_iae;
    }

    if(child_yang_name == "tcm4-biae")
    {
        if(tcm4_biae == nullptr)
        {
            tcm4_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Biae>();
        }
        return tcm4_biae;
    }

    if(child_yang_name == "tcm4-bdi")
    {
        if(tcm4_bdi == nullptr)
        {
            tcm4_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi>();
        }
        return tcm4_bdi;
    }

    if(child_yang_name == "tcm4-tim")
    {
        if(tcm4_tim == nullptr)
        {
            tcm4_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4Tim>();
        }
        return tcm4_tim;
    }

    if(child_yang_name == "tcm4-sf-ber")
    {
        if(tcm4_sf_ber == nullptr)
        {
            tcm4_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer>();
        }
        return tcm4_sf_ber;
    }

    if(child_yang_name == "tcm4-sd-ber")
    {
        if(tcm4_sd_ber == nullptr)
        {
            tcm4_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer>();
        }
        return tcm4_sd_ber;
    }

    if(child_yang_name == "tcm5-ais")
    {
        if(tcm5_ais == nullptr)
        {
            tcm5_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Ais>();
        }
        return tcm5_ais;
    }

    if(child_yang_name == "tcm5-ltc")
    {
        if(tcm5_ltc == nullptr)
        {
            tcm5_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc>();
        }
        return tcm5_ltc;
    }

    if(child_yang_name == "tcm5-oci")
    {
        if(tcm5_oci == nullptr)
        {
            tcm5_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Oci>();
        }
        return tcm5_oci;
    }

    if(child_yang_name == "tcm5-lck")
    {
        if(tcm5_lck == nullptr)
        {
            tcm5_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Lck>();
        }
        return tcm5_lck;
    }

    if(child_yang_name == "tcm5-iae")
    {
        if(tcm5_iae == nullptr)
        {
            tcm5_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Iae>();
        }
        return tcm5_iae;
    }

    if(child_yang_name == "tcm5-biae")
    {
        if(tcm5_biae == nullptr)
        {
            tcm5_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Biae>();
        }
        return tcm5_biae;
    }

    if(child_yang_name == "tcm5-bdi")
    {
        if(tcm5_bdi == nullptr)
        {
            tcm5_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi>();
        }
        return tcm5_bdi;
    }

    if(child_yang_name == "tcm5-tim")
    {
        if(tcm5_tim == nullptr)
        {
            tcm5_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5Tim>();
        }
        return tcm5_tim;
    }

    if(child_yang_name == "tcm5-sf-ber")
    {
        if(tcm5_sf_ber == nullptr)
        {
            tcm5_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer>();
        }
        return tcm5_sf_ber;
    }

    if(child_yang_name == "tcm5-sd-ber")
    {
        if(tcm5_sd_ber == nullptr)
        {
            tcm5_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer>();
        }
        return tcm5_sd_ber;
    }

    if(child_yang_name == "tcm6-ais")
    {
        if(tcm6_ais == nullptr)
        {
            tcm6_ais = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Ais>();
        }
        return tcm6_ais;
    }

    if(child_yang_name == "tcm6-ltc")
    {
        if(tcm6_ltc == nullptr)
        {
            tcm6_ltc = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc>();
        }
        return tcm6_ltc;
    }

    if(child_yang_name == "tcm6-oci")
    {
        if(tcm6_oci == nullptr)
        {
            tcm6_oci = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Oci>();
        }
        return tcm6_oci;
    }

    if(child_yang_name == "tcm6-lck")
    {
        if(tcm6_lck == nullptr)
        {
            tcm6_lck = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Lck>();
        }
        return tcm6_lck;
    }

    if(child_yang_name == "tcm6-iae")
    {
        if(tcm6_iae == nullptr)
        {
            tcm6_iae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Iae>();
        }
        return tcm6_iae;
    }

    if(child_yang_name == "tcm6-biae")
    {
        if(tcm6_biae == nullptr)
        {
            tcm6_biae = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Biae>();
        }
        return tcm6_biae;
    }

    if(child_yang_name == "tcm6-bdi")
    {
        if(tcm6_bdi == nullptr)
        {
            tcm6_bdi = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi>();
        }
        return tcm6_bdi;
    }

    if(child_yang_name == "tcm6-tim")
    {
        if(tcm6_tim == nullptr)
        {
            tcm6_tim = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6Tim>();
        }
        return tcm6_tim;
    }

    if(child_yang_name == "tcm6-sf-ber")
    {
        if(tcm6_sf_ber == nullptr)
        {
            tcm6_sf_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer>();
        }
        return tcm6_sf_ber;
    }

    if(child_yang_name == "tcm6-sd-ber")
    {
        if(tcm6_sd_ber == nullptr)
        {
            tcm6_sd_ber = std::make_shared<Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer>();
        }
        return tcm6_sd_ber;
    }

    if(child_yang_name == "gfp-lfd")
    {
        if(gfp_lfd == nullptr)
        {
            gfp_lfd = std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLfd>();
        }
        return gfp_lfd;
    }

    if(child_yang_name == "gfp-locs")
    {
        if(gfp_locs == nullptr)
        {
            gfp_locs = std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLocs>();
        }
        return gfp_locs;
    }

    if(child_yang_name == "gfp-loccs")
    {
        if(gfp_loccs == nullptr)
        {
            gfp_loccs = std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpLoccs>();
        }
        return gfp_loccs;
    }

    if(child_yang_name == "gfp-upm")
    {
        if(gfp_upm == nullptr)
        {
            gfp_upm = std::make_shared<Odu::Controllers::Controller::Info::Alarm::GfpUpm>();
        }
        return gfp_upm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oci != nullptr)
    {
        _children["oci"] = oci;
    }

    if(ais != nullptr)
    {
        _children["ais"] = ais;
    }

    if(lck != nullptr)
    {
        _children["lck"] = lck;
    }

    if(bdi != nullptr)
    {
        _children["bdi"] = bdi;
    }

    if(eoc != nullptr)
    {
        _children["eoc"] = eoc;
    }

    if(ptim != nullptr)
    {
        _children["ptim"] = ptim;
    }

    if(tim != nullptr)
    {
        _children["tim"] = tim;
    }

    if(iae != nullptr)
    {
        _children["iae"] = iae;
    }

    if(biae != nullptr)
    {
        _children["biae"] = biae;
    }

    if(sf_ber != nullptr)
    {
        _children["sf-ber"] = sf_ber;
    }

    if(sd_ber != nullptr)
    {
        _children["sd-ber"] = sd_ber;
    }

    if(csf != nullptr)
    {
        _children["csf"] = csf;
    }

    if(tcm1_ais != nullptr)
    {
        _children["tcm1-ais"] = tcm1_ais;
    }

    if(tcm1_ltc != nullptr)
    {
        _children["tcm1-ltc"] = tcm1_ltc;
    }

    if(tcm1_oci != nullptr)
    {
        _children["tcm1-oci"] = tcm1_oci;
    }

    if(tcm1_lck != nullptr)
    {
        _children["tcm1-lck"] = tcm1_lck;
    }

    if(tcm1_iae != nullptr)
    {
        _children["tcm1-iae"] = tcm1_iae;
    }

    if(tcm1_biae != nullptr)
    {
        _children["tcm1-biae"] = tcm1_biae;
    }

    if(tcm1_bdi != nullptr)
    {
        _children["tcm1-bdi"] = tcm1_bdi;
    }

    if(tcm1_tim != nullptr)
    {
        _children["tcm1-tim"] = tcm1_tim;
    }

    if(tcm1_sf_ber != nullptr)
    {
        _children["tcm1-sf-ber"] = tcm1_sf_ber;
    }

    if(tcm1_sd_ber != nullptr)
    {
        _children["tcm1-sd-ber"] = tcm1_sd_ber;
    }

    if(tcm2_ais != nullptr)
    {
        _children["tcm2-ais"] = tcm2_ais;
    }

    if(tcm2_ltc != nullptr)
    {
        _children["tcm2-ltc"] = tcm2_ltc;
    }

    if(tcm2_oci != nullptr)
    {
        _children["tcm2-oci"] = tcm2_oci;
    }

    if(tcm2_lck != nullptr)
    {
        _children["tcm2-lck"] = tcm2_lck;
    }

    if(tcm2_iae != nullptr)
    {
        _children["tcm2-iae"] = tcm2_iae;
    }

    if(tcm2_biae != nullptr)
    {
        _children["tcm2-biae"] = tcm2_biae;
    }

    if(tcm2_bdi != nullptr)
    {
        _children["tcm2-bdi"] = tcm2_bdi;
    }

    if(tcm2_tim != nullptr)
    {
        _children["tcm2-tim"] = tcm2_tim;
    }

    if(tcm2_sf_ber != nullptr)
    {
        _children["tcm2-sf-ber"] = tcm2_sf_ber;
    }

    if(tcm2_sd_ber != nullptr)
    {
        _children["tcm2-sd-ber"] = tcm2_sd_ber;
    }

    if(tcm3_ais != nullptr)
    {
        _children["tcm3-ais"] = tcm3_ais;
    }

    if(tcm3_ltc != nullptr)
    {
        _children["tcm3-ltc"] = tcm3_ltc;
    }

    if(tcm3_oci != nullptr)
    {
        _children["tcm3-oci"] = tcm3_oci;
    }

    if(tcm3_lck != nullptr)
    {
        _children["tcm3-lck"] = tcm3_lck;
    }

    if(tcm3_iae != nullptr)
    {
        _children["tcm3-iae"] = tcm3_iae;
    }

    if(tcm3_biae != nullptr)
    {
        _children["tcm3-biae"] = tcm3_biae;
    }

    if(tcm3_bdi != nullptr)
    {
        _children["tcm3-bdi"] = tcm3_bdi;
    }

    if(tcm3_tim != nullptr)
    {
        _children["tcm3-tim"] = tcm3_tim;
    }

    if(tcm3_sf_ber != nullptr)
    {
        _children["tcm3-sf-ber"] = tcm3_sf_ber;
    }

    if(tcm3_sd_ber != nullptr)
    {
        _children["tcm3-sd-ber"] = tcm3_sd_ber;
    }

    if(tcm4_ais != nullptr)
    {
        _children["tcm4-ais"] = tcm4_ais;
    }

    if(tcm4_ltc != nullptr)
    {
        _children["tcm4-ltc"] = tcm4_ltc;
    }

    if(tcm4_oci != nullptr)
    {
        _children["tcm4-oci"] = tcm4_oci;
    }

    if(tcm4_lck != nullptr)
    {
        _children["tcm4-lck"] = tcm4_lck;
    }

    if(tcm4_iae != nullptr)
    {
        _children["tcm4-iae"] = tcm4_iae;
    }

    if(tcm4_biae != nullptr)
    {
        _children["tcm4-biae"] = tcm4_biae;
    }

    if(tcm4_bdi != nullptr)
    {
        _children["tcm4-bdi"] = tcm4_bdi;
    }

    if(tcm4_tim != nullptr)
    {
        _children["tcm4-tim"] = tcm4_tim;
    }

    if(tcm4_sf_ber != nullptr)
    {
        _children["tcm4-sf-ber"] = tcm4_sf_ber;
    }

    if(tcm4_sd_ber != nullptr)
    {
        _children["tcm4-sd-ber"] = tcm4_sd_ber;
    }

    if(tcm5_ais != nullptr)
    {
        _children["tcm5-ais"] = tcm5_ais;
    }

    if(tcm5_ltc != nullptr)
    {
        _children["tcm5-ltc"] = tcm5_ltc;
    }

    if(tcm5_oci != nullptr)
    {
        _children["tcm5-oci"] = tcm5_oci;
    }

    if(tcm5_lck != nullptr)
    {
        _children["tcm5-lck"] = tcm5_lck;
    }

    if(tcm5_iae != nullptr)
    {
        _children["tcm5-iae"] = tcm5_iae;
    }

    if(tcm5_biae != nullptr)
    {
        _children["tcm5-biae"] = tcm5_biae;
    }

    if(tcm5_bdi != nullptr)
    {
        _children["tcm5-bdi"] = tcm5_bdi;
    }

    if(tcm5_tim != nullptr)
    {
        _children["tcm5-tim"] = tcm5_tim;
    }

    if(tcm5_sf_ber != nullptr)
    {
        _children["tcm5-sf-ber"] = tcm5_sf_ber;
    }

    if(tcm5_sd_ber != nullptr)
    {
        _children["tcm5-sd-ber"] = tcm5_sd_ber;
    }

    if(tcm6_ais != nullptr)
    {
        _children["tcm6-ais"] = tcm6_ais;
    }

    if(tcm6_ltc != nullptr)
    {
        _children["tcm6-ltc"] = tcm6_ltc;
    }

    if(tcm6_oci != nullptr)
    {
        _children["tcm6-oci"] = tcm6_oci;
    }

    if(tcm6_lck != nullptr)
    {
        _children["tcm6-lck"] = tcm6_lck;
    }

    if(tcm6_iae != nullptr)
    {
        _children["tcm6-iae"] = tcm6_iae;
    }

    if(tcm6_biae != nullptr)
    {
        _children["tcm6-biae"] = tcm6_biae;
    }

    if(tcm6_bdi != nullptr)
    {
        _children["tcm6-bdi"] = tcm6_bdi;
    }

    if(tcm6_tim != nullptr)
    {
        _children["tcm6-tim"] = tcm6_tim;
    }

    if(tcm6_sf_ber != nullptr)
    {
        _children["tcm6-sf-ber"] = tcm6_sf_ber;
    }

    if(tcm6_sd_ber != nullptr)
    {
        _children["tcm6-sd-ber"] = tcm6_sd_ber;
    }

    if(gfp_lfd != nullptr)
    {
        _children["gfp-lfd"] = gfp_lfd;
    }

    if(gfp_locs != nullptr)
    {
        _children["gfp-locs"] = gfp_locs;
    }

    if(gfp_loccs != nullptr)
    {
        _children["gfp-loccs"] = gfp_loccs;
    }

    if(gfp_upm != nullptr)
    {
        _children["gfp-upm"] = gfp_upm;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Odu::Controllers::Controller::Info::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Odu::Controllers::Controller::Info::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oci" || name == "ais" || name == "lck" || name == "bdi" || name == "eoc" || name == "ptim" || name == "tim" || name == "iae" || name == "biae" || name == "sf-ber" || name == "sd-ber" || name == "csf" || name == "tcm1-ais" || name == "tcm1-ltc" || name == "tcm1-oci" || name == "tcm1-lck" || name == "tcm1-iae" || name == "tcm1-biae" || name == "tcm1-bdi" || name == "tcm1-tim" || name == "tcm1-sf-ber" || name == "tcm1-sd-ber" || name == "tcm2-ais" || name == "tcm2-ltc" || name == "tcm2-oci" || name == "tcm2-lck" || name == "tcm2-iae" || name == "tcm2-biae" || name == "tcm2-bdi" || name == "tcm2-tim" || name == "tcm2-sf-ber" || name == "tcm2-sd-ber" || name == "tcm3-ais" || name == "tcm3-ltc" || name == "tcm3-oci" || name == "tcm3-lck" || name == "tcm3-iae" || name == "tcm3-biae" || name == "tcm3-bdi" || name == "tcm3-tim" || name == "tcm3-sf-ber" || name == "tcm3-sd-ber" || name == "tcm4-ais" || name == "tcm4-ltc" || name == "tcm4-oci" || name == "tcm4-lck" || name == "tcm4-iae" || name == "tcm4-biae" || name == "tcm4-bdi" || name == "tcm4-tim" || name == "tcm4-sf-ber" || name == "tcm4-sd-ber" || name == "tcm5-ais" || name == "tcm5-ltc" || name == "tcm5-oci" || name == "tcm5-lck" || name == "tcm5-iae" || name == "tcm5-biae" || name == "tcm5-bdi" || name == "tcm5-tim" || name == "tcm5-sf-ber" || name == "tcm5-sd-ber" || name == "tcm6-ais" || name == "tcm6-ltc" || name == "tcm6-oci" || name == "tcm6-lck" || name == "tcm6-iae" || name == "tcm6-biae" || name == "tcm6-bdi" || name == "tcm6-tim" || name == "tcm6-sf-ber" || name == "tcm6-sd-ber" || name == "gfp-lfd" || name == "gfp-locs" || name == "gfp-loccs" || name == "gfp-upm")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Oci::Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Oci::~Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Ais::Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Ais::~Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Lck::Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Lck::~Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Bdi::Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Bdi::~Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Eoc::Eoc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "eoc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Eoc::~Eoc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Eoc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Eoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Eoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Eoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Eoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Eoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Ptim::Ptim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "ptim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Ptim::~Ptim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Ptim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Ptim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Ptim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Ptim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Ptim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Ptim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Ptim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Ptim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Ptim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tim::Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tim::~Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Iae::Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Iae::~Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Biae::Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Biae::~Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::SfBer::SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::SfBer::~SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::SdBer::SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::SdBer::~SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Csf::Csf()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "csf"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Csf::~Csf()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Csf::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Csf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Csf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Csf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Csf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Csf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Csf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Csf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Csf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::Tcm1Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::~Tcm1Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::Tcm1Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::~Tcm1Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::Tcm1Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::~Tcm1Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::Tcm1Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::~Tcm1Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::Tcm1Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::~Tcm1Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::Tcm1Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::~Tcm1Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::Tcm1Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::~Tcm1Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::Tcm1Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::~Tcm1Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::Tcm1SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::~Tcm1SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::Tcm1SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm1-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::~Tcm1SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm1-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::Tcm2Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::~Tcm2Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::Tcm2Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::~Tcm2Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::Tcm2Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::~Tcm2Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::Tcm2Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::~Tcm2Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::Tcm2Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::~Tcm2Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::Tcm2Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::~Tcm2Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::Tcm2Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::~Tcm2Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::Tcm2Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::~Tcm2Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::Tcm2SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::~Tcm2SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::Tcm2SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm2-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::~Tcm2SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm2-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::Tcm3Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::~Tcm3Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::Tcm3Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::~Tcm3Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::Tcm3Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::~Tcm3Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::Tcm3Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::~Tcm3Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::Tcm3Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::~Tcm3Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::Tcm3Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::~Tcm3Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::Tcm3Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::~Tcm3Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::Tcm3Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::~Tcm3Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::Tcm3SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::~Tcm3SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::Tcm3SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm3-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::~Tcm3SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm3-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::Tcm4Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::~Tcm4Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::Tcm4Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::~Tcm4Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::Tcm4Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::~Tcm4Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::Tcm4Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::~Tcm4Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::Tcm4Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::~Tcm4Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::Tcm4Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::~Tcm4Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::Tcm4Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::~Tcm4Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::Tcm4Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::~Tcm4Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::Tcm4SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::~Tcm4SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::Tcm4SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm4-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::~Tcm4SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm4-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::Tcm5Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::~Tcm5Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::Tcm5Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::~Tcm5Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::Tcm5Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::~Tcm5Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::Tcm5Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::~Tcm5Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::Tcm5Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::~Tcm5Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::Tcm5Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::~Tcm5Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::Tcm5Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::~Tcm5Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::Tcm5Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::~Tcm5Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::Tcm5SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::~Tcm5SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::Tcm5SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm5-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::~Tcm5SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm5-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::Tcm6Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-ais"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::~Tcm6Ais()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::Tcm6Ltc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-ltc"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::~Tcm6Ltc()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-ltc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::Tcm6Oci()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-oci"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::~Tcm6Oci()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::Tcm6Lck()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-lck"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::~Tcm6Lck()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::Tcm6Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-iae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::~Tcm6Iae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::Tcm6Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-biae"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::~Tcm6Biae()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::Tcm6Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-bdi"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::~Tcm6Bdi()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::Tcm6Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-tim"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::~Tcm6Tim()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::Tcm6SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-sf-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::~Tcm6SfBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::Tcm6SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tcm6-sd-ber"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::~Tcm6SdBer()
{
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcm6-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::GfpLfd::GfpLfd()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "gfp-lfd"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::GfpLfd::~GfpLfd()
{
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLfd::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::GfpLfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gfp-lfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::GfpLfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::GfpLfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::GfpLfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::GfpLfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::GfpLfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::GfpLocs::GfpLocs()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "gfp-locs"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::GfpLocs::~GfpLocs()
{
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLocs::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLocs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::GfpLocs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gfp-locs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::GfpLocs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::GfpLocs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::GfpLocs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::GfpLocs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::GfpLocs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLocs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::GfpLoccs::GfpLoccs()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "gfp-loccs"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::GfpLoccs::~GfpLoccs()
{
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLoccs::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLoccs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::GfpLoccs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gfp-loccs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::GfpLoccs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::GfpLoccs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::GfpLoccs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::GfpLoccs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::GfpLoccs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::GfpLoccs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Alarm::GfpUpm::GfpUpm()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "gfp-upm"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Alarm::GfpUpm::~GfpUpm()
{
}

bool Odu::Controllers::Controller::Info::Alarm::GfpUpm::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Odu::Controllers::Controller::Info::Alarm::GfpUpm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Odu::Controllers::Controller::Info::Alarm::GfpUpm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gfp-upm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Alarm::GfpUpm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Alarm::GfpUpm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Alarm::GfpUpm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Alarm::GfpUpm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Alarm::GfpUpm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Alarm::GfpUpm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TeCtxData::TeCtxData()
    :
    gmpls_req_time{YType::uint32, "gmpls-req-time"},
    ctxt_type{YType::enumeration, "ctxt-type"},
    rm_type{YType::enumeration, "rm-type"}
        ,
    te_tunnel_info(std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo>())
{
    te_tunnel_info->parent = this;

    yang_name = "te-ctx-data"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TeCtxData::~TeCtxData()
{
}

bool Odu::Controllers::Controller::Info::TeCtxData::has_data() const
{
    if (is_presence_container) return true;
    return gmpls_req_time.is_set
	|| ctxt_type.is_set
	|| rm_type.is_set
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_data());
}

bool Odu::Controllers::Controller::Info::TeCtxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gmpls_req_time.yfilter)
	|| ydk::is_set(ctxt_type.yfilter)
	|| ydk::is_set(rm_type.yfilter)
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_operation());
}

std::string Odu::Controllers::Controller::Info::TeCtxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-ctx-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TeCtxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gmpls_req_time.is_set || is_set(gmpls_req_time.yfilter)) leaf_name_data.push_back(gmpls_req_time.get_name_leafdata());
    if (ctxt_type.is_set || is_set(ctxt_type.yfilter)) leaf_name_data.push_back(ctxt_type.get_name_leafdata());
    if (rm_type.is_set || is_set(rm_type.yfilter)) leaf_name_data.push_back(rm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TeCtxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-tunnel-info")
    {
        if(te_tunnel_info == nullptr)
        {
            te_tunnel_info = std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo>();
        }
        return te_tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TeCtxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_tunnel_info != nullptr)
    {
        _children["te-tunnel-info"] = te_tunnel_info;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::TeCtxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time = value;
        gmpls_req_time.value_namespace = name_space;
        gmpls_req_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type = value;
        ctxt_type.value_namespace = name_space;
        ctxt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rm-type")
    {
        rm_type = value;
        rm_type.value_namespace = name_space;
        rm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::TeCtxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time.yfilter = yfilter;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type.yfilter = yfilter;
    }
    if(value_path == "rm-type")
    {
        rm_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TeCtxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-tunnel-info" || name == "gmpls-req-time" || name == "ctxt-type" || name == "rm-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::TeTunnelInfo()
    :
    info_type{YType::enumeration, "info-type"},
    tunnel_id{YType::uint32, "tunnel-id"}
        ,
    lb_ctxt(std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt>())
    , passive_match(std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch>())
{
    lb_ctxt->parent = this;
    passive_match->parent = this;

    yang_name = "te-tunnel-info"; yang_parent_name = "te-ctx-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::~TeTunnelInfo()
{
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    return info_type.is_set
	|| tunnel_id.is_set
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_data())
	|| (passive_match !=  nullptr && passive_match->has_data());
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(info_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_operation())
	|| (passive_match !=  nullptr && passive_match->has_operation());
}

std::string Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (info_type.is_set || is_set(info_type.yfilter)) leaf_name_data.push_back(info_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lb-ctxt")
    {
        if(lb_ctxt == nullptr)
        {
            lb_ctxt = std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt>();
        }
        return lb_ctxt;
    }

    if(child_yang_name == "passive-match")
    {
        if(passive_match == nullptr)
        {
            passive_match = std::make_shared<Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch>();
        }
        return passive_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lb_ctxt != nullptr)
    {
        _children["lb-ctxt"] = lb_ctxt;
    }

    if(passive_match != nullptr)
    {
        _children["passive-match"] = passive_match;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "info-type")
    {
        info_type = value;
        info_type.value_namespace = name_space;
        info_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "info-type")
    {
        info_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lb-ctxt" || name == "passive-match" || name == "info-type" || name == "tunnel-id")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::LbCtxt()
    :
    s2l_fec_sub_group_id{YType::uint16, "s2l-fec-sub-group-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    fec_source{YType::uint32, "fec-source"},
    fec_dest{YType::uint32, "fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    sub_group_origin_ator{YType::uint32, "sub-group-origin-ator"},
    fec_c_type{YType::enumeration, "fec-c-type"}
{

    yang_name = "lb-ctxt"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::~LbCtxt()
{
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_sub_group_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| ext_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| sub_group_origin_ator.is_set
	|| fec_c_type.is_set;
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_sub_group_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(sub_group_origin_ator.yfilter)
	|| ydk::is_set(fec_c_type.yfilter);
}

std::string Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lb-ctxt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_sub_group_id.is_set || is_set(s2l_fec_sub_group_id.yfilter)) leaf_name_data.push_back(s2l_fec_sub_group_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_dest.is_set || is_set(fec_dest.yfilter)) leaf_name_data.push_back(fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (sub_group_origin_ator.is_set || is_set(sub_group_origin_ator.yfilter)) leaf_name_data.push_back(sub_group_origin_ator.get_name_leafdata());
    if (fec_c_type.is_set || is_set(fec_c_type.yfilter)) leaf_name_data.push_back(fec_c_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id = value;
        s2l_fec_sub_group_id.value_namespace = name_space;
        s2l_fec_sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-dest")
    {
        fec_dest = value;
        fec_dest.value_namespace = name_space;
        fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator = value;
        sub_group_origin_ator.value_namespace = name_space;
        sub_group_origin_ator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type = value;
        fec_c_type.value_namespace = name_space;
        fec_c_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-dest")
    {
        fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator.yfilter = yfilter;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-sub-group-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "ext-tunnel-id" || name == "fec-source" || name == "fec-dest" || name == "s2l-fec-p2mp-id" || name == "sub-group-origin-ator" || name == "fec-c-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::PassiveMatch()
    :
    src_tid{YType::uint16, "src-tid"},
    src_rid{YType::uint32, "src-rid"}
{

    yang_name = "passive-match"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::~PassiveMatch()
{
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::has_data() const
{
    if (is_presence_container) return true;
    return src_tid.is_set
	|| src_rid.is_set;
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_tid.yfilter)
	|| ydk::is_set(src_rid.yfilter);
}

std::string Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_tid.is_set || is_set(src_tid.yfilter)) leaf_name_data.push_back(src_tid.get_name_leafdata());
    if (src_rid.is_set || is_set(src_rid.yfilter)) leaf_name_data.push_back(src_rid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-tid")
    {
        src_tid = value;
        src_tid.value_namespace = name_space;
        src_tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-rid")
    {
        src_rid = value;
        src_rid.value_namespace = name_space;
        src_rid.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-tid")
    {
        src_tid.yfilter = yfilter;
    }
    if(value_path == "src-rid")
    {
        src_rid.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-tid" || name == "src-rid")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcAddCtxData::XcAddCtxData()
    :
    gmpls_req_time{YType::uint32, "gmpls-req-time"},
    ctxt_type{YType::enumeration, "ctxt-type"},
    rm_type{YType::enumeration, "rm-type"}
        ,
    te_tunnel_info(std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo>())
{
    te_tunnel_info->parent = this;

    yang_name = "xc-add-ctx-data"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcAddCtxData::~XcAddCtxData()
{
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::has_data() const
{
    if (is_presence_container) return true;
    return gmpls_req_time.is_set
	|| ctxt_type.is_set
	|| rm_type.is_set
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_data());
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gmpls_req_time.yfilter)
	|| ydk::is_set(ctxt_type.yfilter)
	|| ydk::is_set(rm_type.yfilter)
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_operation());
}

std::string Odu::Controllers::Controller::Info::XcAddCtxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-add-ctx-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcAddCtxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gmpls_req_time.is_set || is_set(gmpls_req_time.yfilter)) leaf_name_data.push_back(gmpls_req_time.get_name_leafdata());
    if (ctxt_type.is_set || is_set(ctxt_type.yfilter)) leaf_name_data.push_back(ctxt_type.get_name_leafdata());
    if (rm_type.is_set || is_set(rm_type.yfilter)) leaf_name_data.push_back(rm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcAddCtxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-tunnel-info")
    {
        if(te_tunnel_info == nullptr)
        {
            te_tunnel_info = std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo>();
        }
        return te_tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcAddCtxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_tunnel_info != nullptr)
    {
        _children["te-tunnel-info"] = te_tunnel_info;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::XcAddCtxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time = value;
        gmpls_req_time.value_namespace = name_space;
        gmpls_req_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type = value;
        ctxt_type.value_namespace = name_space;
        ctxt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rm-type")
    {
        rm_type = value;
        rm_type.value_namespace = name_space;
        rm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcAddCtxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time.yfilter = yfilter;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type.yfilter = yfilter;
    }
    if(value_path == "rm-type")
    {
        rm_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-tunnel-info" || name == "gmpls-req-time" || name == "ctxt-type" || name == "rm-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::TeTunnelInfo()
    :
    info_type{YType::enumeration, "info-type"},
    tunnel_id{YType::uint32, "tunnel-id"}
        ,
    lb_ctxt(std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt>())
    , passive_match(std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch>())
{
    lb_ctxt->parent = this;
    passive_match->parent = this;

    yang_name = "te-tunnel-info"; yang_parent_name = "xc-add-ctx-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::~TeTunnelInfo()
{
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    return info_type.is_set
	|| tunnel_id.is_set
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_data())
	|| (passive_match !=  nullptr && passive_match->has_data());
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(info_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_operation())
	|| (passive_match !=  nullptr && passive_match->has_operation());
}

std::string Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (info_type.is_set || is_set(info_type.yfilter)) leaf_name_data.push_back(info_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lb-ctxt")
    {
        if(lb_ctxt == nullptr)
        {
            lb_ctxt = std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt>();
        }
        return lb_ctxt;
    }

    if(child_yang_name == "passive-match")
    {
        if(passive_match == nullptr)
        {
            passive_match = std::make_shared<Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch>();
        }
        return passive_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lb_ctxt != nullptr)
    {
        _children["lb-ctxt"] = lb_ctxt;
    }

    if(passive_match != nullptr)
    {
        _children["passive-match"] = passive_match;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "info-type")
    {
        info_type = value;
        info_type.value_namespace = name_space;
        info_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "info-type")
    {
        info_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lb-ctxt" || name == "passive-match" || name == "info-type" || name == "tunnel-id")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::LbCtxt()
    :
    s2l_fec_sub_group_id{YType::uint16, "s2l-fec-sub-group-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    fec_source{YType::uint32, "fec-source"},
    fec_dest{YType::uint32, "fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    sub_group_origin_ator{YType::uint32, "sub-group-origin-ator"},
    fec_c_type{YType::enumeration, "fec-c-type"}
{

    yang_name = "lb-ctxt"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::~LbCtxt()
{
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_sub_group_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| ext_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| sub_group_origin_ator.is_set
	|| fec_c_type.is_set;
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_sub_group_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(sub_group_origin_ator.yfilter)
	|| ydk::is_set(fec_c_type.yfilter);
}

std::string Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lb-ctxt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_sub_group_id.is_set || is_set(s2l_fec_sub_group_id.yfilter)) leaf_name_data.push_back(s2l_fec_sub_group_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_dest.is_set || is_set(fec_dest.yfilter)) leaf_name_data.push_back(fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (sub_group_origin_ator.is_set || is_set(sub_group_origin_ator.yfilter)) leaf_name_data.push_back(sub_group_origin_ator.get_name_leafdata());
    if (fec_c_type.is_set || is_set(fec_c_type.yfilter)) leaf_name_data.push_back(fec_c_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id = value;
        s2l_fec_sub_group_id.value_namespace = name_space;
        s2l_fec_sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-dest")
    {
        fec_dest = value;
        fec_dest.value_namespace = name_space;
        fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator = value;
        sub_group_origin_ator.value_namespace = name_space;
        sub_group_origin_ator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type = value;
        fec_c_type.value_namespace = name_space;
        fec_c_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-dest")
    {
        fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator.yfilter = yfilter;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-sub-group-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "ext-tunnel-id" || name == "fec-source" || name == "fec-dest" || name == "s2l-fec-p2mp-id" || name == "sub-group-origin-ator" || name == "fec-c-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::PassiveMatch()
    :
    src_tid{YType::uint16, "src-tid"},
    src_rid{YType::uint32, "src-rid"}
{

    yang_name = "passive-match"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::~PassiveMatch()
{
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::has_data() const
{
    if (is_presence_container) return true;
    return src_tid.is_set
	|| src_rid.is_set;
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_tid.yfilter)
	|| ydk::is_set(src_rid.yfilter);
}

std::string Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_tid.is_set || is_set(src_tid.yfilter)) leaf_name_data.push_back(src_tid.get_name_leafdata());
    if (src_rid.is_set || is_set(src_rid.yfilter)) leaf_name_data.push_back(src_rid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-tid")
    {
        src_tid = value;
        src_tid.value_namespace = name_space;
        src_tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-rid")
    {
        src_rid = value;
        src_rid.value_namespace = name_space;
        src_rid.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-tid")
    {
        src_tid.yfilter = yfilter;
    }
    if(value_path == "src-rid")
    {
        src_rid.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-tid" || name == "src-rid")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcRemCtxData::XcRemCtxData()
    :
    gmpls_req_time{YType::uint32, "gmpls-req-time"},
    ctxt_type{YType::enumeration, "ctxt-type"},
    rm_type{YType::enumeration, "rm-type"}
        ,
    te_tunnel_info(std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo>())
{
    te_tunnel_info->parent = this;

    yang_name = "xc-rem-ctx-data"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcRemCtxData::~XcRemCtxData()
{
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::has_data() const
{
    if (is_presence_container) return true;
    return gmpls_req_time.is_set
	|| ctxt_type.is_set
	|| rm_type.is_set
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_data());
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gmpls_req_time.yfilter)
	|| ydk::is_set(ctxt_type.yfilter)
	|| ydk::is_set(rm_type.yfilter)
	|| (te_tunnel_info !=  nullptr && te_tunnel_info->has_operation());
}

std::string Odu::Controllers::Controller::Info::XcRemCtxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-rem-ctx-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcRemCtxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gmpls_req_time.is_set || is_set(gmpls_req_time.yfilter)) leaf_name_data.push_back(gmpls_req_time.get_name_leafdata());
    if (ctxt_type.is_set || is_set(ctxt_type.yfilter)) leaf_name_data.push_back(ctxt_type.get_name_leafdata());
    if (rm_type.is_set || is_set(rm_type.yfilter)) leaf_name_data.push_back(rm_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcRemCtxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-tunnel-info")
    {
        if(te_tunnel_info == nullptr)
        {
            te_tunnel_info = std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo>();
        }
        return te_tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcRemCtxData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_tunnel_info != nullptr)
    {
        _children["te-tunnel-info"] = te_tunnel_info;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::XcRemCtxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time = value;
        gmpls_req_time.value_namespace = name_space;
        gmpls_req_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type = value;
        ctxt_type.value_namespace = name_space;
        ctxt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rm-type")
    {
        rm_type = value;
        rm_type.value_namespace = name_space;
        rm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcRemCtxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gmpls-req-time")
    {
        gmpls_req_time.yfilter = yfilter;
    }
    if(value_path == "ctxt-type")
    {
        ctxt_type.yfilter = yfilter;
    }
    if(value_path == "rm-type")
    {
        rm_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-tunnel-info" || name == "gmpls-req-time" || name == "ctxt-type" || name == "rm-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::TeTunnelInfo()
    :
    info_type{YType::enumeration, "info-type"},
    tunnel_id{YType::uint32, "tunnel-id"}
        ,
    lb_ctxt(std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt>())
    , passive_match(std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch>())
{
    lb_ctxt->parent = this;
    passive_match->parent = this;

    yang_name = "te-tunnel-info"; yang_parent_name = "xc-rem-ctx-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::~TeTunnelInfo()
{
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    return info_type.is_set
	|| tunnel_id.is_set
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_data())
	|| (passive_match !=  nullptr && passive_match->has_data());
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(info_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (lb_ctxt !=  nullptr && lb_ctxt->has_operation())
	|| (passive_match !=  nullptr && passive_match->has_operation());
}

std::string Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (info_type.is_set || is_set(info_type.yfilter)) leaf_name_data.push_back(info_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lb-ctxt")
    {
        if(lb_ctxt == nullptr)
        {
            lb_ctxt = std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt>();
        }
        return lb_ctxt;
    }

    if(child_yang_name == "passive-match")
    {
        if(passive_match == nullptr)
        {
            passive_match = std::make_shared<Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch>();
        }
        return passive_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lb_ctxt != nullptr)
    {
        _children["lb-ctxt"] = lb_ctxt;
    }

    if(passive_match != nullptr)
    {
        _children["passive-match"] = passive_match;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "info-type")
    {
        info_type = value;
        info_type.value_namespace = name_space;
        info_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "info-type")
    {
        info_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lb-ctxt" || name == "passive-match" || name == "info-type" || name == "tunnel-id")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::LbCtxt()
    :
    s2l_fec_sub_group_id{YType::uint16, "s2l-fec-sub-group-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    fec_source{YType::uint32, "fec-source"},
    fec_dest{YType::uint32, "fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    sub_group_origin_ator{YType::uint32, "sub-group-origin-ator"},
    fec_c_type{YType::enumeration, "fec-c-type"}
{

    yang_name = "lb-ctxt"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::~LbCtxt()
{
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::has_data() const
{
    if (is_presence_container) return true;
    return s2l_fec_sub_group_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| ext_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| sub_group_origin_ator.is_set
	|| fec_c_type.is_set;
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_sub_group_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(sub_group_origin_ator.yfilter)
	|| ydk::is_set(fec_c_type.yfilter);
}

std::string Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lb-ctxt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_sub_group_id.is_set || is_set(s2l_fec_sub_group_id.yfilter)) leaf_name_data.push_back(s2l_fec_sub_group_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_dest.is_set || is_set(fec_dest.yfilter)) leaf_name_data.push_back(fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (sub_group_origin_ator.is_set || is_set(sub_group_origin_ator.yfilter)) leaf_name_data.push_back(sub_group_origin_ator.get_name_leafdata());
    if (fec_c_type.is_set || is_set(fec_c_type.yfilter)) leaf_name_data.push_back(fec_c_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id = value;
        s2l_fec_sub_group_id.value_namespace = name_space;
        s2l_fec_sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-dest")
    {
        fec_dest = value;
        fec_dest.value_namespace = name_space;
        fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator = value;
        sub_group_origin_ator.value_namespace = name_space;
        sub_group_origin_ator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type = value;
        fec_c_type.value_namespace = name_space;
        fec_c_type.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-sub-group-id")
    {
        s2l_fec_sub_group_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-dest")
    {
        fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin-ator")
    {
        sub_group_origin_ator.yfilter = yfilter;
    }
    if(value_path == "fec-c-type")
    {
        fec_c_type.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-sub-group-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "ext-tunnel-id" || name == "fec-source" || name == "fec-dest" || name == "s2l-fec-p2mp-id" || name == "sub-group-origin-ator" || name == "fec-c-type")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::PassiveMatch()
    :
    src_tid{YType::uint16, "src-tid"},
    src_rid{YType::uint32, "src-rid"}
{

    yang_name = "passive-match"; yang_parent_name = "te-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::~PassiveMatch()
{
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::has_data() const
{
    if (is_presence_container) return true;
    return src_tid.is_set
	|| src_rid.is_set;
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_tid.yfilter)
	|| ydk::is_set(src_rid.yfilter);
}

std::string Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_tid.is_set || is_set(src_tid.yfilter)) leaf_name_data.push_back(src_tid.get_name_leafdata());
    if (src_rid.is_set || is_set(src_rid.yfilter)) leaf_name_data.push_back(src_rid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-tid")
    {
        src_tid = value;
        src_tid.value_namespace = name_space;
        src_tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-rid")
    {
        src_rid = value;
        src_rid.value_namespace = name_space;
        src_rid.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-tid")
    {
        src_tid.yfilter = yfilter;
    }
    if(value_path == "src-rid")
    {
        src_rid.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-tid" || name == "src-rid")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::OduDelay::OduDelay()
    :
    mode{YType::uint8, "mode"},
    delay{YType::uint32, "delay"}
{

    yang_name = "odu-delay"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::OduDelay::~OduDelay()
{
}

bool Odu::Controllers::Controller::Info::OduDelay::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| delay.is_set;
}

bool Odu::Controllers::Controller::Info::OduDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Odu::Controllers::Controller::Info::OduDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::OduDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::OduDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::OduDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::OduDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::OduDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::OduDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "delay")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::OduTerminateEther::OduTerminateEther()
    :
    vether_ifhandle{YType::uint32, "vether-ifhandle"},
    ethernet_mapping{YType::enumeration, "ethernet-mapping"},
    ethernet_interface{YType::str, "ethernet-interface"}
{

    yang_name = "odu-terminate-ether"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::OduTerminateEther::~OduTerminateEther()
{
}

bool Odu::Controllers::Controller::Info::OduTerminateEther::has_data() const
{
    if (is_presence_container) return true;
    return vether_ifhandle.is_set
	|| ethernet_mapping.is_set
	|| ethernet_interface.is_set;
}

bool Odu::Controllers::Controller::Info::OduTerminateEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vether_ifhandle.yfilter)
	|| ydk::is_set(ethernet_mapping.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter);
}

std::string Odu::Controllers::Controller::Info::OduTerminateEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-terminate-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::OduTerminateEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vether_ifhandle.is_set || is_set(vether_ifhandle.yfilter)) leaf_name_data.push_back(vether_ifhandle.get_name_leafdata());
    if (ethernet_mapping.is_set || is_set(ethernet_mapping.yfilter)) leaf_name_data.push_back(ethernet_mapping.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::OduTerminateEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::OduTerminateEther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::OduTerminateEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vether-ifhandle")
    {
        vether_ifhandle = value;
        vether_ifhandle.value_namespace = name_space;
        vether_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-mapping")
    {
        ethernet_mapping = value;
        ethernet_mapping.value_namespace = name_space;
        ethernet_mapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::OduTerminateEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vether-ifhandle")
    {
        vether_ifhandle.yfilter = yfilter;
    }
    if(value_path == "ethernet-mapping")
    {
        ethernet_mapping.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::OduTerminateEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vether-ifhandle" || name == "ethernet-mapping" || name == "ethernet-interface")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::AinsInfo::AinsInfo()
    :
    ains_state{YType::enumeration, "ains-state"},
    ains_timer_minutes{YType::uint32, "ains-timer-minutes"},
    ains_remaining_secs{YType::uint32, "ains-remaining-secs"}
{

    yang_name = "ains-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::AinsInfo::~AinsInfo()
{
}

bool Odu::Controllers::Controller::Info::AinsInfo::has_data() const
{
    if (is_presence_container) return true;
    return ains_state.is_set
	|| ains_timer_minutes.is_set
	|| ains_remaining_secs.is_set;
}

bool Odu::Controllers::Controller::Info::AinsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ains_state.yfilter)
	|| ydk::is_set(ains_timer_minutes.yfilter)
	|| ydk::is_set(ains_remaining_secs.yfilter);
}

std::string Odu::Controllers::Controller::Info::AinsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ains-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::AinsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ains_state.is_set || is_set(ains_state.yfilter)) leaf_name_data.push_back(ains_state.get_name_leafdata());
    if (ains_timer_minutes.is_set || is_set(ains_timer_minutes.yfilter)) leaf_name_data.push_back(ains_timer_minutes.get_name_leafdata());
    if (ains_remaining_secs.is_set || is_set(ains_remaining_secs.yfilter)) leaf_name_data.push_back(ains_remaining_secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::AinsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::AinsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::AinsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ains-state")
    {
        ains_state = value;
        ains_state.value_namespace = name_space;
        ains_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ains-timer-minutes")
    {
        ains_timer_minutes = value;
        ains_timer_minutes.value_namespace = name_space;
        ains_timer_minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ains-remaining-secs")
    {
        ains_remaining_secs = value;
        ains_remaining_secs.value_namespace = name_space;
        ains_remaining_secs.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::AinsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ains-state")
    {
        ains_state.yfilter = yfilter;
    }
    if(value_path == "ains-timer-minutes")
    {
        ains_timer_minutes.yfilter = yfilter;
    }
    if(value_path == "ains-remaining-secs")
    {
        ains_remaining_secs.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::AinsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ains-state" || name == "ains-timer-minutes" || name == "ains-remaining-secs")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odu_::Odu_()
    :
    intf_name{YType::str, "intf-name"},
    tpn_value{YType::uint8, "tpn-value"},
    ts_bitmap{YType::str, "ts-bitmap"}
{

    yang_name = "odu"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odu_::~Odu_()
{
}

bool Odu::Controllers::Controller::Info::Odu_::has_data() const
{
    if (is_presence_container) return true;
    return intf_name.is_set
	|| tpn_value.is_set
	|| ts_bitmap.is_set;
}

bool Odu::Controllers::Controller::Info::Odu_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(tpn_value.yfilter)
	|| ydk::is_set(ts_bitmap.yfilter);
}

std::string Odu::Controllers::Controller::Info::Odu_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odu_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (tpn_value.is_set || is_set(tpn_value.yfilter)) leaf_name_data.push_back(tpn_value.get_name_leafdata());
    if (ts_bitmap.is_set || is_set(ts_bitmap.yfilter)) leaf_name_data.push_back(ts_bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odu_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odu_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Odu_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpn-value")
    {
        tpn_value = value;
        tpn_value.value_namespace = name_space;
        tpn_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts-bitmap")
    {
        ts_bitmap = value;
        ts_bitmap.value_namespace = name_space;
        ts_bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Odu_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "tpn-value")
    {
        tpn_value.yfilter = yfilter;
    }
    if(value_path == "ts-bitmap")
    {
        ts_bitmap.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odu_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-name" || name == "tpn-value" || name == "ts-bitmap")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odutcm::Odutcm()
    :
    tcmsf{YType::uint8, "tcmsf"},
    tcmsd{YType::uint8, "tcmsd"},
    tcm_state{YType::enumeration, "tcm-state"},
    tcmper_mon{YType::enumeration, "tcmper-mon"},
    tcm_mode{YType::enumeration, "tcm-mode"},
    actual_tcm_mode{YType::enumeration, "actual-tcm-mode"},
    tcmltc_state{YType::enumeration, "tcmltc-state"},
    tcmtim_state{YType::enumeration, "tcmtim-state"},
    tcm_delay{YType::uint32, "tcm-delay"}
        ,
    tcmtti_mode(std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode>())
{
    tcmtti_mode->parent = this;

    yang_name = "odutcm"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odutcm::~Odutcm()
{
}

bool Odu::Controllers::Controller::Info::Odutcm::has_data() const
{
    if (is_presence_container) return true;
    return tcmsf.is_set
	|| tcmsd.is_set
	|| tcm_state.is_set
	|| tcmper_mon.is_set
	|| tcm_mode.is_set
	|| actual_tcm_mode.is_set
	|| tcmltc_state.is_set
	|| tcmtim_state.is_set
	|| tcm_delay.is_set
	|| (tcmtti_mode !=  nullptr && tcmtti_mode->has_data());
}

bool Odu::Controllers::Controller::Info::Odutcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcmsf.yfilter)
	|| ydk::is_set(tcmsd.yfilter)
	|| ydk::is_set(tcm_state.yfilter)
	|| ydk::is_set(tcmper_mon.yfilter)
	|| ydk::is_set(tcm_mode.yfilter)
	|| ydk::is_set(actual_tcm_mode.yfilter)
	|| ydk::is_set(tcmltc_state.yfilter)
	|| ydk::is_set(tcmtim_state.yfilter)
	|| ydk::is_set(tcm_delay.yfilter)
	|| (tcmtti_mode !=  nullptr && tcmtti_mode->has_operation());
}

std::string Odu::Controllers::Controller::Info::Odutcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odutcm";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odutcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcmsf.is_set || is_set(tcmsf.yfilter)) leaf_name_data.push_back(tcmsf.get_name_leafdata());
    if (tcmsd.is_set || is_set(tcmsd.yfilter)) leaf_name_data.push_back(tcmsd.get_name_leafdata());
    if (tcm_state.is_set || is_set(tcm_state.yfilter)) leaf_name_data.push_back(tcm_state.get_name_leafdata());
    if (tcmper_mon.is_set || is_set(tcmper_mon.yfilter)) leaf_name_data.push_back(tcmper_mon.get_name_leafdata());
    if (tcm_mode.is_set || is_set(tcm_mode.yfilter)) leaf_name_data.push_back(tcm_mode.get_name_leafdata());
    if (actual_tcm_mode.is_set || is_set(actual_tcm_mode.yfilter)) leaf_name_data.push_back(actual_tcm_mode.get_name_leafdata());
    if (tcmltc_state.is_set || is_set(tcmltc_state.yfilter)) leaf_name_data.push_back(tcmltc_state.get_name_leafdata());
    if (tcmtim_state.is_set || is_set(tcmtim_state.yfilter)) leaf_name_data.push_back(tcmtim_state.get_name_leafdata());
    if (tcm_delay.is_set || is_set(tcm_delay.yfilter)) leaf_name_data.push_back(tcm_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odutcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcmtti-mode")
    {
        if(tcmtti_mode == nullptr)
        {
            tcmtti_mode = std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode>();
        }
        return tcmtti_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odutcm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcmtti_mode != nullptr)
    {
        _children["tcmtti-mode"] = tcmtti_mode;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::Odutcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcmsf")
    {
        tcmsf = value;
        tcmsf.value_namespace = name_space;
        tcmsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmsd")
    {
        tcmsd = value;
        tcmsd.value_namespace = name_space;
        tcmsd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-state")
    {
        tcm_state = value;
        tcm_state.value_namespace = name_space;
        tcm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmper-mon")
    {
        tcmper_mon = value;
        tcmper_mon.value_namespace = name_space;
        tcmper_mon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-mode")
    {
        tcm_mode = value;
        tcm_mode.value_namespace = name_space;
        tcm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-tcm-mode")
    {
        actual_tcm_mode = value;
        actual_tcm_mode.value_namespace = name_space;
        actual_tcm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmltc-state")
    {
        tcmltc_state = value;
        tcmltc_state.value_namespace = name_space;
        tcmltc_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmtim-state")
    {
        tcmtim_state = value;
        tcmtim_state.value_namespace = name_space;
        tcmtim_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-delay")
    {
        tcm_delay = value;
        tcm_delay.value_namespace = name_space;
        tcm_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Odutcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcmsf")
    {
        tcmsf.yfilter = yfilter;
    }
    if(value_path == "tcmsd")
    {
        tcmsd.yfilter = yfilter;
    }
    if(value_path == "tcm-state")
    {
        tcm_state.yfilter = yfilter;
    }
    if(value_path == "tcmper-mon")
    {
        tcmper_mon.yfilter = yfilter;
    }
    if(value_path == "tcm-mode")
    {
        tcm_mode.yfilter = yfilter;
    }
    if(value_path == "actual-tcm-mode")
    {
        actual_tcm_mode.yfilter = yfilter;
    }
    if(value_path == "tcmltc-state")
    {
        tcmltc_state.yfilter = yfilter;
    }
    if(value_path == "tcmtim-state")
    {
        tcmtim_state.yfilter = yfilter;
    }
    if(value_path == "tcm-delay")
    {
        tcm_delay.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odutcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcmtti-mode" || name == "tcmsf" || name == "tcmsd" || name == "tcm-state" || name == "tcmper-mon" || name == "tcm-mode" || name == "actual-tcm-mode" || name == "tcmltc-state" || name == "tcmtim-state" || name == "tcm-delay")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::TcmttiMode()
    :
    g709tti_sent_mode{YType::enumeration, "g709tti-sent-mode"},
    g709tti_exp_mode{YType::enumeration, "g709tti-exp-mode"},
    g709tti_rec_mode{YType::enumeration, "g709tti-rec-mode"}
        ,
    tx(std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx>())
    , exp(std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp>())
    , rec(std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec>())
{
    tx->parent = this;
    exp->parent = this;
    rec->parent = this;

    yang_name = "tcmtti-mode"; yang_parent_name = "odutcm"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::~TcmttiMode()
{
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::has_data() const
{
    if (is_presence_container) return true;
    return g709tti_sent_mode.is_set
	|| g709tti_exp_mode.is_set
	|| g709tti_rec_mode.is_set
	|| (tx !=  nullptr && tx->has_data())
	|| (exp !=  nullptr && exp->has_data())
	|| (rec !=  nullptr && rec->has_data());
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g709tti_sent_mode.yfilter)
	|| ydk::is_set(g709tti_exp_mode.yfilter)
	|| ydk::is_set(g709tti_rec_mode.yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (exp !=  nullptr && exp->has_operation())
	|| (rec !=  nullptr && rec->has_operation());
}

std::string Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcmtti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g709tti_sent_mode.is_set || is_set(g709tti_sent_mode.yfilter)) leaf_name_data.push_back(g709tti_sent_mode.get_name_leafdata());
    if (g709tti_exp_mode.is_set || is_set(g709tti_exp_mode.yfilter)) leaf_name_data.push_back(g709tti_exp_mode.get_name_leafdata());
    if (g709tti_rec_mode.is_set || is_set(g709tti_rec_mode.yfilter)) leaf_name_data.push_back(g709tti_rec_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "rec")
    {
        if(rec == nullptr)
        {
            rec = std::make_shared<Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec>();
        }
        return rec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    if(exp != nullptr)
    {
        _children["exp"] = exp;
    }

    if(rec != nullptr)
    {
        _children["rec"] = rec;
    }

    return _children;
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "g709tti-sent-mode")
    {
        g709tti_sent_mode = value;
        g709tti_sent_mode.value_namespace = name_space;
        g709tti_sent_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709tti-exp-mode")
    {
        g709tti_exp_mode = value;
        g709tti_exp_mode.value_namespace = name_space;
        g709tti_exp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709tti-rec-mode")
    {
        g709tti_rec_mode = value;
        g709tti_rec_mode.value_namespace = name_space;
        g709tti_rec_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "g709tti-sent-mode")
    {
        g709tti_sent_mode.yfilter = yfilter;
    }
    if(value_path == "g709tti-exp-mode")
    {
        g709tti_exp_mode.yfilter = yfilter;
    }
    if(value_path == "g709tti-rec-mode")
    {
        g709tti_rec_mode.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "exp" || name == "rec" || name == "g709tti-sent-mode" || name == "g709tti-exp-mode" || name == "g709tti-rec-mode")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::Tx()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "tx"; yang_parent_name = "tcmtti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::~Tx()
{
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::Exp()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "exp"; yang_parent_name = "tcmtti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::~Exp()
{
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::Rec()
    :
    sapi{YType::uint8, "sapi"},
    dapi{YType::uint8, "dapi"},
    operator_specific{YType::uint8, "operator-specific"}
{

    yang_name = "rec"; yang_parent_name = "tcmtti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::~Rec()
{
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::has_operation() const
{
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sapi.yfilter)
	|| ydk::is_set(dapi.yfilter)
	|| ydk::is_set(operator_specific.yfilter);
}

std::string Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());
    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
}

void Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapi")
    {
        sapi.yfilter = yfilter;
    }
    if(value_path == "dapi")
    {
        dapi.yfilter = yfilter;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.yfilter = yfilter;
    }
}

bool Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific")
        return true;
    return false;
}

const Enum::YLeaf OduAinsStateEt::none {0, "none"};
const Enum::YLeaf OduAinsStateEt::active_running {1, "active-running"};
const Enum::YLeaf OduAinsStateEt::active_pending {2, "active-pending"};

const Enum::YLeaf OduEtherMapPingEt::none {0, "none"};
const Enum::YLeaf OduEtherMapPingEt::gfp {1, "gfp"};
const Enum::YLeaf OduEtherMapPingEt::amp {2, "amp"};
const Enum::YLeaf OduEtherMapPingEt::bmp {3, "bmp"};
const Enum::YLeaf OduEtherMapPingEt::gmp {4, "gmp"};
const Enum::YLeaf OduEtherMapPingEt::wis {5, "wis"};
const Enum::YLeaf OduEtherMapPingEt::gfp_ext {6, "gfp-ext"};

const Enum::YLeaf OduTcmMode::odu_tcm_mode_trans_parent {0, "odu-tcm-mode-trans-parent"};
const Enum::YLeaf OduTcmMode::nim {1, "nim"};
const Enum::YLeaf OduTcmMode::oper {2, "oper"};

const Enum::YLeaf OduTcmPerMon::disable {0, "disable"};
const Enum::YLeaf OduTcmPerMon::enable {1, "enable"};

const Enum::YLeaf OduTcmStateEt::disable {0, "disable"};
const Enum::YLeaf OduTcmStateEt::enable {1, "enable"};

const Enum::YLeaf GmplsTtiMode::gmpls_odu_tti_mode_none {0, "gmpls-odu-tti-mode-none"};
const Enum::YLeaf GmplsTtiMode::gmpls_odu_tti_mode_sm {1, "gmpls-odu-tti-mode-sm"};
const Enum::YLeaf GmplsTtiMode::gmpls_odu_tti_mode_pm {2, "gmpls-odu-tti-mode-pm"};
const Enum::YLeaf GmplsTtiMode::gmpls_odu_tti_mode_tcm {3, "gmpls-odu-tti-mode-tcm"};

const Enum::YLeaf OduPmMode::nim {0, "nim"};
const Enum::YLeaf OduPmMode::oper {1, "oper"};

const Enum::YLeaf OduPmCaEt::disable {0, "disable"};
const Enum::YLeaf OduPmCaEt::enable {1, "enable"};

const Enum::YLeaf OduPerMon::disable {0, "disable"};
const Enum::YLeaf OduPerMon::enable {1, "enable"};

const Enum::YLeaf DpProgrammed::dp_not_programmed {0, "dp-not-programmed"};
const Enum::YLeaf DpProgrammed::dp_programmed_success {1, "dp-programmed-success"};
const Enum::YLeaf DpProgrammed::end_pt_first_channel_ized {2, "end-pt-first-channel-ized"};
const Enum::YLeaf DpProgrammed::end_pt_se_cond_channel_ized {3, "end-pt-se-cond-channel-ized"};
const Enum::YLeaf DpProgrammed::end_pt_first_cross_connected {4, "end-pt-first-cross-connected"};
const Enum::YLeaf DpProgrammed::end_pt_se_cond_cross_connected {5, "end-pt-se-cond-cross-connected"};
const Enum::YLeaf DpProgrammed::end_pt_first_open_connected {6, "end-pt-first-open-connected"};
const Enum::YLeaf DpProgrammed::end_pt_se_cond_open_connected {7, "end-pt-se-cond-open-connected"};
const Enum::YLeaf DpProgrammed::end_pt_first_loop_back_ed {8, "end-pt-first-loop-back-ed"};
const Enum::YLeaf DpProgrammed::end_pt_se_cond_loop_back_ed {9, "end-pt-se-cond-loop-back-ed"};
const Enum::YLeaf DpProgrammed::end_pt_odu_type_mismatch {10, "end-pt-odu-type-mismatch"};
const Enum::YLeaf DpProgrammed::xc_not_set {11, "xc-not-set"};

const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_null {0, "otm-mpls-lib-c-type-null"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv4 {1, "otm-mpls-lib-c-type-ipv4"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv4_p2p_tunnel {7, "otm-mpls-lib-c-type-ipv4-p2p-tunnel"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv6_p2p_tunnel {8, "otm-mpls-lib-c-type-ipv6-p2p-tunnel"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv4_uni {9, "otm-mpls-lib-c-type-ipv4-uni"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv4_p2mp_tunnel {13, "otm-mpls-lib-c-type-ipv4-p2mp-tunnel"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv6_p2mp_tunnel {14, "otm-mpls-lib-c-type-ipv6-p2mp-tunnel"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv4_tp_tunnel {15, "otm-mpls-lib-c-type-ipv4-tp-tunnel"};
const Enum::YLeaf OtmMplsLibC::otm_mpls_lib_c_type_ipv6_tp_tunnel {16, "otm-mpls-lib-c-type-ipv6-tp-tunnel"};

const Enum::YLeaf OtmTeTunnelInfo::otm_te_info_none {0, "otm-te-info-none"};
const Enum::YLeaf OtmTeTunnelInfo::otm_te_info_s2l {1, "otm-te-info-s2l"};
const Enum::YLeaf OtmTeTunnelInfo::otm_te_info_tunnel_id {2, "otm-te-info-tunnel-id"};
const Enum::YLeaf OtmTeTunnelInfo::otm_te_info_passive_match {3, "otm-te-info-passive-match"};

const Enum::YLeaf OtmOpticalRmCtxtRm::otm_opt_rm_ctxt_rm_none {0, "otm-opt-rm-ctxt-rm-none"};
const Enum::YLeaf OtmOpticalRmCtxtRm::otm_opt_rm_ctxt_rm_wdm {1, "otm-opt-rm-ctxt-rm-wdm"};
const Enum::YLeaf OtmOpticalRmCtxtRm::otm_opt_rm_ctxt_rm_fsc {2, "otm-opt-rm-ctxt-rm-fsc"};
const Enum::YLeaf OtmOpticalRmCtxtRm::otm_opt_rm_ctxt_rm_tdm {3, "otm-opt-rm-ctxt-rm-tdm"};
const Enum::YLeaf OtmOpticalRmCtxtRm::otm_opt_rm_ctxt_rm_g709_otn {4, "otm-opt-rm-ctxt-rm-g709-otn"};
const Enum::YLeaf OtmOpticalRmCtxtRm::otm_optical_rm_ctxt_rm_last {5, "otm-optical-rm-ctxt-rm-last"};

const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_none {0, "otm-opt-rm-ctxt-type-none"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_down_stream_rw_add {1, "otm-opt-rm-ctxt-type-down-stream-rw-add"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_up_stream_rw_add {2, "otm-opt-rm-ctxt-type-up-stream-rw-add"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_down_stream_rw_del {3, "otm-opt-rm-ctxt-type-down-stream-rw-del"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_up_stream_rw_del {4, "otm-opt-rm-ctxt-type-up-stream-rw-del"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_down_stream_lbl_get {5, "otm-opt-rm-ctxt-type-down-stream-lbl-get"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_up_stream_lbl_get {6, "otm-opt-rm-ctxt-type-up-stream-lbl-get"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_down_stream_lbl_rel {7, "otm-opt-rm-ctxt-type-down-stream-lbl-rel"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_up_stream_lbl_rel {8, "otm-opt-rm-ctxt-type-up-stream-lbl-rel"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_end_point_rw_add {9, "otm-opt-rm-ctxt-type-end-point-rw-add"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_end_point_rw_del {10, "otm-opt-rm-ctxt-type-end-point-rw-del"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_odu_group_add {11, "otm-opt-rm-ctxt-type-odu-group-add"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_opt_rm_ctxt_type_odu_group_del {12, "otm-opt-rm-ctxt-type-odu-group-del"};
const Enum::YLeaf OtmOpticalRmCtxt::otm_optical_rm_ctxt_type_last {13, "otm-optical-rm-ctxt-type-last"};

const Enum::YLeaf OduTsGEt::one_dot_two_five_g {0, "one-dot-two-five-g"};
const Enum::YLeaf OduTsGEt::two_dot_five_g {1, "two-dot-five-g"};
const Enum::YLeaf OduTsGEt::tsg_not_applicable {2, "tsg-not-applicable"};

const Enum::YLeaf OduFlexTypeEt::na {0, "na"};
const Enum::YLeaf OduFlexTypeEt::cbr {1, "cbr"};
const Enum::YLeaf OduFlexTypeEt::gfp_resizable {2, "gfp-resizable"};
const Enum::YLeaf OduFlexTypeEt::gfp_fix {3, "gfp-fix"};

const Enum::YLeaf OduPtTypeEt::na {0, "na"};
const Enum::YLeaf OduPtTypeEt::two_asynchronous_cbr_mapping {2, "two-asynchronous-cbr-mapping"};
const Enum::YLeaf OduPtTypeEt::three_bit_synchronous_cbr_mapping {3, "three-bit-synchronous-cbr-mapping"};
const Enum::YLeaf OduPtTypeEt::five_gfp_mapping {5, "five-gfp-mapping"};
const Enum::YLeaf OduPtTypeEt::six_virtual_concatenated_signal {6, "six-virtual-concatenated-signal"};
const Enum::YLeaf OduPtTypeEt::seven_pcs_codeword_transparent_ethernet_mapping {7, "seven-pcs-codeword-transparent-ethernet-mapping"};
const Enum::YLeaf OduPtTypeEt::nine_gfp_mapping_into_opu2 {9, "nine-gfp-mapping-into-opu2"};
const Enum::YLeaf OduPtTypeEt::zero_astm1_mapping_into_opu0 {10, "zero-astm1-mapping-into-opu0"};
const Enum::YLeaf OduPtTypeEt::zero_bstm4_mapping_into_opu0 {11, "zero-bstm4-mapping-into-opu0"};
const Enum::YLeaf OduPtTypeEt::twenty_odu_multiplex_structure_supporting_odt_ujk {32, "twenty-odu-multiplex-structure-supporting-odt-ujk"};
const Enum::YLeaf OduPtTypeEt::twenty_one_odu_multiplex_structure_supporting_odt_ujk_and_odt_ukts {33, "twenty-one-odu-multiplex-structure-supporting-odt-ujk-and-odt-ukts"};

const Enum::YLeaf OduResourceEt::resource_free {0, "resource-free"};
const Enum::YLeaf OduResourceEt::open_connection {1, "open-connection"};
const Enum::YLeaf OduResourceEt::cross_connection {2, "cross-connection"};
const Enum::YLeaf OduResourceEt::channelized {3, "channelized"};
const Enum::YLeaf OduResourceEt::loopbacked {4, "loopbacked"};
const Enum::YLeaf OduResourceEt::cross_connected_and_loopbacked {5, "cross-connected-and-loopbacked"};
const Enum::YLeaf OduResourceEt::terminated {6, "terminated"};
const Enum::YLeaf OduResourceEt::invalid {7, "invalid"};

const Enum::YLeaf OduUserEt::mp {0, "mp"};
const Enum::YLeaf OduUserEt::gmpls {1, "gmpls"};
const Enum::YLeaf OduUserEt::all {2, "all"};

const Enum::YLeaf OduSecState::normal {0, "normal"};
const Enum::YLeaf OduSecState::maintenance {1, "maintenance"};
const Enum::YLeaf OduSecState::ains {2, "ains"};

const Enum::YLeaf OduDerState::out_of_service {0, "out-of-service"};
const Enum::YLeaf OduDerState::in_service {1, "in-service"};
const Enum::YLeaf OduDerState::maintenance {2, "maintenance"};
const Enum::YLeaf OduDerState::ains {3, "ains"};

const Enum::YLeaf OduTtiEt::ascii {0, "ascii"};
const Enum::YLeaf OduTtiEt::hex {1, "hex"};
const Enum::YLeaf OduTtiEt::full_ascii {2, "full-ascii"};
const Enum::YLeaf OduTtiEt::full_hex {3, "full-hex"};

const Enum::YLeaf OduLoopBackMode::none {1, "none"};
const Enum::YLeaf OduLoopBackMode::line {2, "line"};
const Enum::YLeaf OduLoopBackMode::internal {4, "internal"};

const Enum::YLeaf OduStateEt::not_ready {0, "not-ready"};
const Enum::YLeaf OduStateEt::admin_down {1, "admin-down"};
const Enum::YLeaf OduStateEt::down {2, "down"};
const Enum::YLeaf OduStateEt::up {3, "up"};
const Enum::YLeaf OduStateEt::shutdown {4, "shutdown"};
const Enum::YLeaf OduStateEt::error_disable {5, "error-disable"};
const Enum::YLeaf OduStateEt::down_immediate {6, "down-immediate"};
const Enum::YLeaf OduStateEt::down_immediate_admin {7, "down-immediate-admin"};
const Enum::YLeaf OduStateEt::down_graceful {8, "down-graceful"};
const Enum::YLeaf OduStateEt::begin_shutdown {9, "begin-shutdown"};
const Enum::YLeaf OduStateEt::end_shutdown {10, "end-shutdown"};
const Enum::YLeaf OduStateEt::begin_error_disable {11, "begin-error-disable"};
const Enum::YLeaf OduStateEt::end_error_disable {12, "end-error-disable"};
const Enum::YLeaf OduStateEt::begin_down_graceful {13, "begin-down-graceful"};
const Enum::YLeaf OduStateEt::reset {14, "reset"};
const Enum::YLeaf OduStateEt::operational {15, "operational"};
const Enum::YLeaf OduStateEt::not_operational {16, "not-operational"};
const Enum::YLeaf OduStateEt::unknown {17, "unknown"};
const Enum::YLeaf OduStateEt::last {18, "last"};

const Enum::YLeaf OduPrbsStatus::locked {0, "locked"};
const Enum::YLeaf OduPrbsStatus::unlocked {1, "unlocked"};
const Enum::YLeaf OduPrbsStatus::not_applicable {2, "not-applicable"};

const Enum::YLeaf OduPrbsPattern::pn_none {0, "pn-none"};
const Enum::YLeaf OduPrbsPattern::pn31 {1, "pn31"};
const Enum::YLeaf OduPrbsPattern::pn23 {2, "pn23"};
const Enum::YLeaf OduPrbsPattern::pn11 {4, "pn11"};
const Enum::YLeaf OduPrbsPattern::inverted_pn31 {8, "inverted-pn31"};
const Enum::YLeaf OduPrbsPattern::inverted_pn11 {16, "inverted-pn11"};

const Enum::YLeaf OduPrbsMode::invalid {0, "invalid"};
const Enum::YLeaf OduPrbsMode::source {1, "source"};
const Enum::YLeaf OduPrbsMode::sink {2, "sink"};
const Enum::YLeaf OduPrbsMode::source_sink {3, "source-sink"};

const Enum::YLeaf OduPrbsTest::disable {0, "disable"};
const Enum::YLeaf OduPrbsTest::enable {1, "enable"};


}
}

