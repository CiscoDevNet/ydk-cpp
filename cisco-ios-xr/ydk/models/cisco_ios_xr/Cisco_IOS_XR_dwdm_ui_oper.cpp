
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dwdm_ui_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dwdm_ui_oper {

Dwdm::Dwdm()
    :
    ports(std::make_shared<Dwdm::Ports>())
{
    ports->parent = this;

    yang_name = "dwdm"; yang_parent_name = "Cisco-IOS-XR-dwdm-ui-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Dwdm::~Dwdm()
{
}

bool Dwdm::has_data() const
{
    return (ports !=  nullptr && ports->has_data());
}

bool Dwdm::has_operation() const
{
    return is_set(yfilter)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        if(ports == nullptr)
        {
            ports = std::make_shared<Dwdm::Ports>();
        }
        return ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ports != nullptr)
    {
        children["ports"] = ports;
    }

    return children;
}

void Dwdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dwdm::clone_ptr() const
{
    return std::make_shared<Dwdm>();
}

std::string Dwdm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dwdm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dwdm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dwdm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dwdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports")
        return true;
    return false;
}

Dwdm::Ports::Ports()
{

    yang_name = "ports"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = false;
}

Dwdm::Ports::~Ports()
{
}

bool Dwdm::Ports::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Dwdm::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dwdm::Ports::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm/" << get_segment_path();
    return path_buffer.str();
}

std::string Dwdm::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dwdm::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Dwdm::Ports::Port::Port()
    :
    name{YType::str, "name"}
    	,
    info(std::make_shared<Dwdm::Ports::Port::Info>())
	,optics(std::make_shared<Dwdm::Ports::Port::Optics>())
	,prbs(std::make_shared<Dwdm::Ports::Port::Prbs>())
{
    info->parent = this;
    optics->parent = this;
    prbs->parent = this;

    yang_name = "port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = false;
}

Dwdm::Ports::Port::~Port()
{
}

bool Dwdm::Ports::Port::has_data() const
{
    return name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (prbs !=  nullptr && prbs->has_data());
}

bool Dwdm::Ports::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation());
}

std::string Dwdm::Ports::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:dwdm/ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Dwdm::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Dwdm::Ports::Port::Info>();
        }
        return info;
    }

    if(child_yang_name == "optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<Dwdm::Ports::Port::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<Dwdm::Ports::Port::Prbs>();
        }
        return prbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(optics != nullptr)
    {
        children["optics"] = optics;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    return children;
}

void Dwdm::Ports::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "optics" || name == "prbs" || name == "name")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::Info()
    :
    controller_state{YType::enumeration, "controller-state"},
    slice_state{YType::boolean, "slice-state"},
    transport_admin_state{YType::enumeration, "transport-admin-state"}
    	,
    g709_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info>())
	,network_srlg_info(std::make_shared<Dwdm::Ports::Port::Info::NetworkSrlgInfo>())
	,optics_info(std::make_shared<Dwdm::Ports::Port::Info::OpticsInfo>())
	,proactive(std::make_shared<Dwdm::Ports::Port::Info::Proactive>())
	,signal_log(std::make_shared<Dwdm::Ports::Port::Info::SignalLog>())
	,tdc_info(std::make_shared<Dwdm::Ports::Port::Info::TdcInfo>())
{
    g709_info->parent = this;
    network_srlg_info->parent = this;
    optics_info->parent = this;
    proactive->parent = this;
    signal_log->parent = this;
    tdc_info->parent = this;

    yang_name = "info"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::~Info()
{
}

bool Dwdm::Ports::Port::Info::has_data() const
{
    return controller_state.is_set
	|| slice_state.is_set
	|| transport_admin_state.is_set
	|| (g709_info !=  nullptr && g709_info->has_data())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_data())
	|| (optics_info !=  nullptr && optics_info->has_data())
	|| (proactive !=  nullptr && proactive->has_data())
	|| (signal_log !=  nullptr && signal_log->has_data())
	|| (tdc_info !=  nullptr && tdc_info->has_data());
}

bool Dwdm::Ports::Port::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_state.yfilter)
	|| ydk::is_set(slice_state.yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| (g709_info !=  nullptr && g709_info->has_operation())
	|| (network_srlg_info !=  nullptr && network_srlg_info->has_operation())
	|| (optics_info !=  nullptr && optics_info->has_operation())
	|| (proactive !=  nullptr && proactive->has_operation())
	|| (signal_log !=  nullptr && signal_log->has_operation())
	|| (tdc_info !=  nullptr && tdc_info->has_operation());
}

std::string Dwdm::Ports::Port::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_state.is_set || is_set(controller_state.yfilter)) leaf_name_data.push_back(controller_state.get_name_leafdata());
    if (slice_state.is_set || is_set(slice_state.yfilter)) leaf_name_data.push_back(slice_state.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709-info")
    {
        if(g709_info == nullptr)
        {
            g709_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info>();
        }
        return g709_info;
    }

    if(child_yang_name == "network-srlg-info")
    {
        if(network_srlg_info == nullptr)
        {
            network_srlg_info = std::make_shared<Dwdm::Ports::Port::Info::NetworkSrlgInfo>();
        }
        return network_srlg_info;
    }

    if(child_yang_name == "optics-info")
    {
        if(optics_info == nullptr)
        {
            optics_info = std::make_shared<Dwdm::Ports::Port::Info::OpticsInfo>();
        }
        return optics_info;
    }

    if(child_yang_name == "proactive")
    {
        if(proactive == nullptr)
        {
            proactive = std::make_shared<Dwdm::Ports::Port::Info::Proactive>();
        }
        return proactive;
    }

    if(child_yang_name == "signal-log")
    {
        if(signal_log == nullptr)
        {
            signal_log = std::make_shared<Dwdm::Ports::Port::Info::SignalLog>();
        }
        return signal_log;
    }

    if(child_yang_name == "tdc-info")
    {
        if(tdc_info == nullptr)
        {
            tdc_info = std::make_shared<Dwdm::Ports::Port::Info::TdcInfo>();
        }
        return tdc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709_info != nullptr)
    {
        children["g709-info"] = g709_info;
    }

    if(network_srlg_info != nullptr)
    {
        children["network-srlg-info"] = network_srlg_info;
    }

    if(optics_info != nullptr)
    {
        children["optics-info"] = optics_info;
    }

    if(proactive != nullptr)
    {
        children["proactive"] = proactive;
    }

    if(signal_log != nullptr)
    {
        children["signal-log"] = signal_log;
    }

    if(tdc_info != nullptr)
    {
        children["tdc-info"] = tdc_info;
    }

    return children;
}

void Dwdm::Ports::Port::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-state")
    {
        controller_state = value;
        controller_state.value_namespace = name_space;
        controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slice-state")
    {
        slice_state = value;
        slice_state.value_namespace = name_space;
        slice_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-state")
    {
        controller_state.yfilter = yfilter;
    }
    if(value_path == "slice-state")
    {
        slice_state.yfilter = yfilter;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709-info" || name == "network-srlg-info" || name == "optics-info" || name == "proactive" || name == "signal-log" || name == "tdc-info" || name == "controller-state" || name == "slice-state" || name == "transport-admin-state")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::G709Info()
    :
    ec{YType::uint64, "ec"},
    ec_accum{YType::uint64, "ec-accum"},
    efec_mode{YType::enumeration, "efec-mode"},
    fe_cstr{YType::str, "fe-cstr"},
    fec_ber{YType::uint64, "fec-ber"},
    fec_ber_man{YType::int32, "fec-ber-man"},
    fec_mode{YType::int32, "fec-mode"},
    g709_prbs_mode{YType::enumeration, "g709-prbs-mode"},
    g709_prbs_pattern{YType::enumeration, "g709-prbs-pattern"},
    is_fec_mode_default{YType::boolean, "is-fec-mode-default"},
    is_g709_enabled{YType::boolean, "is-g709-enabled"},
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    loopback_mode{YType::int32, "loopback-mode"},
    network_conn_id{YType::str, "network-conn-id"},
    network_port_id{YType::str, "network-port-id"},
    prbs_time_stamp{YType::uint64, "prbs-time-stamp"},
    q{YType::uint64, "q"},
    q_margin{YType::uint64, "q-margin"},
    qmargin_str{YType::str, "qmargin-str"},
    qstr{YType::str, "qstr"},
    remote_fec_mode{YType::int32, "remote-fec-mode"},
    uc{YType::uint64, "uc"}
    	,
    ec_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::EcTca>())
	,fec_mismatch(std::make_shared<Dwdm::Ports::Port::Info::G709Info::FecMismatch>())
	,odu_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo>())
	,otu_info(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo>())
	,uc_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::UcTca>())
{
    ec_tca->parent = this;
    fec_mismatch->parent = this;
    odu_info->parent = this;
    otu_info->parent = this;
    uc_tca->parent = this;

    yang_name = "g709-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::~G709Info()
{
}

bool Dwdm::Ports::Port::Info::G709Info::has_data() const
{
    return ec.is_set
	|| ec_accum.is_set
	|| efec_mode.is_set
	|| fe_cstr.is_set
	|| fec_ber.is_set
	|| fec_ber_man.is_set
	|| fec_mode.is_set
	|| g709_prbs_mode.is_set
	|| g709_prbs_pattern.is_set
	|| is_fec_mode_default.is_set
	|| is_g709_enabled.is_set
	|| is_prbs_enabled.is_set
	|| loopback_mode.is_set
	|| network_conn_id.is_set
	|| network_port_id.is_set
	|| prbs_time_stamp.is_set
	|| q.is_set
	|| q_margin.is_set
	|| qmargin_str.is_set
	|| qstr.is_set
	|| remote_fec_mode.is_set
	|| uc.is_set
	|| (ec_tca !=  nullptr && ec_tca->has_data())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_data())
	|| (odu_info !=  nullptr && odu_info->has_data())
	|| (otu_info !=  nullptr && otu_info->has_data())
	|| (uc_tca !=  nullptr && uc_tca->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ec.yfilter)
	|| ydk::is_set(ec_accum.yfilter)
	|| ydk::is_set(efec_mode.yfilter)
	|| ydk::is_set(fe_cstr.yfilter)
	|| ydk::is_set(fec_ber.yfilter)
	|| ydk::is_set(fec_ber_man.yfilter)
	|| ydk::is_set(fec_mode.yfilter)
	|| ydk::is_set(g709_prbs_mode.yfilter)
	|| ydk::is_set(g709_prbs_pattern.yfilter)
	|| ydk::is_set(is_fec_mode_default.yfilter)
	|| ydk::is_set(is_g709_enabled.yfilter)
	|| ydk::is_set(is_prbs_enabled.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(network_conn_id.yfilter)
	|| ydk::is_set(network_port_id.yfilter)
	|| ydk::is_set(prbs_time_stamp.yfilter)
	|| ydk::is_set(q.yfilter)
	|| ydk::is_set(q_margin.yfilter)
	|| ydk::is_set(qmargin_str.yfilter)
	|| ydk::is_set(qstr.yfilter)
	|| ydk::is_set(remote_fec_mode.yfilter)
	|| ydk::is_set(uc.yfilter)
	|| (ec_tca !=  nullptr && ec_tca->has_operation())
	|| (fec_mismatch !=  nullptr && fec_mismatch->has_operation())
	|| (odu_info !=  nullptr && odu_info->has_operation())
	|| (otu_info !=  nullptr && otu_info->has_operation())
	|| (uc_tca !=  nullptr && uc_tca->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ec.is_set || is_set(ec.yfilter)) leaf_name_data.push_back(ec.get_name_leafdata());
    if (ec_accum.is_set || is_set(ec_accum.yfilter)) leaf_name_data.push_back(ec_accum.get_name_leafdata());
    if (efec_mode.is_set || is_set(efec_mode.yfilter)) leaf_name_data.push_back(efec_mode.get_name_leafdata());
    if (fe_cstr.is_set || is_set(fe_cstr.yfilter)) leaf_name_data.push_back(fe_cstr.get_name_leafdata());
    if (fec_ber.is_set || is_set(fec_ber.yfilter)) leaf_name_data.push_back(fec_ber.get_name_leafdata());
    if (fec_ber_man.is_set || is_set(fec_ber_man.yfilter)) leaf_name_data.push_back(fec_ber_man.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.yfilter)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (g709_prbs_mode.is_set || is_set(g709_prbs_mode.yfilter)) leaf_name_data.push_back(g709_prbs_mode.get_name_leafdata());
    if (g709_prbs_pattern.is_set || is_set(g709_prbs_pattern.yfilter)) leaf_name_data.push_back(g709_prbs_pattern.get_name_leafdata());
    if (is_fec_mode_default.is_set || is_set(is_fec_mode_default.yfilter)) leaf_name_data.push_back(is_fec_mode_default.get_name_leafdata());
    if (is_g709_enabled.is_set || is_set(is_g709_enabled.yfilter)) leaf_name_data.push_back(is_g709_enabled.get_name_leafdata());
    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.yfilter)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (network_conn_id.is_set || is_set(network_conn_id.yfilter)) leaf_name_data.push_back(network_conn_id.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.yfilter)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (prbs_time_stamp.is_set || is_set(prbs_time_stamp.yfilter)) leaf_name_data.push_back(prbs_time_stamp.get_name_leafdata());
    if (q.is_set || is_set(q.yfilter)) leaf_name_data.push_back(q.get_name_leafdata());
    if (q_margin.is_set || is_set(q_margin.yfilter)) leaf_name_data.push_back(q_margin.get_name_leafdata());
    if (qmargin_str.is_set || is_set(qmargin_str.yfilter)) leaf_name_data.push_back(qmargin_str.get_name_leafdata());
    if (qstr.is_set || is_set(qstr.yfilter)) leaf_name_data.push_back(qstr.get_name_leafdata());
    if (remote_fec_mode.is_set || is_set(remote_fec_mode.yfilter)) leaf_name_data.push_back(remote_fec_mode.get_name_leafdata());
    if (uc.is_set || is_set(uc.yfilter)) leaf_name_data.push_back(uc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-tca")
    {
        if(ec_tca == nullptr)
        {
            ec_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::EcTca>();
        }
        return ec_tca;
    }

    if(child_yang_name == "fec-mismatch")
    {
        if(fec_mismatch == nullptr)
        {
            fec_mismatch = std::make_shared<Dwdm::Ports::Port::Info::G709Info::FecMismatch>();
        }
        return fec_mismatch;
    }

    if(child_yang_name == "odu-info")
    {
        if(odu_info == nullptr)
        {
            odu_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo>();
        }
        return odu_info;
    }

    if(child_yang_name == "otu-info")
    {
        if(otu_info == nullptr)
        {
            otu_info = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo>();
        }
        return otu_info;
    }

    if(child_yang_name == "uc-tca")
    {
        if(uc_tca == nullptr)
        {
            uc_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::UcTca>();
        }
        return uc_tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_tca != nullptr)
    {
        children["ec-tca"] = ec_tca;
    }

    if(fec_mismatch != nullptr)
    {
        children["fec-mismatch"] = fec_mismatch;
    }

    if(odu_info != nullptr)
    {
        children["odu-info"] = odu_info;
    }

    if(otu_info != nullptr)
    {
        children["otu-info"] = otu_info;
    }

    if(uc_tca != nullptr)
    {
        children["uc-tca"] = uc_tca;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ec")
    {
        ec = value;
        ec.value_namespace = name_space;
        ec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ec-accum")
    {
        ec_accum = value;
        ec_accum.value_namespace = name_space;
        ec_accum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "efec-mode")
    {
        efec_mode = value;
        efec_mode.value_namespace = name_space;
        efec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-cstr")
    {
        fe_cstr = value;
        fe_cstr.value_namespace = name_space;
        fe_cstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ber")
    {
        fec_ber = value;
        fec_ber.value_namespace = name_space;
        fec_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ber-man")
    {
        fec_ber_man = value;
        fec_ber_man.value_namespace = name_space;
        fec_ber_man.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
        fec_mode.value_namespace = name_space;
        fec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709-prbs-mode")
    {
        g709_prbs_mode = value;
        g709_prbs_mode.value_namespace = name_space;
        g709_prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "g709-prbs-pattern")
    {
        g709_prbs_pattern = value;
        g709_prbs_pattern.value_namespace = name_space;
        g709_prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fec-mode-default")
    {
        is_fec_mode_default = value;
        is_fec_mode_default.value_namespace = name_space;
        is_fec_mode_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-g709-enabled")
    {
        is_g709_enabled = value;
        is_g709_enabled.value_namespace = name_space;
        is_g709_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
        is_prbs_enabled.value_namespace = name_space;
        is_prbs_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-conn-id")
    {
        network_conn_id = value;
        network_conn_id.value_namespace = name_space;
        network_conn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
        network_port_id.value_namespace = name_space;
        network_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-time-stamp")
    {
        prbs_time_stamp = value;
        prbs_time_stamp.value_namespace = name_space;
        prbs_time_stamp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "qmargin-str")
    {
        qmargin_str = value;
        qmargin_str.value_namespace = name_space;
        qmargin_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qstr")
    {
        qstr = value;
        qstr.value_namespace = name_space;
        qstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-fec-mode")
    {
        remote_fec_mode = value;
        remote_fec_mode.value_namespace = name_space;
        remote_fec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc")
    {
        uc = value;
        uc.value_namespace = name_space;
        uc.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ec")
    {
        ec.yfilter = yfilter;
    }
    if(value_path == "ec-accum")
    {
        ec_accum.yfilter = yfilter;
    }
    if(value_path == "efec-mode")
    {
        efec_mode.yfilter = yfilter;
    }
    if(value_path == "fe-cstr")
    {
        fe_cstr.yfilter = yfilter;
    }
    if(value_path == "fec-ber")
    {
        fec_ber.yfilter = yfilter;
    }
    if(value_path == "fec-ber-man")
    {
        fec_ber_man.yfilter = yfilter;
    }
    if(value_path == "fec-mode")
    {
        fec_mode.yfilter = yfilter;
    }
    if(value_path == "g709-prbs-mode")
    {
        g709_prbs_mode.yfilter = yfilter;
    }
    if(value_path == "g709-prbs-pattern")
    {
        g709_prbs_pattern.yfilter = yfilter;
    }
    if(value_path == "is-fec-mode-default")
    {
        is_fec_mode_default.yfilter = yfilter;
    }
    if(value_path == "is-g709-enabled")
    {
        is_g709_enabled.yfilter = yfilter;
    }
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "network-conn-id")
    {
        network_conn_id.yfilter = yfilter;
    }
    if(value_path == "network-port-id")
    {
        network_port_id.yfilter = yfilter;
    }
    if(value_path == "prbs-time-stamp")
    {
        prbs_time_stamp.yfilter = yfilter;
    }
    if(value_path == "q")
    {
        q.yfilter = yfilter;
    }
    if(value_path == "q-margin")
    {
        q_margin.yfilter = yfilter;
    }
    if(value_path == "qmargin-str")
    {
        qmargin_str.yfilter = yfilter;
    }
    if(value_path == "qstr")
    {
        qstr.yfilter = yfilter;
    }
    if(value_path == "remote-fec-mode")
    {
        remote_fec_mode.yfilter = yfilter;
    }
    if(value_path == "uc")
    {
        uc.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-tca" || name == "fec-mismatch" || name == "odu-info" || name == "otu-info" || name == "uc-tca" || name == "ec" || name == "ec-accum" || name == "efec-mode" || name == "fe-cstr" || name == "fec-ber" || name == "fec-ber-man" || name == "fec-mode" || name == "g709-prbs-mode" || name == "g709-prbs-pattern" || name == "is-fec-mode-default" || name == "is-g709-enabled" || name == "is-prbs-enabled" || name == "loopback-mode" || name == "network-conn-id" || name == "network-port-id" || name == "prbs-time-stamp" || name == "q" || name == "q-margin" || name == "qmargin-str" || name == "qstr" || name == "remote-fec-mode" || name == "uc")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::EcTca::EcTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "ec-tca"; yang_parent_name = "g709-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::EcTca::~EcTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::EcTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::EcTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::EcTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::EcTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::EcTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::EcTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::EcTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::EcTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::EcTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::FecMismatch::FecMismatch()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "fec-mismatch"; yang_parent_name = "g709-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::FecMismatch::~FecMismatch()
{
}

bool Dwdm::Ports::Port::Info::G709Info::FecMismatch::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::FecMismatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::FecMismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::FecMismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::FecMismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::FecMismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::OduInfo()
    :
    bei{YType::uint64, "bei"},
    bip{YType::uint64, "bip"}
    	,
    ais(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais>())
	,bbe(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe>())
	,bbe_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca>())
	,bber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber>())
	,bdi(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi>())
	,eoc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc>())
	,es(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Es>())
	,es_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca>())
	,esr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr>())
	,fc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc>())
	,lck(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck>())
	,oci(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci>())
	,ptim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim>())
	,sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer>())
	,ses(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses>())
	,sesr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr>())
	,sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer>())
	,tim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim>())
	,tti(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti>())
	,uas(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas>())
{
    ais->parent = this;
    bbe->parent = this;
    bbe_tca->parent = this;
    bber->parent = this;
    bdi->parent = this;
    eoc->parent = this;
    es->parent = this;
    es_tca->parent = this;
    esr->parent = this;
    fc->parent = this;
    lck->parent = this;
    oci->parent = this;
    ptim->parent = this;
    sd_ber->parent = this;
    ses->parent = this;
    sesr->parent = this;
    sf_ber->parent = this;
    tim->parent = this;
    tti->parent = this;
    uas->parent = this;

    yang_name = "odu-info"; yang_parent_name = "g709-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::~OduInfo()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::has_data() const
{
    return bei.is_set
	|| bip.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (bbe !=  nullptr && bbe->has_data())
	|| (bbe_tca !=  nullptr && bbe_tca->has_data())
	|| (bber !=  nullptr && bber->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (es !=  nullptr && es->has_data())
	|| (es_tca !=  nullptr && es_tca->has_data())
	|| (esr !=  nullptr && esr->has_data())
	|| (fc !=  nullptr && fc->has_data())
	|| (lck !=  nullptr && lck->has_data())
	|| (oci !=  nullptr && oci->has_data())
	|| (ptim !=  nullptr && ptim->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (ses !=  nullptr && ses->has_data())
	|| (sesr !=  nullptr && sesr->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (tti !=  nullptr && tti->has_data())
	|| (uas !=  nullptr && uas->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bei.yfilter)
	|| ydk::is_set(bip.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (bbe !=  nullptr && bbe->has_operation())
	|| (bbe_tca !=  nullptr && bbe_tca->has_operation())
	|| (bber !=  nullptr && bber->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (es !=  nullptr && es->has_operation())
	|| (es_tca !=  nullptr && es_tca->has_operation())
	|| (esr !=  nullptr && esr->has_operation())
	|| (fc !=  nullptr && fc->has_operation())
	|| (lck !=  nullptr && lck->has_operation())
	|| (oci !=  nullptr && oci->has_operation())
	|| (ptim !=  nullptr && ptim->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (ses !=  nullptr && ses->has_operation())
	|| (sesr !=  nullptr && sesr->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (tti !=  nullptr && tti->has_operation())
	|| (uas !=  nullptr && uas->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bei.is_set || is_set(bei.yfilter)) leaf_name_data.push_back(bei.get_name_leafdata());
    if (bip.is_set || is_set(bip.yfilter)) leaf_name_data.push_back(bip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "bbe")
    {
        if(bbe == nullptr)
        {
            bbe = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe>();
        }
        return bbe;
    }

    if(child_yang_name == "bbe-tca")
    {
        if(bbe_tca == nullptr)
        {
            bbe_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca>();
        }
        return bbe_tca;
    }

    if(child_yang_name == "bber")
    {
        if(bber == nullptr)
        {
            bber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber>();
        }
        return bber;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "es")
    {
        if(es == nullptr)
        {
            es = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Es>();
        }
        return es;
    }

    if(child_yang_name == "es-tca")
    {
        if(es_tca == nullptr)
        {
            es_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca>();
        }
        return es_tca;
    }

    if(child_yang_name == "esr")
    {
        if(esr == nullptr)
        {
            esr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr>();
        }
        return esr;
    }

    if(child_yang_name == "fc")
    {
        if(fc == nullptr)
        {
            fc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc>();
        }
        return fc;
    }

    if(child_yang_name == "lck")
    {
        if(lck == nullptr)
        {
            lck = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck>();
        }
        return lck;
    }

    if(child_yang_name == "oci")
    {
        if(oci == nullptr)
        {
            oci = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci>();
        }
        return oci;
    }

    if(child_yang_name == "ptim")
    {
        if(ptim == nullptr)
        {
            ptim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim>();
        }
        return ptim;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "ses")
    {
        if(ses == nullptr)
        {
            ses = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses>();
        }
        return ses;
    }

    if(child_yang_name == "sesr")
    {
        if(sesr == nullptr)
        {
            sesr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr>();
        }
        return sesr;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "tti")
    {
        if(tti == nullptr)
        {
            tti = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti>();
        }
        return tti;
    }

    if(child_yang_name == "uas")
    {
        if(uas == nullptr)
        {
            uas = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas>();
        }
        return uas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(bbe != nullptr)
    {
        children["bbe"] = bbe;
    }

    if(bbe_tca != nullptr)
    {
        children["bbe-tca"] = bbe_tca;
    }

    if(bber != nullptr)
    {
        children["bber"] = bber;
    }

    if(bdi != nullptr)
    {
        children["bdi"] = bdi;
    }

    if(eoc != nullptr)
    {
        children["eoc"] = eoc;
    }

    if(es != nullptr)
    {
        children["es"] = es;
    }

    if(es_tca != nullptr)
    {
        children["es-tca"] = es_tca;
    }

    if(esr != nullptr)
    {
        children["esr"] = esr;
    }

    if(fc != nullptr)
    {
        children["fc"] = fc;
    }

    if(lck != nullptr)
    {
        children["lck"] = lck;
    }

    if(oci != nullptr)
    {
        children["oci"] = oci;
    }

    if(ptim != nullptr)
    {
        children["ptim"] = ptim;
    }

    if(sd_ber != nullptr)
    {
        children["sd-ber"] = sd_ber;
    }

    if(ses != nullptr)
    {
        children["ses"] = ses;
    }

    if(sesr != nullptr)
    {
        children["sesr"] = sesr;
    }

    if(sf_ber != nullptr)
    {
        children["sf-ber"] = sf_ber;
    }

    if(tim != nullptr)
    {
        children["tim"] = tim;
    }

    if(tti != nullptr)
    {
        children["tti"] = tti;
    }

    if(uas != nullptr)
    {
        children["uas"] = uas;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bei")
    {
        bei = value;
        bei.value_namespace = name_space;
        bei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bip")
    {
        bip = value;
        bip.value_namespace = name_space;
        bip.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bei")
    {
        bei.yfilter = yfilter;
    }
    if(value_path == "bip")
    {
        bip.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "bbe" || name == "bbe-tca" || name == "bber" || name == "bdi" || name == "eoc" || name == "es" || name == "es-tca" || name == "esr" || name == "fc" || name == "lck" || name == "oci" || name == "ptim" || name == "sd-ber" || name == "ses" || name == "sesr" || name == "sf-ber" || name == "tim" || name == "tti" || name == "uas" || name == "bei" || name == "bip")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::Ais()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "ais"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::~Ais()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::Bbe()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "bbe"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::~Bbe()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::BbeTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "bbe-tca"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::~BbeTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::BbeTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::Bber()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "bber"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::~Bber()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::Bdi()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "bdi"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::~Bdi()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::Eoc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "eoc"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::~Eoc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Eoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::Es()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "es"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::~Es()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Es::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::EsTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "es-tca"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::~EsTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::EsTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::Esr()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "esr"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::~Esr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Esr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::Fc()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "fc"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::~Fc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Fc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::Lck()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "lck"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::~Lck()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Lck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::Oci()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "oci"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::~Oci()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Oci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::Ptim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "ptim"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::~Ptim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ptim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::SdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "sd-ber"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::~SdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::Ses()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "ses"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::~Ses()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Ses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::Sesr()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "sesr"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::~Sesr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Sesr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::SfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "sf-ber"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::~SfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::Tim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "tim"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::~Tim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::Tti()
    :
    exp_dapi_range{YType::str, "exp-dapi-range"},
    exp_oper_spec_range{YType::str, "exp-oper-spec-range"},
    exp_sapi_range{YType::str, "exp-sapi-range"},
    expected_dapi{YType::str, "expected-dapi"},
    expected_dapi0{YType::str, "expected-dapi0"},
    expected_oper_spec{YType::str, "expected-oper-spec"},
    expected_sapi{YType::str, "expected-sapi"},
    expected_sapi0{YType::str, "expected-sapi0"},
    expected_string_type{YType::uint32, "expected-string-type"},
    expected_tti{YType::str, "expected-tti"},
    rx_dapi{YType::str, "rx-dapi"},
    rx_dapi0{YType::str, "rx-dapi0"},
    rx_dapi_range{YType::str, "rx-dapi-range"},
    rx_oper_spec{YType::str, "rx-oper-spec"},
    rx_oper_spec_range{YType::str, "rx-oper-spec-range"},
    rx_sapi{YType::str, "rx-sapi"},
    rx_sapi0{YType::str, "rx-sapi0"},
    rx_sapi_range{YType::str, "rx-sapi-range"},
    rx_string_type{YType::uint32, "rx-string-type"},
    rx_tti{YType::str, "rx-tti"},
    tx_dapi{YType::str, "tx-dapi"},
    tx_dapi0{YType::str, "tx-dapi0"},
    tx_dapi_range{YType::str, "tx-dapi-range"},
    tx_oper_spec{YType::str, "tx-oper-spec"},
    tx_oper_spec_range{YType::str, "tx-oper-spec-range"},
    tx_sapi{YType::str, "tx-sapi"},
    tx_sapi0{YType::str, "tx-sapi0"},
    tx_sapi_range{YType::str, "tx-sapi-range"},
    tx_string_type{YType::uint32, "tx-string-type"},
    tx_tti{YType::str, "tx-tti"}
{

    yang_name = "tti"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::~Tti()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::has_data() const
{
    return exp_dapi_range.is_set
	|| exp_oper_spec_range.is_set
	|| exp_sapi_range.is_set
	|| expected_dapi.is_set
	|| expected_dapi0.is_set
	|| expected_oper_spec.is_set
	|| expected_sapi.is_set
	|| expected_sapi0.is_set
	|| expected_string_type.is_set
	|| expected_tti.is_set
	|| rx_dapi.is_set
	|| rx_dapi0.is_set
	|| rx_dapi_range.is_set
	|| rx_oper_spec.is_set
	|| rx_oper_spec_range.is_set
	|| rx_sapi.is_set
	|| rx_sapi0.is_set
	|| rx_sapi_range.is_set
	|| rx_string_type.is_set
	|| rx_tti.is_set
	|| tx_dapi.is_set
	|| tx_dapi0.is_set
	|| tx_dapi_range.is_set
	|| tx_oper_spec.is_set
	|| tx_oper_spec_range.is_set
	|| tx_sapi.is_set
	|| tx_sapi0.is_set
	|| tx_sapi_range.is_set
	|| tx_string_type.is_set
	|| tx_tti.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_dapi_range.yfilter)
	|| ydk::is_set(exp_oper_spec_range.yfilter)
	|| ydk::is_set(exp_sapi_range.yfilter)
	|| ydk::is_set(expected_dapi.yfilter)
	|| ydk::is_set(expected_dapi0.yfilter)
	|| ydk::is_set(expected_oper_spec.yfilter)
	|| ydk::is_set(expected_sapi.yfilter)
	|| ydk::is_set(expected_sapi0.yfilter)
	|| ydk::is_set(expected_string_type.yfilter)
	|| ydk::is_set(expected_tti.yfilter)
	|| ydk::is_set(rx_dapi.yfilter)
	|| ydk::is_set(rx_dapi0.yfilter)
	|| ydk::is_set(rx_dapi_range.yfilter)
	|| ydk::is_set(rx_oper_spec.yfilter)
	|| ydk::is_set(rx_oper_spec_range.yfilter)
	|| ydk::is_set(rx_sapi.yfilter)
	|| ydk::is_set(rx_sapi0.yfilter)
	|| ydk::is_set(rx_sapi_range.yfilter)
	|| ydk::is_set(rx_string_type.yfilter)
	|| ydk::is_set(rx_tti.yfilter)
	|| ydk::is_set(tx_dapi.yfilter)
	|| ydk::is_set(tx_dapi0.yfilter)
	|| ydk::is_set(tx_dapi_range.yfilter)
	|| ydk::is_set(tx_oper_spec.yfilter)
	|| ydk::is_set(tx_oper_spec_range.yfilter)
	|| ydk::is_set(tx_sapi.yfilter)
	|| ydk::is_set(tx_sapi0.yfilter)
	|| ydk::is_set(tx_sapi_range.yfilter)
	|| ydk::is_set(tx_string_type.yfilter)
	|| ydk::is_set(tx_tti.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_dapi_range.is_set || is_set(exp_dapi_range.yfilter)) leaf_name_data.push_back(exp_dapi_range.get_name_leafdata());
    if (exp_oper_spec_range.is_set || is_set(exp_oper_spec_range.yfilter)) leaf_name_data.push_back(exp_oper_spec_range.get_name_leafdata());
    if (exp_sapi_range.is_set || is_set(exp_sapi_range.yfilter)) leaf_name_data.push_back(exp_sapi_range.get_name_leafdata());
    if (expected_dapi.is_set || is_set(expected_dapi.yfilter)) leaf_name_data.push_back(expected_dapi.get_name_leafdata());
    if (expected_dapi0.is_set || is_set(expected_dapi0.yfilter)) leaf_name_data.push_back(expected_dapi0.get_name_leafdata());
    if (expected_oper_spec.is_set || is_set(expected_oper_spec.yfilter)) leaf_name_data.push_back(expected_oper_spec.get_name_leafdata());
    if (expected_sapi.is_set || is_set(expected_sapi.yfilter)) leaf_name_data.push_back(expected_sapi.get_name_leafdata());
    if (expected_sapi0.is_set || is_set(expected_sapi0.yfilter)) leaf_name_data.push_back(expected_sapi0.get_name_leafdata());
    if (expected_string_type.is_set || is_set(expected_string_type.yfilter)) leaf_name_data.push_back(expected_string_type.get_name_leafdata());
    if (expected_tti.is_set || is_set(expected_tti.yfilter)) leaf_name_data.push_back(expected_tti.get_name_leafdata());
    if (rx_dapi.is_set || is_set(rx_dapi.yfilter)) leaf_name_data.push_back(rx_dapi.get_name_leafdata());
    if (rx_dapi0.is_set || is_set(rx_dapi0.yfilter)) leaf_name_data.push_back(rx_dapi0.get_name_leafdata());
    if (rx_dapi_range.is_set || is_set(rx_dapi_range.yfilter)) leaf_name_data.push_back(rx_dapi_range.get_name_leafdata());
    if (rx_oper_spec.is_set || is_set(rx_oper_spec.yfilter)) leaf_name_data.push_back(rx_oper_spec.get_name_leafdata());
    if (rx_oper_spec_range.is_set || is_set(rx_oper_spec_range.yfilter)) leaf_name_data.push_back(rx_oper_spec_range.get_name_leafdata());
    if (rx_sapi.is_set || is_set(rx_sapi.yfilter)) leaf_name_data.push_back(rx_sapi.get_name_leafdata());
    if (rx_sapi0.is_set || is_set(rx_sapi0.yfilter)) leaf_name_data.push_back(rx_sapi0.get_name_leafdata());
    if (rx_sapi_range.is_set || is_set(rx_sapi_range.yfilter)) leaf_name_data.push_back(rx_sapi_range.get_name_leafdata());
    if (rx_string_type.is_set || is_set(rx_string_type.yfilter)) leaf_name_data.push_back(rx_string_type.get_name_leafdata());
    if (rx_tti.is_set || is_set(rx_tti.yfilter)) leaf_name_data.push_back(rx_tti.get_name_leafdata());
    if (tx_dapi.is_set || is_set(tx_dapi.yfilter)) leaf_name_data.push_back(tx_dapi.get_name_leafdata());
    if (tx_dapi0.is_set || is_set(tx_dapi0.yfilter)) leaf_name_data.push_back(tx_dapi0.get_name_leafdata());
    if (tx_dapi_range.is_set || is_set(tx_dapi_range.yfilter)) leaf_name_data.push_back(tx_dapi_range.get_name_leafdata());
    if (tx_oper_spec.is_set || is_set(tx_oper_spec.yfilter)) leaf_name_data.push_back(tx_oper_spec.get_name_leafdata());
    if (tx_oper_spec_range.is_set || is_set(tx_oper_spec_range.yfilter)) leaf_name_data.push_back(tx_oper_spec_range.get_name_leafdata());
    if (tx_sapi.is_set || is_set(tx_sapi.yfilter)) leaf_name_data.push_back(tx_sapi.get_name_leafdata());
    if (tx_sapi0.is_set || is_set(tx_sapi0.yfilter)) leaf_name_data.push_back(tx_sapi0.get_name_leafdata());
    if (tx_sapi_range.is_set || is_set(tx_sapi_range.yfilter)) leaf_name_data.push_back(tx_sapi_range.get_name_leafdata());
    if (tx_string_type.is_set || is_set(tx_string_type.yfilter)) leaf_name_data.push_back(tx_string_type.get_name_leafdata());
    if (tx_tti.is_set || is_set(tx_tti.yfilter)) leaf_name_data.push_back(tx_tti.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range = value;
        exp_dapi_range.value_namespace = name_space;
        exp_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range = value;
        exp_oper_spec_range.value_namespace = name_space;
        exp_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range = value;
        exp_sapi_range.value_namespace = name_space;
        exp_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi = value;
        expected_dapi.value_namespace = name_space;
        expected_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0 = value;
        expected_dapi0.value_namespace = name_space;
        expected_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec = value;
        expected_oper_spec.value_namespace = name_space;
        expected_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi = value;
        expected_sapi.value_namespace = name_space;
        expected_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0 = value;
        expected_sapi0.value_namespace = name_space;
        expected_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type = value;
        expected_string_type.value_namespace = name_space;
        expected_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-tti")
    {
        expected_tti = value;
        expected_tti.value_namespace = name_space;
        expected_tti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi = value;
        rx_dapi.value_namespace = name_space;
        rx_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0 = value;
        rx_dapi0.value_namespace = name_space;
        rx_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range = value;
        rx_dapi_range.value_namespace = name_space;
        rx_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec = value;
        rx_oper_spec.value_namespace = name_space;
        rx_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range = value;
        rx_oper_spec_range.value_namespace = name_space;
        rx_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi = value;
        rx_sapi.value_namespace = name_space;
        rx_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0 = value;
        rx_sapi0.value_namespace = name_space;
        rx_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range = value;
        rx_sapi_range.value_namespace = name_space;
        rx_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type = value;
        rx_string_type.value_namespace = name_space;
        rx_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tti")
    {
        rx_tti = value;
        rx_tti.value_namespace = name_space;
        rx_tti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi = value;
        tx_dapi.value_namespace = name_space;
        tx_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0 = value;
        tx_dapi0.value_namespace = name_space;
        tx_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range = value;
        tx_dapi_range.value_namespace = name_space;
        tx_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec = value;
        tx_oper_spec.value_namespace = name_space;
        tx_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range = value;
        tx_oper_spec_range.value_namespace = name_space;
        tx_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi = value;
        tx_sapi.value_namespace = name_space;
        tx_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0 = value;
        tx_sapi0.value_namespace = name_space;
        tx_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range = value;
        tx_sapi_range.value_namespace = name_space;
        tx_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type = value;
        tx_string_type.value_namespace = name_space;
        tx_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-tti")
    {
        tx_tti = value;
        tx_tti.value_namespace = name_space;
        tx_tti.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range.yfilter = yfilter;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range.yfilter = yfilter;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi.yfilter = yfilter;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0.yfilter = yfilter;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec.yfilter = yfilter;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi.yfilter = yfilter;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0.yfilter = yfilter;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type.yfilter = yfilter;
    }
    if(value_path == "expected-tti")
    {
        expected_tti.yfilter = yfilter;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi.yfilter = yfilter;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0.yfilter = yfilter;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range.yfilter = yfilter;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec.yfilter = yfilter;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi.yfilter = yfilter;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0.yfilter = yfilter;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range.yfilter = yfilter;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type.yfilter = yfilter;
    }
    if(value_path == "rx-tti")
    {
        rx_tti.yfilter = yfilter;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi.yfilter = yfilter;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0.yfilter = yfilter;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range.yfilter = yfilter;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec.yfilter = yfilter;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi.yfilter = yfilter;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0.yfilter = yfilter;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range.yfilter = yfilter;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type.yfilter = yfilter;
    }
    if(value_path == "tx-tti")
    {
        tx_tti.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Tti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-dapi-range" || name == "exp-oper-spec-range" || name == "exp-sapi-range" || name == "expected-dapi" || name == "expected-dapi0" || name == "expected-oper-spec" || name == "expected-sapi" || name == "expected-sapi0" || name == "expected-string-type" || name == "expected-tti" || name == "rx-dapi" || name == "rx-dapi0" || name == "rx-dapi-range" || name == "rx-oper-spec" || name == "rx-oper-spec-range" || name == "rx-sapi" || name == "rx-sapi0" || name == "rx-sapi-range" || name == "rx-string-type" || name == "rx-tti" || name == "tx-dapi" || name == "tx-dapi0" || name == "tx-dapi-range" || name == "tx-oper-spec" || name == "tx-oper-spec-range" || name == "tx-sapi" || name == "tx-sapi0" || name == "tx-sapi-range" || name == "tx-string-type" || name == "tx-tti")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::Uas()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "uas"; yang_parent_name = "odu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::~Uas()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OduInfo::Uas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::OtuInfo()
    :
    bei{YType::uint64, "bei"},
    bip{YType::uint64, "bip"}
    	,
    ais(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais>())
	,bbe(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe>())
	,bbe_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca>())
	,bber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber>())
	,bdi(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi>())
	,eoc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc>())
	,es(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es>())
	,es_tca(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca>())
	,esr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr>())
	,fc(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc>())
	,iae(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae>())
	,lof(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof>())
	,lom(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom>())
	,los(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los>())
	,oof(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof>())
	,oom(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom>())
	,prefec_sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer>())
	,prefec_sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer>())
	,sd_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer>())
	,ses(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses>())
	,sesr(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr>())
	,sf_ber(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer>())
	,tim(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim>())
	,tti(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti>())
	,uas(std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas>())
{
    ais->parent = this;
    bbe->parent = this;
    bbe_tca->parent = this;
    bber->parent = this;
    bdi->parent = this;
    eoc->parent = this;
    es->parent = this;
    es_tca->parent = this;
    esr->parent = this;
    fc->parent = this;
    iae->parent = this;
    lof->parent = this;
    lom->parent = this;
    los->parent = this;
    oof->parent = this;
    oom->parent = this;
    prefec_sd_ber->parent = this;
    prefec_sf_ber->parent = this;
    sd_ber->parent = this;
    ses->parent = this;
    sesr->parent = this;
    sf_ber->parent = this;
    tim->parent = this;
    tti->parent = this;
    uas->parent = this;

    yang_name = "otu-info"; yang_parent_name = "g709-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::~OtuInfo()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::has_data() const
{
    return bei.is_set
	|| bip.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (bbe !=  nullptr && bbe->has_data())
	|| (bbe_tca !=  nullptr && bbe_tca->has_data())
	|| (bber !=  nullptr && bber->has_data())
	|| (bdi !=  nullptr && bdi->has_data())
	|| (eoc !=  nullptr && eoc->has_data())
	|| (es !=  nullptr && es->has_data())
	|| (es_tca !=  nullptr && es_tca->has_data())
	|| (esr !=  nullptr && esr->has_data())
	|| (fc !=  nullptr && fc->has_data())
	|| (iae !=  nullptr && iae->has_data())
	|| (lof !=  nullptr && lof->has_data())
	|| (lom !=  nullptr && lom->has_data())
	|| (los !=  nullptr && los->has_data())
	|| (oof !=  nullptr && oof->has_data())
	|| (oom !=  nullptr && oom->has_data())
	|| (prefec_sd_ber !=  nullptr && prefec_sd_ber->has_data())
	|| (prefec_sf_ber !=  nullptr && prefec_sf_ber->has_data())
	|| (sd_ber !=  nullptr && sd_ber->has_data())
	|| (ses !=  nullptr && ses->has_data())
	|| (sesr !=  nullptr && sesr->has_data())
	|| (sf_ber !=  nullptr && sf_ber->has_data())
	|| (tim !=  nullptr && tim->has_data())
	|| (tti !=  nullptr && tti->has_data())
	|| (uas !=  nullptr && uas->has_data());
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bei.yfilter)
	|| ydk::is_set(bip.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (bbe !=  nullptr && bbe->has_operation())
	|| (bbe_tca !=  nullptr && bbe_tca->has_operation())
	|| (bber !=  nullptr && bber->has_operation())
	|| (bdi !=  nullptr && bdi->has_operation())
	|| (eoc !=  nullptr && eoc->has_operation())
	|| (es !=  nullptr && es->has_operation())
	|| (es_tca !=  nullptr && es_tca->has_operation())
	|| (esr !=  nullptr && esr->has_operation())
	|| (fc !=  nullptr && fc->has_operation())
	|| (iae !=  nullptr && iae->has_operation())
	|| (lof !=  nullptr && lof->has_operation())
	|| (lom !=  nullptr && lom->has_operation())
	|| (los !=  nullptr && los->has_operation())
	|| (oof !=  nullptr && oof->has_operation())
	|| (oom !=  nullptr && oom->has_operation())
	|| (prefec_sd_ber !=  nullptr && prefec_sd_ber->has_operation())
	|| (prefec_sf_ber !=  nullptr && prefec_sf_ber->has_operation())
	|| (sd_ber !=  nullptr && sd_ber->has_operation())
	|| (ses !=  nullptr && ses->has_operation())
	|| (sesr !=  nullptr && sesr->has_operation())
	|| (sf_ber !=  nullptr && sf_ber->has_operation())
	|| (tim !=  nullptr && tim->has_operation())
	|| (tti !=  nullptr && tti->has_operation())
	|| (uas !=  nullptr && uas->has_operation());
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bei.is_set || is_set(bei.yfilter)) leaf_name_data.push_back(bei.get_name_leafdata());
    if (bip.is_set || is_set(bip.yfilter)) leaf_name_data.push_back(bip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "bbe")
    {
        if(bbe == nullptr)
        {
            bbe = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe>();
        }
        return bbe;
    }

    if(child_yang_name == "bbe-tca")
    {
        if(bbe_tca == nullptr)
        {
            bbe_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca>();
        }
        return bbe_tca;
    }

    if(child_yang_name == "bber")
    {
        if(bber == nullptr)
        {
            bber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber>();
        }
        return bber;
    }

    if(child_yang_name == "bdi")
    {
        if(bdi == nullptr)
        {
            bdi = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi>();
        }
        return bdi;
    }

    if(child_yang_name == "eoc")
    {
        if(eoc == nullptr)
        {
            eoc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc>();
        }
        return eoc;
    }

    if(child_yang_name == "es")
    {
        if(es == nullptr)
        {
            es = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es>();
        }
        return es;
    }

    if(child_yang_name == "es-tca")
    {
        if(es_tca == nullptr)
        {
            es_tca = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca>();
        }
        return es_tca;
    }

    if(child_yang_name == "esr")
    {
        if(esr == nullptr)
        {
            esr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr>();
        }
        return esr;
    }

    if(child_yang_name == "fc")
    {
        if(fc == nullptr)
        {
            fc = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc>();
        }
        return fc;
    }

    if(child_yang_name == "iae")
    {
        if(iae == nullptr)
        {
            iae = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae>();
        }
        return iae;
    }

    if(child_yang_name == "lof")
    {
        if(lof == nullptr)
        {
            lof = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof>();
        }
        return lof;
    }

    if(child_yang_name == "lom")
    {
        if(lom == nullptr)
        {
            lom = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom>();
        }
        return lom;
    }

    if(child_yang_name == "los")
    {
        if(los == nullptr)
        {
            los = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los>();
        }
        return los;
    }

    if(child_yang_name == "oof")
    {
        if(oof == nullptr)
        {
            oof = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof>();
        }
        return oof;
    }

    if(child_yang_name == "oom")
    {
        if(oom == nullptr)
        {
            oom = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom>();
        }
        return oom;
    }

    if(child_yang_name == "prefec-sd-ber")
    {
        if(prefec_sd_ber == nullptr)
        {
            prefec_sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer>();
        }
        return prefec_sd_ber;
    }

    if(child_yang_name == "prefec-sf-ber")
    {
        if(prefec_sf_ber == nullptr)
        {
            prefec_sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer>();
        }
        return prefec_sf_ber;
    }

    if(child_yang_name == "sd-ber")
    {
        if(sd_ber == nullptr)
        {
            sd_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer>();
        }
        return sd_ber;
    }

    if(child_yang_name == "ses")
    {
        if(ses == nullptr)
        {
            ses = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses>();
        }
        return ses;
    }

    if(child_yang_name == "sesr")
    {
        if(sesr == nullptr)
        {
            sesr = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr>();
        }
        return sesr;
    }

    if(child_yang_name == "sf-ber")
    {
        if(sf_ber == nullptr)
        {
            sf_ber = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer>();
        }
        return sf_ber;
    }

    if(child_yang_name == "tim")
    {
        if(tim == nullptr)
        {
            tim = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim>();
        }
        return tim;
    }

    if(child_yang_name == "tti")
    {
        if(tti == nullptr)
        {
            tti = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti>();
        }
        return tti;
    }

    if(child_yang_name == "uas")
    {
        if(uas == nullptr)
        {
            uas = std::make_shared<Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas>();
        }
        return uas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(bbe != nullptr)
    {
        children["bbe"] = bbe;
    }

    if(bbe_tca != nullptr)
    {
        children["bbe-tca"] = bbe_tca;
    }

    if(bber != nullptr)
    {
        children["bber"] = bber;
    }

    if(bdi != nullptr)
    {
        children["bdi"] = bdi;
    }

    if(eoc != nullptr)
    {
        children["eoc"] = eoc;
    }

    if(es != nullptr)
    {
        children["es"] = es;
    }

    if(es_tca != nullptr)
    {
        children["es-tca"] = es_tca;
    }

    if(esr != nullptr)
    {
        children["esr"] = esr;
    }

    if(fc != nullptr)
    {
        children["fc"] = fc;
    }

    if(iae != nullptr)
    {
        children["iae"] = iae;
    }

    if(lof != nullptr)
    {
        children["lof"] = lof;
    }

    if(lom != nullptr)
    {
        children["lom"] = lom;
    }

    if(los != nullptr)
    {
        children["los"] = los;
    }

    if(oof != nullptr)
    {
        children["oof"] = oof;
    }

    if(oom != nullptr)
    {
        children["oom"] = oom;
    }

    if(prefec_sd_ber != nullptr)
    {
        children["prefec-sd-ber"] = prefec_sd_ber;
    }

    if(prefec_sf_ber != nullptr)
    {
        children["prefec-sf-ber"] = prefec_sf_ber;
    }

    if(sd_ber != nullptr)
    {
        children["sd-ber"] = sd_ber;
    }

    if(ses != nullptr)
    {
        children["ses"] = ses;
    }

    if(sesr != nullptr)
    {
        children["sesr"] = sesr;
    }

    if(sf_ber != nullptr)
    {
        children["sf-ber"] = sf_ber;
    }

    if(tim != nullptr)
    {
        children["tim"] = tim;
    }

    if(tti != nullptr)
    {
        children["tti"] = tti;
    }

    if(uas != nullptr)
    {
        children["uas"] = uas;
    }

    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bei")
    {
        bei = value;
        bei.value_namespace = name_space;
        bei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bip")
    {
        bip = value;
        bip.value_namespace = name_space;
        bip.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bei")
    {
        bei.yfilter = yfilter;
    }
    if(value_path == "bip")
    {
        bip.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "bbe" || name == "bbe-tca" || name == "bber" || name == "bdi" || name == "eoc" || name == "es" || name == "es-tca" || name == "esr" || name == "fc" || name == "iae" || name == "lof" || name == "lom" || name == "los" || name == "oof" || name == "oom" || name == "prefec-sd-ber" || name == "prefec-sf-ber" || name == "sd-ber" || name == "ses" || name == "sesr" || name == "sf-ber" || name == "tim" || name == "tti" || name == "uas" || name == "bei" || name == "bip")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::Ais()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "ais"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::~Ais()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::Bbe()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "bbe"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::~Bbe()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::BbeTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "bbe-tca"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::~BbeTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::BbeTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::Bber()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "bber"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::~Bber()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::Bdi()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "bdi"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::~Bdi()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Bdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::Eoc()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "eoc"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::~Eoc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eoc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Eoc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::Es()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "es"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::~Es()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Es::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::EsTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "es-tca"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::~EsTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::EsTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::Esr()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "esr"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::~Esr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Esr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::Fc()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "fc"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::~Fc()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Fc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::Iae()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "iae"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::~Iae()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iae";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Iae::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::Lof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "lof"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::~Lof()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lof";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lof::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::Lom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "lom"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::~Lom()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Lom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::Los()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "los"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::~Los()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "los";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Los::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::Oof()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "oof"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::~Oof()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oof";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oof::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::Oom()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "oom"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::~Oom()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Oom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::PrefecSdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "prefec-sd-ber"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::~PrefecSdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefec-sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::PrefecSfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "prefec-sf-ber"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::~PrefecSfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefec-sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::PrefecSfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::SdBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "sd-ber"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::~SdBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SdBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::Ses()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "ses"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::~Ses()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Ses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::Sesr()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "sesr"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::~Sesr()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Sesr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::SfBer()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "sf-ber"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::~SfBer()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::SfBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::Tim()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"}
{

    yang_name = "tim"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::~Tim()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::Tti()
    :
    exp_dapi_range{YType::str, "exp-dapi-range"},
    exp_oper_spec_range{YType::str, "exp-oper-spec-range"},
    exp_sapi_range{YType::str, "exp-sapi-range"},
    expected_dapi{YType::str, "expected-dapi"},
    expected_dapi0{YType::str, "expected-dapi0"},
    expected_oper_spec{YType::str, "expected-oper-spec"},
    expected_sapi{YType::str, "expected-sapi"},
    expected_sapi0{YType::str, "expected-sapi0"},
    expected_string_type{YType::uint32, "expected-string-type"},
    expected_tti{YType::str, "expected-tti"},
    rx_dapi{YType::str, "rx-dapi"},
    rx_dapi0{YType::str, "rx-dapi0"},
    rx_dapi_range{YType::str, "rx-dapi-range"},
    rx_oper_spec{YType::str, "rx-oper-spec"},
    rx_oper_spec_range{YType::str, "rx-oper-spec-range"},
    rx_sapi{YType::str, "rx-sapi"},
    rx_sapi0{YType::str, "rx-sapi0"},
    rx_sapi_range{YType::str, "rx-sapi-range"},
    rx_string_type{YType::uint32, "rx-string-type"},
    rx_tti{YType::str, "rx-tti"},
    tx_dapi{YType::str, "tx-dapi"},
    tx_dapi0{YType::str, "tx-dapi0"},
    tx_dapi_range{YType::str, "tx-dapi-range"},
    tx_oper_spec{YType::str, "tx-oper-spec"},
    tx_oper_spec_range{YType::str, "tx-oper-spec-range"},
    tx_sapi{YType::str, "tx-sapi"},
    tx_sapi0{YType::str, "tx-sapi0"},
    tx_sapi_range{YType::str, "tx-sapi-range"},
    tx_string_type{YType::uint32, "tx-string-type"},
    tx_tti{YType::str, "tx-tti"}
{

    yang_name = "tti"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::~Tti()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::has_data() const
{
    return exp_dapi_range.is_set
	|| exp_oper_spec_range.is_set
	|| exp_sapi_range.is_set
	|| expected_dapi.is_set
	|| expected_dapi0.is_set
	|| expected_oper_spec.is_set
	|| expected_sapi.is_set
	|| expected_sapi0.is_set
	|| expected_string_type.is_set
	|| expected_tti.is_set
	|| rx_dapi.is_set
	|| rx_dapi0.is_set
	|| rx_dapi_range.is_set
	|| rx_oper_spec.is_set
	|| rx_oper_spec_range.is_set
	|| rx_sapi.is_set
	|| rx_sapi0.is_set
	|| rx_sapi_range.is_set
	|| rx_string_type.is_set
	|| rx_tti.is_set
	|| tx_dapi.is_set
	|| tx_dapi0.is_set
	|| tx_dapi_range.is_set
	|| tx_oper_spec.is_set
	|| tx_oper_spec_range.is_set
	|| tx_sapi.is_set
	|| tx_sapi0.is_set
	|| tx_sapi_range.is_set
	|| tx_string_type.is_set
	|| tx_tti.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp_dapi_range.yfilter)
	|| ydk::is_set(exp_oper_spec_range.yfilter)
	|| ydk::is_set(exp_sapi_range.yfilter)
	|| ydk::is_set(expected_dapi.yfilter)
	|| ydk::is_set(expected_dapi0.yfilter)
	|| ydk::is_set(expected_oper_spec.yfilter)
	|| ydk::is_set(expected_sapi.yfilter)
	|| ydk::is_set(expected_sapi0.yfilter)
	|| ydk::is_set(expected_string_type.yfilter)
	|| ydk::is_set(expected_tti.yfilter)
	|| ydk::is_set(rx_dapi.yfilter)
	|| ydk::is_set(rx_dapi0.yfilter)
	|| ydk::is_set(rx_dapi_range.yfilter)
	|| ydk::is_set(rx_oper_spec.yfilter)
	|| ydk::is_set(rx_oper_spec_range.yfilter)
	|| ydk::is_set(rx_sapi.yfilter)
	|| ydk::is_set(rx_sapi0.yfilter)
	|| ydk::is_set(rx_sapi_range.yfilter)
	|| ydk::is_set(rx_string_type.yfilter)
	|| ydk::is_set(rx_tti.yfilter)
	|| ydk::is_set(tx_dapi.yfilter)
	|| ydk::is_set(tx_dapi0.yfilter)
	|| ydk::is_set(tx_dapi_range.yfilter)
	|| ydk::is_set(tx_oper_spec.yfilter)
	|| ydk::is_set(tx_oper_spec_range.yfilter)
	|| ydk::is_set(tx_sapi.yfilter)
	|| ydk::is_set(tx_sapi0.yfilter)
	|| ydk::is_set(tx_sapi_range.yfilter)
	|| ydk::is_set(tx_string_type.yfilter)
	|| ydk::is_set(tx_tti.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp_dapi_range.is_set || is_set(exp_dapi_range.yfilter)) leaf_name_data.push_back(exp_dapi_range.get_name_leafdata());
    if (exp_oper_spec_range.is_set || is_set(exp_oper_spec_range.yfilter)) leaf_name_data.push_back(exp_oper_spec_range.get_name_leafdata());
    if (exp_sapi_range.is_set || is_set(exp_sapi_range.yfilter)) leaf_name_data.push_back(exp_sapi_range.get_name_leafdata());
    if (expected_dapi.is_set || is_set(expected_dapi.yfilter)) leaf_name_data.push_back(expected_dapi.get_name_leafdata());
    if (expected_dapi0.is_set || is_set(expected_dapi0.yfilter)) leaf_name_data.push_back(expected_dapi0.get_name_leafdata());
    if (expected_oper_spec.is_set || is_set(expected_oper_spec.yfilter)) leaf_name_data.push_back(expected_oper_spec.get_name_leafdata());
    if (expected_sapi.is_set || is_set(expected_sapi.yfilter)) leaf_name_data.push_back(expected_sapi.get_name_leafdata());
    if (expected_sapi0.is_set || is_set(expected_sapi0.yfilter)) leaf_name_data.push_back(expected_sapi0.get_name_leafdata());
    if (expected_string_type.is_set || is_set(expected_string_type.yfilter)) leaf_name_data.push_back(expected_string_type.get_name_leafdata());
    if (expected_tti.is_set || is_set(expected_tti.yfilter)) leaf_name_data.push_back(expected_tti.get_name_leafdata());
    if (rx_dapi.is_set || is_set(rx_dapi.yfilter)) leaf_name_data.push_back(rx_dapi.get_name_leafdata());
    if (rx_dapi0.is_set || is_set(rx_dapi0.yfilter)) leaf_name_data.push_back(rx_dapi0.get_name_leafdata());
    if (rx_dapi_range.is_set || is_set(rx_dapi_range.yfilter)) leaf_name_data.push_back(rx_dapi_range.get_name_leafdata());
    if (rx_oper_spec.is_set || is_set(rx_oper_spec.yfilter)) leaf_name_data.push_back(rx_oper_spec.get_name_leafdata());
    if (rx_oper_spec_range.is_set || is_set(rx_oper_spec_range.yfilter)) leaf_name_data.push_back(rx_oper_spec_range.get_name_leafdata());
    if (rx_sapi.is_set || is_set(rx_sapi.yfilter)) leaf_name_data.push_back(rx_sapi.get_name_leafdata());
    if (rx_sapi0.is_set || is_set(rx_sapi0.yfilter)) leaf_name_data.push_back(rx_sapi0.get_name_leafdata());
    if (rx_sapi_range.is_set || is_set(rx_sapi_range.yfilter)) leaf_name_data.push_back(rx_sapi_range.get_name_leafdata());
    if (rx_string_type.is_set || is_set(rx_string_type.yfilter)) leaf_name_data.push_back(rx_string_type.get_name_leafdata());
    if (rx_tti.is_set || is_set(rx_tti.yfilter)) leaf_name_data.push_back(rx_tti.get_name_leafdata());
    if (tx_dapi.is_set || is_set(tx_dapi.yfilter)) leaf_name_data.push_back(tx_dapi.get_name_leafdata());
    if (tx_dapi0.is_set || is_set(tx_dapi0.yfilter)) leaf_name_data.push_back(tx_dapi0.get_name_leafdata());
    if (tx_dapi_range.is_set || is_set(tx_dapi_range.yfilter)) leaf_name_data.push_back(tx_dapi_range.get_name_leafdata());
    if (tx_oper_spec.is_set || is_set(tx_oper_spec.yfilter)) leaf_name_data.push_back(tx_oper_spec.get_name_leafdata());
    if (tx_oper_spec_range.is_set || is_set(tx_oper_spec_range.yfilter)) leaf_name_data.push_back(tx_oper_spec_range.get_name_leafdata());
    if (tx_sapi.is_set || is_set(tx_sapi.yfilter)) leaf_name_data.push_back(tx_sapi.get_name_leafdata());
    if (tx_sapi0.is_set || is_set(tx_sapi0.yfilter)) leaf_name_data.push_back(tx_sapi0.get_name_leafdata());
    if (tx_sapi_range.is_set || is_set(tx_sapi_range.yfilter)) leaf_name_data.push_back(tx_sapi_range.get_name_leafdata());
    if (tx_string_type.is_set || is_set(tx_string_type.yfilter)) leaf_name_data.push_back(tx_string_type.get_name_leafdata());
    if (tx_tti.is_set || is_set(tx_tti.yfilter)) leaf_name_data.push_back(tx_tti.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range = value;
        exp_dapi_range.value_namespace = name_space;
        exp_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range = value;
        exp_oper_spec_range.value_namespace = name_space;
        exp_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range = value;
        exp_sapi_range.value_namespace = name_space;
        exp_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi = value;
        expected_dapi.value_namespace = name_space;
        expected_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0 = value;
        expected_dapi0.value_namespace = name_space;
        expected_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec = value;
        expected_oper_spec.value_namespace = name_space;
        expected_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi = value;
        expected_sapi.value_namespace = name_space;
        expected_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0 = value;
        expected_sapi0.value_namespace = name_space;
        expected_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type = value;
        expected_string_type.value_namespace = name_space;
        expected_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-tti")
    {
        expected_tti = value;
        expected_tti.value_namespace = name_space;
        expected_tti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi = value;
        rx_dapi.value_namespace = name_space;
        rx_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0 = value;
        rx_dapi0.value_namespace = name_space;
        rx_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range = value;
        rx_dapi_range.value_namespace = name_space;
        rx_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec = value;
        rx_oper_spec.value_namespace = name_space;
        rx_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range = value;
        rx_oper_spec_range.value_namespace = name_space;
        rx_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi = value;
        rx_sapi.value_namespace = name_space;
        rx_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0 = value;
        rx_sapi0.value_namespace = name_space;
        rx_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range = value;
        rx_sapi_range.value_namespace = name_space;
        rx_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type = value;
        rx_string_type.value_namespace = name_space;
        rx_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tti")
    {
        rx_tti = value;
        rx_tti.value_namespace = name_space;
        rx_tti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi = value;
        tx_dapi.value_namespace = name_space;
        tx_dapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0 = value;
        tx_dapi0.value_namespace = name_space;
        tx_dapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range = value;
        tx_dapi_range.value_namespace = name_space;
        tx_dapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec = value;
        tx_oper_spec.value_namespace = name_space;
        tx_oper_spec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range = value;
        tx_oper_spec_range.value_namespace = name_space;
        tx_oper_spec_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi = value;
        tx_sapi.value_namespace = name_space;
        tx_sapi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0 = value;
        tx_sapi0.value_namespace = name_space;
        tx_sapi0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range = value;
        tx_sapi_range.value_namespace = name_space;
        tx_sapi_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type = value;
        tx_string_type.value_namespace = name_space;
        tx_string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-tti")
    {
        tx_tti = value;
        tx_tti.value_namespace = name_space;
        tx_tti.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-dapi-range")
    {
        exp_dapi_range.yfilter = yfilter;
    }
    if(value_path == "exp-oper-spec-range")
    {
        exp_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "exp-sapi-range")
    {
        exp_sapi_range.yfilter = yfilter;
    }
    if(value_path == "expected-dapi")
    {
        expected_dapi.yfilter = yfilter;
    }
    if(value_path == "expected-dapi0")
    {
        expected_dapi0.yfilter = yfilter;
    }
    if(value_path == "expected-oper-spec")
    {
        expected_oper_spec.yfilter = yfilter;
    }
    if(value_path == "expected-sapi")
    {
        expected_sapi.yfilter = yfilter;
    }
    if(value_path == "expected-sapi0")
    {
        expected_sapi0.yfilter = yfilter;
    }
    if(value_path == "expected-string-type")
    {
        expected_string_type.yfilter = yfilter;
    }
    if(value_path == "expected-tti")
    {
        expected_tti.yfilter = yfilter;
    }
    if(value_path == "rx-dapi")
    {
        rx_dapi.yfilter = yfilter;
    }
    if(value_path == "rx-dapi0")
    {
        rx_dapi0.yfilter = yfilter;
    }
    if(value_path == "rx-dapi-range")
    {
        rx_dapi_range.yfilter = yfilter;
    }
    if(value_path == "rx-oper-spec")
    {
        rx_oper_spec.yfilter = yfilter;
    }
    if(value_path == "rx-oper-spec-range")
    {
        rx_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "rx-sapi")
    {
        rx_sapi.yfilter = yfilter;
    }
    if(value_path == "rx-sapi0")
    {
        rx_sapi0.yfilter = yfilter;
    }
    if(value_path == "rx-sapi-range")
    {
        rx_sapi_range.yfilter = yfilter;
    }
    if(value_path == "rx-string-type")
    {
        rx_string_type.yfilter = yfilter;
    }
    if(value_path == "rx-tti")
    {
        rx_tti.yfilter = yfilter;
    }
    if(value_path == "tx-dapi")
    {
        tx_dapi.yfilter = yfilter;
    }
    if(value_path == "tx-dapi0")
    {
        tx_dapi0.yfilter = yfilter;
    }
    if(value_path == "tx-dapi-range")
    {
        tx_dapi_range.yfilter = yfilter;
    }
    if(value_path == "tx-oper-spec")
    {
        tx_oper_spec.yfilter = yfilter;
    }
    if(value_path == "tx-oper-spec-range")
    {
        tx_oper_spec_range.yfilter = yfilter;
    }
    if(value_path == "tx-sapi")
    {
        tx_sapi.yfilter = yfilter;
    }
    if(value_path == "tx-sapi0")
    {
        tx_sapi0.yfilter = yfilter;
    }
    if(value_path == "tx-sapi-range")
    {
        tx_sapi_range.yfilter = yfilter;
    }
    if(value_path == "tx-string-type")
    {
        tx_string_type.yfilter = yfilter;
    }
    if(value_path == "tx-tti")
    {
        tx_tti.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Tti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-dapi-range" || name == "exp-oper-spec-range" || name == "exp-sapi-range" || name == "expected-dapi" || name == "expected-dapi0" || name == "expected-oper-spec" || name == "expected-sapi" || name == "expected-sapi0" || name == "expected-string-type" || name == "expected-tti" || name == "rx-dapi" || name == "rx-dapi0" || name == "rx-dapi-range" || name == "rx-oper-spec" || name == "rx-oper-spec-range" || name == "rx-sapi" || name == "rx-sapi0" || name == "rx-sapi-range" || name == "rx-string-type" || name == "rx-tti" || name == "tx-dapi" || name == "tx-dapi0" || name == "tx-dapi-range" || name == "tx-oper-spec" || name == "tx-oper-spec-range" || name == "tx-sapi" || name == "tx-sapi0" || name == "tx-sapi-range" || name == "tx-string-type" || name == "tx-tti")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::Uas()
    :
    counter{YType::uint64, "counter"}
{

    yang_name = "uas"; yang_parent_name = "otu-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::~Uas()
{
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::has_data() const
{
    return counter.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::OtuInfo::Uas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::G709Info::UcTca::UcTca()
    :
    counter{YType::uint64, "counter"},
    is_asserted{YType::boolean, "is-asserted"},
    is_detected{YType::boolean, "is-detected"},
    reporting_enabled{YType::boolean, "reporting-enabled"},
    threshold{YType::int32, "threshold"}
{

    yang_name = "uc-tca"; yang_parent_name = "g709-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::G709Info::UcTca::~UcTca()
{
}

bool Dwdm::Ports::Port::Info::G709Info::UcTca::has_data() const
{
    return counter.is_set
	|| is_asserted.is_set
	|| is_detected.is_set
	|| reporting_enabled.is_set
	|| threshold.is_set;
}

bool Dwdm::Ports::Port::Info::G709Info::UcTca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter)
	|| ydk::is_set(is_asserted.yfilter)
	|| ydk::is_set(is_detected.yfilter)
	|| ydk::is_set(reporting_enabled.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Dwdm::Ports::Port::Info::G709Info::UcTca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::G709Info::UcTca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (is_asserted.is_set || is_set(is_asserted.yfilter)) leaf_name_data.push_back(is_asserted.get_name_leafdata());
    if (is_detected.is_set || is_set(is_detected.yfilter)) leaf_name_data.push_back(is_detected.get_name_leafdata());
    if (reporting_enabled.is_set || is_set(reporting_enabled.yfilter)) leaf_name_data.push_back(reporting_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::G709Info::UcTca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::G709Info::UcTca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::G709Info::UcTca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-asserted")
    {
        is_asserted = value;
        is_asserted.value_namespace = name_space;
        is_asserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detected")
    {
        is_detected = value;
        is_detected.value_namespace = name_space;
        is_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled = value;
        reporting_enabled.value_namespace = name_space;
        reporting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::G709Info::UcTca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
    if(value_path == "is-asserted")
    {
        is_asserted.yfilter = yfilter;
    }
    if(value_path == "is-detected")
    {
        is_detected.yfilter = yfilter;
    }
    if(value_path == "reporting-enabled")
    {
        reporting_enabled.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::G709Info::UcTca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "is-asserted" || name == "is-detected" || name == "reporting-enabled" || name == "threshold")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::NetworkSrlgInfo::NetworkSrlgInfo()
    :
    network_srlg{YType::uint32, "network-srlg"}
{

    yang_name = "network-srlg-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::NetworkSrlgInfo::~NetworkSrlgInfo()
{
}

bool Dwdm::Ports::Port::Info::NetworkSrlgInfo::has_data() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Dwdm::Ports::Port::Info::NetworkSrlgInfo::has_operation() const
{
    for (auto const & leaf : network_srlg.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_srlg.yfilter);
}

std::string Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto network_srlg_name_datas = network_srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), network_srlg_name_datas.begin(), network_srlg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::NetworkSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::NetworkSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-srlg")
    {
        network_srlg.append(value);
    }
}

void Dwdm::Ports::Port::Info::NetworkSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-srlg")
    {
        network_srlg.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::NetworkSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::OpticsInfo::OpticsInfo()
    :
    chromatic_dispersion{YType::int32, "chromatic-dispersion"},
    clock_source{YType::uint8, "clock-source"},
    configured_wave_channel{YType::uint16, "configured-wave-channel"},
    default_wave_channel{YType::uint16, "default-wave-channel"},
    differential_group_delay{YType::int32, "differential-group-delay"},
    gmpls_set_wave_channel{YType::uint16, "gmpls-set-wave-channel"},
    input_power_fail{YType::uint32, "input-power-fail"},
    is_rx_los_threshold_supported{YType::boolean, "is-rx-los-threshold-supported"},
    is_wave_frequency_progressive_valid{YType::boolean, "is-wave-frequency-progressive-valid"},
    is_wave_frequency_valid{YType::boolean, "is-wave-frequency-valid"},
    laser_bias_current_avg{YType::int32, "laser-bias-current-avg"},
    laser_bias_current_max{YType::int32, "laser-bias-current-max"},
    laser_bias_current_min{YType::int32, "laser-bias-current-min"},
    laser_current_bias{YType::int32, "laser-current-bias"},
    laser_current_bias_threshold{YType::int32, "laser-current-bias-threshold"},
    optics_type{YType::str, "optics-type"},
    output_power_fail{YType::uint32, "output-power-fail"},
    phase_noise{YType::uint32, "phase-noise"},
    polarization_change_rate{YType::uint32, "polarization-change-rate"},
    polarization_dependent_loss{YType::int32, "polarization-dependent-loss"},
    polarization_mode_dispersion{YType::int32, "polarization-mode-dispersion"},
    receive_power{YType::int32, "receive-power"},
    receive_power_avg{YType::int32, "receive-power-avg"},
    receive_power_max{YType::int32, "receive-power-max"},
    receive_power_min{YType::int32, "receive-power-min"},
    rx_los_threshold{YType::int32, "rx-los-threshold"},
    signal_to_noise_ratio{YType::int32, "signal-to-noise-ratio"},
    transmit_power{YType::int32, "transmit-power"},
    transmit_power_avg{YType::int32, "transmit-power-avg"},
    transmit_power_max{YType::int32, "transmit-power-max"},
    transmit_power_min{YType::int32, "transmit-power-min"},
    transmit_power_threshold{YType::int32, "transmit-power-threshold"},
    wave_band{YType::uint32, "wave-band"},
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_owner{YType::enumeration, "wave-channel-owner"},
    wave_frequency{YType::uint32, "wave-frequency"},
    wave_frequency_progressive_string{YType::str, "wave-frequency-progressive-string"},
    wavelength_progressive{YType::uint32, "wavelength-progressive"},
    wavelength_progressive_string{YType::str, "wavelength-progressive-string"}
{

    yang_name = "optics-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::OpticsInfo::~OpticsInfo()
{
}

bool Dwdm::Ports::Port::Info::OpticsInfo::has_data() const
{
    return chromatic_dispersion.is_set
	|| clock_source.is_set
	|| configured_wave_channel.is_set
	|| default_wave_channel.is_set
	|| differential_group_delay.is_set
	|| gmpls_set_wave_channel.is_set
	|| input_power_fail.is_set
	|| is_rx_los_threshold_supported.is_set
	|| is_wave_frequency_progressive_valid.is_set
	|| is_wave_frequency_valid.is_set
	|| laser_bias_current_avg.is_set
	|| laser_bias_current_max.is_set
	|| laser_bias_current_min.is_set
	|| laser_current_bias.is_set
	|| laser_current_bias_threshold.is_set
	|| optics_type.is_set
	|| output_power_fail.is_set
	|| phase_noise.is_set
	|| polarization_change_rate.is_set
	|| polarization_dependent_loss.is_set
	|| polarization_mode_dispersion.is_set
	|| receive_power.is_set
	|| receive_power_avg.is_set
	|| receive_power_max.is_set
	|| receive_power_min.is_set
	|| rx_los_threshold.is_set
	|| signal_to_noise_ratio.is_set
	|| transmit_power.is_set
	|| transmit_power_avg.is_set
	|| transmit_power_max.is_set
	|| transmit_power_min.is_set
	|| transmit_power_threshold.is_set
	|| wave_band.is_set
	|| wave_channel.is_set
	|| wave_channel_owner.is_set
	|| wave_frequency.is_set
	|| wave_frequency_progressive_string.is_set
	|| wavelength_progressive.is_set
	|| wavelength_progressive_string.is_set;
}

bool Dwdm::Ports::Port::Info::OpticsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chromatic_dispersion.yfilter)
	|| ydk::is_set(clock_source.yfilter)
	|| ydk::is_set(configured_wave_channel.yfilter)
	|| ydk::is_set(default_wave_channel.yfilter)
	|| ydk::is_set(differential_group_delay.yfilter)
	|| ydk::is_set(gmpls_set_wave_channel.yfilter)
	|| ydk::is_set(input_power_fail.yfilter)
	|| ydk::is_set(is_rx_los_threshold_supported.yfilter)
	|| ydk::is_set(is_wave_frequency_progressive_valid.yfilter)
	|| ydk::is_set(is_wave_frequency_valid.yfilter)
	|| ydk::is_set(laser_bias_current_avg.yfilter)
	|| ydk::is_set(laser_bias_current_max.yfilter)
	|| ydk::is_set(laser_bias_current_min.yfilter)
	|| ydk::is_set(laser_current_bias.yfilter)
	|| ydk::is_set(laser_current_bias_threshold.yfilter)
	|| ydk::is_set(optics_type.yfilter)
	|| ydk::is_set(output_power_fail.yfilter)
	|| ydk::is_set(phase_noise.yfilter)
	|| ydk::is_set(polarization_change_rate.yfilter)
	|| ydk::is_set(polarization_dependent_loss.yfilter)
	|| ydk::is_set(polarization_mode_dispersion.yfilter)
	|| ydk::is_set(receive_power.yfilter)
	|| ydk::is_set(receive_power_avg.yfilter)
	|| ydk::is_set(receive_power_max.yfilter)
	|| ydk::is_set(receive_power_min.yfilter)
	|| ydk::is_set(rx_los_threshold.yfilter)
	|| ydk::is_set(signal_to_noise_ratio.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(transmit_power_avg.yfilter)
	|| ydk::is_set(transmit_power_max.yfilter)
	|| ydk::is_set(transmit_power_min.yfilter)
	|| ydk::is_set(transmit_power_threshold.yfilter)
	|| ydk::is_set(wave_band.yfilter)
	|| ydk::is_set(wave_channel.yfilter)
	|| ydk::is_set(wave_channel_owner.yfilter)
	|| ydk::is_set(wave_frequency.yfilter)
	|| ydk::is_set(wave_frequency_progressive_string.yfilter)
	|| ydk::is_set(wavelength_progressive.yfilter)
	|| ydk::is_set(wavelength_progressive_string.yfilter);
}

std::string Dwdm::Ports::Port::Info::OpticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::OpticsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chromatic_dispersion.is_set || is_set(chromatic_dispersion.yfilter)) leaf_name_data.push_back(chromatic_dispersion.get_name_leafdata());
    if (clock_source.is_set || is_set(clock_source.yfilter)) leaf_name_data.push_back(clock_source.get_name_leafdata());
    if (configured_wave_channel.is_set || is_set(configured_wave_channel.yfilter)) leaf_name_data.push_back(configured_wave_channel.get_name_leafdata());
    if (default_wave_channel.is_set || is_set(default_wave_channel.yfilter)) leaf_name_data.push_back(default_wave_channel.get_name_leafdata());
    if (differential_group_delay.is_set || is_set(differential_group_delay.yfilter)) leaf_name_data.push_back(differential_group_delay.get_name_leafdata());
    if (gmpls_set_wave_channel.is_set || is_set(gmpls_set_wave_channel.yfilter)) leaf_name_data.push_back(gmpls_set_wave_channel.get_name_leafdata());
    if (input_power_fail.is_set || is_set(input_power_fail.yfilter)) leaf_name_data.push_back(input_power_fail.get_name_leafdata());
    if (is_rx_los_threshold_supported.is_set || is_set(is_rx_los_threshold_supported.yfilter)) leaf_name_data.push_back(is_rx_los_threshold_supported.get_name_leafdata());
    if (is_wave_frequency_progressive_valid.is_set || is_set(is_wave_frequency_progressive_valid.yfilter)) leaf_name_data.push_back(is_wave_frequency_progressive_valid.get_name_leafdata());
    if (is_wave_frequency_valid.is_set || is_set(is_wave_frequency_valid.yfilter)) leaf_name_data.push_back(is_wave_frequency_valid.get_name_leafdata());
    if (laser_bias_current_avg.is_set || is_set(laser_bias_current_avg.yfilter)) leaf_name_data.push_back(laser_bias_current_avg.get_name_leafdata());
    if (laser_bias_current_max.is_set || is_set(laser_bias_current_max.yfilter)) leaf_name_data.push_back(laser_bias_current_max.get_name_leafdata());
    if (laser_bias_current_min.is_set || is_set(laser_bias_current_min.yfilter)) leaf_name_data.push_back(laser_bias_current_min.get_name_leafdata());
    if (laser_current_bias.is_set || is_set(laser_current_bias.yfilter)) leaf_name_data.push_back(laser_current_bias.get_name_leafdata());
    if (laser_current_bias_threshold.is_set || is_set(laser_current_bias_threshold.yfilter)) leaf_name_data.push_back(laser_current_bias_threshold.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.yfilter)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (output_power_fail.is_set || is_set(output_power_fail.yfilter)) leaf_name_data.push_back(output_power_fail.get_name_leafdata());
    if (phase_noise.is_set || is_set(phase_noise.yfilter)) leaf_name_data.push_back(phase_noise.get_name_leafdata());
    if (polarization_change_rate.is_set || is_set(polarization_change_rate.yfilter)) leaf_name_data.push_back(polarization_change_rate.get_name_leafdata());
    if (polarization_dependent_loss.is_set || is_set(polarization_dependent_loss.yfilter)) leaf_name_data.push_back(polarization_dependent_loss.get_name_leafdata());
    if (polarization_mode_dispersion.is_set || is_set(polarization_mode_dispersion.yfilter)) leaf_name_data.push_back(polarization_mode_dispersion.get_name_leafdata());
    if (receive_power.is_set || is_set(receive_power.yfilter)) leaf_name_data.push_back(receive_power.get_name_leafdata());
    if (receive_power_avg.is_set || is_set(receive_power_avg.yfilter)) leaf_name_data.push_back(receive_power_avg.get_name_leafdata());
    if (receive_power_max.is_set || is_set(receive_power_max.yfilter)) leaf_name_data.push_back(receive_power_max.get_name_leafdata());
    if (receive_power_min.is_set || is_set(receive_power_min.yfilter)) leaf_name_data.push_back(receive_power_min.get_name_leafdata());
    if (rx_los_threshold.is_set || is_set(rx_los_threshold.yfilter)) leaf_name_data.push_back(rx_los_threshold.get_name_leafdata());
    if (signal_to_noise_ratio.is_set || is_set(signal_to_noise_ratio.yfilter)) leaf_name_data.push_back(signal_to_noise_ratio.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transmit_power_avg.is_set || is_set(transmit_power_avg.yfilter)) leaf_name_data.push_back(transmit_power_avg.get_name_leafdata());
    if (transmit_power_max.is_set || is_set(transmit_power_max.yfilter)) leaf_name_data.push_back(transmit_power_max.get_name_leafdata());
    if (transmit_power_min.is_set || is_set(transmit_power_min.yfilter)) leaf_name_data.push_back(transmit_power_min.get_name_leafdata());
    if (transmit_power_threshold.is_set || is_set(transmit_power_threshold.yfilter)) leaf_name_data.push_back(transmit_power_threshold.get_name_leafdata());
    if (wave_band.is_set || is_set(wave_band.yfilter)) leaf_name_data.push_back(wave_band.get_name_leafdata());
    if (wave_channel.is_set || is_set(wave_channel.yfilter)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_owner.is_set || is_set(wave_channel_owner.yfilter)) leaf_name_data.push_back(wave_channel_owner.get_name_leafdata());
    if (wave_frequency.is_set || is_set(wave_frequency.yfilter)) leaf_name_data.push_back(wave_frequency.get_name_leafdata());
    if (wave_frequency_progressive_string.is_set || is_set(wave_frequency_progressive_string.yfilter)) leaf_name_data.push_back(wave_frequency_progressive_string.get_name_leafdata());
    if (wavelength_progressive.is_set || is_set(wavelength_progressive.yfilter)) leaf_name_data.push_back(wavelength_progressive.get_name_leafdata());
    if (wavelength_progressive_string.is_set || is_set(wavelength_progressive_string.yfilter)) leaf_name_data.push_back(wavelength_progressive_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::OpticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::OpticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::OpticsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chromatic-dispersion")
    {
        chromatic_dispersion = value;
        chromatic_dispersion.value_namespace = name_space;
        chromatic_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-source")
    {
        clock_source = value;
        clock_source.value_namespace = name_space;
        clock_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-wave-channel")
    {
        configured_wave_channel = value;
        configured_wave_channel.value_namespace = name_space;
        configured_wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-wave-channel")
    {
        default_wave_channel = value;
        default_wave_channel.value_namespace = name_space;
        default_wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay = value;
        differential_group_delay.value_namespace = name_space;
        differential_group_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-set-wave-channel")
    {
        gmpls_set_wave_channel = value;
        gmpls_set_wave_channel.value_namespace = name_space;
        gmpls_set_wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-power-fail")
    {
        input_power_fail = value;
        input_power_fail.value_namespace = name_space;
        input_power_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rx-los-threshold-supported")
    {
        is_rx_los_threshold_supported = value;
        is_rx_los_threshold_supported.value_namespace = name_space;
        is_rx_los_threshold_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wave-frequency-progressive-valid")
    {
        is_wave_frequency_progressive_valid = value;
        is_wave_frequency_progressive_valid.value_namespace = name_space;
        is_wave_frequency_progressive_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wave-frequency-valid")
    {
        is_wave_frequency_valid = value;
        is_wave_frequency_valid.value_namespace = name_space;
        is_wave_frequency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-avg")
    {
        laser_bias_current_avg = value;
        laser_bias_current_avg.value_namespace = name_space;
        laser_bias_current_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-max")
    {
        laser_bias_current_max = value;
        laser_bias_current_max.value_namespace = name_space;
        laser_bias_current_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current-min")
    {
        laser_bias_current_min = value;
        laser_bias_current_min.value_namespace = name_space;
        laser_bias_current_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-current-bias")
    {
        laser_current_bias = value;
        laser_current_bias.value_namespace = name_space;
        laser_current_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-current-bias-threshold")
    {
        laser_current_bias_threshold = value;
        laser_current_bias_threshold.value_namespace = name_space;
        laser_current_bias_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
        optics_type.value_namespace = name_space;
        optics_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-power-fail")
    {
        output_power_fail = value;
        output_power_fail.value_namespace = name_space;
        output_power_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-noise")
    {
        phase_noise = value;
        phase_noise.value_namespace = name_space;
        phase_noise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate = value;
        polarization_change_rate.value_namespace = name_space;
        polarization_change_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss = value;
        polarization_dependent_loss.value_namespace = name_space;
        polarization_dependent_loss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion = value;
        polarization_mode_dispersion.value_namespace = name_space;
        polarization_mode_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power")
    {
        receive_power = value;
        receive_power.value_namespace = name_space;
        receive_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power-avg")
    {
        receive_power_avg = value;
        receive_power_avg.value_namespace = name_space;
        receive_power_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power-max")
    {
        receive_power_max = value;
        receive_power_max.value_namespace = name_space;
        receive_power_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power-min")
    {
        receive_power_min = value;
        receive_power_min.value_namespace = name_space;
        receive_power_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-los-threshold")
    {
        rx_los_threshold = value;
        rx_los_threshold.value_namespace = name_space;
        rx_los_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-to-noise-ratio")
    {
        signal_to_noise_ratio = value;
        signal_to_noise_ratio.value_namespace = name_space;
        signal_to_noise_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-avg")
    {
        transmit_power_avg = value;
        transmit_power_avg.value_namespace = name_space;
        transmit_power_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-max")
    {
        transmit_power_max = value;
        transmit_power_max.value_namespace = name_space;
        transmit_power_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-min")
    {
        transmit_power_min = value;
        transmit_power_min.value_namespace = name_space;
        transmit_power_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-threshold")
    {
        transmit_power_threshold = value;
        transmit_power_threshold.value_namespace = name_space;
        transmit_power_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-band")
    {
        wave_band = value;
        wave_band.value_namespace = name_space;
        wave_band.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel")
    {
        wave_channel = value;
        wave_channel.value_namespace = name_space;
        wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-owner")
    {
        wave_channel_owner = value;
        wave_channel_owner.value_namespace = name_space;
        wave_channel_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-frequency")
    {
        wave_frequency = value;
        wave_frequency.value_namespace = name_space;
        wave_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-frequency-progressive-string")
    {
        wave_frequency_progressive_string = value;
        wave_frequency_progressive_string.value_namespace = name_space;
        wave_frequency_progressive_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wavelength-progressive")
    {
        wavelength_progressive = value;
        wavelength_progressive.value_namespace = name_space;
        wavelength_progressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wavelength-progressive-string")
    {
        wavelength_progressive_string = value;
        wavelength_progressive_string.value_namespace = name_space;
        wavelength_progressive_string.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::OpticsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chromatic-dispersion")
    {
        chromatic_dispersion.yfilter = yfilter;
    }
    if(value_path == "clock-source")
    {
        clock_source.yfilter = yfilter;
    }
    if(value_path == "configured-wave-channel")
    {
        configured_wave_channel.yfilter = yfilter;
    }
    if(value_path == "default-wave-channel")
    {
        default_wave_channel.yfilter = yfilter;
    }
    if(value_path == "differential-group-delay")
    {
        differential_group_delay.yfilter = yfilter;
    }
    if(value_path == "gmpls-set-wave-channel")
    {
        gmpls_set_wave_channel.yfilter = yfilter;
    }
    if(value_path == "input-power-fail")
    {
        input_power_fail.yfilter = yfilter;
    }
    if(value_path == "is-rx-los-threshold-supported")
    {
        is_rx_los_threshold_supported.yfilter = yfilter;
    }
    if(value_path == "is-wave-frequency-progressive-valid")
    {
        is_wave_frequency_progressive_valid.yfilter = yfilter;
    }
    if(value_path == "is-wave-frequency-valid")
    {
        is_wave_frequency_valid.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-avg")
    {
        laser_bias_current_avg.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-max")
    {
        laser_bias_current_max.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current-min")
    {
        laser_bias_current_min.yfilter = yfilter;
    }
    if(value_path == "laser-current-bias")
    {
        laser_current_bias.yfilter = yfilter;
    }
    if(value_path == "laser-current-bias-threshold")
    {
        laser_current_bias_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-type")
    {
        optics_type.yfilter = yfilter;
    }
    if(value_path == "output-power-fail")
    {
        output_power_fail.yfilter = yfilter;
    }
    if(value_path == "phase-noise")
    {
        phase_noise.yfilter = yfilter;
    }
    if(value_path == "polarization-change-rate")
    {
        polarization_change_rate.yfilter = yfilter;
    }
    if(value_path == "polarization-dependent-loss")
    {
        polarization_dependent_loss.yfilter = yfilter;
    }
    if(value_path == "polarization-mode-dispersion")
    {
        polarization_mode_dispersion.yfilter = yfilter;
    }
    if(value_path == "receive-power")
    {
        receive_power.yfilter = yfilter;
    }
    if(value_path == "receive-power-avg")
    {
        receive_power_avg.yfilter = yfilter;
    }
    if(value_path == "receive-power-max")
    {
        receive_power_max.yfilter = yfilter;
    }
    if(value_path == "receive-power-min")
    {
        receive_power_min.yfilter = yfilter;
    }
    if(value_path == "rx-los-threshold")
    {
        rx_los_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-to-noise-ratio")
    {
        signal_to_noise_ratio.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "transmit-power-avg")
    {
        transmit_power_avg.yfilter = yfilter;
    }
    if(value_path == "transmit-power-max")
    {
        transmit_power_max.yfilter = yfilter;
    }
    if(value_path == "transmit-power-min")
    {
        transmit_power_min.yfilter = yfilter;
    }
    if(value_path == "transmit-power-threshold")
    {
        transmit_power_threshold.yfilter = yfilter;
    }
    if(value_path == "wave-band")
    {
        wave_band.yfilter = yfilter;
    }
    if(value_path == "wave-channel")
    {
        wave_channel.yfilter = yfilter;
    }
    if(value_path == "wave-channel-owner")
    {
        wave_channel_owner.yfilter = yfilter;
    }
    if(value_path == "wave-frequency")
    {
        wave_frequency.yfilter = yfilter;
    }
    if(value_path == "wave-frequency-progressive-string")
    {
        wave_frequency_progressive_string.yfilter = yfilter;
    }
    if(value_path == "wavelength-progressive")
    {
        wavelength_progressive.yfilter = yfilter;
    }
    if(value_path == "wavelength-progressive-string")
    {
        wavelength_progressive_string.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::OpticsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chromatic-dispersion" || name == "clock-source" || name == "configured-wave-channel" || name == "default-wave-channel" || name == "differential-group-delay" || name == "gmpls-set-wave-channel" || name == "input-power-fail" || name == "is-rx-los-threshold-supported" || name == "is-wave-frequency-progressive-valid" || name == "is-wave-frequency-valid" || name == "laser-bias-current-avg" || name == "laser-bias-current-max" || name == "laser-bias-current-min" || name == "laser-current-bias" || name == "laser-current-bias-threshold" || name == "optics-type" || name == "output-power-fail" || name == "phase-noise" || name == "polarization-change-rate" || name == "polarization-dependent-loss" || name == "polarization-mode-dispersion" || name == "receive-power" || name == "receive-power-avg" || name == "receive-power-max" || name == "receive-power-min" || name == "rx-los-threshold" || name == "signal-to-noise-ratio" || name == "transmit-power" || name == "transmit-power-avg" || name == "transmit-power-max" || name == "transmit-power-min" || name == "transmit-power-threshold" || name == "wave-band" || name == "wave-channel" || name == "wave-channel-owner" || name == "wave-frequency" || name == "wave-frequency-progressive-string" || name == "wavelength-progressive" || name == "wavelength-progressive-string")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::Proactive::Proactive()
    :
    alarm_state{YType::boolean, "alarm-state"},
    default_rvrt_thresh_coeff{YType::uint8, "default-rvrt-thresh-coeff"},
    default_rvrt_thresh_power{YType::uint8, "default-rvrt-thresh-power"},
    default_trig_thresh_coeff{YType::uint8, "default-trig-thresh-coeff"},
    default_trig_thresh_power{YType::uint8, "default-trig-thresh-power"},
    interface_trigger{YType::boolean, "interface-trigger"},
    prefec_thresh_crossed{YType::boolean, "prefec-thresh-crossed"},
    proactive_feature{YType::boolean, "proactive-feature"},
    proactive_fsm_if_state{YType::enumeration, "proactive-fsm-if-state"},
    proactive_fsm_state{YType::enumeration, "proactive-fsm-state"},
    proactive_mode{YType::enumeration, "proactive-mode"},
    protection_trigger{YType::boolean, "protection-trigger"},
    revert_window{YType::uint32, "revert-window"},
    rvrt_ec_cnt{YType::uint32, "rvrt-ec-cnt"},
    rvrt_samples{YType::uint8, "rvrt-samples"},
    rvrt_thresh_coeff{YType::uint8, "rvrt-thresh-coeff"},
    rvrt_thresh_power{YType::uint8, "rvrt-thresh-power"},
    rx_aps{YType::uint8, "rx-aps"},
    rx_aps_descr{YType::enumeration, "rx-aps-descr"},
    tas_state{YType::enumeration, "tas-state"},
    trig_ec_cnt{YType::uint32, "trig-ec-cnt"},
    trig_samples{YType::uint8, "trig-samples"},
    trig_thresh_coeff{YType::uint8, "trig-thresh-coeff"},
    trig_thresh_power{YType::uint8, "trig-thresh-power"},
    trigger_window{YType::uint32, "trigger-window"},
    tx_aps{YType::uint8, "tx-aps"},
    tx_aps_descr{YType::enumeration, "tx-aps-descr"}
{

    yang_name = "proactive"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::Proactive::~Proactive()
{
}

bool Dwdm::Ports::Port::Info::Proactive::has_data() const
{
    return alarm_state.is_set
	|| default_rvrt_thresh_coeff.is_set
	|| default_rvrt_thresh_power.is_set
	|| default_trig_thresh_coeff.is_set
	|| default_trig_thresh_power.is_set
	|| interface_trigger.is_set
	|| prefec_thresh_crossed.is_set
	|| proactive_feature.is_set
	|| proactive_fsm_if_state.is_set
	|| proactive_fsm_state.is_set
	|| proactive_mode.is_set
	|| protection_trigger.is_set
	|| revert_window.is_set
	|| rvrt_ec_cnt.is_set
	|| rvrt_samples.is_set
	|| rvrt_thresh_coeff.is_set
	|| rvrt_thresh_power.is_set
	|| rx_aps.is_set
	|| rx_aps_descr.is_set
	|| tas_state.is_set
	|| trig_ec_cnt.is_set
	|| trig_samples.is_set
	|| trig_thresh_coeff.is_set
	|| trig_thresh_power.is_set
	|| trigger_window.is_set
	|| tx_aps.is_set
	|| tx_aps_descr.is_set;
}

bool Dwdm::Ports::Port::Info::Proactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_state.yfilter)
	|| ydk::is_set(default_rvrt_thresh_coeff.yfilter)
	|| ydk::is_set(default_rvrt_thresh_power.yfilter)
	|| ydk::is_set(default_trig_thresh_coeff.yfilter)
	|| ydk::is_set(default_trig_thresh_power.yfilter)
	|| ydk::is_set(interface_trigger.yfilter)
	|| ydk::is_set(prefec_thresh_crossed.yfilter)
	|| ydk::is_set(proactive_feature.yfilter)
	|| ydk::is_set(proactive_fsm_if_state.yfilter)
	|| ydk::is_set(proactive_fsm_state.yfilter)
	|| ydk::is_set(proactive_mode.yfilter)
	|| ydk::is_set(protection_trigger.yfilter)
	|| ydk::is_set(revert_window.yfilter)
	|| ydk::is_set(rvrt_ec_cnt.yfilter)
	|| ydk::is_set(rvrt_samples.yfilter)
	|| ydk::is_set(rvrt_thresh_coeff.yfilter)
	|| ydk::is_set(rvrt_thresh_power.yfilter)
	|| ydk::is_set(rx_aps.yfilter)
	|| ydk::is_set(rx_aps_descr.yfilter)
	|| ydk::is_set(tas_state.yfilter)
	|| ydk::is_set(trig_ec_cnt.yfilter)
	|| ydk::is_set(trig_samples.yfilter)
	|| ydk::is_set(trig_thresh_coeff.yfilter)
	|| ydk::is_set(trig_thresh_power.yfilter)
	|| ydk::is_set(trigger_window.yfilter)
	|| ydk::is_set(tx_aps.yfilter)
	|| ydk::is_set(tx_aps_descr.yfilter);
}

std::string Dwdm::Ports::Port::Info::Proactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::Proactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_state.is_set || is_set(alarm_state.yfilter)) leaf_name_data.push_back(alarm_state.get_name_leafdata());
    if (default_rvrt_thresh_coeff.is_set || is_set(default_rvrt_thresh_coeff.yfilter)) leaf_name_data.push_back(default_rvrt_thresh_coeff.get_name_leafdata());
    if (default_rvrt_thresh_power.is_set || is_set(default_rvrt_thresh_power.yfilter)) leaf_name_data.push_back(default_rvrt_thresh_power.get_name_leafdata());
    if (default_trig_thresh_coeff.is_set || is_set(default_trig_thresh_coeff.yfilter)) leaf_name_data.push_back(default_trig_thresh_coeff.get_name_leafdata());
    if (default_trig_thresh_power.is_set || is_set(default_trig_thresh_power.yfilter)) leaf_name_data.push_back(default_trig_thresh_power.get_name_leafdata());
    if (interface_trigger.is_set || is_set(interface_trigger.yfilter)) leaf_name_data.push_back(interface_trigger.get_name_leafdata());
    if (prefec_thresh_crossed.is_set || is_set(prefec_thresh_crossed.yfilter)) leaf_name_data.push_back(prefec_thresh_crossed.get_name_leafdata());
    if (proactive_feature.is_set || is_set(proactive_feature.yfilter)) leaf_name_data.push_back(proactive_feature.get_name_leafdata());
    if (proactive_fsm_if_state.is_set || is_set(proactive_fsm_if_state.yfilter)) leaf_name_data.push_back(proactive_fsm_if_state.get_name_leafdata());
    if (proactive_fsm_state.is_set || is_set(proactive_fsm_state.yfilter)) leaf_name_data.push_back(proactive_fsm_state.get_name_leafdata());
    if (proactive_mode.is_set || is_set(proactive_mode.yfilter)) leaf_name_data.push_back(proactive_mode.get_name_leafdata());
    if (protection_trigger.is_set || is_set(protection_trigger.yfilter)) leaf_name_data.push_back(protection_trigger.get_name_leafdata());
    if (revert_window.is_set || is_set(revert_window.yfilter)) leaf_name_data.push_back(revert_window.get_name_leafdata());
    if (rvrt_ec_cnt.is_set || is_set(rvrt_ec_cnt.yfilter)) leaf_name_data.push_back(rvrt_ec_cnt.get_name_leafdata());
    if (rvrt_samples.is_set || is_set(rvrt_samples.yfilter)) leaf_name_data.push_back(rvrt_samples.get_name_leafdata());
    if (rvrt_thresh_coeff.is_set || is_set(rvrt_thresh_coeff.yfilter)) leaf_name_data.push_back(rvrt_thresh_coeff.get_name_leafdata());
    if (rvrt_thresh_power.is_set || is_set(rvrt_thresh_power.yfilter)) leaf_name_data.push_back(rvrt_thresh_power.get_name_leafdata());
    if (rx_aps.is_set || is_set(rx_aps.yfilter)) leaf_name_data.push_back(rx_aps.get_name_leafdata());
    if (rx_aps_descr.is_set || is_set(rx_aps_descr.yfilter)) leaf_name_data.push_back(rx_aps_descr.get_name_leafdata());
    if (tas_state.is_set || is_set(tas_state.yfilter)) leaf_name_data.push_back(tas_state.get_name_leafdata());
    if (trig_ec_cnt.is_set || is_set(trig_ec_cnt.yfilter)) leaf_name_data.push_back(trig_ec_cnt.get_name_leafdata());
    if (trig_samples.is_set || is_set(trig_samples.yfilter)) leaf_name_data.push_back(trig_samples.get_name_leafdata());
    if (trig_thresh_coeff.is_set || is_set(trig_thresh_coeff.yfilter)) leaf_name_data.push_back(trig_thresh_coeff.get_name_leafdata());
    if (trig_thresh_power.is_set || is_set(trig_thresh_power.yfilter)) leaf_name_data.push_back(trig_thresh_power.get_name_leafdata());
    if (trigger_window.is_set || is_set(trigger_window.yfilter)) leaf_name_data.push_back(trigger_window.get_name_leafdata());
    if (tx_aps.is_set || is_set(tx_aps.yfilter)) leaf_name_data.push_back(tx_aps.get_name_leafdata());
    if (tx_aps_descr.is_set || is_set(tx_aps_descr.yfilter)) leaf_name_data.push_back(tx_aps_descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::Proactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::Proactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::Proactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-state")
    {
        alarm_state = value;
        alarm_state.value_namespace = name_space;
        alarm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-rvrt-thresh-coeff")
    {
        default_rvrt_thresh_coeff = value;
        default_rvrt_thresh_coeff.value_namespace = name_space;
        default_rvrt_thresh_coeff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-rvrt-thresh-power")
    {
        default_rvrt_thresh_power = value;
        default_rvrt_thresh_power.value_namespace = name_space;
        default_rvrt_thresh_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-trig-thresh-coeff")
    {
        default_trig_thresh_coeff = value;
        default_trig_thresh_coeff.value_namespace = name_space;
        default_trig_thresh_coeff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-trig-thresh-power")
    {
        default_trig_thresh_power = value;
        default_trig_thresh_power.value_namespace = name_space;
        default_trig_thresh_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-trigger")
    {
        interface_trigger = value;
        interface_trigger.value_namespace = name_space;
        interface_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefec-thresh-crossed")
    {
        prefec_thresh_crossed = value;
        prefec_thresh_crossed.value_namespace = name_space;
        prefec_thresh_crossed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-feature")
    {
        proactive_feature = value;
        proactive_feature.value_namespace = name_space;
        proactive_feature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state = value;
        proactive_fsm_if_state.value_namespace = name_space;
        proactive_fsm_if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state = value;
        proactive_fsm_state.value_namespace = name_space;
        proactive_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-mode")
    {
        proactive_mode = value;
        proactive_mode.value_namespace = name_space;
        proactive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-trigger")
    {
        protection_trigger = value;
        protection_trigger.value_namespace = name_space;
        protection_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-window")
    {
        revert_window = value;
        revert_window.value_namespace = name_space;
        revert_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rvrt-ec-cnt")
    {
        rvrt_ec_cnt = value;
        rvrt_ec_cnt.value_namespace = name_space;
        rvrt_ec_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rvrt-samples")
    {
        rvrt_samples = value;
        rvrt_samples.value_namespace = name_space;
        rvrt_samples.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rx-aps")
    {
        rx_aps = value;
        rx_aps.value_namespace = name_space;
        rx_aps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-aps-descr")
    {
        rx_aps_descr = value;
        rx_aps_descr.value_namespace = name_space;
        rx_aps_descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tas-state")
    {
        tas_state = value;
        tas_state.value_namespace = name_space;
        tas_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-ec-cnt")
    {
        trig_ec_cnt = value;
        trig_ec_cnt.value_namespace = name_space;
        trig_ec_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-samples")
    {
        trig_samples = value;
        trig_samples.value_namespace = name_space;
        trig_samples.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trigger-window")
    {
        trigger_window = value;
        trigger_window.value_namespace = name_space;
        trigger_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-aps")
    {
        tx_aps = value;
        tx_aps.value_namespace = name_space;
        tx_aps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-aps-descr")
    {
        tx_aps_descr = value;
        tx_aps_descr.value_namespace = name_space;
        tx_aps_descr.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::Proactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-state")
    {
        alarm_state.yfilter = yfilter;
    }
    if(value_path == "default-rvrt-thresh-coeff")
    {
        default_rvrt_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "default-rvrt-thresh-power")
    {
        default_rvrt_thresh_power.yfilter = yfilter;
    }
    if(value_path == "default-trig-thresh-coeff")
    {
        default_trig_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "default-trig-thresh-power")
    {
        default_trig_thresh_power.yfilter = yfilter;
    }
    if(value_path == "interface-trigger")
    {
        interface_trigger.yfilter = yfilter;
    }
    if(value_path == "prefec-thresh-crossed")
    {
        prefec_thresh_crossed.yfilter = yfilter;
    }
    if(value_path == "proactive-feature")
    {
        proactive_feature.yfilter = yfilter;
    }
    if(value_path == "proactive-fsm-if-state")
    {
        proactive_fsm_if_state.yfilter = yfilter;
    }
    if(value_path == "proactive-fsm-state")
    {
        proactive_fsm_state.yfilter = yfilter;
    }
    if(value_path == "proactive-mode")
    {
        proactive_mode.yfilter = yfilter;
    }
    if(value_path == "protection-trigger")
    {
        protection_trigger.yfilter = yfilter;
    }
    if(value_path == "revert-window")
    {
        revert_window.yfilter = yfilter;
    }
    if(value_path == "rvrt-ec-cnt")
    {
        rvrt_ec_cnt.yfilter = yfilter;
    }
    if(value_path == "rvrt-samples")
    {
        rvrt_samples.yfilter = yfilter;
    }
    if(value_path == "rvrt-thresh-coeff")
    {
        rvrt_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "rvrt-thresh-power")
    {
        rvrt_thresh_power.yfilter = yfilter;
    }
    if(value_path == "rx-aps")
    {
        rx_aps.yfilter = yfilter;
    }
    if(value_path == "rx-aps-descr")
    {
        rx_aps_descr.yfilter = yfilter;
    }
    if(value_path == "tas-state")
    {
        tas_state.yfilter = yfilter;
    }
    if(value_path == "trig-ec-cnt")
    {
        trig_ec_cnt.yfilter = yfilter;
    }
    if(value_path == "trig-samples")
    {
        trig_samples.yfilter = yfilter;
    }
    if(value_path == "trig-thresh-coeff")
    {
        trig_thresh_coeff.yfilter = yfilter;
    }
    if(value_path == "trig-thresh-power")
    {
        trig_thresh_power.yfilter = yfilter;
    }
    if(value_path == "trigger-window")
    {
        trigger_window.yfilter = yfilter;
    }
    if(value_path == "tx-aps")
    {
        tx_aps.yfilter = yfilter;
    }
    if(value_path == "tx-aps-descr")
    {
        tx_aps_descr.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::Proactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-state" || name == "default-rvrt-thresh-coeff" || name == "default-rvrt-thresh-power" || name == "default-trig-thresh-coeff" || name == "default-trig-thresh-power" || name == "interface-trigger" || name == "prefec-thresh-crossed" || name == "proactive-feature" || name == "proactive-fsm-if-state" || name == "proactive-fsm-state" || name == "proactive-mode" || name == "protection-trigger" || name == "revert-window" || name == "rvrt-ec-cnt" || name == "rvrt-samples" || name == "rvrt-thresh-coeff" || name == "rvrt-thresh-power" || name == "rx-aps" || name == "rx-aps-descr" || name == "tas-state" || name == "trig-ec-cnt" || name == "trig-samples" || name == "trig-thresh-coeff" || name == "trig-thresh-power" || name == "trigger-window" || name == "tx-aps" || name == "tx-aps-descr")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::SignalLog::SignalLog()
    :
    is_log_enabled{YType::boolean, "is-log-enabled"},
    log_filename{YType::str, "log-filename"}
{

    yang_name = "signal-log"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::SignalLog::~SignalLog()
{
}

bool Dwdm::Ports::Port::Info::SignalLog::has_data() const
{
    return is_log_enabled.is_set
	|| log_filename.is_set;
}

bool Dwdm::Ports::Port::Info::SignalLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_log_enabled.yfilter)
	|| ydk::is_set(log_filename.yfilter);
}

std::string Dwdm::Ports::Port::Info::SignalLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::SignalLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_log_enabled.is_set || is_set(is_log_enabled.yfilter)) leaf_name_data.push_back(is_log_enabled.get_name_leafdata());
    if (log_filename.is_set || is_set(log_filename.yfilter)) leaf_name_data.push_back(log_filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::SignalLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::SignalLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::SignalLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled = value;
        is_log_enabled.value_namespace = name_space;
        is_log_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-filename")
    {
        log_filename = value;
        log_filename.value_namespace = name_space;
        log_filename.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::SignalLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-log-enabled")
    {
        is_log_enabled.yfilter = yfilter;
    }
    if(value_path == "log-filename")
    {
        log_filename.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::SignalLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-log-enabled" || name == "log-filename")
        return true;
    return false;
}

Dwdm::Ports::Port::Info::TdcInfo::TdcInfo()
    :
    dispersion_offset{YType::int32, "dispersion-offset"},
    is_reroute_control_enabled{YType::boolean, "is-reroute-control-enabled"},
    major_alarm{YType::boolean, "major-alarm"},
    operation_mode{YType::boolean, "operation-mode"},
    reroute_ber{YType::int32, "reroute-ber"},
    tdc_status{YType::boolean, "tdc-status"},
    tdc_valid{YType::boolean, "tdc-valid"}
{

    yang_name = "tdc-info"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Info::TdcInfo::~TdcInfo()
{
}

bool Dwdm::Ports::Port::Info::TdcInfo::has_data() const
{
    return dispersion_offset.is_set
	|| is_reroute_control_enabled.is_set
	|| major_alarm.is_set
	|| operation_mode.is_set
	|| reroute_ber.is_set
	|| tdc_status.is_set
	|| tdc_valid.is_set;
}

bool Dwdm::Ports::Port::Info::TdcInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dispersion_offset.yfilter)
	|| ydk::is_set(is_reroute_control_enabled.yfilter)
	|| ydk::is_set(major_alarm.yfilter)
	|| ydk::is_set(operation_mode.yfilter)
	|| ydk::is_set(reroute_ber.yfilter)
	|| ydk::is_set(tdc_status.yfilter)
	|| ydk::is_set(tdc_valid.yfilter);
}

std::string Dwdm::Ports::Port::Info::TdcInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Info::TdcInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dispersion_offset.is_set || is_set(dispersion_offset.yfilter)) leaf_name_data.push_back(dispersion_offset.get_name_leafdata());
    if (is_reroute_control_enabled.is_set || is_set(is_reroute_control_enabled.yfilter)) leaf_name_data.push_back(is_reroute_control_enabled.get_name_leafdata());
    if (major_alarm.is_set || is_set(major_alarm.yfilter)) leaf_name_data.push_back(major_alarm.get_name_leafdata());
    if (operation_mode.is_set || is_set(operation_mode.yfilter)) leaf_name_data.push_back(operation_mode.get_name_leafdata());
    if (reroute_ber.is_set || is_set(reroute_ber.yfilter)) leaf_name_data.push_back(reroute_ber.get_name_leafdata());
    if (tdc_status.is_set || is_set(tdc_status.yfilter)) leaf_name_data.push_back(tdc_status.get_name_leafdata());
    if (tdc_valid.is_set || is_set(tdc_valid.yfilter)) leaf_name_data.push_back(tdc_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Info::TdcInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Info::TdcInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Info::TdcInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dispersion-offset")
    {
        dispersion_offset = value;
        dispersion_offset.value_namespace = name_space;
        dispersion_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reroute-control-enabled")
    {
        is_reroute_control_enabled = value;
        is_reroute_control_enabled.value_namespace = name_space;
        is_reroute_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major-alarm")
    {
        major_alarm = value;
        major_alarm.value_namespace = name_space;
        major_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-mode")
    {
        operation_mode = value;
        operation_mode.value_namespace = name_space;
        operation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-ber")
    {
        reroute_ber = value;
        reroute_ber.value_namespace = name_space;
        reroute_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdc-status")
    {
        tdc_status = value;
        tdc_status.value_namespace = name_space;
        tdc_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdc-valid")
    {
        tdc_valid = value;
        tdc_valid.value_namespace = name_space;
        tdc_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Info::TdcInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dispersion-offset")
    {
        dispersion_offset.yfilter = yfilter;
    }
    if(value_path == "is-reroute-control-enabled")
    {
        is_reroute_control_enabled.yfilter = yfilter;
    }
    if(value_path == "major-alarm")
    {
        major_alarm.yfilter = yfilter;
    }
    if(value_path == "operation-mode")
    {
        operation_mode.yfilter = yfilter;
    }
    if(value_path == "reroute-ber")
    {
        reroute_ber.yfilter = yfilter;
    }
    if(value_path == "tdc-status")
    {
        tdc_status.yfilter = yfilter;
    }
    if(value_path == "tdc-valid")
    {
        tdc_valid.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Info::TdcInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispersion-offset" || name == "is-reroute-control-enabled" || name == "major-alarm" || name == "operation-mode" || name == "reroute-ber" || name == "tdc-status" || name == "tdc-valid")
        return true;
    return false;
}

Dwdm::Ports::Port::Optics::Optics()
    :
    wave_info(std::make_shared<Dwdm::Ports::Port::Optics::WaveInfo>())
{
    wave_info->parent = this;

    yang_name = "optics"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Optics::~Optics()
{
}

bool Dwdm::Ports::Port::Optics::has_data() const
{
    return (wave_info !=  nullptr && wave_info->has_data());
}

bool Dwdm::Ports::Port::Optics::has_operation() const
{
    return is_set(yfilter)
	|| (wave_info !=  nullptr && wave_info->has_operation());
}

std::string Dwdm::Ports::Port::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wave-info")
    {
        if(wave_info == nullptr)
        {
            wave_info = std::make_shared<Dwdm::Ports::Port::Optics::WaveInfo>();
        }
        return wave_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wave_info != nullptr)
    {
        children["wave-info"] = wave_info;
    }

    return children;
}

void Dwdm::Ports::Port::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::Ports::Port::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dwdm::Ports::Port::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wave-info")
        return true;
    return false;
}

Dwdm::Ports::Port::Optics::WaveInfo::WaveInfo()
    :
    wave_band{YType::uint32, "wave-band"},
    wave_channel_max{YType::uint32, "wave-channel-max"},
    wave_channel_min{YType::uint32, "wave-channel-min"}
{

    yang_name = "wave-info"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Optics::WaveInfo::~WaveInfo()
{
}

bool Dwdm::Ports::Port::Optics::WaveInfo::has_data() const
{
    return wave_band.is_set
	|| wave_channel_max.is_set
	|| wave_channel_min.is_set;
}

bool Dwdm::Ports::Port::Optics::WaveInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wave_band.yfilter)
	|| ydk::is_set(wave_channel_max.yfilter)
	|| ydk::is_set(wave_channel_min.yfilter);
}

std::string Dwdm::Ports::Port::Optics::WaveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wave-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Optics::WaveInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wave_band.is_set || is_set(wave_band.yfilter)) leaf_name_data.push_back(wave_band.get_name_leafdata());
    if (wave_channel_max.is_set || is_set(wave_channel_max.yfilter)) leaf_name_data.push_back(wave_channel_max.get_name_leafdata());
    if (wave_channel_min.is_set || is_set(wave_channel_min.yfilter)) leaf_name_data.push_back(wave_channel_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Optics::WaveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Optics::WaveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Optics::WaveInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wave-band")
    {
        wave_band = value;
        wave_band.value_namespace = name_space;
        wave_band.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-max")
    {
        wave_channel_max = value;
        wave_channel_max.value_namespace = name_space;
        wave_channel_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-min")
    {
        wave_channel_min = value;
        wave_channel_min.value_namespace = name_space;
        wave_channel_min.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Optics::WaveInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wave-band")
    {
        wave_band.yfilter = yfilter;
    }
    if(value_path == "wave-channel-max")
    {
        wave_channel_max.yfilter = yfilter;
    }
    if(value_path == "wave-channel-min")
    {
        wave_channel_min.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Optics::WaveInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wave-band" || name == "wave-channel-max" || name == "wave-channel-min")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::Prbs()
    :
    fifteen_minutes_bucket(std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket>())
	,twenty_four_hours_bucket(std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket>())
{
    fifteen_minutes_bucket->parent = this;
    twenty_four_hours_bucket->parent = this;

    yang_name = "prbs"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::~Prbs()
{
}

bool Dwdm::Ports::Port::Prbs::has_data() const
{
    return (fifteen_minutes_bucket !=  nullptr && fifteen_minutes_bucket->has_data())
	|| (twenty_four_hours_bucket !=  nullptr && twenty_four_hours_bucket->has_data());
}

bool Dwdm::Ports::Port::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| (fifteen_minutes_bucket !=  nullptr && fifteen_minutes_bucket->has_operation())
	|| (twenty_four_hours_bucket !=  nullptr && twenty_four_hours_bucket->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fifteen-minutes-bucket")
    {
        if(fifteen_minutes_bucket == nullptr)
        {
            fifteen_minutes_bucket = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket>();
        }
        return fifteen_minutes_bucket;
    }

    if(child_yang_name == "twenty-four-hours-bucket")
    {
        if(twenty_four_hours_bucket == nullptr)
        {
            twenty_four_hours_bucket = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket>();
        }
        return twenty_four_hours_bucket;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fifteen_minutes_bucket != nullptr)
    {
        children["fifteen-minutes-bucket"] = fifteen_minutes_bucket;
    }

    if(twenty_four_hours_bucket != nullptr)
    {
        children["twenty-four-hours-bucket"] = twenty_four_hours_bucket;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::Ports::Port::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dwdm::Ports::Port::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fifteen-minutes-bucket" || name == "twenty-four-hours-bucket")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesBucket()
    :
    fifteen_minutes_statistics(std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics>())
{
    fifteen_minutes_statistics->parent = this;

    yang_name = "fifteen-minutes-bucket"; yang_parent_name = "prbs"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::~FifteenMinutesBucket()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::has_data() const
{
    return (fifteen_minutes_statistics !=  nullptr && fifteen_minutes_statistics->has_data());
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::has_operation() const
{
    return is_set(yfilter)
	|| (fifteen_minutes_statistics !=  nullptr && fifteen_minutes_statistics->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fifteen-minutes-bucket";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fifteen-minutes-statistics")
    {
        if(fifteen_minutes_statistics == nullptr)
        {
            fifteen_minutes_statistics = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics>();
        }
        return fifteen_minutes_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fifteen_minutes_statistics != nullptr)
    {
        children["fifteen-minutes-statistics"] = fifteen_minutes_statistics;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fifteen-minutes-statistics")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::FifteenMinutesStatistics()
    :
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    prbs_config_mode{YType::enumeration, "prbs-config-mode"}
{

    yang_name = "fifteen-minutes-statistics"; yang_parent_name = "fifteen-minutes-bucket"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::~FifteenMinutesStatistics()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::has_data() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_data())
            return true;
    }
    return is_prbs_enabled.is_set
	|| prbs_config_mode.is_set;
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::has_operation() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_prbs_enabled.yfilter)
	|| ydk::is_set(prbs_config_mode.yfilter);
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fifteen-minutes-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.yfilter)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (prbs_config_mode.is_set || is_set(prbs_config_mode.yfilter)) leaf_name_data.push_back(prbs_config_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-entry")
    {
        for(auto const & c : prbs_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry>();
        c->parent = this;
        prbs_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prbs_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
        is_prbs_enabled.value_namespace = name_space;
        is_prbs_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode = value;
        prbs_config_mode.value_namespace = name_space;
        prbs_config_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled.yfilter = yfilter;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-entry" || name == "is-prbs-enabled" || name == "prbs-config-mode")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::PrbsEntry()
    :
    bit_error_count{YType::uint64, "bit-error-count"},
    configured_pattern{YType::enumeration, "configured-pattern"},
    found_at{YType::str, "found-at"},
    found_count{YType::uint64, "found-count"},
    interval_index{YType::enumeration, "interval-index"},
    lost_at{YType::str, "lost-at"},
    lost_count{YType::uint64, "lost-count"},
    received_pattern{YType::enumeration, "received-pattern"},
    start_at{YType::str, "start-at"},
    stop_at{YType::str, "stop-at"}
{

    yang_name = "prbs-entry"; yang_parent_name = "fifteen-minutes-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::~PrbsEntry()
{
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::has_data() const
{
    return bit_error_count.is_set
	|| configured_pattern.is_set
	|| found_at.is_set
	|| found_count.is_set
	|| interval_index.is_set
	|| lost_at.is_set
	|| lost_count.is_set
	|| received_pattern.is_set
	|| start_at.is_set
	|| stop_at.is_set;
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_error_count.yfilter)
	|| ydk::is_set(configured_pattern.yfilter)
	|| ydk::is_set(found_at.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(interval_index.yfilter)
	|| ydk::is_set(lost_at.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(received_pattern.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(stop_at.yfilter);
}

std::string Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_error_count.is_set || is_set(bit_error_count.yfilter)) leaf_name_data.push_back(bit_error_count.get_name_leafdata());
    if (configured_pattern.is_set || is_set(configured_pattern.yfilter)) leaf_name_data.push_back(configured_pattern.get_name_leafdata());
    if (found_at.is_set || is_set(found_at.yfilter)) leaf_name_data.push_back(found_at.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (interval_index.is_set || is_set(interval_index.yfilter)) leaf_name_data.push_back(interval_index.get_name_leafdata());
    if (lost_at.is_set || is_set(lost_at.yfilter)) leaf_name_data.push_back(lost_at.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (received_pattern.is_set || is_set(received_pattern.yfilter)) leaf_name_data.push_back(received_pattern.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (stop_at.is_set || is_set(stop_at.yfilter)) leaf_name_data.push_back(stop_at.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count = value;
        bit_error_count.value_namespace = name_space;
        bit_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern = value;
        configured_pattern.value_namespace = name_space;
        configured_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at")
    {
        found_at = value;
        found_at.value_namespace = name_space;
        found_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-index")
    {
        interval_index = value;
        interval_index.value_namespace = name_space;
        interval_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at")
    {
        lost_at = value;
        lost_at.value_namespace = name_space;
        lost_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-pattern")
    {
        received_pattern = value;
        received_pattern.value_namespace = name_space;
        received_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at")
    {
        stop_at = value;
        stop_at.value_namespace = name_space;
        stop_at.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count.yfilter = yfilter;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern.yfilter = yfilter;
    }
    if(value_path == "found-at")
    {
        found_at.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "interval-index")
    {
        interval_index.yfilter = yfilter;
    }
    if(value_path == "lost-at")
    {
        lost_at.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "received-pattern")
    {
        received_pattern.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "stop-at")
    {
        stop_at.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Prbs::FifteenMinutesBucket::FifteenMinutesStatistics::PrbsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-error-count" || name == "configured-pattern" || name == "found-at" || name == "found-count" || name == "interval-index" || name == "lost-at" || name == "lost-count" || name == "received-pattern" || name == "start-at" || name == "stop-at")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursBucket()
    :
    twenty_four_hours_statistics(std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics>())
{
    twenty_four_hours_statistics->parent = this;

    yang_name = "twenty-four-hours-bucket"; yang_parent_name = "prbs"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::~TwentyFourHoursBucket()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::has_data() const
{
    return (twenty_four_hours_statistics !=  nullptr && twenty_four_hours_statistics->has_data());
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::has_operation() const
{
    return is_set(yfilter)
	|| (twenty_four_hours_statistics !=  nullptr && twenty_four_hours_statistics->has_operation());
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twenty-four-hours-bucket";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twenty-four-hours-statistics")
    {
        if(twenty_four_hours_statistics == nullptr)
        {
            twenty_four_hours_statistics = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics>();
        }
        return twenty_four_hours_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(twenty_four_hours_statistics != nullptr)
    {
        children["twenty-four-hours-statistics"] = twenty_four_hours_statistics;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "twenty-four-hours-statistics")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::TwentyFourHoursStatistics()
    :
    is_prbs_enabled{YType::boolean, "is-prbs-enabled"},
    prbs_config_mode{YType::enumeration, "prbs-config-mode"}
{

    yang_name = "twenty-four-hours-statistics"; yang_parent_name = "twenty-four-hours-bucket"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::~TwentyFourHoursStatistics()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::has_data() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_data())
            return true;
    }
    return is_prbs_enabled.is_set
	|| prbs_config_mode.is_set;
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::has_operation() const
{
    for (std::size_t index=0; index<prbs_entry.size(); index++)
    {
        if(prbs_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_prbs_enabled.yfilter)
	|| ydk::is_set(prbs_config_mode.yfilter);
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twenty-four-hours-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prbs_enabled.is_set || is_set(is_prbs_enabled.yfilter)) leaf_name_data.push_back(is_prbs_enabled.get_name_leafdata());
    if (prbs_config_mode.is_set || is_set(prbs_config_mode.yfilter)) leaf_name_data.push_back(prbs_config_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prbs-entry")
    {
        for(auto const & c : prbs_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry>();
        c->parent = this;
        prbs_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prbs_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled = value;
        is_prbs_enabled.value_namespace = name_space;
        is_prbs_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode = value;
        prbs_config_mode.value_namespace = name_space;
        prbs_config_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-prbs-enabled")
    {
        is_prbs_enabled.yfilter = yfilter;
    }
    if(value_path == "prbs-config-mode")
    {
        prbs_config_mode.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-entry" || name == "is-prbs-enabled" || name == "prbs-config-mode")
        return true;
    return false;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::PrbsEntry()
    :
    bit_error_count{YType::uint64, "bit-error-count"},
    configured_pattern{YType::enumeration, "configured-pattern"},
    found_at{YType::str, "found-at"},
    found_count{YType::uint64, "found-count"},
    interval_index{YType::enumeration, "interval-index"},
    lost_at{YType::str, "lost-at"},
    lost_count{YType::uint64, "lost-count"},
    received_pattern{YType::enumeration, "received-pattern"},
    start_at{YType::str, "start-at"},
    stop_at{YType::str, "stop-at"}
{

    yang_name = "prbs-entry"; yang_parent_name = "twenty-four-hours-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::~PrbsEntry()
{
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::has_data() const
{
    return bit_error_count.is_set
	|| configured_pattern.is_set
	|| found_at.is_set
	|| found_count.is_set
	|| interval_index.is_set
	|| lost_at.is_set
	|| lost_count.is_set
	|| received_pattern.is_set
	|| start_at.is_set
	|| stop_at.is_set;
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_error_count.yfilter)
	|| ydk::is_set(configured_pattern.yfilter)
	|| ydk::is_set(found_at.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(interval_index.yfilter)
	|| ydk::is_set(lost_at.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(received_pattern.yfilter)
	|| ydk::is_set(start_at.yfilter)
	|| ydk::is_set(stop_at.yfilter);
}

std::string Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_error_count.is_set || is_set(bit_error_count.yfilter)) leaf_name_data.push_back(bit_error_count.get_name_leafdata());
    if (configured_pattern.is_set || is_set(configured_pattern.yfilter)) leaf_name_data.push_back(configured_pattern.get_name_leafdata());
    if (found_at.is_set || is_set(found_at.yfilter)) leaf_name_data.push_back(found_at.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (interval_index.is_set || is_set(interval_index.yfilter)) leaf_name_data.push_back(interval_index.get_name_leafdata());
    if (lost_at.is_set || is_set(lost_at.yfilter)) leaf_name_data.push_back(lost_at.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (received_pattern.is_set || is_set(received_pattern.yfilter)) leaf_name_data.push_back(received_pattern.get_name_leafdata());
    if (start_at.is_set || is_set(start_at.yfilter)) leaf_name_data.push_back(start_at.get_name_leafdata());
    if (stop_at.is_set || is_set(stop_at.yfilter)) leaf_name_data.push_back(stop_at.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count = value;
        bit_error_count.value_namespace = name_space;
        bit_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern = value;
        configured_pattern.value_namespace = name_space;
        configured_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at")
    {
        found_at = value;
        found_at.value_namespace = name_space;
        found_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-index")
    {
        interval_index = value;
        interval_index.value_namespace = name_space;
        interval_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at")
    {
        lost_at = value;
        lost_at.value_namespace = name_space;
        lost_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-pattern")
    {
        received_pattern = value;
        received_pattern.value_namespace = name_space;
        received_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-at")
    {
        start_at = value;
        start_at.value_namespace = name_space;
        start_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at")
    {
        stop_at = value;
        stop_at.value_namespace = name_space;
        stop_at.value_namespace_prefix = name_space_prefix;
    }
}

void Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-error-count")
    {
        bit_error_count.yfilter = yfilter;
    }
    if(value_path == "configured-pattern")
    {
        configured_pattern.yfilter = yfilter;
    }
    if(value_path == "found-at")
    {
        found_at.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "interval-index")
    {
        interval_index.yfilter = yfilter;
    }
    if(value_path == "lost-at")
    {
        lost_at.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "received-pattern")
    {
        received_pattern.yfilter = yfilter;
    }
    if(value_path == "start-at")
    {
        start_at.yfilter = yfilter;
    }
    if(value_path == "stop-at")
    {
        stop_at.yfilter = yfilter;
    }
}

bool Dwdm::Ports::Port::Prbs::TwentyFourHoursBucket::TwentyFourHoursStatistics::PrbsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-error-count" || name == "configured-pattern" || name == "found-at" || name == "found-count" || name == "interval-index" || name == "lost-at" || name == "lost-count" || name == "received-pattern" || name == "start-at" || name == "stop-at")
        return true;
    return false;
}

Vtxp::Vtxp()
    :
    dwdm_vtxp(std::make_shared<Vtxp::DwdmVtxp>())
{
    dwdm_vtxp->parent = this;

    yang_name = "vtxp"; yang_parent_name = "Cisco-IOS-XR-dwdm-ui-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Vtxp::~Vtxp()
{
}

bool Vtxp::has_data() const
{
    return (dwdm_vtxp !=  nullptr && dwdm_vtxp->has_data());
}

bool Vtxp::has_operation() const
{
    return is_set(yfilter)
	|| (dwdm_vtxp !=  nullptr && dwdm_vtxp->has_operation());
}

std::string Vtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vtxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-vtxp")
    {
        if(dwdm_vtxp == nullptr)
        {
            dwdm_vtxp = std::make_shared<Vtxp::DwdmVtxp>();
        }
        return dwdm_vtxp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_vtxp != nullptr)
    {
        children["dwdm-vtxp"] = dwdm_vtxp;
    }

    return children;
}

void Vtxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vtxp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Vtxp::clone_ptr() const
{
    return std::make_shared<Vtxp>();
}

std::string Vtxp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vtxp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vtxp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vtxp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vtxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-vtxp")
        return true;
    return false;
}

Vtxp::DwdmVtxp::DwdmVtxp()
    :
    port_vtxps(std::make_shared<Vtxp::DwdmVtxp::PortVtxps>())
{
    port_vtxps->parent = this;

    yang_name = "dwdm-vtxp"; yang_parent_name = "vtxp"; is_top_level_class = false; has_list_ancestor = false;
}

Vtxp::DwdmVtxp::~DwdmVtxp()
{
}

bool Vtxp::DwdmVtxp::has_data() const
{
    return (port_vtxps !=  nullptr && port_vtxps->has_data());
}

bool Vtxp::DwdmVtxp::has_operation() const
{
    return is_set(yfilter)
	|| (port_vtxps !=  nullptr && port_vtxps->has_operation());
}

std::string Vtxp::DwdmVtxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vtxp::DwdmVtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-vtxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vtxp::DwdmVtxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-vtxps")
    {
        if(port_vtxps == nullptr)
        {
            port_vtxps = std::make_shared<Vtxp::DwdmVtxp::PortVtxps>();
        }
        return port_vtxps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_vtxps != nullptr)
    {
        children["port-vtxps"] = port_vtxps;
    }

    return children;
}

void Vtxp::DwdmVtxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vtxp::DwdmVtxp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vtxp::DwdmVtxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-vtxps")
        return true;
    return false;
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxps()
{

    yang_name = "port-vtxps"; yang_parent_name = "dwdm-vtxp"; is_top_level_class = false; has_list_ancestor = false;
}

Vtxp::DwdmVtxp::PortVtxps::~PortVtxps()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::has_data() const
{
    for (std::size_t index=0; index<port_vtxp.size(); index++)
    {
        if(port_vtxp[index]->has_data())
            return true;
    }
    return false;
}

bool Vtxp::DwdmVtxp::PortVtxps::has_operation() const
{
    for (std::size_t index=0; index<port_vtxp.size(); index++)
    {
        if(port_vtxp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vtxp::DwdmVtxp::PortVtxps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/dwdm-vtxp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vtxp::DwdmVtxp::PortVtxps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-vtxps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vtxp::DwdmVtxp::PortVtxps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-vtxp")
    {
        for(auto const & c : port_vtxp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp>();
        c->parent = this;
        port_vtxp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_vtxp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vtxp::DwdmVtxp::PortVtxps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vtxp::DwdmVtxp::PortVtxps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-vtxp")
        return true;
    return false;
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::PortVtxp()
    :
    name{YType::str, "name"}
    	,
    info(std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info>())
{
    info->parent = this;

    yang_name = "port-vtxp"; yang_parent_name = "port-vtxps"; is_top_level_class = false; has_list_ancestor = false;
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::~PortVtxp()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::has_data() const
{
    return name.is_set
	|| (info !=  nullptr && info->has_data());
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (info !=  nullptr && info->has_operation());
}

std::string Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-oper:vtxp/dwdm-vtxp/port-vtxps/" << get_segment_path();
    return path_buffer.str();
}

std::string Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-vtxp" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "name")
        return true;
    return false;
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::Info()
    :
    vtxp_enable{YType::boolean, "vtxp-enable"}
{

    yang_name = "info"; yang_parent_name = "port-vtxp"; is_top_level_class = false; has_list_ancestor = true;
}

Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::~Info()
{
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::has_data() const
{
    return vtxp_enable.is_set;
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtxp_enable.yfilter);
}

std::string Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtxp_enable.is_set || is_set(vtxp_enable.yfilter)) leaf_name_data.push_back(vtxp_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtxp-enable")
    {
        vtxp_enable = value;
        vtxp_enable.value_namespace = name_space;
        vtxp_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtxp-enable")
    {
        vtxp_enable.yfilter = yfilter;
    }
}

bool Vtxp::DwdmVtxp::PortVtxps::PortVtxp::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtxp-enable")
        return true;
    return false;
}

const Enum::YLeaf G709ppintfState::pp_intf_up {0, "pp-intf-up"};
const Enum::YLeaf G709ppintfState::pp_intf_failing {1, "pp-intf-failing"};
const Enum::YLeaf G709ppintfState::pp_intf_down {2, "pp-intf-down"};

const Enum::YLeaf G709ppfsmMode::pp_disable {0, "pp-disable"};
const Enum::YLeaf G709ppfsmMode::pp_default_mode {1, "pp-default-mode"};
const Enum::YLeaf G709ppfsmMode::pp_graceful_mode {2, "pp-graceful-mode"};

const Enum::YLeaf G709ppfsmState::in_active {0, "in-active"};
const Enum::YLeaf G709ppfsmState::disabled {1, "disabled"};
const Enum::YLeaf G709ppfsmState::normal_state {2, "normal-state"};
const Enum::YLeaf G709ppfsmState::local_failing {3, "local-failing"};
const Enum::YLeaf G709ppfsmState::remote_failing {4, "remote-failing"};
const Enum::YLeaf G709ppfsmState::main_t_failing {5, "main-t-failing"};
const Enum::YLeaf G709ppfsmState::regen_failing {6, "regen-failing"};
const Enum::YLeaf G709ppfsmState::local_failed {7, "local-failed"};
const Enum::YLeaf G709ppfsmState::remote_failed {8, "remote-failed"};
const Enum::YLeaf G709ppfsmState::main_t_failed {9, "main-t-failed"};
const Enum::YLeaf G709ppfsmState::regen_failed {10, "regen-failed"};

const Enum::YLeaf DwdmtasState::tas_oos {0, "tas-oos"};
const Enum::YLeaf DwdmtasState::tas_is {1, "tas-is"};
const Enum::YLeaf DwdmtasState::tas_oos_mt {2, "tas-oos-mt"};
const Enum::YLeaf DwdmtasState::tas_is_cfg {3, "tas-is-cfg"};

const Enum::YLeaf DwdmControllerState::dwdm_ui_state_up {0, "dwdm-ui-state-up"};
const Enum::YLeaf DwdmControllerState::dwdm_ui_state_down {1, "dwdm-ui-state-down"};
const Enum::YLeaf DwdmControllerState::dwdm_ui_state_admin_down {2, "dwdm-ui-state-admin-down"};

const Enum::YLeaf DwdmWaveChannelOwner::default_ {0, "default"};
const Enum::YLeaf DwdmWaveChannelOwner::configuration {1, "configuration"};
const Enum::YLeaf DwdmWaveChannelOwner::gmpls {2, "gmpls"};

const Enum::YLeaf G709apsByte::pp_no_protect {0, "pp-no-protect"};
const Enum::YLeaf G709apsByte::pp_no_request {15, "pp-no-request"};
const Enum::YLeaf G709apsByte::pp_regen_degrade {63, "pp-regen-degrade"};
const Enum::YLeaf G709apsByte::pp_sig_degrade {175, "pp-sig-degrade"};
const Enum::YLeaf G709apsByte::pp_remote_main {239, "pp-remote-main"};
const Enum::YLeaf G709apsByte::pp_aps_unknown {255, "pp-aps-unknown"};

const Enum::YLeaf G709prbsInterval::current_interval {0, "current-interval"};
const Enum::YLeaf G709prbsInterval::previous_interval {1, "previous-interval"};
const Enum::YLeaf G709prbsInterval::previous_interval2 {2, "previous-interval2"};
const Enum::YLeaf G709prbsInterval::previous_interval3 {3, "previous-interval3"};
const Enum::YLeaf G709prbsInterval::previous_interval4 {4, "previous-interval4"};
const Enum::YLeaf G709prbsInterval::previous_interval5 {5, "previous-interval5"};
const Enum::YLeaf G709prbsInterval::previous_interval6 {6, "previous-interval6"};
const Enum::YLeaf G709prbsInterval::previous_interval7 {7, "previous-interval7"};
const Enum::YLeaf G709prbsInterval::previous_interval8 {8, "previous-interval8"};
const Enum::YLeaf G709prbsInterval::previous_interval9 {9, "previous-interval9"};
const Enum::YLeaf G709prbsInterval::previous_interval10 {10, "previous-interval10"};
const Enum::YLeaf G709prbsInterval::previous_interval11 {11, "previous-interval11"};
const Enum::YLeaf G709prbsInterval::previous_interval12 {12, "previous-interval12"};
const Enum::YLeaf G709prbsInterval::previous_interval13 {13, "previous-interval13"};
const Enum::YLeaf G709prbsInterval::previous_interval14 {14, "previous-interval14"};
const Enum::YLeaf G709prbsInterval::previous_interval15 {15, "previous-interval15"};
const Enum::YLeaf G709prbsInterval::previous_interval16 {16, "previous-interval16"};
const Enum::YLeaf G709prbsInterval::previous_interval17 {17, "previous-interval17"};
const Enum::YLeaf G709prbsInterval::previous_interval18 {18, "previous-interval18"};
const Enum::YLeaf G709prbsInterval::previous_interval19 {19, "previous-interval19"};
const Enum::YLeaf G709prbsInterval::previous_interval20 {20, "previous-interval20"};
const Enum::YLeaf G709prbsInterval::previous_interval21 {21, "previous-interval21"};
const Enum::YLeaf G709prbsInterval::previous_interval22 {22, "previous-interval22"};
const Enum::YLeaf G709prbsInterval::previous_interval23 {23, "previous-interval23"};
const Enum::YLeaf G709prbsInterval::previous_interval24 {24, "previous-interval24"};
const Enum::YLeaf G709prbsInterval::previous_interval25 {25, "previous-interval25"};
const Enum::YLeaf G709prbsInterval::previous_interval26 {26, "previous-interval26"};
const Enum::YLeaf G709prbsInterval::previous_interval27 {27, "previous-interval27"};
const Enum::YLeaf G709prbsInterval::previous_interval28 {28, "previous-interval28"};
const Enum::YLeaf G709prbsInterval::previous_interval29 {29, "previous-interval29"};
const Enum::YLeaf G709prbsInterval::previous_interval30 {30, "previous-interval30"};
const Enum::YLeaf G709prbsInterval::previous_interval31 {31, "previous-interval31"};
const Enum::YLeaf G709prbsInterval::previous_interval32 {32, "previous-interval32"};

const Enum::YLeaf G709efecMode::g975_none {0, "g975-none"};
const Enum::YLeaf G709efecMode::g975_1_i4 {1, "g975-1-i4"};
const Enum::YLeaf G709efecMode::g975_1_i7 {2, "g975-1-i7"};

const Enum::YLeaf G709prbsPattern::pattern_none {0, "pattern-none"};
const Enum::YLeaf G709prbsPattern::pattern_null {1, "pattern-null"};
const Enum::YLeaf G709prbsPattern::pattern_pn11 {2, "pattern-pn11"};
const Enum::YLeaf G709prbsPattern::pattern_pn23 {3, "pattern-pn23"};
const Enum::YLeaf G709prbsPattern::pattern_pn31 {4, "pattern-pn31"};

const Enum::YLeaf G709prbsMode::mode_source {0, "mode-source"};
const Enum::YLeaf G709prbsMode::mode_sink {1, "mode-sink"};
const Enum::YLeaf G709prbsMode::mode_source_sink {2, "mode-source-sink"};
const Enum::YLeaf G709prbsMode::mode_invalid {3, "mode-invalid"};


}
}

