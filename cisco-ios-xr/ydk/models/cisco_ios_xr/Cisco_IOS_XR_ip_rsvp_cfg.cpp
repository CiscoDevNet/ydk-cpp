
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_cfg {

Rsvp::Rsvp()
    :
    authentication(std::make_shared<Rsvp::Authentication>())
	,controllers(std::make_shared<Rsvp::Controllers>())
	,global_bandwidth(std::make_shared<Rsvp::GlobalBandwidth>())
	,global_logging(std::make_shared<Rsvp::GlobalLogging>())
	,interfaces(std::make_shared<Rsvp::Interfaces>())
	,neighbors(std::make_shared<Rsvp::Neighbors>())
	,signalling(std::make_shared<Rsvp::Signalling>())
{
    authentication->parent = this;
    controllers->parent = this;
    global_bandwidth->parent = this;
    global_logging->parent = this;
    interfaces->parent = this;
    neighbors->parent = this;
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "Cisco-IOS-XR-ip-rsvp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Rsvp::~Rsvp()
{
}

bool Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (controllers !=  nullptr && controllers->has_data())
	|| (global_bandwidth !=  nullptr && global_bandwidth->has_data())
	|| (global_logging !=  nullptr && global_logging->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (controllers !=  nullptr && controllers->has_operation())
	|| (global_bandwidth !=  nullptr && global_bandwidth->has_operation())
	|| (global_logging !=  nullptr && global_logging->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Rsvp::Controllers>();
        }
        return controllers;
    }

    if(child_yang_name == "global-bandwidth")
    {
        if(global_bandwidth == nullptr)
        {
            global_bandwidth = std::make_shared<Rsvp::GlobalBandwidth>();
        }
        return global_bandwidth;
    }

    if(child_yang_name == "global-logging")
    {
        if(global_logging == nullptr)
        {
            global_logging = std::make_shared<Rsvp::GlobalLogging>();
        }
        return global_logging;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Rsvp::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    if(global_bandwidth != nullptr)
    {
        children["global-bandwidth"] = global_bandwidth;
    }

    if(global_logging != nullptr)
    {
        children["global-logging"] = global_logging;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    return children;
}

void Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Rsvp::clone_ptr() const
{
    return std::make_shared<Rsvp>();
}

std::string Rsvp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rsvp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rsvp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rsvp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "controllers" || name == "global-bandwidth" || name == "global-logging" || name == "interfaces" || name == "neighbors" || name == "signalling")
        return true;
    return false;
}

Rsvp::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    key_chain{YType::str, "key-chain"},
    life_time{YType::uint32, "life-time"},
    window_size{YType::uint32, "window-size"}
{

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Authentication::~Authentication()
{
}

bool Rsvp::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Rsvp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "key-chain" || name == "life-time" || name == "window-size")
        return true;
    return false;
}

Rsvp::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Controllers::~Controllers()
{
}

bool Rsvp::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Rsvp::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    enable{YType::empty, "enable"}
    	,
    cntl_signalling(std::make_shared<Rsvp::Controllers::Controller::CntlSignalling>())
{
    cntl_signalling->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Controllers::Controller::~Controller()
{
}

bool Rsvp::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| enable.is_set
	|| (cntl_signalling !=  nullptr && cntl_signalling->has_data());
}

bool Rsvp::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (cntl_signalling !=  nullptr && cntl_signalling->has_operation());
}

std::string Rsvp::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntl-signalling")
    {
        if(cntl_signalling == nullptr)
        {
            cntl_signalling = std::make_shared<Rsvp::Controllers::Controller::CntlSignalling>();
        }
        return cntl_signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cntl_signalling != nullptr)
    {
        children["cntl-signalling"] = cntl_signalling;
    }

    return children;
}

void Rsvp::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rsvp::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntl-signalling" || name == "controller-name" || name == "enable")
        return true;
    return false;
}

Rsvp::Controllers::Controller::CntlSignalling::CntlSignalling()
    :
    out_of_band(std::make_shared<Rsvp::Controllers::Controller::CntlSignalling::OutOfBand>())
{
    out_of_band->parent = this;

    yang_name = "cntl-signalling"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Controllers::Controller::CntlSignalling::~CntlSignalling()
{
}

bool Rsvp::Controllers::Controller::CntlSignalling::has_data() const
{
    return (out_of_band !=  nullptr && out_of_band->has_data());
}

bool Rsvp::Controllers::Controller::CntlSignalling::has_operation() const
{
    return is_set(yfilter)
	|| (out_of_band !=  nullptr && out_of_band->has_operation());
}

std::string Rsvp::Controllers::Controller::CntlSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntl-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Controllers::Controller::CntlSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Controllers::Controller::CntlSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-of-band")
    {
        if(out_of_band == nullptr)
        {
            out_of_band = std::make_shared<Rsvp::Controllers::Controller::CntlSignalling::OutOfBand>();
        }
        return out_of_band;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Controllers::Controller::CntlSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_of_band != nullptr)
    {
        children["out-of-band"] = out_of_band;
    }

    return children;
}

void Rsvp::Controllers::Controller::CntlSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Controllers::Controller::CntlSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Controllers::Controller::CntlSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-of-band")
        return true;
    return false;
}

Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::OutOfBand()
    :
    missed_messages{YType::uint32, "missed-messages"},
    refresh_interval{YType::uint32, "refresh-interval"}
{

    yang_name = "out-of-band"; yang_parent_name = "cntl-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::~OutOfBand()
{
}

bool Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::has_data() const
{
    return missed_messages.is_set
	|| refresh_interval.is_set;
}

bool Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missed_messages.yfilter)
	|| ydk::is_set(refresh_interval.yfilter);
}

std::string Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missed_messages.is_set || is_set(missed_messages.yfilter)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missed-messages")
    {
        missed_messages = value;
        missed_messages.value_namespace = name_space;
        missed_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missed-messages")
    {
        missed_messages.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
}

bool Rsvp::Controllers::Controller::CntlSignalling::OutOfBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missed-messages" || name == "refresh-interval")
        return true;
    return false;
}

Rsvp::GlobalBandwidth::GlobalBandwidth()
    :
    default_interface_percent(std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent>())
{
    default_interface_percent->parent = this;

    yang_name = "global-bandwidth"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalBandwidth::~GlobalBandwidth()
{
}

bool Rsvp::GlobalBandwidth::has_data() const
{
    return (default_interface_percent !=  nullptr && default_interface_percent->has_data());
}

bool Rsvp::GlobalBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (default_interface_percent !=  nullptr && default_interface_percent->has_operation());
}

std::string Rsvp::GlobalBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-interface-percent")
    {
        if(default_interface_percent == nullptr)
        {
            default_interface_percent = std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent>();
        }
        return default_interface_percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_interface_percent != nullptr)
    {
        children["default-interface-percent"] = default_interface_percent;
    }

    return children;
}

void Rsvp::GlobalBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-interface-percent")
        return true;
    return false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::DefaultInterfacePercent()
    :
    mam(std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam>())
	,rdm(std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm>())
{
    mam->parent = this;
    rdm->parent = this;

    yang_name = "default-interface-percent"; yang_parent_name = "global-bandwidth"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::~DefaultInterfacePercent()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::has_data() const
{
    return (mam !=  nullptr && mam->has_data())
	|| (rdm !=  nullptr && rdm->has_data());
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::has_operation() const
{
    return is_set(yfilter)
	|| (mam !=  nullptr && mam->has_operation())
	|| (rdm !=  nullptr && rdm->has_operation());
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-interface-percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mam")
    {
        if(mam == nullptr)
        {
            mam = std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam>();
        }
        return mam;
    }

    if(child_yang_name == "rdm")
    {
        if(rdm == nullptr)
        {
            rdm = std::make_shared<Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm>();
        }
        return rdm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalBandwidth::DefaultInterfacePercent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mam != nullptr)
    {
        children["mam"] = mam;
    }

    if(rdm != nullptr)
    {
        children["rdm"] = rdm;
    }

    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mam" || name == "rdm")
        return true;
    return false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::Mam()
    :
    bc0_percent{YType::uint32, "bc0-percent"},
    bc1_percent{YType::uint32, "bc1-percent"},
    max_res_percent{YType::uint32, "max-res-percent"}
{

    yang_name = "mam"; yang_parent_name = "default-interface-percent"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::~Mam()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::has_data() const
{
    return bc0_percent.is_set
	|| bc1_percent.is_set
	|| max_res_percent.is_set;
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc0_percent.yfilter)
	|| ydk::is_set(bc1_percent.yfilter)
	|| ydk::is_set(max_res_percent.yfilter);
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/default-interface-percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc0_percent.is_set || is_set(bc0_percent.yfilter)) leaf_name_data.push_back(bc0_percent.get_name_leafdata());
    if (bc1_percent.is_set || is_set(bc1_percent.yfilter)) leaf_name_data.push_back(bc1_percent.get_name_leafdata());
    if (max_res_percent.is_set || is_set(max_res_percent.yfilter)) leaf_name_data.push_back(max_res_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent = value;
        bc0_percent.value_namespace = name_space;
        bc0_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent = value;
        bc1_percent.value_namespace = name_space;
        bc1_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-res-percent")
    {
        max_res_percent = value;
        max_res_percent.value_namespace = name_space;
        max_res_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent.yfilter = yfilter;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent.yfilter = yfilter;
    }
    if(value_path == "max-res-percent")
    {
        max_res_percent.yfilter = yfilter;
    }
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bc0-percent" || name == "bc1-percent" || name == "max-res-percent")
        return true;
    return false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::Rdm()
    :
    bc0_percent{YType::uint32, "bc0-percent"},
    bc1_percent{YType::uint32, "bc1-percent"}
{

    yang_name = "rdm"; yang_parent_name = "default-interface-percent"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::~Rdm()
{
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::has_data() const
{
    return bc0_percent.is_set
	|| bc1_percent.is_set;
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc0_percent.yfilter)
	|| ydk::is_set(bc1_percent.yfilter);
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/global-bandwidth/default-interface-percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc0_percent.is_set || is_set(bc0_percent.yfilter)) leaf_name_data.push_back(bc0_percent.get_name_leafdata());
    if (bc1_percent.is_set || is_set(bc1_percent.yfilter)) leaf_name_data.push_back(bc1_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent = value;
        bc0_percent.value_namespace = name_space;
        bc0_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent = value;
        bc1_percent.value_namespace = name_space;
        bc1_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc0-percent")
    {
        bc0_percent.yfilter = yfilter;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent.yfilter = yfilter;
    }
}

bool Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bc0-percent" || name == "bc1-percent")
        return true;
    return false;
}

Rsvp::GlobalLogging::GlobalLogging()
    :
    log_issu_status{YType::empty, "log-issu-status"},
    log_nsr_status{YType::empty, "log-nsr-status"}
{

    yang_name = "global-logging"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalLogging::~GlobalLogging()
{
}

bool Rsvp::GlobalLogging::has_data() const
{
    return log_issu_status.is_set
	|| log_nsr_status.is_set;
}

bool Rsvp::GlobalLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_issu_status.yfilter)
	|| ydk::is_set(log_nsr_status.yfilter);
}

std::string Rsvp::GlobalLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_issu_status.is_set || is_set(log_issu_status.yfilter)) leaf_name_data.push_back(log_issu_status.get_name_leafdata());
    if (log_nsr_status.is_set || is_set(log_nsr_status.yfilter)) leaf_name_data.push_back(log_nsr_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-issu-status")
    {
        log_issu_status = value;
        log_issu_status.value_namespace = name_space;
        log_issu_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status = value;
        log_nsr_status.value_namespace = name_space;
        log_nsr_status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-issu-status")
    {
        log_issu_status.yfilter = yfilter;
    }
    if(value_path == "log-nsr-status")
    {
        log_nsr_status.yfilter = yfilter;
    }
}

bool Rsvp::GlobalLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-issu-status" || name == "log-nsr-status")
        return true;
    return false;
}

Rsvp::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Interfaces::~Interfaces()
{
}

bool Rsvp::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
    	,
    authentication(std::make_shared<Rsvp::Interfaces::Interface::Authentication>())
	,bandwidth(std::make_shared<Rsvp::Interfaces::Interface::Bandwidth>())
	,if_signalling(std::make_shared<Rsvp::Interfaces::Interface::IfSignalling>())
{
    authentication->parent = this;
    bandwidth->parent = this;
    if_signalling->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Interfaces::Interface::~Interface()
{
}

bool Rsvp::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (if_signalling !=  nullptr && if_signalling->has_data());
}

bool Rsvp::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (if_signalling !=  nullptr && if_signalling->has_operation());
}

std::string Rsvp::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Rsvp::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Rsvp::Interfaces::Interface::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "if-signalling")
    {
        if(if_signalling == nullptr)
        {
            if_signalling = std::make_shared<Rsvp::Interfaces::Interface::IfSignalling>();
        }
        return if_signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(if_signalling != nullptr)
    {
        children["if-signalling"] = if_signalling;
    }

    return children;
}

void Rsvp::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bandwidth" || name == "if-signalling" || name == "name" || name == "enable")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    key_chain{YType::str, "key-chain"},
    life_time{YType::uint32, "life-time"},
    window_size{YType::uint32, "window-size"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rsvp::Interfaces::Interface::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Rsvp::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "key-chain" || name == "life-time" || name == "window-size")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::Bandwidth::Bandwidth()
    :
    mam(std::make_shared<Rsvp::Interfaces::Interface::Bandwidth::Mam>())
	,rdm(std::make_shared<Rsvp::Interfaces::Interface::Bandwidth::Rdm>())
{
    mam->parent = this;
    rdm->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::Bandwidth::~Bandwidth()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::has_data() const
{
    return (mam !=  nullptr && mam->has_data())
	|| (rdm !=  nullptr && rdm->has_data());
}

bool Rsvp::Interfaces::Interface::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (mam !=  nullptr && mam->has_operation())
	|| (rdm !=  nullptr && rdm->has_operation());
}

std::string Rsvp::Interfaces::Interface::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mam")
    {
        if(mam == nullptr)
        {
            mam = std::make_shared<Rsvp::Interfaces::Interface::Bandwidth::Mam>();
        }
        return mam;
    }

    if(child_yang_name == "rdm")
    {
        if(rdm == nullptr)
        {
            rdm = std::make_shared<Rsvp::Interfaces::Interface::Bandwidth::Rdm>();
        }
        return rdm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mam != nullptr)
    {
        children["mam"] = mam;
    }

    if(rdm != nullptr)
    {
        children["rdm"] = rdm;
    }

    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Interfaces::Interface::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mam" || name == "rdm")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::Bandwidth::Mam::Mam()
    :
    bandwidth_mode{YType::enumeration, "bandwidth-mode"},
    bc0_bandwidth{YType::uint32, "bc0-bandwidth"},
    bc1_bandwidth{YType::uint32, "bc1-bandwidth"},
    max_resv_bandwidth{YType::uint32, "max-resv-bandwidth"},
    max_resv_flow{YType::uint32, "max-resv-flow"}
{

    yang_name = "mam"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::Bandwidth::Mam::~Mam()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::Mam::has_data() const
{
    return bandwidth_mode.is_set
	|| bc0_bandwidth.is_set
	|| bc1_bandwidth.is_set
	|| max_resv_bandwidth.is_set
	|| max_resv_flow.is_set;
}

bool Rsvp::Interfaces::Interface::Bandwidth::Mam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_mode.yfilter)
	|| ydk::is_set(bc0_bandwidth.yfilter)
	|| ydk::is_set(bc1_bandwidth.yfilter)
	|| ydk::is_set(max_resv_bandwidth.yfilter)
	|| ydk::is_set(max_resv_flow.yfilter);
}

std::string Rsvp::Interfaces::Interface::Bandwidth::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::Bandwidth::Mam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_mode.is_set || is_set(bandwidth_mode.yfilter)) leaf_name_data.push_back(bandwidth_mode.get_name_leafdata());
    if (bc0_bandwidth.is_set || is_set(bc0_bandwidth.yfilter)) leaf_name_data.push_back(bc0_bandwidth.get_name_leafdata());
    if (bc1_bandwidth.is_set || is_set(bc1_bandwidth.yfilter)) leaf_name_data.push_back(bc1_bandwidth.get_name_leafdata());
    if (max_resv_bandwidth.is_set || is_set(max_resv_bandwidth.yfilter)) leaf_name_data.push_back(max_resv_bandwidth.get_name_leafdata());
    if (max_resv_flow.is_set || is_set(max_resv_flow.yfilter)) leaf_name_data.push_back(max_resv_flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::Bandwidth::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::Bandwidth::Mam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::Mam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode = value;
        bandwidth_mode.value_namespace = name_space;
        bandwidth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth = value;
        bc0_bandwidth.value_namespace = name_space;
        bc0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth = value;
        bc1_bandwidth.value_namespace = name_space;
        bc1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-resv-bandwidth")
    {
        max_resv_bandwidth = value;
        max_resv_bandwidth.value_namespace = name_space;
        max_resv_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow = value;
        max_resv_flow.value_namespace = name_space;
        max_resv_flow.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::Bandwidth::Mam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode.yfilter = yfilter;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-resv-bandwidth")
    {
        max_resv_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::Bandwidth::Mam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-mode" || name == "bc0-bandwidth" || name == "bc1-bandwidth" || name == "max-resv-bandwidth" || name == "max-resv-flow")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::Bandwidth::Rdm::Rdm()
    :
    bandwidth_mode{YType::enumeration, "bandwidth-mode"},
    bc0_bandwidth{YType::uint32, "bc0-bandwidth"},
    bc0_keyword{YType::enumeration, "bc0-keyword"},
    bc1_bandwidth{YType::uint32, "bc1-bandwidth"},
    bc1_keyword{YType::enumeration, "bc1-keyword"},
    max_resv_flow{YType::uint32, "max-resv-flow"},
    rdm_keyword{YType::enumeration, "rdm-keyword"}
{

    yang_name = "rdm"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::Bandwidth::Rdm::~Rdm()
{
}

bool Rsvp::Interfaces::Interface::Bandwidth::Rdm::has_data() const
{
    return bandwidth_mode.is_set
	|| bc0_bandwidth.is_set
	|| bc0_keyword.is_set
	|| bc1_bandwidth.is_set
	|| bc1_keyword.is_set
	|| max_resv_flow.is_set
	|| rdm_keyword.is_set;
}

bool Rsvp::Interfaces::Interface::Bandwidth::Rdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_mode.yfilter)
	|| ydk::is_set(bc0_bandwidth.yfilter)
	|| ydk::is_set(bc0_keyword.yfilter)
	|| ydk::is_set(bc1_bandwidth.yfilter)
	|| ydk::is_set(bc1_keyword.yfilter)
	|| ydk::is_set(max_resv_flow.yfilter)
	|| ydk::is_set(rdm_keyword.yfilter);
}

std::string Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_mode.is_set || is_set(bandwidth_mode.yfilter)) leaf_name_data.push_back(bandwidth_mode.get_name_leafdata());
    if (bc0_bandwidth.is_set || is_set(bc0_bandwidth.yfilter)) leaf_name_data.push_back(bc0_bandwidth.get_name_leafdata());
    if (bc0_keyword.is_set || is_set(bc0_keyword.yfilter)) leaf_name_data.push_back(bc0_keyword.get_name_leafdata());
    if (bc1_bandwidth.is_set || is_set(bc1_bandwidth.yfilter)) leaf_name_data.push_back(bc1_bandwidth.get_name_leafdata());
    if (bc1_keyword.is_set || is_set(bc1_keyword.yfilter)) leaf_name_data.push_back(bc1_keyword.get_name_leafdata());
    if (max_resv_flow.is_set || is_set(max_resv_flow.yfilter)) leaf_name_data.push_back(max_resv_flow.get_name_leafdata());
    if (rdm_keyword.is_set || is_set(rdm_keyword.yfilter)) leaf_name_data.push_back(rdm_keyword.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::Bandwidth::Rdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::Bandwidth::Rdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode = value;
        bandwidth_mode.value_namespace = name_space;
        bandwidth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth = value;
        bc0_bandwidth.value_namespace = name_space;
        bc0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0-keyword")
    {
        bc0_keyword = value;
        bc0_keyword.value_namespace = name_space;
        bc0_keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth = value;
        bc1_bandwidth.value_namespace = name_space;
        bc1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-keyword")
    {
        bc1_keyword = value;
        bc1_keyword.value_namespace = name_space;
        bc1_keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow = value;
        max_resv_flow.value_namespace = name_space;
        max_resv_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rdm-keyword")
    {
        rdm_keyword = value;
        rdm_keyword.value_namespace = name_space;
        rdm_keyword.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::Bandwidth::Rdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-mode")
    {
        bandwidth_mode.yfilter = yfilter;
    }
    if(value_path == "bc0-bandwidth")
    {
        bc0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bc0-keyword")
    {
        bc0_keyword.yfilter = yfilter;
    }
    if(value_path == "bc1-bandwidth")
    {
        bc1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bc1-keyword")
    {
        bc1_keyword.yfilter = yfilter;
    }
    if(value_path == "max-resv-flow")
    {
        max_resv_flow.yfilter = yfilter;
    }
    if(value_path == "rdm-keyword")
    {
        rdm_keyword.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::Bandwidth::Rdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-mode" || name == "bc0-bandwidth" || name == "bc0-keyword" || name == "bc1-bandwidth" || name == "bc1-keyword" || name == "max-resv-flow" || name == "rdm-keyword")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::IfSignalling::IfSignalling()
    :
    dscp{YType::uint32, "dscp"},
    hello_graceful_restart_if_based{YType::empty, "hello-graceful-restart-if-based"},
    missed_messages{YType::uint32, "missed-messages"},
    pacing{YType::empty, "pacing"},
    refresh_interval{YType::uint32, "refresh-interval"}
    	,
    interval_rate(std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::IntervalRate>())
	,out_of_band(std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::OutOfBand>())
	,refresh_reduction(std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction>())
{
    interval_rate->parent = this;
    out_of_band->parent = this;
    refresh_reduction->parent = this;

    yang_name = "if-signalling"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::IfSignalling::~IfSignalling()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::has_data() const
{
    return dscp.is_set
	|| hello_graceful_restart_if_based.is_set
	|| missed_messages.is_set
	|| pacing.is_set
	|| refresh_interval.is_set
	|| (interval_rate !=  nullptr && interval_rate->has_data())
	|| (out_of_band !=  nullptr && out_of_band->has_data())
	|| (refresh_reduction !=  nullptr && refresh_reduction->has_data());
}

bool Rsvp::Interfaces::Interface::IfSignalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(hello_graceful_restart_if_based.yfilter)
	|| ydk::is_set(missed_messages.yfilter)
	|| ydk::is_set(pacing.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| (interval_rate !=  nullptr && interval_rate->has_operation())
	|| (out_of_band !=  nullptr && out_of_band->has_operation())
	|| (refresh_reduction !=  nullptr && refresh_reduction->has_operation());
}

std::string Rsvp::Interfaces::Interface::IfSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::IfSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (hello_graceful_restart_if_based.is_set || is_set(hello_graceful_restart_if_based.yfilter)) leaf_name_data.push_back(hello_graceful_restart_if_based.get_name_leafdata());
    if (missed_messages.is_set || is_set(missed_messages.yfilter)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (pacing.is_set || is_set(pacing.yfilter)) leaf_name_data.push_back(pacing.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::IfSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval-rate")
    {
        if(interval_rate == nullptr)
        {
            interval_rate = std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::IntervalRate>();
        }
        return interval_rate;
    }

    if(child_yang_name == "out-of-band")
    {
        if(out_of_band == nullptr)
        {
            out_of_band = std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::OutOfBand>();
        }
        return out_of_band;
    }

    if(child_yang_name == "refresh-reduction")
    {
        if(refresh_reduction == nullptr)
        {
            refresh_reduction = std::make_shared<Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction>();
        }
        return refresh_reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::IfSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval_rate != nullptr)
    {
        children["interval-rate"] = interval_rate;
    }

    if(out_of_band != nullptr)
    {
        children["out-of-band"] = out_of_band;
    }

    if(refresh_reduction != nullptr)
    {
        children["refresh-reduction"] = refresh_reduction;
    }

    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-graceful-restart-if-based")
    {
        hello_graceful_restart_if_based = value;
        hello_graceful_restart_if_based.value_namespace = name_space;
        hello_graceful_restart_if_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-messages")
    {
        missed_messages = value;
        missed_messages.value_namespace = name_space;
        missed_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing")
    {
        pacing = value;
        pacing.value_namespace = name_space;
        pacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::IfSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "hello-graceful-restart-if-based")
    {
        hello_graceful_restart_if_based.yfilter = yfilter;
    }
    if(value_path == "missed-messages")
    {
        missed_messages.yfilter = yfilter;
    }
    if(value_path == "pacing")
    {
        pacing.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::IfSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-rate" || name == "out-of-band" || name == "refresh-reduction" || name == "dscp" || name == "hello-graceful-restart-if-based" || name == "missed-messages" || name == "pacing" || name == "refresh-interval")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::IntervalRate()
    :
    interval_size{YType::uint32, "interval-size"},
    messages_per_interval{YType::uint32, "messages-per-interval"}
{

    yang_name = "interval-rate"; yang_parent_name = "if-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::~IntervalRate()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::has_data() const
{
    return interval_size.is_set
	|| messages_per_interval.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_size.yfilter)
	|| ydk::is_set(messages_per_interval.yfilter);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_size.is_set || is_set(interval_size.yfilter)) leaf_name_data.push_back(interval_size.get_name_leafdata());
    if (messages_per_interval.is_set || is_set(messages_per_interval.yfilter)) leaf_name_data.push_back(messages_per_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-size")
    {
        interval_size = value;
        interval_size.value_namespace = name_space;
        interval_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-per-interval")
    {
        messages_per_interval = value;
        messages_per_interval.value_namespace = name_space;
        messages_per_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-size")
    {
        interval_size.yfilter = yfilter;
    }
    if(value_path == "messages-per-interval")
    {
        messages_per_interval.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::IfSignalling::IntervalRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-size" || name == "messages-per-interval")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::OutOfBand()
    :
    missed_messages{YType::uint32, "missed-messages"},
    refresh_interval{YType::uint32, "refresh-interval"}
{

    yang_name = "out-of-band"; yang_parent_name = "if-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::~OutOfBand()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::has_data() const
{
    return missed_messages.is_set
	|| refresh_interval.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missed_messages.yfilter)
	|| ydk::is_set(refresh_interval.yfilter);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missed_messages.is_set || is_set(missed_messages.yfilter)) leaf_name_data.push_back(missed_messages.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missed-messages")
    {
        missed_messages = value;
        missed_messages.value_namespace = name_space;
        missed_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missed-messages")
    {
        missed_messages.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::IfSignalling::OutOfBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missed-messages" || name == "refresh-interval")
        return true;
    return false;
}

Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::RefreshReduction()
    :
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    disable{YType::empty, "disable"},
    reliable_ack_hold_time{YType::uint32, "reliable-ack-hold-time"},
    reliable_ack_max_size{YType::uint32, "reliable-ack-max-size"},
    reliable_retransmit_time{YType::uint32, "reliable-retransmit-time"},
    reliable_s_refresh{YType::empty, "reliable-s-refresh"},
    summary_max_size{YType::uint32, "summary-max-size"}
{

    yang_name = "refresh-reduction"; yang_parent_name = "if-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::~RefreshReduction()
{
}

bool Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::has_data() const
{
    return bundle_message_max_size.is_set
	|| disable.is_set
	|| reliable_ack_hold_time.is_set
	|| reliable_ack_max_size.is_set
	|| reliable_retransmit_time.is_set
	|| reliable_s_refresh.is_set
	|| summary_max_size.is_set;
}

bool Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_message_max_size.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(reliable_ack_hold_time.yfilter)
	|| ydk::is_set(reliable_ack_max_size.yfilter)
	|| ydk::is_set(reliable_retransmit_time.yfilter)
	|| ydk::is_set(reliable_s_refresh.yfilter)
	|| ydk::is_set(summary_max_size.yfilter);
}

std::string Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.yfilter)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (reliable_ack_hold_time.is_set || is_set(reliable_ack_hold_time.yfilter)) leaf_name_data.push_back(reliable_ack_hold_time.get_name_leafdata());
    if (reliable_ack_max_size.is_set || is_set(reliable_ack_max_size.yfilter)) leaf_name_data.push_back(reliable_ack_max_size.get_name_leafdata());
    if (reliable_retransmit_time.is_set || is_set(reliable_retransmit_time.yfilter)) leaf_name_data.push_back(reliable_retransmit_time.get_name_leafdata());
    if (reliable_s_refresh.is_set || is_set(reliable_s_refresh.yfilter)) leaf_name_data.push_back(reliable_s_refresh.get_name_leafdata());
    if (summary_max_size.is_set || is_set(summary_max_size.yfilter)) leaf_name_data.push_back(summary_max_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
        bundle_message_max_size.value_namespace = name_space;
        bundle_message_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-ack-hold-time")
    {
        reliable_ack_hold_time = value;
        reliable_ack_hold_time.value_namespace = name_space;
        reliable_ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-ack-max-size")
    {
        reliable_ack_max_size = value;
        reliable_ack_max_size.value_namespace = name_space;
        reliable_ack_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-retransmit-time")
    {
        reliable_retransmit_time = value;
        reliable_retransmit_time.value_namespace = name_space;
        reliable_retransmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-s-refresh")
    {
        reliable_s_refresh = value;
        reliable_s_refresh.value_namespace = name_space;
        reliable_s_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-max-size")
    {
        summary_max_size = value;
        summary_max_size.value_namespace = name_space;
        summary_max_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "reliable-ack-hold-time")
    {
        reliable_ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "reliable-ack-max-size")
    {
        reliable_ack_max_size.yfilter = yfilter;
    }
    if(value_path == "reliable-retransmit-time")
    {
        reliable_retransmit_time.yfilter = yfilter;
    }
    if(value_path == "reliable-s-refresh")
    {
        reliable_s_refresh.yfilter = yfilter;
    }
    if(value_path == "summary-max-size")
    {
        summary_max_size.yfilter = yfilter;
    }
}

bool Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-message-max-size" || name == "disable" || name == "reliable-ack-hold-time" || name == "reliable-ack-max-size" || name == "reliable-retransmit-time" || name == "reliable-s-refresh" || name == "summary-max-size")
        return true;
    return false;
}

Rsvp::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Neighbors::~Neighbors()
{
}

bool Rsvp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Rsvp::Neighbors::Neighbor::Neighbor()
    :
    neighbor{YType::str, "neighbor"}
    	,
    authentication(std::make_shared<Rsvp::Neighbors::Neighbor::Authentication>())
{
    authentication->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Neighbors::Neighbor::~Neighbor()
{
}

bool Rsvp::Neighbors::Neighbor::has_data() const
{
    return neighbor.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Rsvp::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Rsvp::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor='" <<neighbor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Rsvp::Neighbors::Neighbor::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Rsvp::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Rsvp::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "neighbor")
        return true;
    return false;
}

Rsvp::Neighbors::Neighbor::Authentication::Authentication()
    :
    enable{YType::boolean, "enable"},
    key_chain{YType::str, "key-chain"},
    life_time{YType::uint32, "life-time"},
    window_size{YType::uint32, "window-size"}
{

    yang_name = "authentication"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Neighbors::Neighbor::Authentication::~Authentication()
{
}

bool Rsvp::Neighbors::Neighbor::Authentication::has_data() const
{
    return enable.is_set
	|| key_chain.is_set
	|| life_time.is_set
	|| window_size.is_set;
}

bool Rsvp::Neighbors::Neighbor::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Rsvp::Neighbors::Neighbor::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Neighbors::Neighbor::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Neighbors::Neighbor::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Neighbors::Neighbor::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Neighbors::Neighbor::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Neighbors::Neighbor::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Rsvp::Neighbors::Neighbor::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "key-chain" || name == "life-time" || name == "window-size")
        return true;
    return false;
}

Rsvp::Signalling::Signalling()
    :
    hello_graceful_restart_interval{YType::uint32, "hello-graceful-restart-interval"},
    hello_graceful_restart_misses{YType::uint32, "hello-graceful-restart-misses"}
    	,
    checksum(std::make_shared<Rsvp::Signalling::Checksum>())
	,global_out_of_band(std::make_shared<Rsvp::Signalling::GlobalOutOfBand>())
	,graceful_restart(std::make_shared<Rsvp::Signalling::GracefulRestart>())
	,pesr(std::make_shared<Rsvp::Signalling::Pesr>())
	,prefix_filtering(std::make_shared<Rsvp::Signalling::PrefixFiltering>())
{
    checksum->parent = this;
    global_out_of_band->parent = this;
    graceful_restart->parent = this;
    pesr->parent = this;
    prefix_filtering->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::~Signalling()
{
}

bool Rsvp::Signalling::has_data() const
{
    return hello_graceful_restart_interval.is_set
	|| hello_graceful_restart_misses.is_set
	|| (checksum !=  nullptr && checksum->has_data())
	|| (global_out_of_band !=  nullptr && global_out_of_band->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (pesr !=  nullptr && pesr->has_data())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_data());
}

bool Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_graceful_restart_interval.yfilter)
	|| ydk::is_set(hello_graceful_restart_misses.yfilter)
	|| (checksum !=  nullptr && checksum->has_operation())
	|| (global_out_of_band !=  nullptr && global_out_of_band->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (pesr !=  nullptr && pesr->has_operation())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_operation());
}

std::string Rsvp::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_graceful_restart_interval.is_set || is_set(hello_graceful_restart_interval.yfilter)) leaf_name_data.push_back(hello_graceful_restart_interval.get_name_leafdata());
    if (hello_graceful_restart_misses.is_set || is_set(hello_graceful_restart_misses.yfilter)) leaf_name_data.push_back(hello_graceful_restart_misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checksum")
    {
        if(checksum == nullptr)
        {
            checksum = std::make_shared<Rsvp::Signalling::Checksum>();
        }
        return checksum;
    }

    if(child_yang_name == "global-out-of-band")
    {
        if(global_out_of_band == nullptr)
        {
            global_out_of_band = std::make_shared<Rsvp::Signalling::GlobalOutOfBand>();
        }
        return global_out_of_band;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Rsvp::Signalling::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "pesr")
    {
        if(pesr == nullptr)
        {
            pesr = std::make_shared<Rsvp::Signalling::Pesr>();
        }
        return pesr;
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering == nullptr)
        {
            prefix_filtering = std::make_shared<Rsvp::Signalling::PrefixFiltering>();
        }
        return prefix_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(checksum != nullptr)
    {
        children["checksum"] = checksum;
    }

    if(global_out_of_band != nullptr)
    {
        children["global-out-of-band"] = global_out_of_band;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(pesr != nullptr)
    {
        children["pesr"] = pesr;
    }

    if(prefix_filtering != nullptr)
    {
        children["prefix-filtering"] = prefix_filtering;
    }

    return children;
}

void Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-graceful-restart-interval")
    {
        hello_graceful_restart_interval = value;
        hello_graceful_restart_interval.value_namespace = name_space;
        hello_graceful_restart_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-graceful-restart-misses")
    {
        hello_graceful_restart_misses = value;
        hello_graceful_restart_misses.value_namespace = name_space;
        hello_graceful_restart_misses.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-graceful-restart-interval")
    {
        hello_graceful_restart_interval.yfilter = yfilter;
    }
    if(value_path == "hello-graceful-restart-misses")
    {
        hello_graceful_restart_misses.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checksum" || name == "global-out-of-band" || name == "graceful-restart" || name == "pesr" || name == "prefix-filtering" || name == "hello-graceful-restart-interval" || name == "hello-graceful-restart-misses")
        return true;
    return false;
}

Rsvp::Signalling::Checksum::Checksum()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "checksum"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::Checksum::~Checksum()
{
}

bool Rsvp::Signalling::Checksum::has_data() const
{
    return disable.is_set;
}

bool Rsvp::Signalling::Checksum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Rsvp::Signalling::Checksum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::Checksum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checksum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::Checksum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::Checksum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::Checksum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Signalling::Checksum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::Checksum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::Checksum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Rsvp::Signalling::GlobalOutOfBand::GlobalOutOfBand()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "global-out-of-band"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::GlobalOutOfBand::~GlobalOutOfBand()
{
}

bool Rsvp::Signalling::GlobalOutOfBand::has_data() const
{
    return vrf.is_set;
}

bool Rsvp::Signalling::GlobalOutOfBand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Rsvp::Signalling::GlobalOutOfBand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::GlobalOutOfBand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-out-of-band";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::GlobalOutOfBand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::GlobalOutOfBand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::GlobalOutOfBand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Signalling::GlobalOutOfBand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::GlobalOutOfBand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::GlobalOutOfBand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Rsvp::Signalling::GracefulRestart::GracefulRestart()
    :
    enable{YType::boolean, "enable"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_time{YType::uint32, "restart-time"}
    	,
    lsp_class_type(std::make_shared<Rsvp::Signalling::GracefulRestart::LspClassType>())
{
    lsp_class_type->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::GracefulRestart::~GracefulRestart()
{
}

bool Rsvp::Signalling::GracefulRestart::has_data() const
{
    return enable.is_set
	|| recovery_time.is_set
	|| restart_time.is_set
	|| (lsp_class_type !=  nullptr && lsp_class_type->has_data());
}

bool Rsvp::Signalling::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| (lsp_class_type !=  nullptr && lsp_class_type->has_operation());
}

std::string Rsvp::Signalling::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-class-type")
    {
        if(lsp_class_type == nullptr)
        {
            lsp_class_type = std::make_shared<Rsvp::Signalling::GracefulRestart::LspClassType>();
        }
        return lsp_class_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_class_type != nullptr)
    {
        children["lsp-class-type"] = lsp_class_type;
    }

    return children;
}

void Rsvp::Signalling::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-class-type" || name == "enable" || name == "recovery-time" || name == "restart-time")
        return true;
    return false;
}

Rsvp::Signalling::GracefulRestart::LspClassType::LspClassType()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "lsp-class-type"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::GracefulRestart::LspClassType::~LspClassType()
{
}

bool Rsvp::Signalling::GracefulRestart::LspClassType::has_data() const
{
    return enable.is_set;
}

bool Rsvp::Signalling::GracefulRestart::LspClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rsvp::Signalling::GracefulRestart::LspClassType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::GracefulRestart::LspClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::GracefulRestart::LspClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::GracefulRestart::LspClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::GracefulRestart::LspClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Signalling::GracefulRestart::LspClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::GracefulRestart::LspClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::GracefulRestart::LspClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Rsvp::Signalling::Pesr::Pesr()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "pesr"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::Pesr::~Pesr()
{
}

bool Rsvp::Signalling::Pesr::has_data() const
{
    return disable.is_set;
}

bool Rsvp::Signalling::Pesr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Rsvp::Signalling::Pesr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::Pesr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pesr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::Pesr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::Pesr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::Pesr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Signalling::Pesr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::Pesr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::Pesr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Rsvp::Signalling::PrefixFiltering::PrefixFiltering()
    :
    acl{YType::str, "acl"}
    	,
    default_deny_action(std::make_shared<Rsvp::Signalling::PrefixFiltering::DefaultDenyAction>())
{
    default_deny_action->parent = this;

    yang_name = "prefix-filtering"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::PrefixFiltering::~PrefixFiltering()
{
}

bool Rsvp::Signalling::PrefixFiltering::has_data() const
{
    return acl.is_set
	|| (default_deny_action !=  nullptr && default_deny_action->has_data());
}

bool Rsvp::Signalling::PrefixFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| (default_deny_action !=  nullptr && default_deny_action->has_operation());
}

std::string Rsvp::Signalling::PrefixFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::PrefixFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-deny-action")
    {
        if(default_deny_action == nullptr)
        {
            default_deny_action = std::make_shared<Rsvp::Signalling::PrefixFiltering::DefaultDenyAction>();
        }
        return default_deny_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::PrefixFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_deny_action != nullptr)
    {
        children["default-deny-action"] = default_deny_action;
    }

    return children;
}

void Rsvp::Signalling::PrefixFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::PrefixFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::PrefixFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-deny-action" || name == "acl")
        return true;
    return false;
}

Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::DefaultDenyAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "default-deny-action"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::~DefaultDenyAction()
{
}

bool Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::has_data() const
{
    return drop.is_set;
}

bool Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-cfg:rsvp/signalling/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-deny-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Rsvp::Signalling::PrefixFiltering::DefaultDenyAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

const Enum::YLeaf RsvpBwCfg::absolute {0, "absolute"};
const Enum::YLeaf RsvpBwCfg::percentage {1, "percentage"};

const Enum::YLeaf RsvpRdm::rdm {1, "rdm"};
const Enum::YLeaf RsvpRdm::not_specified {2, "not-specified"};
const Enum::YLeaf RsvpRdm::use_default_bandwidth {3, "use-default-bandwidth"};

const Enum::YLeaf RsvpBc1::bc1 {1, "bc1"};
const Enum::YLeaf RsvpBc1::sub_pool {2, "sub-pool"};

const Enum::YLeaf RsvpBc0::bc0 {1, "bc0"};
const Enum::YLeaf RsvpBc0::global_pool {2, "global-pool"};
const Enum::YLeaf RsvpBc0::not_specified {3, "not-specified"};


}
}

