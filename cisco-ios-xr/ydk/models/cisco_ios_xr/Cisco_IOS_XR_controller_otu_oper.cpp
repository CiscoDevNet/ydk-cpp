
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_otu_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_otu_oper {

Otu::Otu()
    :
    controllers(std::make_shared<Otu::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers;

    yang_name = "otu"; yang_parent_name = "Cisco-IOS-XR-controller-otu-oper";
}

Otu::~Otu()
{
}

bool Otu::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data());
}

bool Otu::has_operation() const
{
    return is_set(operation)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu";

    return path_buffer.str();

}

EntityPath Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
        else
        {
            controllers = std::make_shared<Otu::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers;
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
    }

    return children;
}

void Otu::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Otu::clone_ptr() const
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

Otu::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "otu";
}

Otu::Controllers::~Controllers()
{
}

bool Otu::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Otu::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Otu::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath Otu::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Otu::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Otu::Controllers::set_value(const std::string & value_path, std::string value)
{
}

Otu::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"}
    	,
    info(std::make_shared<Otu::Controllers::Controller::Info>())
{
    info->parent = this;
    children["info"] = info;

    yang_name = "controller"; yang_parent_name = "controllers";
}

Otu::Controllers::Controller::~Controller()
{
}

bool Otu::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| (info !=  nullptr && info->has_data());
}

bool Otu::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| (info !=  nullptr && info->has_operation());
}

std::string Otu::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-controller-otu-oper:otu/controllers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "info")
    {
        if(info != nullptr)
        {
            children["info"] = info;
        }
        else
        {
            info = std::make_shared<Otu::Controllers::Controller::Info>();
            info->parent = this;
            children["info"] = info;
        }
        return children.at("info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::get_children()
{
    if(children.find("info") == children.end())
    {
        if(info != nullptr)
        {
            children["info"] = info;
        }
    }

    return children;
}

void Otu::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
}

Otu::Controllers::Controller::Info::Info()
    :
    auto_tti_flag{YType::boolean, "auto-tti-flag"},
    config_sec_state{YType::enumeration, "config-sec-state"},
    derivedstate_mode{YType::enumeration, "derivedstate-mode"},
    ec{YType::uint64, "ec"},
    ec_value{YType::boolean, "ec-value"},
    fec_mode{YType::enumeration, "fec-mode"},
    gcc_mode{YType::boolean, "gcc-mode"},
    gmpls_tti_mode{YType::enumeration, "gmpls-tti-mode"},
    gmpls_tvm_id{YType::uint8, "gmpls-tvm-id"},
    inherit_sec_state{YType::enumeration, "inherit-sec-state"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    name{YType::str, "name"},
    nv_optical_support{YType::boolean, "nv-optical-support"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    pre_fec_ber_mantissa{YType::boolean, "pre-fec-ber-mantissa"},
    pre_fec_ber_value{YType::boolean, "pre-fec-ber-value"},
    pre_fec_mantissa{YType::int8, "pre-fec-mantissa"},
    pre_fec_val{YType::int32, "pre-fec-val"},
    q{YType::uint64, "q"},
    q_margin{YType::uint64, "q-margin"},
    sd{YType::uint8, "sd"},
    sf{YType::uint8, "sf"},
    state{YType::enumeration, "state"},
    uc{YType::uint64, "uc"},
    uc_value{YType::boolean, "uc-value"}
    	,
    local(std::make_shared<Otu::Controllers::Controller::Info::Local>())
	,network_srlg(std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg>())
	,otu_alarm_info(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo>())
	,otu_fec_satistics(std::make_shared<Otu::Controllers::Controller::Info::OtuFecSatistics>())
	,proactive(std::make_shared<Otu::Controllers::Controller::Info::Proactive>())
	,remote(std::make_shared<Otu::Controllers::Controller::Info::Remote>())
	,tti_mode(std::make_shared<Otu::Controllers::Controller::Info::TtiMode>())
{
    local->parent = this;
    children["local"] = local;

    network_srlg->parent = this;
    children["network-srlg"] = network_srlg;

    otu_alarm_info->parent = this;
    children["otu-alarm-info"] = otu_alarm_info;

    otu_fec_satistics->parent = this;
    children["otu-fec-satistics"] = otu_fec_satistics;

    proactive->parent = this;
    children["proactive"] = proactive;

    remote->parent = this;
    children["remote"] = remote;

    tti_mode->parent = this;
    children["tti-mode"] = tti_mode;

    yang_name = "info"; yang_parent_name = "controller";
}

Otu::Controllers::Controller::Info::~Info()
{
}

bool Otu::Controllers::Controller::Info::has_data() const
{
    return auto_tti_flag.is_set
	|| config_sec_state.is_set
	|| derivedstate_mode.is_set
	|| ec.is_set
	|| ec_value.is_set
	|| fec_mode.is_set
	|| gcc_mode.is_set
	|| gmpls_tti_mode.is_set
	|| gmpls_tvm_id.is_set
	|| inherit_sec_state.is_set
	|| loopback_mode.is_set
	|| name.is_set
	|| nv_optical_support.is_set
	|| performance_monitoring.is_set
	|| pre_fec_ber_mantissa.is_set
	|| pre_fec_ber_value.is_set
	|| pre_fec_mantissa.is_set
	|| pre_fec_val.is_set
	|| q.is_set
	|| q_margin.is_set
	|| sd.is_set
	|| sf.is_set
	|| state.is_set
	|| uc.is_set
	|| uc_value.is_set
	|| (local !=  nullptr && local->has_data())
	|| (network_srlg !=  nullptr && network_srlg->has_data())
	|| (otu_alarm_info !=  nullptr && otu_alarm_info->has_data())
	|| (otu_fec_satistics !=  nullptr && otu_fec_satistics->has_data())
	|| (proactive !=  nullptr && proactive->has_data())
	|| (remote !=  nullptr && remote->has_data())
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool Otu::Controllers::Controller::Info::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_tti_flag.operation)
	|| is_set(config_sec_state.operation)
	|| is_set(derivedstate_mode.operation)
	|| is_set(ec.operation)
	|| is_set(ec_value.operation)
	|| is_set(fec_mode.operation)
	|| is_set(gcc_mode.operation)
	|| is_set(gmpls_tti_mode.operation)
	|| is_set(gmpls_tvm_id.operation)
	|| is_set(inherit_sec_state.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(name.operation)
	|| is_set(nv_optical_support.operation)
	|| is_set(performance_monitoring.operation)
	|| is_set(pre_fec_ber_mantissa.operation)
	|| is_set(pre_fec_ber_value.operation)
	|| is_set(pre_fec_mantissa.operation)
	|| is_set(pre_fec_val.operation)
	|| is_set(q.operation)
	|| is_set(q_margin.operation)
	|| is_set(sd.operation)
	|| is_set(sf.operation)
	|| is_set(state.operation)
	|| is_set(uc.operation)
	|| is_set(uc_value.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (network_srlg !=  nullptr && network_srlg->has_operation())
	|| (otu_alarm_info !=  nullptr && otu_alarm_info->has_operation())
	|| (otu_fec_satistics !=  nullptr && otu_fec_satistics->has_operation())
	|| (proactive !=  nullptr && proactive->has_operation())
	|| (remote !=  nullptr && remote->has_operation())
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string Otu::Controllers::Controller::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_tti_flag.is_set || is_set(auto_tti_flag.operation)) leaf_name_data.push_back(auto_tti_flag.get_name_leafdata());
    if (config_sec_state.is_set || is_set(config_sec_state.operation)) leaf_name_data.push_back(config_sec_state.get_name_leafdata());
    if (derivedstate_mode.is_set || is_set(derivedstate_mode.operation)) leaf_name_data.push_back(derivedstate_mode.get_name_leafdata());
    if (ec.is_set || is_set(ec.operation)) leaf_name_data.push_back(ec.get_name_leafdata());
    if (ec_value.is_set || is_set(ec_value.operation)) leaf_name_data.push_back(ec_value.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.operation)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (gcc_mode.is_set || is_set(gcc_mode.operation)) leaf_name_data.push_back(gcc_mode.get_name_leafdata());
    if (gmpls_tti_mode.is_set || is_set(gmpls_tti_mode.operation)) leaf_name_data.push_back(gmpls_tti_mode.get_name_leafdata());
    if (gmpls_tvm_id.is_set || is_set(gmpls_tvm_id.operation)) leaf_name_data.push_back(gmpls_tvm_id.get_name_leafdata());
    if (inherit_sec_state.is_set || is_set(inherit_sec_state.operation)) leaf_name_data.push_back(inherit_sec_state.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nv_optical_support.is_set || is_set(nv_optical_support.operation)) leaf_name_data.push_back(nv_optical_support.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.operation)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (pre_fec_ber_mantissa.is_set || is_set(pre_fec_ber_mantissa.operation)) leaf_name_data.push_back(pre_fec_ber_mantissa.get_name_leafdata());
    if (pre_fec_ber_value.is_set || is_set(pre_fec_ber_value.operation)) leaf_name_data.push_back(pre_fec_ber_value.get_name_leafdata());
    if (pre_fec_mantissa.is_set || is_set(pre_fec_mantissa.operation)) leaf_name_data.push_back(pre_fec_mantissa.get_name_leafdata());
    if (pre_fec_val.is_set || is_set(pre_fec_val.operation)) leaf_name_data.push_back(pre_fec_val.get_name_leafdata());
    if (q.is_set || is_set(q.operation)) leaf_name_data.push_back(q.get_name_leafdata());
    if (q_margin.is_set || is_set(q_margin.operation)) leaf_name_data.push_back(q_margin.get_name_leafdata());
    if (sd.is_set || is_set(sd.operation)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (sf.is_set || is_set(sf.operation)) leaf_name_data.push_back(sf.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (uc.is_set || is_set(uc.operation)) leaf_name_data.push_back(uc.get_name_leafdata());
    if (uc_value.is_set || is_set(uc_value.operation)) leaf_name_data.push_back(uc_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<Otu::Controllers::Controller::Info::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "network-srlg")
    {
        if(network_srlg != nullptr)
        {
            children["network-srlg"] = network_srlg;
        }
        else
        {
            network_srlg = std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg>();
            network_srlg->parent = this;
            children["network-srlg"] = network_srlg;
        }
        return children.at("network-srlg");
    }

    if(child_yang_name == "otu-alarm-info")
    {
        if(otu_alarm_info != nullptr)
        {
            children["otu-alarm-info"] = otu_alarm_info;
        }
        else
        {
            otu_alarm_info = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo>();
            otu_alarm_info->parent = this;
            children["otu-alarm-info"] = otu_alarm_info;
        }
        return children.at("otu-alarm-info");
    }

    if(child_yang_name == "otu-fec-satistics")
    {
        if(otu_fec_satistics != nullptr)
        {
            children["otu-fec-satistics"] = otu_fec_satistics;
        }
        else
        {
            otu_fec_satistics = std::make_shared<Otu::Controllers::Controller::Info::OtuFecSatistics>();
            otu_fec_satistics->parent = this;
            children["otu-fec-satistics"] = otu_fec_satistics;
        }
        return children.at("otu-fec-satistics");
    }

    if(child_yang_name == "proactive")
    {
        if(proactive != nullptr)
        {
            children["proactive"] = proactive;
        }
        else
        {
            proactive = std::make_shared<Otu::Controllers::Controller::Info::Proactive>();
            proactive->parent = this;
            children["proactive"] = proactive;
        }
        return children.at("proactive");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
        else
        {
            remote = std::make_shared<Otu::Controllers::Controller::Info::Remote>();
            remote->parent = this;
            children["remote"] = remote;
        }
        return children.at("remote");
    }

    if(child_yang_name == "tti-mode")
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
        else
        {
            tti_mode = std::make_shared<Otu::Controllers::Controller::Info::TtiMode>();
            tti_mode->parent = this;
            children["tti-mode"] = tti_mode;
        }
        return children.at("tti-mode");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("network-srlg") == children.end())
    {
        if(network_srlg != nullptr)
        {
            children["network-srlg"] = network_srlg;
        }
    }

    if(children.find("otu-alarm-info") == children.end())
    {
        if(otu_alarm_info != nullptr)
        {
            children["otu-alarm-info"] = otu_alarm_info;
        }
    }

    if(children.find("otu-fec-satistics") == children.end())
    {
        if(otu_fec_satistics != nullptr)
        {
            children["otu-fec-satistics"] = otu_fec_satistics;
        }
    }

    if(children.find("proactive") == children.end())
    {
        if(proactive != nullptr)
        {
            children["proactive"] = proactive;
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote;
        }
    }

    if(children.find("tti-mode") == children.end())
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
    }

    return children;
}

void Otu::Controllers::Controller::Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-tti-flag")
    {
        auto_tti_flag = value;
    }
    if(value_path == "config-sec-state")
    {
        config_sec_state = value;
    }
    if(value_path == "derivedstate-mode")
    {
        derivedstate_mode = value;
    }
    if(value_path == "ec")
    {
        ec = value;
    }
    if(value_path == "ec-value")
    {
        ec_value = value;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
    }
    if(value_path == "gcc-mode")
    {
        gcc_mode = value;
    }
    if(value_path == "gmpls-tti-mode")
    {
        gmpls_tti_mode = value;
    }
    if(value_path == "gmpls-tvm-id")
    {
        gmpls_tvm_id = value;
    }
    if(value_path == "inherit-sec-state")
    {
        inherit_sec_state = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "nv-optical-support")
    {
        nv_optical_support = value;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
    }
    if(value_path == "pre-fec-ber-mantissa")
    {
        pre_fec_ber_mantissa = value;
    }
    if(value_path == "pre-fec-ber-value")
    {
        pre_fec_ber_value = value;
    }
    if(value_path == "pre-fec-mantissa")
    {
        pre_fec_mantissa = value;
    }
    if(value_path == "pre-fec-val")
    {
        pre_fec_val = value;
    }
    if(value_path == "q")
    {
        q = value;
    }
    if(value_path == "q-margin")
    {
        q_margin = value;
    }
    if(value_path == "sd")
    {
        sd = value;
    }
    if(value_path == "sf")
    {
        sf = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "uc")
    {
        uc = value;
    }
    if(value_path == "uc-value")
    {
        uc_value = value;
    }
}

Otu::Controllers::Controller::Info::Local::Local()
    :
    if_index{YType::uint32, "if-index"},
    router_id{YType::uint32, "router-id"}
{
    yang_name = "local"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::Local::~Local()
{
}

bool Otu::Controllers::Controller::Info::Local::has_data() const
{
    return if_index.is_set
	|| router_id.is_set;
}

bool Otu::Controllers::Controller::Info::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(router_id.operation);
}

std::string Otu::Controllers::Controller::Info::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::Local::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Otu::Controllers::Controller::Info::Remote::Remote()
    :
    if_index{YType::uint32, "if-index"},
    router_id{YType::uint32, "router-id"}
{
    yang_name = "remote"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::Remote::~Remote()
{
}

bool Otu::Controllers::Controller::Info::Remote::has_data() const
{
    return if_index.is_set
	|| router_id.is_set;
}

bool Otu::Controllers::Controller::Info::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(router_id.operation);
}

std::string Otu::Controllers::Controller::Info::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::Remote::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Otu::Controllers::Controller::Info::TtiMode::TtiMode()
    :
    g709tti_exp_mode{YType::enumeration, "g709tti-exp-mode"},
    g709tti_rec_mode{YType::enumeration, "g709tti-rec-mode"},
    g709tti_sent_mode{YType::enumeration, "g709tti-sent-mode"},
    remote_host_name{YType::str, "remote-host-name"},
    remote_interface{YType::str, "remote-interface"},
    remote_ip_addr{YType::str, "remote-ip-addr"}
    	,
    exp(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp>())
	,rec(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec>())
	,tx(std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx>())
{
    exp->parent = this;
    children["exp"] = exp;

    rec->parent = this;
    children["rec"] = rec;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "tti-mode"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::TtiMode::~TtiMode()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::has_data() const
{
    return g709tti_exp_mode.is_set
	|| g709tti_rec_mode.is_set
	|| g709tti_sent_mode.is_set
	|| remote_host_name.is_set
	|| remote_interface.is_set
	|| remote_ip_addr.is_set
	|| (exp !=  nullptr && exp->has_data())
	|| (rec !=  nullptr && rec->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Otu::Controllers::Controller::Info::TtiMode::has_operation() const
{
    return is_set(operation)
	|| is_set(g709tti_exp_mode.operation)
	|| is_set(g709tti_rec_mode.operation)
	|| is_set(g709tti_sent_mode.operation)
	|| is_set(remote_host_name.operation)
	|| is_set(remote_interface.operation)
	|| is_set(remote_ip_addr.operation)
	|| (exp !=  nullptr && exp->has_operation())
	|| (rec !=  nullptr && rec->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Otu::Controllers::Controller::Info::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::TtiMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtiMode' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g709tti_exp_mode.is_set || is_set(g709tti_exp_mode.operation)) leaf_name_data.push_back(g709tti_exp_mode.get_name_leafdata());
    if (g709tti_rec_mode.is_set || is_set(g709tti_rec_mode.operation)) leaf_name_data.push_back(g709tti_rec_mode.get_name_leafdata());
    if (g709tti_sent_mode.is_set || is_set(g709tti_sent_mode.operation)) leaf_name_data.push_back(g709tti_sent_mode.get_name_leafdata());
    if (remote_host_name.is_set || is_set(remote_host_name.operation)) leaf_name_data.push_back(remote_host_name.get_name_leafdata());
    if (remote_interface.is_set || is_set(remote_interface.operation)) leaf_name_data.push_back(remote_interface.get_name_leafdata());
    if (remote_ip_addr.is_set || is_set(remote_ip_addr.operation)) leaf_name_data.push_back(remote_ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exp")
    {
        if(exp != nullptr)
        {
            children["exp"] = exp;
        }
        else
        {
            exp = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Exp>();
            exp->parent = this;
            children["exp"] = exp;
        }
        return children.at("exp");
    }

    if(child_yang_name == "rec")
    {
        if(rec != nullptr)
        {
            children["rec"] = rec;
        }
        else
        {
            rec = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Rec>();
            rec->parent = this;
            children["rec"] = rec;
        }
        return children.at("rec");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Otu::Controllers::Controller::Info::TtiMode::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::TtiMode::get_children()
{
    if(children.find("exp") == children.end())
    {
        if(exp != nullptr)
        {
            children["exp"] = exp;
        }
    }

    if(children.find("rec") == children.end())
    {
        if(rec != nullptr)
        {
            children["rec"] = rec;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Otu::Controllers::Controller::Info::TtiMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "g709tti-exp-mode")
    {
        g709tti_exp_mode = value;
    }
    if(value_path == "g709tti-rec-mode")
    {
        g709tti_rec_mode = value;
    }
    if(value_path == "g709tti-sent-mode")
    {
        g709tti_sent_mode = value;
    }
    if(value_path == "remote-host-name")
    {
        remote_host_name = value;
    }
    if(value_path == "remote-interface")
    {
        remote_interface = value;
    }
    if(value_path == "remote-ip-addr")
    {
        remote_ip_addr = value;
    }
}

Otu::Controllers::Controller::Info::TtiMode::Tx::Tx()
    :
    dapi{YType::uint8, "dapi"},
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"},
    operator_specific{YType::uint8, "operator-specific"},
    sapi{YType::uint8, "sapi"}
{
    yang_name = "tx"; yang_parent_name = "tti-mode";
}

Otu::Controllers::Controller::Info::TtiMode::Tx::~Tx()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::has_data() const
{
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
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Tx::has_operation() const
{
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dapi.operation)
	|| is_set(full_tti_ascii_string.operation)
	|| is_set(operator_specific.operation)
	|| is_set(sapi.operation);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::TtiMode::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.operation)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::TtiMode::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::TtiMode::Tx::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::TtiMode::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
}

Otu::Controllers::Controller::Info::TtiMode::Exp::Exp()
    :
    dapi{YType::uint8, "dapi"},
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"},
    operator_specific{YType::uint8, "operator-specific"},
    sapi{YType::uint8, "sapi"}
{
    yang_name = "exp"; yang_parent_name = "tti-mode";
}

Otu::Controllers::Controller::Info::TtiMode::Exp::~Exp()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::has_data() const
{
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
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Exp::has_operation() const
{
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dapi.operation)
	|| is_set(full_tti_ascii_string.operation)
	|| is_set(operator_specific.operation)
	|| is_set(sapi.operation);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::TtiMode::Exp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exp' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.operation)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::TtiMode::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::TtiMode::Exp::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::TtiMode::Exp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
}

Otu::Controllers::Controller::Info::TtiMode::Rec::Rec()
    :
    dapi{YType::uint8, "dapi"},
    full_tti_ascii_string{YType::str, "full-tti-ascii-string"},
    operator_specific{YType::uint8, "operator-specific"},
    sapi{YType::uint8, "sapi"}
{
    yang_name = "rec"; yang_parent_name = "tti-mode";
}

Otu::Controllers::Controller::Info::TtiMode::Rec::~Rec()
{
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::has_data() const
{
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
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return full_tti_ascii_string.is_set;
}

bool Otu::Controllers::Controller::Info::TtiMode::Rec::has_operation() const
{
    for (auto const & leaf : dapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : operator_specific.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sapi.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dapi.operation)
	|| is_set(full_tti_ascii_string.operation)
	|| is_set(operator_specific.operation)
	|| is_set(sapi.operation);
}

std::string Otu::Controllers::Controller::Info::TtiMode::Rec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rec";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::TtiMode::Rec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rec' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_tti_ascii_string.is_set || is_set(full_tti_ascii_string.operation)) leaf_name_data.push_back(full_tti_ascii_string.get_name_leafdata());

    auto dapi_name_datas = dapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dapi_name_datas.begin(), dapi_name_datas.end());
    auto operator_specific_name_datas = operator_specific.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operator_specific_name_datas.begin(), operator_specific_name_datas.end());
    auto sapi_name_datas = sapi.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sapi_name_datas.begin(), sapi_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::TtiMode::Rec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::TtiMode::Rec::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::TtiMode::Rec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi")
    {
        dapi.append(value);
    }
    if(value_path == "full-tti-ascii-string")
    {
        full_tti_ascii_string = value;
    }
    if(value_path == "operator-specific")
    {
        operator_specific.append(value);
    }
    if(value_path == "sapi")
    {
        sapi.append(value);
    }
}

Otu::Controllers::Controller::Info::NetworkSrlg::NetworkSrlg()
{
    yang_name = "network-srlg"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::NetworkSrlg::~NetworkSrlg()
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::has_data() const
{
    for (std::size_t index=0; index<srlg_info.size(); index++)
    {
        if(srlg_info[index]->has_data())
            return true;
    }
    return false;
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_info.size(); index++)
    {
        if(srlg_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Otu::Controllers::Controller::Info::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::NetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlg' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-info")
    {
        for(auto const & c : srlg_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo>();
        c->parent = this;
        srlg_info.push_back(std::move(c));
        children[segment_path] = srlg_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::NetworkSrlg::get_children()
{
    for (auto const & c : srlg_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Otu::Controllers::Controller::Info::NetworkSrlg::set_value(const std::string & value_path, std::string value)
{
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::SrlgInfo()
    :
    set_id{YType::uint32, "set-id"},
    srlg{YType::uint32, "srlg"}
{
    yang_name = "srlg-info"; yang_parent_name = "network-srlg";
}

Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::~SrlgInfo()
{
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::has_data() const
{
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return set_id.is_set;
}

bool Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::has_operation() const
{
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg.operation);
}

std::string Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-info";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgInfo' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());

    auto srlg_name_datas = srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_name_datas.begin(), srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg")
    {
        srlg.append(value);
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::OtuAlarmInfo()
    :
    ais(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais>())
	,bdi(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi>())
	,biae(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae>())
	,ec(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec>())
	,eoc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc>())
	,fec_mismatch(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch>())
	,fecunc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc>())
	,iae(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae>())
	,lof(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof>())
	,lom(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom>())
	,los(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Los>())
	,oof(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof>())
	,oom(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom>())
	,sd_ber(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer>())
	,sf_ber(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer>())
	,tim(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim>())
	,uc(std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc>())
{
    ais->parent = this;
    children["ais"] = ais;

    bdi->parent = this;
    children["bdi"] = bdi;

    biae->parent = this;
    children["biae"] = biae;

    ec->parent = this;
    children["ec"] = ec;

    eoc->parent = this;
    children["eoc"] = eoc;

    fec_mismatch->parent = this;
    children["fec-mismatch"] = fec_mismatch;

    fecunc->parent = this;
    children["fecunc"] = fecunc;

    iae->parent = this;
    children["iae"] = iae;

    lof->parent = this;
    children["lof"] = lof;

    lom->parent = this;
    children["lom"] = lom;

    los->parent = this;
    children["los"] = los;

    oof->parent = this;
    children["oof"] = oof;

    oom->parent = this;
    children["oom"] = oom;

    sd_ber->parent = this;
    children["sd-ber"] = sd_ber;

    sf_ber->parent = this;
    children["sf-ber"] = sf_ber;

    tim->parent = this;
    children["tim"] = tim;

    uc->parent = this;
    children["uc"] = uc;

    yang_name = "otu-alarm-info"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::~OtuAlarmInfo()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::has_data() const
{
    return (ais !=  nullptr && ais->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (biae !=  nullptr && biae->has_data())
	|| (ec !=  nullptr && ec->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_data())
	|| (fecunc !=  nullptr && fecunc->has_data())
	|| (iae !=  nullptr && iae->has_data())
	|| (lof !=  nullptr && lof->has_data())
	|| (lom !=  nullptr && lom->has_data())
	|| (los !=  nullptr && los->has_data())
	|| (oof !=  nullptr && oof->has_data())
	|| (oom !=  nullptr && oom->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (uc !=  nullptr && uc->has_data());
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::has_operation() const
{
    return is_set(operation)
	|| (ais !=  nullptr && ais->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (biae !=  nullptr && biae->has_operation())
	|| (ec !=  nullptr && ec->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_operation())
	|| (fecunc !=  nullptr && fecunc->has_operation())
	|| (iae !=  nullptr && iae->has_operation())
	|| (lof !=  nullptr && lof->has_operation())
	|| (lom !=  nullptr && lom->has_operation())
	|| (los !=  nullptr && los->has_operation())
	|| (oof !=  nullptr && oof->has_operation())
	|| (oom !=  nullptr && oom->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (uc !=  nullptr && uc->has_operation());
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-alarm-info";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuAlarmInfo' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ais")
    {
        if(ais != nullptr)
        {
            children["ais"] = ais;
        }
        else
        {
            ais = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais>();
            ais->parent = this;
            children["ais"] = ais;
        }
        return children.at("ais");
    }

    if(child_yang_name == "bdi")
    {
        if(bdi != nullptr)
        {
            children["bdi"] = bdi;
        }
        else
        {
            bdi = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi>();
            bdi->parent = this;
            children["bdi"] = bdi;
        }
        return children.at("bdi");
    }

    if(child_yang_name == "biae")
    {
        if(biae != nullptr)
        {
            children["biae"] = biae;
        }
        else
        {
            biae = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae>();
            biae->parent = this;
            children["biae"] = biae;
        }
        return children.at("biae");
    }

    if(child_yang_name == "ec")
    {
        if(ec != nullptr)
        {
            children["ec"] = ec;
        }
        else
        {
            ec = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec>();
            ec->parent = this;
            children["ec"] = ec;
        }
        return children.at("ec");
    }

    if(child_yang_name == "eoc")
    {
        if(eoc != nullptr)
        {
            children["eoc"] = eoc;
        }
        else
        {
            eoc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc>();
            eoc->parent = this;
            children["eoc"] = eoc;
        }
        return children.at("eoc");
    }

    if(child_yang_name == "fec-mismatch")
    {
        if(fec_mismatch != nullptr)
        {
            children["fec-mismatch"] = fec_mismatch;
        }
        else
        {
            fec_mismatch = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch>();
            fec_mismatch->parent = this;
            children["fec-mismatch"] = fec_mismatch;
        }
        return children.at("fec-mismatch");
    }

    if(child_yang_name == "fecunc")
    {
        if(fecunc != nullptr)
        {
            children["fecunc"] = fecunc;
        }
        else
        {
            fecunc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc>();
            fecunc->parent = this;
            children["fecunc"] = fecunc;
        }
        return children.at("fecunc");
    }

    if(child_yang_name == "iae")
    {
        if(iae != nullptr)
        {
            children["iae"] = iae;
        }
        else
        {
            iae = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae>();
            iae->parent = this;
            children["iae"] = iae;
        }
        return children.at("iae");
    }

    if(child_yang_name == "lof")
    {
        if(lof != nullptr)
        {
            children["lof"] = lof;
        }
        else
        {
            lof = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof>();
            lof->parent = this;
            children["lof"] = lof;
        }
        return children.at("lof");
    }

    if(child_yang_name == "lom")
    {
        if(lom != nullptr)
        {
            children["lom"] = lom;
        }
        else
        {
            lom = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom>();
            lom->parent = this;
            children["lom"] = lom;
        }
        return children.at("lom");
    }

    if(child_yang_name == "los")
    {
        if(los != nullptr)
        {
            children["los"] = los;
        }
        else
        {
            los = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Los>();
            los->parent = this;
            children["los"] = los;
        }
        return children.at("los");
    }

    if(child_yang_name == "oof")
    {
        if(oof != nullptr)
        {
            children["oof"] = oof;
        }
        else
        {
            oof = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof>();
            oof->parent = this;
            children["oof"] = oof;
        }
        return children.at("oof");
    }

    if(child_yang_name == "oom")
    {
        if(oom != nullptr)
        {
            children["oom"] = oom;
        }
        else
        {
            oom = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom>();
            oom->parent = this;
            children["oom"] = oom;
        }
        return children.at("oom");
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber != nullptr)
        {
            children["sd-ber"] = sd_ber;
        }
        else
        {
            sd_ber = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer>();
            sd_ber->parent = this;
            children["sd-ber"] = sd_ber;
        }
        return children.at("sd-ber");
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber != nullptr)
        {
            children["sf-ber"] = sf_ber;
        }
        else
        {
            sf_ber = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer>();
            sf_ber->parent = this;
            children["sf-ber"] = sf_ber;
        }
        return children.at("sf-ber");
    }

    if(child_yang_name == "tim")
    {
        if(tim != nullptr)
        {
            children["tim"] = tim;
        }
        else
        {
            tim = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim>();
            tim->parent = this;
            children["tim"] = tim;
        }
        return children.at("tim");
    }

    if(child_yang_name == "uc")
    {
        if(uc != nullptr)
        {
            children["uc"] = uc;
        }
        else
        {
            uc = std::make_shared<Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc>();
            uc->parent = this;
            children["uc"] = uc;
        }
        return children.at("uc");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::get_children()
{
    if(children.find("ais") == children.end())
    {
        if(ais != nullptr)
        {
            children["ais"] = ais;
        }
    }

    if(children.find("bdi") == children.end())
    {
        if(bdi != nullptr)
        {
            children["bdi"] = bdi;
        }
    }

    if(children.find("biae") == children.end())
    {
        if(biae != nullptr)
        {
            children["biae"] = biae;
        }
    }

    if(children.find("ec") == children.end())
    {
        if(ec != nullptr)
        {
            children["ec"] = ec;
        }
    }

    if(children.find("eoc") == children.end())
    {
        if(eoc != nullptr)
        {
            children["eoc"] = eoc;
        }
    }

    if(children.find("fec-mismatch") == children.end())
    {
        if(fec_mismatch != nullptr)
        {
            children["fec-mismatch"] = fec_mismatch;
        }
    }

    if(children.find("fecunc") == children.end())
    {
        if(fecunc != nullptr)
        {
            children["fecunc"] = fecunc;
        }
    }

    if(children.find("iae") == children.end())
    {
        if(iae != nullptr)
        {
            children["iae"] = iae;
        }
    }

    if(children.find("lof") == children.end())
    {
        if(lof != nullptr)
        {
            children["lof"] = lof;
        }
    }

    if(children.find("lom") == children.end())
    {
        if(lom != nullptr)
        {
            children["lom"] = lom;
        }
    }

    if(children.find("los") == children.end())
    {
        if(los != nullptr)
        {
            children["los"] = los;
        }
    }

    if(children.find("oof") == children.end())
    {
        if(oof != nullptr)
        {
            children["oof"] = oof;
        }
    }

    if(children.find("oom") == children.end())
    {
        if(oom != nullptr)
        {
            children["oom"] = oom;
        }
    }

    if(children.find("sd-ber") == children.end())
    {
        if(sd_ber != nullptr)
        {
            children["sd-ber"] = sd_ber;
        }
    }

    if(children.find("sf-ber") == children.end())
    {
        if(sf_ber != nullptr)
        {
            children["sf-ber"] = sf_ber;
        }
    }

    if(children.find("tim") == children.end())
    {
        if(tim != nullptr)
        {
            children["tim"] = tim;
        }
    }

    if(children.find("uc") == children.end())
    {
        if(uc != nullptr)
        {
            children["uc"] = uc;
        }
    }

    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::set_value(const std::string & value_path, std::string value)
{
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::Los()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "los"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::~Los()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "los";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Los' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Los::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::Lof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "lof"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::~Lof()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lof";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lof' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::Lom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "lom"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::~Lom()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lom";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lom' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::Oof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "oof"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::~Oof()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oof";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oof' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::Oom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "oom"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::~Oom()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oom";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oom' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::Ais()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "ais"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::~Ais()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ais' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::Iae()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "iae"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::~Iae()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iae";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Iae' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::Biae()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "biae"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::~Biae()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "biae";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Biae' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::Bdi()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "bdi"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::~Bdi()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bdi' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::Tim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "tim"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::~Tim()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tim' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::Eoc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "eoc"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::~Eoc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eoc' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::FecMismatch()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "fec-mismatch"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::~FecMismatch()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-mismatch";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecMismatch' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::SfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "sf-ber"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::~SfBer()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfBer' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::SdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "sd-ber"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::~SdBer()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SdBer' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::Ec()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "ec"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::~Ec()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ec' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::Uc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "uc"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::~Uc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uc' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::Fecunc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{
    yang_name = "fecunc"; yang_parent_name = "otu-alarm-info";
}

Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::~Fecunc()
{
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(is_asserted.operation)
	|| is_set(is_detected.operation)
	|| is_set(reporting_enabled.operation);
}

std::string Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fecunc";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fecunc' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.operation)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.operation)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.operation)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
    }
}

Otu::Controllers::Controller::Info::Proactive::Proactive()
    :
    config_sec_state{YType::enumeration, "config-sec-state"},
    inherit_sec_state{YType::enumeration, "inherit-sec-state"},
    proactive_fsm_if_state{YType::enumeration, "proactive-fsm-if-state"},
    proactive_fsm_state{YType::enumeration, "proactive-fsm-state"},
    proactive_status{YType::boolean, "proactive-status"},
    revert_window{YType::uint32, "revert-window"},
    rvrt_thresh_coeff{YType::uint8, "rvrt-thresh-coeff"},
    rvrt_thresh_power{YType::uint8, "rvrt-thresh-power"},
    trig_thresh_coeff{YType::uint8, "trig-thresh-coeff"},
    trig_thresh_power{YType::uint8, "trig-thresh-power"},
    trigger_window{YType::uint32, "trigger-window"}
{
    yang_name = "proactive"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::Proactive::~Proactive()
{
}

bool Otu::Controllers::Controller::Info::Proactive::has_data() const
{
    return config_sec_state.is_set
	|| inherit_sec_state.is_set
	|| proactive_fsm_if_state.is_set
	|| proactive_fsm_state.is_set
	|| proactive_status.is_set
	|| revert_window.is_set
	|| rvrt_thresh_coeff.is_set
	|| rvrt_thresh_power.is_set
	|| trig_thresh_coeff.is_set
	|| trig_thresh_power.is_set
	|| trigger_window.is_set;
}

bool Otu::Controllers::Controller::Info::Proactive::has_operation() const
{
    return is_set(operation)
	|| is_set(config_sec_state.operation)
	|| is_set(inherit_sec_state.operation)
	|| is_set(proactive_fsm_if_state.operation)
	|| is_set(proactive_fsm_state.operation)
	|| is_set(proactive_status.operation)
	|| is_set(revert_window.operation)
	|| is_set(rvrt_thresh_coeff.operation)
	|| is_set(rvrt_thresh_power.operation)
	|| is_set(trig_thresh_coeff.operation)
	|| is_set(trig_thresh_power.operation)
	|| is_set(trigger_window.operation);
}

std::string Otu::Controllers::Controller::Info::Proactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::Proactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proactive' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_sec_state.is_set || is_set(config_sec_state.operation)) leaf_name_data.push_back(config_sec_state.get_name_leafdata());
    if (inherit_sec_state.is_set || is_set(inherit_sec_state.operation)) leaf_name_data.push_back(inherit_sec_state.get_name_leafdata());
    if (proactive_fsm_if_state.is_set || is_set(proactive_fsm_if_state.operation)) leaf_name_data.push_back(proactive_fsm_if_state.get_name_leafdata());
    if (proactive_fsm_state.is_set || is_set(proactive_fsm_state.operation)) leaf_name_data.push_back(proactive_fsm_state.get_name_leafdata());
    if (proactive_status.is_set || is_set(proactive_status.operation)) leaf_name_data.push_back(proactive_status.get_name_leafdata());
    if (revert_window.is_set || is_set(revert_window.operation)) leaf_name_data.push_back(revert_window.get_name_leafdata());
    if (rvrt_thresh_coeff.is_set || is_set(rvrt_thresh_coeff.operation)) leaf_name_data.push_back(rvrt_thresh_coeff.get_name_leafdata());
    if (rvrt_thresh_power.is_set || is_set(rvrt_thresh_power.operation)) leaf_name_data.push_back(rvrt_thresh_power.get_name_leafdata());
    if (trig_thresh_coeff.is_set || is_set(trig_thresh_coeff.operation)) leaf_name_data.push_back(trig_thresh_coeff.get_name_leafdata());
    if (trig_thresh_power.is_set || is_set(trig_thresh_power.operation)) leaf_name_data.push_back(trig_thresh_power.get_name_leafdata());
    if (trigger_window.is_set || is_set(trigger_window.operation)) leaf_name_data.push_back(trigger_window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::Proactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::Proactive::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::Proactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config-sec-state")
    {
        config_sec_state = value;
    }
    if(value_path == "inherit-sec-state")
    {
        inherit_sec_state = value;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state = value;
    }
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state = value;
    }
    if(value_path == "proactive-status")
    {
        proactive_status = value;
    }
    if(value_path == "revert-window")
    {
        revert_window = value;
    }
    if(value_path == "rvrt-thresh-coeff")
    {
        rvrt_thresh_coeff = value;
    }
    if(value_path == "rvrt-thresh-power")
    {
        rvrt_thresh_power = value;
    }
    if(value_path == "trig-thresh-coeff")
    {
        trig_thresh_coeff = value;
    }
    if(value_path == "trig-thresh-power")
    {
        trig_thresh_power = value;
    }
    if(value_path == "trigger-window")
    {
        trigger_window = value;
    }
}

Otu::Controllers::Controller::Info::OtuFecSatistics::OtuFecSatistics()
    :
    post_fec_ber{YType::str, "post-fec-ber"},
    pre_fec_ber{YType::str, "pre-fec-ber"}
{
    yang_name = "otu-fec-satistics"; yang_parent_name = "info";
}

Otu::Controllers::Controller::Info::OtuFecSatistics::~OtuFecSatistics()
{
}

bool Otu::Controllers::Controller::Info::OtuFecSatistics::has_data() const
{
    return post_fec_ber.is_set
	|| pre_fec_ber.is_set;
}

bool Otu::Controllers::Controller::Info::OtuFecSatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(post_fec_ber.operation)
	|| is_set(pre_fec_ber.operation);
}

std::string Otu::Controllers::Controller::Info::OtuFecSatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-fec-satistics";

    return path_buffer.str();

}

EntityPath Otu::Controllers::Controller::Info::OtuFecSatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuFecSatistics' in Cisco_IOS_XR_controller_otu_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_fec_ber.is_set || is_set(post_fec_ber.operation)) leaf_name_data.push_back(post_fec_ber.get_name_leafdata());
    if (pre_fec_ber.is_set || is_set(pre_fec_ber.operation)) leaf_name_data.push_back(pre_fec_ber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Otu::Controllers::Controller::Info::OtuFecSatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Otu::Controllers::Controller::Info::OtuFecSatistics::get_children()
{
    return children;
}

void Otu::Controllers::Controller::Info::OtuFecSatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "post-fec-ber")
    {
        post_fec_ber = value;
    }
    if(value_path == "pre-fec-ber")
    {
        pre_fec_ber = value;
    }
}

const Enum::YLeaf OtuStateEtEnum::not_ready {0, "not-ready"};
const Enum::YLeaf OtuStateEtEnum::admin_down {1, "admin-down"};
const Enum::YLeaf OtuStateEtEnum::down {2, "down"};
const Enum::YLeaf OtuStateEtEnum::up {3, "up"};
const Enum::YLeaf OtuStateEtEnum::shutdown {4, "shutdown"};
const Enum::YLeaf OtuStateEtEnum::error_disable {5, "error-disable"};
const Enum::YLeaf OtuStateEtEnum::down_immediate {6, "down-immediate"};
const Enum::YLeaf OtuStateEtEnum::down_immediate_admin {7, "down-immediate-admin"};
const Enum::YLeaf OtuStateEtEnum::down_graceful {8, "down-graceful"};
const Enum::YLeaf OtuStateEtEnum::begin_shutdown {9, "begin-shutdown"};
const Enum::YLeaf OtuStateEtEnum::end_shutdown {10, "end-shutdown"};
const Enum::YLeaf OtuStateEtEnum::begin_error_disable {11, "begin-error-disable"};
const Enum::YLeaf OtuStateEtEnum::end_error_disable {12, "end-error-disable"};
const Enum::YLeaf OtuStateEtEnum::begin_down_graceful {13, "begin-down-graceful"};
const Enum::YLeaf OtuStateEtEnum::reset {14, "reset"};
const Enum::YLeaf OtuStateEtEnum::operational {15, "operational"};
const Enum::YLeaf OtuStateEtEnum::not_operational {16, "not-operational"};
const Enum::YLeaf OtuStateEtEnum::unknown {17, "unknown"};
const Enum::YLeaf OtuStateEtEnum::last {18, "last"};

const Enum::YLeaf OtuPerMonEnum::disable {0, "disable"};
const Enum::YLeaf OtuPerMonEnum::enable {1, "enable"};

const Enum::YLeaf OtuPpIntfStateEnum::otu_pp_intf_up {0, "otu-pp-intf-up"};
const Enum::YLeaf OtuPpIntfStateEnum::otu_pp_intf_failing {1, "otu-pp-intf-failing"};
const Enum::YLeaf OtuPpIntfStateEnum::otu_pp_intf_down {2, "otu-pp-intf-down"};

const Enum::YLeaf OtuPpFsmStateEnum::otu_in_active {0, "otu-in-active"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_disabled {1, "otu-disabled"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_normal_state {2, "otu-normal-state"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_local_failing {3, "otu-local-failing"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_remote_failing {4, "otu-remote-failing"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_main_t_failing {5, "otu-main-t-failing"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_regen_failing {6, "otu-regen-failing"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_local_failed {7, "otu-local-failed"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_remote_failed {8, "otu-remote-failed"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_main_t_failed {9, "otu-main-t-failed"};
const Enum::YLeaf OtuPpFsmStateEnum::otu_regen_failed {10, "otu-regen-failed"};

const Enum::YLeaf OtuTtiEtEnum::ascii {0, "ascii"};
const Enum::YLeaf OtuTtiEtEnum::hex {1, "hex"};
const Enum::YLeaf OtuTtiEtEnum::full_ascii {2, "full-ascii"};
const Enum::YLeaf OtuTtiEtEnum::full_hex {3, "full-hex"};

const Enum::YLeaf OtuG709FecModeEnum::otu_bag_none_fec {1, "otu-bag-none-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_standard_fec {2, "otu-bag-standard-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_1_i_7_fec {4, "otu-bag-1-i-7-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_1_i_4_fec {8, "otu-bag-1-i-4-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_swizzle_fec {16, "otu-bag-swizzle-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_hg20_fec {32, "otu-bag-hg20-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_enhanced_hg7_fec {64, "otu-bag-enhanced-hg7-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_sd20_fec {128, "otu-bag-sd20-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_sd7_fec {256, "otu-bag-sd7-fec"};
const Enum::YLeaf OtuG709FecModeEnum::otu_bag_all_fec {512, "otu-bag-all-fec"};

const Enum::YLeaf OtuSecStateEnum::normal {0, "normal"};
const Enum::YLeaf OtuSecStateEnum::maintenance {1, "maintenance"};
const Enum::YLeaf OtuSecStateEnum::ais {2, "ais"};

const Enum::YLeaf OtuLoopBackModeEnum::none {1, "none"};
const Enum::YLeaf OtuLoopBackModeEnum::line {2, "line"};
const Enum::YLeaf OtuLoopBackModeEnum::internal {4, "internal"};

const Enum::YLeaf GmplsOtuTtiModeEnum::gmpls_otu_tti_mode_none {0, "gmpls-otu-tti-mode-none"};
const Enum::YLeaf GmplsOtuTtiModeEnum::gmpls_otu_tti_mode_sm {1, "gmpls-otu-tti-mode-sm"};
const Enum::YLeaf GmplsOtuTtiModeEnum::gmpls_otu_tti_mode_pm {2, "gmpls-otu-tti-mode-pm"};
const Enum::YLeaf GmplsOtuTtiModeEnum::gmpls_otu_tti_mode_tcm {3, "gmpls-otu-tti-mode-tcm"};

const Enum::YLeaf OtuDerStateEnum::out_of_service {0, "out-of-service"};
const Enum::YLeaf OtuDerStateEnum::in_service {1, "in-service"};
const Enum::YLeaf OtuDerStateEnum::maintenance {2, "maintenance"};
const Enum::YLeaf OtuDerStateEnum::ais {3, "ais"};


}
}

