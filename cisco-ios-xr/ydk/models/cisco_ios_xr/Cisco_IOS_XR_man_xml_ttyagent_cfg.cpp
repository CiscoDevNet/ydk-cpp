
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_xml_ttyagent_cfg {

XrXml::XrXml()
    :
    agent(std::make_shared<XrXml::Agent>())
{
    agent->parent = this;

    yang_name = "xr-xml"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

XrXml::~XrXml()
{
}

bool XrXml::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool XrXml::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<XrXml::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void XrXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> XrXml::clone_ptr() const
{
    return std::make_shared<XrXml>();
}

std::string XrXml::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string XrXml::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function XrXml::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> XrXml::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool XrXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

XrXml::Agent::Agent()
    :
    default_(std::make_shared<XrXml::Agent::Default>())
    , tty(std::make_shared<XrXml::Agent::Tty>())
    , ssl(std::make_shared<XrXml::Agent::Ssl>())
{
    default_->parent = this;
    tty->parent = this;
    ssl->parent = this;

    yang_name = "agent"; yang_parent_name = "xr-xml"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::~Agent()
{
}

bool XrXml::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data())
	|| (tty !=  nullptr && tty->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool XrXml::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (tty !=  nullptr && tty->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string XrXml::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<XrXml::Agent::Default>();
        }
        return default_;
    }

    if(child_yang_name == "tty")
    {
        if(tty == nullptr)
        {
            tty = std::make_shared<XrXml::Agent::Tty>();
        }
        return tty;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<XrXml::Agent::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(tty != nullptr)
    {
        children["tty"] = tty;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void XrXml::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "tty" || name == "ssl")
        return true;
    return false;
}

XrXml::Agent::Default::Default()
    :
    ipv6_enable{YType::boolean, "ipv6-enable"},
    ipv4_disable{YType::boolean, "ipv4-disable"},
    iteration_size{YType::uint32, "iteration-size"},
    enable{YType::empty, "enable"},
    streaming_size{YType::uint32, "streaming-size"}
        ,
    session(std::make_shared<XrXml::Agent::Default::Session>())
    , throttle(std::make_shared<XrXml::Agent::Default::Throttle>())
    , vrfs(std::make_shared<XrXml::Agent::Default::Vrfs>())
{
    session->parent = this;
    throttle->parent = this;
    vrfs->parent = this;

    yang_name = "default"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::~Default()
{
}

bool XrXml::Agent::Default::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_enable.is_set
	|| ipv4_disable.is_set
	|| iteration_size.is_set
	|| enable.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool XrXml::Agent::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_enable.yfilter)
	|| ydk::is_set(ipv4_disable.yfilter)
	|| ydk::is_set(iteration_size.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(streaming_size.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string XrXml::Agent::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_enable.is_set || is_set(ipv6_enable.yfilter)) leaf_name_data.push_back(ipv6_enable.get_name_leafdata());
    if (ipv4_disable.is_set || is_set(ipv4_disable.yfilter)) leaf_name_data.push_back(ipv4_disable.get_name_leafdata());
    if (iteration_size.is_set || is_set(iteration_size.yfilter)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.yfilter)) leaf_name_data.push_back(streaming_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<XrXml::Agent::Default::Session>();
        }
        return session;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<XrXml::Agent::Default::Throttle>();
        }
        return throttle;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<XrXml::Agent::Default::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void XrXml::Agent::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-enable")
    {
        ipv6_enable = value;
        ipv6_enable.value_namespace = name_space;
        ipv6_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-disable")
    {
        ipv4_disable = value;
        ipv4_disable.value_namespace = name_space;
        ipv4_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iteration-size")
    {
        iteration_size = value;
        iteration_size.value_namespace = name_space;
        iteration_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
        streaming_size.value_namespace = name_space;
        streaming_size.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-enable")
    {
        ipv6_enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-disable")
    {
        ipv4_disable.yfilter = yfilter;
    }
    if(value_path == "iteration-size")
    {
        iteration_size.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "streaming-size")
    {
        streaming_size.yfilter = yfilter;
    }
}

bool XrXml::Agent::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "throttle" || name == "vrfs" || name == "ipv6-enable" || name == "ipv4-disable" || name == "iteration-size" || name == "enable" || name == "streaming-size")
        return true;
    return false;
}

XrXml::Agent::Default::Session::Session()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "session"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Session::~Session()
{
}

bool XrXml::Agent::Default::Session::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool XrXml::Agent::Default::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string XrXml::Agent::Default::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Default::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Default::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool XrXml::Agent::Default::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

XrXml::Agent::Default::Throttle::Throttle()
    :
    process_rate{YType::uint32, "process-rate"},
    memory{YType::uint32, "memory"}
{

    yang_name = "throttle"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Throttle::~Throttle()
{
}

bool XrXml::Agent::Default::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return process_rate.is_set
	|| memory.is_set;
}

bool XrXml::Agent::Default::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_rate.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string XrXml::Agent::Default::Throttle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_rate.is_set || is_set(process_rate.yfilter)) leaf_name_data.push_back(process_rate.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Default::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-rate")
    {
        process_rate = value;
        process_rate.value_namespace = name_space;
        process_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Default::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-rate")
    {
        process_rate.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool XrXml::Agent::Default::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-rate" || name == "memory")
        return true;
    return false;
}

XrXml::Agent::Default::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Vrfs::~Vrfs()
{
}

bool XrXml::Agent::Default::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Default::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string XrXml::Agent::Default::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<XrXml::Agent::Default::Vrfs::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void XrXml::Agent::Default::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Default::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Default::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

XrXml::Agent::Default::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    ipv6_access_list{YType::str, "ipv6-access-list"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    access_list{YType::str, "access-list"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Vrfs::Vrf::~Vrf()
{
}

bool XrXml::Agent::Default::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| ipv6_access_list.is_set
	|| ipv4_access_list.is_set
	|| access_list.is_set
	|| shutdown.is_set;
}

bool XrXml::Agent::Default::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string XrXml::Agent::Default::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Default::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Default::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool XrXml::Agent::Default::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "ipv6-access-list" || name == "ipv4-access-list" || name == "access-list" || name == "shutdown")
        return true;
    return false;
}

XrXml::Agent::Tty::Tty()
    :
    iteration_size{YType::uint32, "iteration-size"},
    enable{YType::empty, "enable"},
    streaming_size{YType::uint32, "streaming-size"}
        ,
    session(std::make_shared<XrXml::Agent::Tty::Session>())
    , throttle(std::make_shared<XrXml::Agent::Tty::Throttle>())
{
    session->parent = this;
    throttle->parent = this;

    yang_name = "tty"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::~Tty()
{
}

bool XrXml::Agent::Tty::has_data() const
{
    if (is_presence_container) return true;
    return iteration_size.is_set
	|| enable.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool XrXml::Agent::Tty::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iteration_size.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(streaming_size.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string XrXml::Agent::Tty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iteration_size.is_set || is_set(iteration_size.yfilter)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.yfilter)) leaf_name_data.push_back(streaming_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<XrXml::Agent::Tty::Session>();
        }
        return session;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<XrXml::Agent::Tty::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void XrXml::Agent::Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iteration-size")
    {
        iteration_size = value;
        iteration_size.value_namespace = name_space;
        iteration_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
        streaming_size.value_namespace = name_space;
        streaming_size.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Tty::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iteration-size")
    {
        iteration_size.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "streaming-size")
    {
        streaming_size.yfilter = yfilter;
    }
}

bool XrXml::Agent::Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "throttle" || name == "iteration-size" || name == "enable" || name == "streaming-size")
        return true;
    return false;
}

XrXml::Agent::Tty::Session::Session()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "session"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::Session::~Session()
{
}

bool XrXml::Agent::Tty::Session::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool XrXml::Agent::Tty::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string XrXml::Agent::Tty::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Tty::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Tty::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool XrXml::Agent::Tty::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

XrXml::Agent::Tty::Throttle::Throttle()
    :
    process_rate{YType::uint32, "process-rate"},
    memory{YType::uint32, "memory"}
{

    yang_name = "throttle"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::Throttle::~Throttle()
{
}

bool XrXml::Agent::Tty::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return process_rate.is_set
	|| memory.is_set;
}

bool XrXml::Agent::Tty::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_rate.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string XrXml::Agent::Tty::Throttle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_rate.is_set || is_set(process_rate.yfilter)) leaf_name_data.push_back(process_rate.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Tty::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-rate")
    {
        process_rate = value;
        process_rate.value_namespace = name_space;
        process_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Tty::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-rate")
    {
        process_rate.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool XrXml::Agent::Tty::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-rate" || name == "memory")
        return true;
    return false;
}

XrXml::Agent::Ssl::Ssl()
    :
    iteration_size{YType::uint32, "iteration-size"},
    enable{YType::empty, "enable"},
    streaming_size{YType::uint32, "streaming-size"}
        ,
    session(std::make_shared<XrXml::Agent::Ssl::Session>())
    , throttle(std::make_shared<XrXml::Agent::Ssl::Throttle>())
    , vrfs(std::make_shared<XrXml::Agent::Ssl::Vrfs>())
{
    session->parent = this;
    throttle->parent = this;
    vrfs->parent = this;

    yang_name = "ssl"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::~Ssl()
{
}

bool XrXml::Agent::Ssl::has_data() const
{
    if (is_presence_container) return true;
    return iteration_size.is_set
	|| enable.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool XrXml::Agent::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iteration_size.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(streaming_size.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string XrXml::Agent::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iteration_size.is_set || is_set(iteration_size.yfilter)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.yfilter)) leaf_name_data.push_back(streaming_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<XrXml::Agent::Ssl::Session>();
        }
        return session;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<XrXml::Agent::Ssl::Throttle>();
        }
        return throttle;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<XrXml::Agent::Ssl::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void XrXml::Agent::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iteration-size")
    {
        iteration_size = value;
        iteration_size.value_namespace = name_space;
        iteration_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
        streaming_size.value_namespace = name_space;
        streaming_size.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iteration-size")
    {
        iteration_size.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "streaming-size")
    {
        streaming_size.yfilter = yfilter;
    }
}

bool XrXml::Agent::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "throttle" || name == "vrfs" || name == "iteration-size" || name == "enable" || name == "streaming-size")
        return true;
    return false;
}

XrXml::Agent::Ssl::Session::Session()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "session"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Session::~Session()
{
}

bool XrXml::Agent::Ssl::Session::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool XrXml::Agent::Ssl::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string XrXml::Agent::Ssl::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Ssl::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Ssl::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool XrXml::Agent::Ssl::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

XrXml::Agent::Ssl::Throttle::Throttle()
    :
    process_rate{YType::uint32, "process-rate"},
    memory{YType::uint32, "memory"}
{

    yang_name = "throttle"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Throttle::~Throttle()
{
}

bool XrXml::Agent::Ssl::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return process_rate.is_set
	|| memory.is_set;
}

bool XrXml::Agent::Ssl::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_rate.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string XrXml::Agent::Ssl::Throttle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_rate.is_set || is_set(process_rate.yfilter)) leaf_name_data.push_back(process_rate.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Ssl::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-rate")
    {
        process_rate = value;
        process_rate.value_namespace = name_space;
        process_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Ssl::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-rate")
    {
        process_rate.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool XrXml::Agent::Ssl::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-rate" || name == "memory")
        return true;
    return false;
}

XrXml::Agent::Ssl::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Vrfs::~Vrfs()
{
}

bool XrXml::Agent::Ssl::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Ssl::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string XrXml::Agent::Ssl::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<XrXml::Agent::Ssl::Vrfs::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void XrXml::Agent::Ssl::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Ssl::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Ssl::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

XrXml::Agent::Ssl::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    ipv6_access_list{YType::str, "ipv6-access-list"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    access_list{YType::str, "access-list"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Vrfs::Vrf::~Vrf()
{
}

bool XrXml::Agent::Ssl::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| ipv6_access_list.is_set
	|| ipv4_access_list.is_set
	|| access_list.is_set
	|| shutdown.is_set;
}

bool XrXml::Agent::Ssl::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string XrXml::Agent::Ssl::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Ssl::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Ssl::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool XrXml::Agent::Ssl::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "ipv6-access-list" || name == "ipv4-access-list" || name == "access-list" || name == "shutdown")
        return true;
    return false;
}

Netconf::Netconf()
    :
    agent(std::make_shared<Netconf::Agent>())
{
    agent->parent = this;

    yang_name = "netconf"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Netconf::~Netconf()
{
}

bool Netconf::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Netconf::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Netconf::clone_ptr() const
{
    return std::make_shared<Netconf>();
}

std::string Netconf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Netconf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Netconf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Netconf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Netconf::Agent::Agent()
    :
    tty(std::make_shared<Netconf::Agent::Tty>())
{
    tty->parent = this;

    yang_name = "agent"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::~Agent()
{
}

bool Netconf::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (tty !=  nullptr && tty->has_data());
}

bool Netconf::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (tty !=  nullptr && tty->has_operation());
}

std::string Netconf::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty")
    {
        if(tty == nullptr)
        {
            tty = std::make_shared<Netconf::Agent::Tty>();
        }
        return tty;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tty != nullptr)
    {
        children["tty"] = tty;
    }

    return children;
}

void Netconf::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Netconf::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty")
        return true;
    return false;
}

Netconf::Agent::Tty::Tty()
    :
    enable{YType::empty, "enable"}
        ,
    throttle(std::make_shared<Netconf::Agent::Tty::Throttle>())
    , session(std::make_shared<Netconf::Agent::Tty::Session>())
{
    throttle->parent = this;
    session->parent = this;

    yang_name = "tty"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::~Tty()
{
}

bool Netconf::Agent::Tty::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (throttle !=  nullptr && throttle->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Netconf::Agent::Tty::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (throttle !=  nullptr && throttle->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Netconf::Agent::Tty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Netconf::Agent::Tty::Throttle>();
        }
        return throttle;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Netconf::Agent::Tty::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Netconf::Agent::Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Netconf::Agent::Tty::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Netconf::Agent::Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "session" || name == "enable")
        return true;
    return false;
}

Netconf::Agent::Tty::Throttle::Throttle()
    :
    memory{YType::uint32, "memory"},
    offload_memory{YType::uint32, "offload-memory"},
    process_rate{YType::uint32, "process-rate"}
{

    yang_name = "throttle"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::Throttle::~Throttle()
{
}

bool Netconf::Agent::Tty::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return memory.is_set
	|| offload_memory.is_set
	|| process_rate.is_set;
}

bool Netconf::Agent::Tty::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(offload_memory.yfilter)
	|| ydk::is_set(process_rate.yfilter);
}

std::string Netconf::Agent::Tty::Throttle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (offload_memory.is_set || is_set(offload_memory.yfilter)) leaf_name_data.push_back(offload_memory.get_name_leafdata());
    if (process_rate.is_set || is_set(process_rate.yfilter)) leaf_name_data.push_back(process_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Netconf::Agent::Tty::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offload-memory")
    {
        offload_memory = value;
        offload_memory.value_namespace = name_space;
        offload_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-rate")
    {
        process_rate = value;
        process_rate.value_namespace = name_space;
        process_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Netconf::Agent::Tty::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "offload-memory")
    {
        offload_memory.yfilter = yfilter;
    }
    if(value_path == "process-rate")
    {
        process_rate.yfilter = yfilter;
    }
}

bool Netconf::Agent::Tty::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory" || name == "offload-memory" || name == "process-rate")
        return true;
    return false;
}

Netconf::Agent::Tty::Session::Session()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "session"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::Session::~Session()
{
}

bool Netconf::Agent::Tty::Session::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Netconf::Agent::Tty::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Netconf::Agent::Tty::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Netconf::Agent::Tty::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Netconf::Agent::Tty::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Netconf::Agent::Tty::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}


}
}

