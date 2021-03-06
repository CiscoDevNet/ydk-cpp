
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_netconf_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_netconf_cfg {

NetconfYang::NetconfYang()
    :
    agent(std::make_shared<NetconfYang::Agent>())
{
    agent->parent = this;

    yang_name = "netconf-yang"; yang_parent_name = "Cisco-IOS-XR-man-netconf-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

NetconfYang::~NetconfYang()
{
}

bool NetconfYang::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool NetconfYang::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string NetconfYang::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<NetconfYang::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(agent != nullptr)
    {
        _children["agent"] = agent;
    }

    return _children;
}

void NetconfYang::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfYang::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> NetconfYang::clone_ptr() const
{
    return std::make_shared<NetconfYang>();
}

std::string NetconfYang::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NetconfYang::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NetconfYang::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetconfYang::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NetconfYang::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

NetconfYang::Agent::Agent()
    :
    rate_limit{YType::uint32, "rate-limit"}
        ,
    models(std::make_shared<NetconfYang::Agent::Models>())
    , ssh(std::make_shared<NetconfYang::Agent::Ssh>())
    , session(std::make_shared<NetconfYang::Agent::Session>())
{
    models->parent = this;
    ssh->parent = this;
    session->parent = this;

    yang_name = "agent"; yang_parent_name = "netconf-yang"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::Agent::~Agent()
{
}

bool NetconfYang::Agent::has_data() const
{
    if (is_presence_container) return true;
    return rate_limit.is_set
	|| (models !=  nullptr && models->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool NetconfYang::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| (models !=  nullptr && models->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string NetconfYang::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "models")
    {
        if(models == nullptr)
        {
            models = std::make_shared<NetconfYang::Agent::Models>();
        }
        return models;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<NetconfYang::Agent::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<NetconfYang::Agent::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(models != nullptr)
    {
        _children["models"] = models;
    }

    if(ssh != nullptr)
    {
        _children["ssh"] = ssh;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void NetconfYang::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool NetconfYang::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "models" || name == "ssh" || name == "session" || name == "rate-limit")
        return true;
    return false;
}

NetconfYang::Agent::Models::Models()
    :
    openconfig(std::make_shared<NetconfYang::Agent::Models::Openconfig>())
{
    openconfig->parent = this;

    yang_name = "models"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::Agent::Models::~Models()
{
}

bool NetconfYang::Agent::Models::has_data() const
{
    if (is_presence_container) return true;
    return (openconfig !=  nullptr && openconfig->has_data());
}

bool NetconfYang::Agent::Models::has_operation() const
{
    return is_set(yfilter)
	|| (openconfig !=  nullptr && openconfig->has_operation());
}

std::string NetconfYang::Agent::Models::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::Agent::Models::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "models";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::Agent::Models::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::Agent::Models::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "openconfig")
    {
        if(openconfig == nullptr)
        {
            openconfig = std::make_shared<NetconfYang::Agent::Models::Openconfig>();
        }
        return openconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::Agent::Models::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(openconfig != nullptr)
    {
        _children["openconfig"] = openconfig;
    }

    return _children;
}

void NetconfYang::Agent::Models::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfYang::Agent::Models::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfYang::Agent::Models::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "openconfig")
        return true;
    return false;
}

NetconfYang::Agent::Models::Openconfig::Openconfig()
    :
    disabled{YType::empty, "disabled"}
{

    yang_name = "openconfig"; yang_parent_name = "models"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::Agent::Models::Openconfig::~Openconfig()
{
}

bool NetconfYang::Agent::Models::Openconfig::has_data() const
{
    if (is_presence_container) return true;
    return disabled.is_set;
}

bool NetconfYang::Agent::Models::Openconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter);
}

std::string NetconfYang::Agent::Models::Openconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/models/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::Agent::Models::Openconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::Agent::Models::Openconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::Agent::Models::Openconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::Agent::Models::Openconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::Agent::Models::Openconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::Agent::Models::Openconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
}

bool NetconfYang::Agent::Models::Openconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled")
        return true;
    return false;
}

NetconfYang::Agent::Ssh::Ssh()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "ssh"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::Agent::Ssh::~Ssh()
{
}

bool NetconfYang::Agent::Ssh::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool NetconfYang::Agent::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string NetconfYang::Agent::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::Agent::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::Agent::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::Agent::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::Agent::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::Agent::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::Agent::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool NetconfYang::Agent::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

NetconfYang::Agent::Session::Session()
    :
    limit{YType::uint32, "limit"},
    absolute_timeout{YType::uint32, "absolute-timeout"},
    idle_timeout{YType::uint32, "idle-timeout"}
{

    yang_name = "session"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfYang::Agent::Session::~Session()
{
}

bool NetconfYang::Agent::Session::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| absolute_timeout.is_set
	|| idle_timeout.is_set;
}

bool NetconfYang::Agent::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(absolute_timeout.yfilter)
	|| ydk::is_set(idle_timeout.yfilter);
}

std::string NetconfYang::Agent::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfYang::Agent::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfYang::Agent::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (absolute_timeout.is_set || is_set(absolute_timeout.yfilter)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetconfYang::Agent::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetconfYang::Agent::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetconfYang::Agent::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
        absolute_timeout.value_namespace = name_space;
        absolute_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfYang::Agent::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
}

bool NetconfYang::Agent::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "absolute-timeout" || name == "idle-timeout")
        return true;
    return false;
}


}
}

