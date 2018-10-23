
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_otu_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_otu_oper {

Otu::Otu()
    :
    controllers(std::make_shared<Otu::Controllers>())
{
    controllers->parent = this;

    yang_name = "otu"; yang_parent_name = "Cisco-IOS-XR-controller-otu-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Otu::~Otu()
{
}

bool Otu::has_data() const
{
    if (is_presence_container) return true;
    return (controllers !=  nullptr && controllers->has_data());
}

bool Otu::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Otu::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllers != nullptr)
    {
        _children["controllers"] = controllers;
    }

    return _children;
}

void Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Otu::clone_ptr() const
{
    return std::make_shared<Otu>();
}

std::string Otu::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Otu::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Otu::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Otu::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers")
        return true;
    return false;
}

Otu::Controllers::Controllers()
    :
    controller(this, {"controller_name"})
{

    yang_name = "controllers"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = false; 
}

Otu::Controllers::~Controllers()
{
}

bool Otu::Controllers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Otu::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Otu::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu/" << get_segment_path();
    return path_buffer.str();
}

std::string Otu::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller>();
        ent_->parent = this;
        controller.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::get_children() const
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

void Otu::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Otu::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Otu::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Otu::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"}
        ,
    prbs(std::make_shared<Otu::Controllers::Controller::Prbs>())
    , info(std::make_shared<Otu::Controllers::Controller::Info>())
{
    prbs->parent = this;
    info->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Otu::Controllers::Controller::~Controller()
{
}

bool Otu::Controllers::Controller::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| (prbs !=  nullptr && prbs->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool Otu::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string Otu::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Otu::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<Otu::Controllers::Controller::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Otu::Controllers::Controller::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::get_children() const
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

void Otu::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs" || name == "info" || name == "controller-name")
        return true;
    return false;
}

Otu::Controllers::Controller::Prbs::Prbs()
    :
    otu_prbs_test{YType::enumeration, "otu-prbs-test"},
    otu_prbs_mode{YType::enumeration, "otu-prbs-mode"},
    otu_prbs_pattern{YType::enumeration, "otu-prbs-pattern"},
    otu_prbs_status{YType::enumeration, "otu-prbs-status"}
{

    yang_name = "prbs"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Prbs::~Prbs()
{
}

bool Otu::Controllers::Controller::Prbs::has_data() const
{
    if (is_presence_container) return true;
    return otu_prbs_test.is_set
	|| otu_prbs_mode.is_set
	|| otu_prbs_pattern.is_set
	|| otu_prbs_status.is_set;
}

bool Otu::Controllers::Controller::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otu_prbs_test.yfilter)
	|| ydk::is_set(otu_prbs_mode.yfilter)
	|| ydk::is_set(otu_prbs_pattern.yfilter)
	|| ydk::is_set(otu_prbs_status.yfilter);
}

std::string Otu::Controllers::Controller::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otu_prbs_test.is_set || is_set(otu_prbs_test.yfilter)) leaf_name_data.push_back(otu_prbs_test.get_name_leafdata());
    if (otu_prbs_mode.is_set || is_set(otu_prbs_mode.yfilter)) leaf_name_data.push_back(otu_prbs_mode.get_name_leafdata());
    if (otu_prbs_pattern.is_set || is_set(otu_prbs_pattern.yfilter)) leaf_name_data.push_back(otu_prbs_pattern.get_name_leafdata());
    if (otu_prbs_status.is_set || is_set(otu_prbs_status.yfilter)) leaf_name_data.push_back(otu_prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otu-prbs-test")
    {
        otu_prbs_test = value;
        otu_prbs_test.value_namespace = name_space;
        otu_prbs_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otu-prbs-mode")
    {
        otu_prbs_mode = value;
        otu_prbs_mode.value_namespace = name_space;
        otu_prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otu-prbs-pattern")
    {
        otu_prbs_pattern = value;
        otu_prbs_pattern.value_namespace = name_space;
        otu_prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otu-prbs-status")
    {
        otu_prbs_status = value;
        otu_prbs_status.value_namespace = name_space;
        otu_prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otu-prbs-test")
    {
        otu_prbs_test.yfilter = yfilter;
    }
    if(value_path == "otu-prbs-mode")
    {
        otu_prbs_mode.yfilter = yfilter;
    }
    if(value_path == "otu-prbs-pattern")
    {
        otu_prbs_pattern.yfilter = yfilter;
    }
    if(value_path == "otu-prbs-status")
    {
        otu_prbs_status.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-prbs-test" || name == "otu-prbs-mode" || name == "otu-prbs-pattern" || name == "otu-prbs-status")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::Info()
    :
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    sf{YType::uint8, "sf"},
    sd{YType::uint8, "sd"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    fec_mode{YType::enumeration, "fec-mode"},
    derivedstate_mode{YType::enumeration, "derivedstate-mode"},
    inherit_sec_state{YType::enumeration, "inherit-sec-state"},
    config_sec_state{YType::enumeration, "config-sec-state"},
    gcc_mode{YType::boolean, "gcc-mode"},
    q{YType::uint64, "q"},
    q_margin{YType::uint64, "q-margin"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    ec{YType::uint64, "ec"},
    uc{YType::uint64, "uc"},
    pre_fec_val{YType::int32, "pre-fec-val"},
    pre_fec_mantissa{YType::int8, "pre-fec-mantissa"},
    ec_value{YType::boolean, "ec-value"},
    uc_value{YType::boolean, "uc-value"},
    pre_fec_ber_value{YType::boolean, "pre-fec-ber-value"},
    pre_fec_ber_mantissa{YType::boolean, "pre-fec-ber-mantissa"},
    nv_optical_support{YType::boolean, "nv-optical-support"},
    gmpls_tti_mode{YType::enumeration, "gmpls-tti-mode"},
    gmpls_tvm_id{YType::uint8, "gmpls-tvm-id"},
    auto_tti_flag{YType::boolean, "auto-tti-flag"},
    description{YType::str, "description"}
        ,
    local(std::make_shared<Otu::Controllers::Controller::Info::Local>())
    , remote(std::make_shared<Otu::Controllers::Controller::Info::Remote>())
    , tti_mode(std::make_shared<Otu::Controllers::Controller::Info::TtiMode>())
    , network_srlg(std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg>())
    , otu_alarm_info(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo>())
    , proactive(std::make_shared<Otu::Controllers::Controller::Info::Proactive>())
    , otu_fec_satistics(std::make_shared<Otu::Controllers::Controller::Info::OtuFecSatistics>())
    , ains_info(std::make_shared<Otu::Controllers::Controller::Info::AinsInfo>())
{
    local->parent = this;
    remote->parent = this;
    tti_mode->parent = this;
    network_srlg->parent = this;
    otu_alarm_info->parent = this;
    proactive->parent = this;
    otu_fec_satistics->parent = this;
    ains_info->parent = this;

    yang_name = "info"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::~Info()
{
}

bool Otu::Controllers::Controller::Info::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| name.is_set
	|| sf.is_set
	|| sd.is_set
	|| loopback_mode.is_set
	|| fec_mode.is_set
	|| derivedstate_mode.is_set
	|| inherit_sec_state.is_set
	|| config_sec_state.is_set
	|| gcc_mode.is_set
	|| q.is_set
	|| q_margin.is_set
	|| performance_monitoring.is_set
	|| ec.is_set
	|| uc.is_set
	|| pre_fec_val.is_set
	|| pre_fec_mantissa.is_set
	|| ec_value.is_set
	|| uc_value.is_set
	|| pre_fec_ber_value.is_set
	|| pre_fec_ber_mantissa.is_set
	|| nv_optical_support.is_set
	|| gmpls_tti_mode.is_set
	|| gmpls_tvm_id.is_set
	|| auto_tti_flag.is_set
	|| description.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data())
	|| (tti_mode !=  nullptr && tti_mode->has_data())
	|| (network_srlg !=  nullptr && network_srlg->has_data())
	|| (otu_alarm_info !=  nullptr && otu_alarm_info->has_data())
	|| (proactive !=  nullptr && proactive->has_data())
	|| (otu_fec_satistics !=  nullptr && otu_fec_satistics->has_data())
	|| (ains_info !=  nullptr && ains_info->has_data());
}

bool Otu::Controllers::Controller::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sf.yfilter)
	|| ydk::is_set(sd.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(fec_mode.yfilter)
	|| ydk::is_set(derivedstate_mode.yfilter)
	|| ydk::is_set(inherit_sec_state.yfilter)
	|| ydk::is_set(config_sec_state.yfilter)
	|| ydk::is_set(gcc_mode.yfilter)
	|| ydk::is_set(q.yfilter)
	|| ydk::is_set(q_margin.yfilter)
	|| ydk::is_set(performance_monitoring.yfilter)
	|| ydk::is_set(ec.yfilter)
	|| ydk::is_set(uc.yfilter)
	|| ydk::is_set(pre_fec_val.yfilter)
	|| ydk::is_set(pre_fec_mantissa.yfilter)
	|| ydk::is_set(ec_value.yfilter)
	|| ydk::is_set(uc_value.yfilter)
	|| ydk::is_set(pre_fec_ber_value.yfilter)
	|| ydk::is_set(pre_fec_ber_mantissa.yfilter)
	|| ydk::is_set(nv_optical_support.yfilter)
	|| ydk::is_set(gmpls_tti_mode.yfilter)
	|| ydk::is_set(gmpls_tvm_id.yfilter)
	|| ydk::is_set(auto_tti_flag.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation())
	|| (tti_mode !=  nullptr && tti_mode->has_operation())
	|| (network_srlg !=  nullptr && network_srlg->has_operation())
	|| (otu_alarm_info !=  nullptr && otu_alarm_info->has_operation())
	|| (proactive !=  nullptr && proactive->has_operation())
	|| (otu_fec_satistics !=  nullptr && otu_fec_satistics->has_operation())
	|| (ains_info !=  nullptr && ains_info->has_operation());
}

std::string Otu::Controllers::Controller::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sf.is_set || is_set(sf.yfilter)) leaf_name_data.push_back(sf.get_name_leafdata());
    if (sd.is_set || is_set(sd.yfilter)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.yfilter)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (derivedstate_mode.is_set || is_set(derivedstate_mode.yfilter)) leaf_name_data.push_back(derivedstate_mode.get_name_leafdata());
    if (inherit_sec_state.is_set || is_set(inherit_sec_state.yfilter)) leaf_name_data.push_back(inherit_sec_state.get_name_leafdata());
    if (config_sec_state.is_set || is_set(config_sec_state.yfilter)) leaf_name_data.push_back(config_sec_state.get_name_leafdata());
    if (gcc_mode.is_set || is_set(gcc_mode.yfilter)) leaf_name_data.push_back(gcc_mode.get_name_leafdata());
    if (q.is_set || is_set(q.yfilter)) leaf_name_data.push_back(q.get_name_leafdata());
    if (q_margin.is_set || is_set(q_margin.yfilter)) leaf_name_data.push_back(q_margin.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.yfilter)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (ec.is_set || is_set(ec.yfilter)) leaf_name_data.push_back(ec.get_name_leafdata());
    if (uc.is_set || is_set(uc.yfilter)) leaf_name_data.push_back(uc.get_name_leafdata());
    if (pre_fec_val.is_set || is_set(pre_fec_val.yfilter)) leaf_name_data.push_back(pre_fec_val.get_name_leafdata());
    if (pre_fec_mantissa.is_set || is_set(pre_fec_mantissa.yfilter)) leaf_name_data.push_back(pre_fec_mantissa.get_name_leafdata());
    if (ec_value.is_set || is_set(ec_value.yfilter)) leaf_name_data.push_back(ec_value.get_name_leafdata());
    if (uc_value.is_set || is_set(uc_value.yfilter)) leaf_name_data.push_back(uc_value.get_name_leafdata());
    if (pre_fec_ber_value.is_set || is_set(pre_fec_ber_value.yfilter)) leaf_name_data.push_back(pre_fec_ber_value.get_name_leafdata());
    if (pre_fec_ber_mantissa.is_set || is_set(pre_fec_ber_mantissa.yfilter)) leaf_name_data.push_back(pre_fec_ber_mantissa.get_name_leafdata());
    if (nv_optical_support.is_set || is_set(nv_optical_support.yfilter)) leaf_name_data.push_back(nv_optical_support.get_name_leafdata());
    if (gmpls_tti_mode.is_set || is_set(gmpls_tti_mode.yfilter)) leaf_name_data.push_back(gmpls_tti_mode.get_name_leafdata());
    if (gmpls_tvm_id.is_set || is_set(gmpls_tvm_id.yfilter)) leaf_name_data.push_back(gmpls_tvm_id.get_name_leafdata());
    if (auto_tti_flag.is_set || is_set(auto_tti_flag.yfilter)) leaf_name_data.push_back(auto_tti_flag.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Otu::Controllers::Controller::Info::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Otu::Controllers::Controller::Info::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<Otu::Controllers::Controller::Info::TtiMode>();
        }
        return tti_mode;
    }

    if(child_yang_name == "network-srlg")
    {
        if(network_srlg == nullptr)
        {
            network_srlg = std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg>();
        }
        return network_srlg;
    }

    if(child_yang_name == "otu-alarm-info")
    {
        if(otu_alarm_info == nullptr)
        {
            otu_alarm_info = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo>();
        }
        return otu_alarm_info;
    }

    if(child_yang_name == "proactive")
    {
        if(proactive == nullptr)
        {
            proactive = std::make_shared<Otu::Controllers::Controller::Info::Proactive>();
        }
        return proactive;
    }

    if(child_yang_name == "otu-fec-satistics")
    {
        if(otu_fec_satistics == nullptr)
        {
            otu_fec_satistics = std::make_shared<Otu::Controllers::Controller::Info::OtuFecSatistics>();
        }
        return otu_fec_satistics;
    }

    if(child_yang_name == "ains-info")
    {
        if(ains_info == nullptr)
        {
            ains_info = std::make_shared<Otu::Controllers::Controller::Info::AinsInfo>();
        }
        return ains_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::get_children() const
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

    if(network_srlg != nullptr)
    {
        _children["network-srlg"] = network_srlg;
    }

    if(otu_alarm_info != nullptr)
    {
        _children["otu-alarm-info"] = otu_alarm_info;
    }

    if(proactive != nullptr)
    {
        _children["proactive"] = proactive;
    }

    if(otu_fec_satistics != nullptr)
    {
        _children["otu-fec-satistics"] = otu_fec_satistics;
    }

    if(ains_info != nullptr)
    {
        _children["ains-info"] = ains_info;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fec-mode")
    {
        fec_mode = value;
        fec_mode.value_namespace = name_space;
        fec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "derivedstate-mode")
    {
        derivedstate_mode = value;
        derivedstate_mode.value_namespace = name_space;
        derivedstate_mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "q")
    {
        q = value;
        q.value_namespace = name_space;
        q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "q-margin")
    {
        q_margin = value;
        q_margin.value_namespace = name_space;
        q_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
        performance_monitoring.value_namespace = name_space;
        performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ec")
    {
        ec = value;
        ec.value_namespace = name_space;
        ec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc")
    {
        uc = value;
        uc.value_namespace = name_space;
        uc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-val")
    {
        pre_fec_val = value;
        pre_fec_val.value_namespace = name_space;
        pre_fec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-mantissa")
    {
        pre_fec_mantissa = value;
        pre_fec_mantissa.value_namespace = name_space;
        pre_fec_mantissa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ec-value")
    {
        ec_value = value;
        ec_value.value_namespace = name_space;
        ec_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc-value")
    {
        uc_value = value;
        uc_value.value_namespace = name_space;
        uc_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-value")
    {
        pre_fec_ber_value = value;
        pre_fec_ber_value.value_namespace = name_space;
        pre_fec_ber_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber-mantissa")
    {
        pre_fec_ber_mantissa = value;
        pre_fec_ber_mantissa.value_namespace = name_space;
        pre_fec_ber_mantissa.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "gmpls-tvm-id")
    {
        gmpls_tvm_id = value;
        gmpls_tvm_id.value_namespace = name_space;
        gmpls_tvm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-tti-flag")
    {
        auto_tti_flag = value;
        auto_tti_flag.value_namespace = name_space;
        auto_tti_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "fec-mode")
    {
        fec_mode.yfilter = yfilter;
    }
    if(value_path == "derivedstate-mode")
    {
        derivedstate_mode.yfilter = yfilter;
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
    if(value_path == "q")
    {
        q.yfilter = yfilter;
    }
    if(value_path == "q-margin")
    {
        q_margin.yfilter = yfilter;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "ec")
    {
        ec.yfilter = yfilter;
    }
    if(value_path == "uc")
    {
        uc.yfilter = yfilter;
    }
    if(value_path == "pre-fec-val")
    {
        pre_fec_val.yfilter = yfilter;
    }
    if(value_path == "pre-fec-mantissa")
    {
        pre_fec_mantissa.yfilter = yfilter;
    }
    if(value_path == "ec-value")
    {
        ec_value.yfilter = yfilter;
    }
    if(value_path == "uc-value")
    {
        uc_value.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-value")
    {
        pre_fec_ber_value.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber-mantissa")
    {
        pre_fec_ber_mantissa.yfilter = yfilter;
    }
    if(value_path == "nv-optical-support")
    {
        nv_optical_support.yfilter = yfilter;
    }
    if(value_path == "gmpls-tti-mode")
    {
        gmpls_tti_mode.yfilter = yfilter;
    }
    if(value_path == "gmpls-tvm-id")
    {
        gmpls_tvm_id.yfilter = yfilter;
    }
    if(value_path == "auto-tti-flag")
    {
        auto_tti_flag.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tti-mode" || name == "network-srlg" || name == "otu-alarm-info" || name == "proactive" || name == "otu-fec-satistics" || name == "ains-info" || name == "state" || name == "name" || name == "sf" || name == "sd" || name == "loopback-mode" || name == "fec-mode" || name == "derivedstate-mode" || name == "inherit-sec-state" || name == "config-sec-state" || name == "gcc-mode" || name == "q" || name == "q-margin" || name == "performance-monitoring" || name == "ec" || name == "uc" || name == "pre-fec-val" || name == "pre-fec-mantissa" || name == "ec-value" || name == "uc-value" || name == "pre-fec-ber-value" || name == "pre-fec-ber-mantissa" || name == "nv-optical-support" || name == "gmpls-tti-mode" || name == "gmpls-tvm-id" || name == "auto-tti-flag" || name == "description")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::Local::Local()
    :
    router_id{YType::uint32, "router-id"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "local"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::Local::~Local()
{
}

bool Otu::Controllers::Controller::Info::Local::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| if_index.is_set;
}

bool Otu::Controllers::Controller::Info::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string Otu::Controllers::Controller::Info::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::Local::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "if-index")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::Remote::Remote()
    :
    router_id{YType::uint32, "router-id"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "remote"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::Remote::~Remote()
{
}

bool Otu::Controllers::Controller::Info::Remote::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| if_index.is_set;
}

bool Otu::Controllers::Controller::Info::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string Otu::Controllers::Controller::Info::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::Remote::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "if-index")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::TtiMode()
    :
    g709tti_sent_mode{YType::enumeration, "g709tti-sent-mode"},
    g709tti_exp_mode{YType::enumeration, "g709tti-exp-mode"},
    g709tti_rec_mode{YType::enumeration, "g709tti-rec-mode"},
    remote_interface{YType::str, "remote-interface"},
    remote_host_name{YType::str, "remote-host-name"},
    remote_ip_addr{YType::str, "remote-ip-addr"}
        ,
    tx(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx>())
    , exp(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp>())
    , rec(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec>())
{
    tx->parent = this;
    exp->parent = this;
    rec->parent = this;

    yang_name = "tti-mode"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::~TtiMode()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::has_data() const
{
    if (is_presence_container) return true;
    return g709tti_sent_mode.is_set
	|| g709tti_exp_mode.is_set
	|| g709tti_rec_mode.is_set
	|| remote_interface.is_set
	|| remote_host_name.is_set
	|| remote_ip_addr.is_set
	|| (tx !=  nullptr && tx->has_data())
	|| (exp !=  nullptr && exp->has_data())
	|| (rec !=  nullptr && rec->has_data());
}

bool Otu::Controllers::Controller::Info::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g709tti_sent_mode.yfilter)
	|| ydk::is_set(g709tti_exp_mode.yfilter)
	|| ydk::is_set(g709tti_rec_mode.yfilter)
	|| ydk::is_set(remote_interface.yfilter)
	|| ydk::is_set(remote_host_name.yfilter)
	|| ydk::is_set(remote_ip_addr.yfilter)
	|| (tx !=  nullptr && tx->has_operation())
	|| (exp !=  nullptr && exp->has_operation())
	|| (rec !=  nullptr && rec->has_operation());
}

std::string Otu::Controllers::Controller::Info::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g709tti_sent_mode.is_set || is_set(g709tti_sent_mode.yfilter)) leaf_name_data.push_back(g709tti_sent_mode.get_name_leafdata());
    if (g709tti_exp_mode.is_set || is_set(g709tti_exp_mode.yfilter)) leaf_name_data.push_back(g709tti_exp_mode.get_name_leafdata());
    if (g709tti_rec_mode.is_set || is_set(g709tti_rec_mode.yfilter)) leaf_name_data.push_back(g709tti_rec_mode.get_name_leafdata());
    if (remote_interface.is_set || is_set(remote_interface.yfilter)) leaf_name_data.push_back(remote_interface.get_name_leafdata());
    if (remote_host_name.is_set || is_set(remote_host_name.yfilter)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());
    if (remote_ip_addr.is_set || is_set(remote_ip_addr.yfilter)) leaf_name_data.push_back(remote_ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx>();
        }
        return tx;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "rec")
    {
        if(rec == nullptr)
        {
            rec = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec>();
        }
        return rec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::get_children() const
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

void Otu::Controllers::Controller::Info::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "remote-interface")
    {
        remote_interface = value;
        remote_interface.value_namespace = name_space;
        remote_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
        remote_host_name.value_namespace = name_space;
        remote_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip-addr")
    {
        remote_ip_addr = value;
        remote_ip_addr.value_namespace = name_space;
        remote_ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "remote-interface")
    {
        remote_interface.yfilter = yfilter;
    }
    if(value_path == "remote-host-name")
    {
        remote_host_name.yfilter = yfilter;
    }
    if(value_path == "remote-ip-addr")
    {
        remote_ip_addr.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx" || name == "exp" || name == "rec" || name == "g709tti-sent-mode" || name == "g709tti-exp-mode" || name == "g709tti-rec-mode" || name == "remote-interface" || name == "remote-host-name" || name == "remote-ip-addr")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Tx()
    :
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"}
        ,
    sapi(this, {})
    , dapi(this, {})
    , operator_specific(this, {})
{

    yang_name = "tx"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Tx::~Tx()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_data())
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::has_operation() const
{
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(full_tti_ascii_string.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.yfilter)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi>();
        ent_->parent = this;
        sapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi>();
        ent_->parent = this;
        dapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "operator-specific")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific>();
        ent_->parent = this;
        operator_specific.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : operator_specific.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
        full_tti_ascii_string.value_namespace = name_space;
        full_tti_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific" || name == "full-tti-ascii-string")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::Sapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "sapi"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::~Sapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Sapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::Dapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "dapi"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::~Dapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::Dapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::OperatorSpecific()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "operator-specific"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::~OperatorSpecific()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator-specific";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::OperatorSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Exp()
    :
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"}
        ,
    sapi(this, {})
    , dapi(this, {})
    , operator_specific(this, {})
{

    yang_name = "exp"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Exp::~Exp()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_data())
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::has_operation() const
{
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(full_tti_ascii_string.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.yfilter)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi>();
        ent_->parent = this;
        sapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi>();
        ent_->parent = this;
        dapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "operator-specific")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific>();
        ent_->parent = this;
        operator_specific.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : operator_specific.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
        full_tti_ascii_string.value_namespace = name_space;
        full_tti_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific" || name == "full-tti-ascii-string")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::Sapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "sapi"; yang_parent_name = "exp"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::~Sapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Sapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::Dapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "dapi"; yang_parent_name = "exp"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::~Dapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::Dapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::OperatorSpecific()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "operator-specific"; yang_parent_name = "exp"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::~OperatorSpecific()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator-specific";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::OperatorSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Rec()
    :
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"}
        ,
    sapi(this, {})
    , dapi(this, {})
    , operator_specific(this, {})
{

    yang_name = "rec"; yang_parent_name = "tti-mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Rec::~Rec()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_data())
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::has_operation() const
{
    for (std::size_t index=0; index<sapi.len(); index++)
    {
        if(sapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dapi.len(); index++)
    {
        if(dapi[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<operator_specific.len(); index++)
    {
        if(operator_specific[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(full_tti_ascii_string.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Rec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Rec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.yfilter)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Rec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi>();
        ent_->parent = this;
        sapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dapi")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi>();
        ent_->parent = this;
        dapi.append(ent_);
        return ent_;
    }

    if(child_yang_name == "operator-specific")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific>();
        ent_->parent = this;
        operator_specific.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Rec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dapi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : operator_specific.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
        full_tti_ascii_string.value_namespace = name_space;
        full_tti_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapi" || name == "dapi" || name == "operator-specific" || name == "full-tti-ascii-string")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::Sapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "sapi"; yang_parent_name = "rec"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::~Sapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Sapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::Dapi()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "dapi"; yang_parent_name = "rec"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::~Dapi()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::Dapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::OperatorSpecific()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "operator-specific"; yang_parent_name = "rec"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::~OperatorSpecific()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator-specific";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::OperatorSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::NetworkSrlg::NetworkSrlg()
    :
    srlg_info(this, {})
{

    yang_name = "network-srlg"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::NetworkSrlg::~NetworkSrlg()
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_info.len(); index++)
    {
        if(srlg_info[index]->has_data())
            return true;
    }
    return false;
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_info.len(); index++)
    {
        if(srlg_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Otu::Controllers::Controller::Info::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-info")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo>();
        ent_->parent = this;
        srlg_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlg_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Otu::Controllers::Controller::Info::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-info")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::SrlgInfo()
    :
    set_id{YType::uint32, "set-id"}
        ,
    srlg(this, {})
{

    yang_name = "srlg-info"; yang_parent_name = "network-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::~SrlgInfo()
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return set_id.is_set;
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter);
}

std::string Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto ent_ = std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg>();
        ent_->parent = this;
        srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg" || name == "set-id")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "srlg-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::~Srlg()
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::OtuAlarmInfo()
    :
    los(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Los>())
    , lof(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof>())
    , lom(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom>())
    , oof(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof>())
    , oom(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom>())
    , ais(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais>())
    , iae(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae>())
    , biae(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae>())
    , bdi(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi>())
    , tim(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim>())
    , eoc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc>())
    , fec_mismatch(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch>())
    , sf_ber(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer>())
    , sd_ber(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer>())
    , ec(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec>())
    , uc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc>())
    , fecunc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc>())
{
    los->parent = this;
    lof->parent = this;
    lom->parent = this;
    oof->parent = this;
    oom->parent = this;
    ais->parent = this;
    iae->parent = this;
    biae->parent = this;
    bdi->parent = this;
    tim->parent = this;
    eoc->parent = this;
    fec_mismatch->parent = this;
    sf_ber->parent = this;
    sd_ber->parent = this;
    ec->parent = this;
    uc->parent = this;
    fecunc->parent = this;

    yang_name = "otu-alarm-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::~OtuAlarmInfo()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return (los !=  nullptr && los->has_data())
	|| (lof !=  nullptr && lof->has_data())
	|| (lom !=  nullptr && lom->has_data())
	|| (oof !=  nullptr && oof->has_data())
	|| (oom !=  nullptr && oom->has_data())
	|| (ais !=  nullptr && ais->has_data())
	|| (iae !=  nullptr && iae->has_data())
	|| (biae !=  nullptr && biae->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (ec !=  nullptr && ec->has_data())
	|| (uc !=  nullptr && uc->has_data())
	|| (fecunc !=  nullptr && fecunc->has_data());
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| (los !=  nullptr && los->has_operation())
	|| (lof !=  nullptr && lof->has_operation())
	|| (lom !=  nullptr && lom->has_operation())
	|| (oof !=  nullptr && oof->has_operation())
	|| (oom !=  nullptr && oom->has_operation())
	|| (ais !=  nullptr && ais->has_operation())
	|| (iae !=  nullptr && iae->has_operation())
	|| (biae !=  nullptr && biae->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (ec !=  nullptr && ec->has_operation())
	|| (uc !=  nullptr && uc->has_operation())
	|| (fecunc !=  nullptr && fecunc->has_operation());
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "los")
    {
        if(los == nullptr)
        {
            los = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Los>();
        }
        return los;
    }

    if(child_yang_name == "lof")
    {
        if(lof == nullptr)
        {
            lof = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof>();
        }
        return lof;
    }

    if(child_yang_name == "lom")
    {
        if(lom == nullptr)
        {
            lom = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom>();
        }
        return lom;
    }

    if(child_yang_name == "oof")
    {
        if(oof == nullptr)
        {
            oof = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof>();
        }
        return oof;
    }

    if(child_yang_name == "oom")
    {
        if(oom == nullptr)
        {
            oom = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom>();
        }
        return oom;
    }

    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "iae")
    {
        if(iae == nullptr)
        {
            iae = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae>();
        }
        return iae;
    }

    if(child_yang_name == "biae")
    {
        if(biae == nullptr)
        {
            biae = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae>();
        }
        return biae;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "fec-mismatch")
    {
        if(fec_mismatch == nullptr)
        {
            fec_mismatch = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch>();
        }
        return fec_mismatch;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "uc")
    {
        if(uc == nullptr)
        {
            uc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc>();
        }
        return uc;
    }

    if(child_yang_name == "fecunc")
    {
        if(fecunc == nullptr)
        {
            fecunc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc>();
        }
        return fecunc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(los != nullptr)
    {
        _children["los"] = los;
    }

    if(lof != nullptr)
    {
        _children["lof"] = lof;
    }

    if(lom != nullptr)
    {
        _children["lom"] = lom;
    }

    if(oof != nullptr)
    {
        _children["oof"] = oof;
    }

    if(oom != nullptr)
    {
        _children["oom"] = oom;
    }

    if(ais != nullptr)
    {
        _children["ais"] = ais;
    }

    if(iae != nullptr)
    {
        _children["iae"] = iae;
    }

    if(biae != nullptr)
    {
        _children["biae"] = biae;
    }

    if(bdi != nullptr)
    {
        _children["bdi"] = bdi;
    }

    if(tim != nullptr)
    {
        _children["tim"] = tim;
    }

    if(eoc != nullptr)
    {
        _children["eoc"] = eoc;
    }

    if(fec_mismatch != nullptr)
    {
        _children["fec-mismatch"] = fec_mismatch;
    }

    if(sf_ber != nullptr)
    {
        _children["sf-ber"] = sf_ber;
    }

    if(sd_ber != nullptr)
    {
        _children["sd-ber"] = sd_ber;
    }

    if(ec != nullptr)
    {
        _children["ec"] = ec;
    }

    if(uc != nullptr)
    {
        _children["uc"] = uc;
    }

    if(fecunc != nullptr)
    {
        _children["fecunc"] = fecunc;
    }

    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "los" || name == "lof" || name == "lom" || name == "oof" || name == "oom" || name == "ais" || name == "iae" || name == "biae" || name == "bdi" || name == "tim" || name == "eoc" || name == "fec-mismatch" || name == "sf-ber" || name == "sd-ber" || name == "ec" || name == "uc" || name == "fecunc")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::Los()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "los"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::~Los()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "los";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::Lof()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "lof"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::~Lof()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lof";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::Lom()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "lom"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::~Lom()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::Oof()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "oof"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::~Oof()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oof";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::Oom()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "oom"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::~Oom()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::Ais()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "ais"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::~Ais()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::Iae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "iae"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::~Iae()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::Biae()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "biae"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::~Biae()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "biae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::Bdi()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "bdi"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::~Bdi()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::Tim()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "tim"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::~Tim()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::Eoc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "eoc"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::~Eoc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::FecMismatch()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "fec-mismatch"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::~FecMismatch()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::SfBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "sf-ber"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::~SfBer()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::SdBer()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "sd-ber"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::~SdBer()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::Ec()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "ec"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::~Ec()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::Uc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "uc"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::~Uc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::Fecunc()
    :
    reporting_enabled{YType::boolean, "reporting-enabled"},
    is_detected{YType::boolean, "is-detected"},
    is_asserted{YType::boolean, "is-asserted"},
    counter{YType::uint64, "counter"}
{

    yang_name = "fecunc"; yang_parent_name = "otu-alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::~Fecunc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::has_data() const
{
    if (is_presence_container) return true;
    return reporting_enabled.is_set
	|| is_detected.is_set
	|| is_asserted.is_set
	|| counter.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fecunc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporting-enabled" || name == "is-detected" || name == "is-asserted" || name == "counter")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::Proactive::Proactive()
    :
    proactive_status{YType::boolean, "proactive-status"},
    inherit_sec_state{YType::enumeration, "inherit-sec-state"},
    config_sec_state{YType::enumeration, "config-sec-state"},
    proactive_fsm_state{YType::enumeration, "proactive-fsm-state"},
    proactive_fsm_if_state{YType::enumeration, "proactive-fsm-if-state"},
    trig_thresh_coeff{YType::uint8, "trig-thresh-coeff"},
    trig_thresh_power{YType::uint8, "trig-thresh-power"},
    rvrt_thresh_coeff{YType::uint8, "rvrt-thresh-coeff"},
    rvrt_thresh_power{YType::uint8, "rvrt-thresh-power"},
    trigger_window{YType::uint32, "trigger-window"},
    revert_window{YType::uint32, "revert-window"}
{

    yang_name = "proactive"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::Proactive::~Proactive()
{
}

bool Otu::Controllers::Controller::Info::Proactive::has_data() const
{
    if (is_presence_container) return true;
    return proactive_status.is_set
	|| inherit_sec_state.is_set
	|| config_sec_state.is_set
	|| proactive_fsm_state.is_set
	|| proactive_fsm_if_state.is_set
	|| trig_thresh_coeff.is_set
	|| trig_thresh_power.is_set
	|| rvrt_thresh_coeff.is_set
	|| rvrt_thresh_power.is_set
	|| trigger_window.is_set
	|| revert_window.is_set;
}

bool Otu::Controllers::Controller::Info::Proactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proactive_status.yfilter)
	|| ydk::is_set(inherit_sec_state.yfilter)
	|| ydk::is_set(config_sec_state.yfilter)
	|| ydk::is_set(proactive_fsm_state.yfilter)
	|| ydk::is_set(proactive_fsm_if_state.yfilter)
	|| ydk::is_set(trig_thresh_coeff.yfilter)
	|| ydk::is_set(trig_thresh_power.yfilter)
	|| ydk::is_set(rvrt_thresh_coeff.yfilter)
	|| ydk::is_set(rvrt_thresh_power.yfilter)
	|| ydk::is_set(trigger_window.yfilter)
	|| ydk::is_set(revert_window.yfilter);
}

std::string Otu::Controllers::Controller::Info::Proactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::Proactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proactive_status.is_set || is_set(proactive_status.yfilter)) leaf_name_data.push_back(proactive_status.get_name_leafdata());
    if (inherit_sec_state.is_set || is_set(inherit_sec_state.yfilter)) leaf_name_data.push_back(inherit_sec_state.get_name_leafdata());
    if (config_sec_state.is_set || is_set(config_sec_state.yfilter)) leaf_name_data.push_back(config_sec_state.get_name_leafdata());
    if (proactive_fsm_state.is_set || is_set(proactive_fsm_state.yfilter)) leaf_name_data.push_back(proactive_fsm_state.get_name_leafdata());
    if (proactive_fsm_if_state.is_set || is_set(proactive_fsm_if_state.yfilter)) leaf_name_data.push_back(proactive_fsm_if_state.get_name_leafdata());
    if (trig_thresh_coeff.is_set || is_set(trig_thresh_coeff.yfilter)) leaf_name_data.push_back(trig_thresh_coeff.get_name_leafdata());
    if (trig_thresh_power.is_set || is_set(trig_thresh_power.yfilter)) leaf_name_data.push_back(trig_thresh_power.get_name_leafdata());
    if (rvrt_thresh_coeff.is_set || is_set(rvrt_thresh_coeff.yfilter)) leaf_name_data.push_back(rvrt_thresh_coeff.get_name_leafdata());
    if (rvrt_thresh_power.is_set || is_set(rvrt_thresh_power.yfilter)) leaf_name_data.push_back(rvrt_thresh_power.get_name_leafdata());
    if (trigger_window.is_set || is_set(trigger_window.yfilter)) leaf_name_data.push_back(trigger_window.get_name_leafdata());
    if (revert_window.is_set || is_set(revert_window.yfilter)) leaf_name_data.push_back(revert_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::Proactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::Proactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::Proactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proactive-status")
    {
        proactive_status = value;
        proactive_status.value_namespace = name_space;
        proactive_status.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state = value;
        proactive_fsm_state.value_namespace = name_space;
        proactive_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state = value;
        proactive_fsm_if_state.value_namespace = name_space;
        proactive_fsm_if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-thresh-coeff")
    {
        trig_thresh_coeff = value;
        trig_thresh_coeff.value_namespace = name_space;
        trig_thresh_coeff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-thresh-power")
    {
        trig_thresh_power = value;
        trig_thresh_power.value_namespace = name_space;
        trig_thresh_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rvrt-thresh-coeff")
    {
        rvrt_thresh_coeff = value;
        rvrt_thresh_coeff.value_namespace = name_space;
        rvrt_thresh_coeff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rvrt-thresh-power")
    {
        rvrt_thresh_power = value;
        rvrt_thresh_power.value_namespace = name_space;
        rvrt_thresh_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-window")
    {
        trigger_window = value;
        trigger_window.value_namespace = name_space;
        trigger_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-window")
    {
        revert_window = value;
        revert_window.value_namespace = name_space;
        revert_window.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::Proactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proactive-status")
    {
        proactive_status.yfilter = yfilter;
    }
    if(value_path == "inherit-sec-state")
    {
        inherit_sec_state.yfilter = yfilter;
    }
    if(value_path == "config-sec-state")
    {
        config_sec_state.yfilter = yfilter;
    }
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state.yfilter = yfilter;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state.yfilter = yfilter;
    }
    if(value_path == "trig-thresh-coeff")
    {
        trig_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "trig-thresh-power")
    {
        trig_thresh_power.yfilter = yfilter;
    }
    if(value_path == "rvrt-thresh-coeff")
    {
        rvrt_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "rvrt-thresh-power")
    {
        rvrt_thresh_power.yfilter = yfilter;
    }
    if(value_path == "trigger-window")
    {
        trigger_window.yfilter = yfilter;
    }
    if(value_path == "revert-window")
    {
        revert_window.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::Proactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proactive-status" || name == "inherit-sec-state" || name == "config-sec-state" || name == "proactive-fsm-state" || name == "proactive-fsm-if-state" || name == "trig-thresh-coeff" || name == "trig-thresh-power" || name == "rvrt-thresh-coeff" || name == "rvrt-thresh-power" || name == "trigger-window" || name == "revert-window")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::OtuFecSatistics::OtuFecSatistics()
    :
    post_fec_ber{YType::str, "post-fec-ber"},
    pre_fec_ber{YType::str, "pre-fec-ber"}
{

    yang_name = "otu-fec-satistics"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::OtuFecSatistics::~OtuFecSatistics()
{
}

bool Otu::Controllers::Controller::Info::OtuFecSatistics::has_data() const
{
    if (is_presence_container) return true;
    return post_fec_ber.is_set
	|| pre_fec_ber.is_set;
}

bool Otu::Controllers::Controller::Info::OtuFecSatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(post_fec_ber.yfilter)
	|| ydk::is_set(pre_fec_ber.yfilter);
}

std::string Otu::Controllers::Controller::Info::OtuFecSatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-fec-satistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::OtuFecSatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_fec_ber.is_set || is_set(post_fec_ber.yfilter)) leaf_name_data.push_back(post_fec_ber.get_name_leafdata());
    if (pre_fec_ber.is_set || is_set(pre_fec_ber.yfilter)) leaf_name_data.push_back(pre_fec_ber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::OtuFecSatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::OtuFecSatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::OtuFecSatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "post-fec-ber")
    {
        post_fec_ber = value;
        post_fec_ber.value_namespace = name_space;
        post_fec_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber = value;
        pre_fec_ber.value_namespace = name_space;
        pre_fec_ber.value_namespace_prefix = name_space_prefix;
    }
}

void Otu::Controllers::Controller::Info::OtuFecSatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "post-fec-ber")
    {
        post_fec_ber.yfilter = yfilter;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber.yfilter = yfilter;
    }
}

bool Otu::Controllers::Controller::Info::OtuFecSatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "post-fec-ber" || name == "pre-fec-ber")
        return true;
    return false;
}

Otu::Controllers::Controller::Info::AinsInfo::AinsInfo()
    :
    ains_state{YType::enumeration, "ains-state"},
    ains_timer_minutes{YType::uint32, "ains-timer-minutes"},
    ains_remaining_secs{YType::uint32, "ains-remaining-secs"}
{

    yang_name = "ains-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Otu::Controllers::Controller::Info::AinsInfo::~AinsInfo()
{
}

bool Otu::Controllers::Controller::Info::AinsInfo::has_data() const
{
    if (is_presence_container) return true;
    return ains_state.is_set
	|| ains_timer_minutes.is_set
	|| ains_remaining_secs.is_set;
}

bool Otu::Controllers::Controller::Info::AinsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ains_state.yfilter)
	|| ydk::is_set(ains_timer_minutes.yfilter)
	|| ydk::is_set(ains_remaining_secs.yfilter);
}

std::string Otu::Controllers::Controller::Info::AinsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ains-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Otu::Controllers::Controller::Info::AinsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ains_state.is_set || is_set(ains_state.yfilter)) leaf_name_data.push_back(ains_state.get_name_leafdata());
    if (ains_timer_minutes.is_set || is_set(ains_timer_minutes.yfilter)) leaf_name_data.push_back(ains_timer_minutes.get_name_leafdata());
    if (ains_remaining_secs.is_set || is_set(ains_remaining_secs.yfilter)) leaf_name_data.push_back(ains_remaining_secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Otu::Controllers::Controller::Info::AinsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Otu::Controllers::Controller::Info::AinsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Otu::Controllers::Controller::Info::AinsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Otu::Controllers::Controller::Info::AinsInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Otu::Controllers::Controller::Info::AinsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ains-state" || name == "ains-timer-minutes" || name == "ains-remaining-secs")
        return true;
    return false;
}

const Enum::YLeaf OtuPrbsStatus::locked {0, "locked"};
const Enum::YLeaf OtuPrbsStatus::unlocked {1, "unlocked"};
const Enum::YLeaf OtuPrbsStatus::not_applicable {2, "not-applicable"};

const Enum::YLeaf OtuPrbsPattern::not_applicable {0, "not-applicable"};
const Enum::YLeaf OtuPrbsPattern::pn31 {1, "pn31"};
const Enum::YLeaf OtuPrbsPattern::pn23 {2, "pn23"};
const Enum::YLeaf OtuPrbsPattern::pn11 {4, "pn11"};
const Enum::YLeaf OtuPrbsPattern::inverted_pn31 {8, "inverted-pn31"};
const Enum::YLeaf OtuPrbsPattern::inverted_pn11 {16, "inverted-pn11"};
const Enum::YLeaf OtuPrbsPattern::pn15 {32, "pn15"};

const Enum::YLeaf OtuStateEt::not_ready {0, "not-ready"};
const Enum::YLeaf OtuStateEt::admin_down {1, "admin-down"};
const Enum::YLeaf OtuStateEt::down {2, "down"};
const Enum::YLeaf OtuStateEt::up {3, "up"};
const Enum::YLeaf OtuStateEt::shutdown {4, "shutdown"};
const Enum::YLeaf OtuStateEt::error_disable {5, "error-disable"};
const Enum::YLeaf OtuStateEt::down_immediate {6, "down-immediate"};
const Enum::YLeaf OtuStateEt::down_immediate_admin {7, "down-immediate-admin"};
const Enum::YLeaf OtuStateEt::down_graceful {8, "down-graceful"};
const Enum::YLeaf OtuStateEt::begin_shutdown {9, "begin-shutdown"};
const Enum::YLeaf OtuStateEt::end_shutdown {10, "end-shutdown"};
const Enum::YLeaf OtuStateEt::begin_error_disable {11, "begin-error-disable"};
const Enum::YLeaf OtuStateEt::end_error_disable {12, "end-error-disable"};
const Enum::YLeaf OtuStateEt::begin_down_graceful {13, "begin-down-graceful"};
const Enum::YLeaf OtuStateEt::reset {14, "reset"};
const Enum::YLeaf OtuStateEt::operational {15, "operational"};
const Enum::YLeaf OtuStateEt::not_operational {16, "not-operational"};
const Enum::YLeaf OtuStateEt::unknown {17, "unknown"};
const Enum::YLeaf OtuStateEt::last {18, "last"};

const Enum::YLeaf OtuPrbsTest::disable {0, "disable"};
const Enum::YLeaf OtuPrbsTest::enable {1, "enable"};

const Enum::YLeaf OtuAinsStateEt::none {0, "none"};
const Enum::YLeaf OtuAinsStateEt::active_running {1, "active-running"};
const Enum::YLeaf OtuAinsStateEt::active_pending {2, "active-pending"};

const Enum::YLeaf OtuPpFsmState::otu_in_active {0, "otu-in-active"};
const Enum::YLeaf OtuPpFsmState::otu_disabled {1, "otu-disabled"};
const Enum::YLeaf OtuPpFsmState::otu_normal_state {2, "otu-normal-state"};
const Enum::YLeaf OtuPpFsmState::otu_local_failing {3, "otu-local-failing"};
const Enum::YLeaf OtuPpFsmState::otu_remote_failing {4, "otu-remote-failing"};
const Enum::YLeaf OtuPpFsmState::otu_main_t_failing {5, "otu-main-t-failing"};
const Enum::YLeaf OtuPpFsmState::otu_regen_failing {6, "otu-regen-failing"};
const Enum::YLeaf OtuPpFsmState::otu_local_failed {7, "otu-local-failed"};
const Enum::YLeaf OtuPpFsmState::otu_remote_failed {8, "otu-remote-failed"};
const Enum::YLeaf OtuPpFsmState::otu_main_t_failed {9, "otu-main-t-failed"};
const Enum::YLeaf OtuPpFsmState::otu_regen_failed {10, "otu-regen-failed"};

const Enum::YLeaf OtuG709fecMode::otu_bag_none_fec {1, "otu-bag-none-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_standard_fec {2, "otu-bag-standard-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_1_i_7_fec {4, "otu-bag-1-i-7-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_1_i_4_fec {8, "otu-bag-1-i-4-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_swizzle_fec {16, "otu-bag-swizzle-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_hg20_fec {32, "otu-bag-hg20-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_enhanced_hg7_fec {64, "otu-bag-enhanced-hg7-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_sd20_fec {128, "otu-bag-sd20-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_sd7_fec {256, "otu-bag-sd7-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_sd15_fec {512, "otu-bag-sd15-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_sd27_fec {1024, "otu-bag-sd27-fec"};
const Enum::YLeaf OtuG709fecMode::otu_bag_all_fec {2048, "otu-bag-all-fec"};

const Enum::YLeaf OtuPrbsMode::not_applicable {0, "not-applicable"};
const Enum::YLeaf OtuPrbsMode::source {1, "source"};
const Enum::YLeaf OtuPrbsMode::sink {2, "sink"};
const Enum::YLeaf OtuPrbsMode::source_sink {3, "source-sink"};

const Enum::YLeaf OtuPerMon::disable {0, "disable"};
const Enum::YLeaf OtuPerMon::enable {1, "enable"};

const Enum::YLeaf OtuTtiEt::ascii {0, "ascii"};
const Enum::YLeaf OtuTtiEt::hex {1, "hex"};
const Enum::YLeaf OtuTtiEt::full_ascii {2, "full-ascii"};
const Enum::YLeaf OtuTtiEt::full_hex {3, "full-hex"};

const Enum::YLeaf OtuPpIntfState::otu_pp_intf_up {0, "otu-pp-intf-up"};
const Enum::YLeaf OtuPpIntfState::otu_pp_intf_failing {1, "otu-pp-intf-failing"};
const Enum::YLeaf OtuPpIntfState::otu_pp_intf_down {2, "otu-pp-intf-down"};

const Enum::YLeaf OtuSecState::normal {0, "normal"};
const Enum::YLeaf OtuSecState::maintenance {1, "maintenance"};
const Enum::YLeaf OtuSecState::ains {2, "ains"};

const Enum::YLeaf OtuLoopBackMode::none {1, "none"};
const Enum::YLeaf OtuLoopBackMode::line {2, "line"};
const Enum::YLeaf OtuLoopBackMode::internal {4, "internal"};

const Enum::YLeaf GmplsOtuTtiMode::gmpls_otu_tti_mode_none {0, "gmpls-otu-tti-mode-none"};
const Enum::YLeaf GmplsOtuTtiMode::gmpls_otu_tti_mode_sm {1, "gmpls-otu-tti-mode-sm"};
const Enum::YLeaf GmplsOtuTtiMode::gmpls_otu_tti_mode_pm {2, "gmpls-otu-tti-mode-pm"};
const Enum::YLeaf GmplsOtuTtiMode::gmpls_otu_tti_mode_tcm {3, "gmpls-otu-tti-mode-tcm"};

const Enum::YLeaf OtuDerState::out_of_service {0, "out-of-service"};
const Enum::YLeaf OtuDerState::in_service {1, "in-service"};
const Enum::YLeaf OtuDerState::maintenance {2, "maintenance"};
const Enum::YLeaf OtuDerState::ains {3, "ains"};


}
}

