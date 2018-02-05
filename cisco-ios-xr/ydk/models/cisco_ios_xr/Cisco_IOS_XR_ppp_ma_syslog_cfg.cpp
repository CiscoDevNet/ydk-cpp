
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ma_syslog_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ma_syslog_cfg {

Ppp::Ppp()
    :
    syslog(std::make_shared<Ppp::Syslog>())
{
    syslog->parent = this;

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-syslog-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ppp::~Ppp()
{
}

bool Ppp::has_data() const
{
    return (syslog !=  nullptr && syslog->has_data());
}

bool Ppp::has_operation() const
{
    return is_set(yfilter)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-syslog-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Ppp::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ppp::clone_ptr() const
{
    return std::make_shared<Ppp>();
}

std::string Ppp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ppp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ppp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ppp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog")
        return true;
    return false;
}

Ppp::Syslog::Syslog()
    :
    enable_session_status{YType::empty, "enable-session-status"}
{

    yang_name = "syslog"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false;
}

Ppp::Syslog::~Syslog()
{
}

bool Ppp::Syslog::has_data() const
{
    return enable_session_status.is_set;
}

bool Ppp::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_session_status.yfilter);
}

std::string Ppp::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-syslog-cfg:ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ppp::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ppp::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_session_status.is_set || is_set(enable_session_status.yfilter)) leaf_name_data.push_back(enable_session_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ppp::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ppp::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-session-status")
    {
        enable_session_status = value;
        enable_session_status.value_namespace = name_space;
        enable_session_status.value_namespace_prefix = name_space_prefix;
    }
}

void Ppp::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-session-status")
    {
        enable_session_status.yfilter = yfilter;
    }
}

bool Ppp::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-session-status")
        return true;
    return false;
}


}
}

