
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "confd_dyncfg.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace confd_dyncfg {

Confdconfig::Confdconfig()
    :
    aaa(nullptr) // presence node
	,cli(nullptr) // presence node
	,encryptedstrings(nullptr) // presence node
	,logs(nullptr) // presence node
	,netconf(nullptr) // presence node
	,notifications(nullptr) // presence node
	,opcache(nullptr) // presence node
	,proxyforwarding(nullptr) // presence node
	,rest(nullptr) // presence node
	,restconf(nullptr) // presence node
	,sessionlimits(nullptr) // presence node
	,snmpagent(nullptr) // presence node
	,snmpgw(nullptr) // presence node
	,ssh(nullptr) // presence node
	,subagents(nullptr) // presence node
	,webui(nullptr) // presence node
{
    yang_name = "confdConfig"; yang_parent_name = "confd_dyncfg";
}

Confdconfig::~Confdconfig()
{
}

bool Confdconfig::has_data() const
{
    for (std::size_t index=0; index<hidegroup.size(); index++)
    {
        if(hidegroup[index]->has_data())
            return true;
    }
    return (aaa !=  nullptr && aaa->has_data())
	|| (cli !=  nullptr && cli->has_data())
	|| (encryptedstrings !=  nullptr && encryptedstrings->has_data())
	|| (logs !=  nullptr && logs->has_data())
	|| (netconf !=  nullptr && netconf->has_data())
	|| (notifications !=  nullptr && notifications->has_data())
	|| (opcache !=  nullptr && opcache->has_data())
	|| (proxyforwarding !=  nullptr && proxyforwarding->has_data())
	|| (rest !=  nullptr && rest->has_data())
	|| (restconf !=  nullptr && restconf->has_data())
	|| (sessionlimits !=  nullptr && sessionlimits->has_data())
	|| (snmpagent !=  nullptr && snmpagent->has_data())
	|| (snmpgw !=  nullptr && snmpgw->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (subagents !=  nullptr && subagents->has_data())
	|| (webui !=  nullptr && webui->has_data());
}

bool Confdconfig::has_operation() const
{
    for (std::size_t index=0; index<hidegroup.size(); index++)
    {
        if(hidegroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (cli !=  nullptr && cli->has_operation())
	|| (encryptedstrings !=  nullptr && encryptedstrings->has_operation())
	|| (logs !=  nullptr && logs->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation())
	|| (notifications !=  nullptr && notifications->has_operation())
	|| (opcache !=  nullptr && opcache->has_operation())
	|| (proxyforwarding !=  nullptr && proxyforwarding->has_operation())
	|| (rest !=  nullptr && rest->has_operation())
	|| (restconf !=  nullptr && restconf->has_operation())
	|| (sessionlimits !=  nullptr && sessionlimits->has_operation())
	|| (snmpagent !=  nullptr && snmpagent->has_operation())
	|| (snmpgw !=  nullptr && snmpgw->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (subagents !=  nullptr && subagents->has_operation())
	|| (webui !=  nullptr && webui->has_operation());
}

std::string Confdconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confd_dyncfg:confdConfig";

    return path_buffer.str();

}

const EntityPath Confdconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Confdconfig::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Confdconfig::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "encryptedStrings")
    {
        if(encryptedstrings == nullptr)
        {
            encryptedstrings = std::make_shared<Confdconfig::Encryptedstrings>();
        }
        return encryptedstrings;
    }

    if(child_yang_name == "hideGroup")
    {
        for(auto const & c : hidegroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Hidegroup>();
        c->parent = this;
        hidegroup.push_back(c);
        return c;
    }

    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Confdconfig::Logs>();
        }
        return logs;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf == nullptr)
        {
            netconf = std::make_shared<Confdconfig::Netconf>();
        }
        return netconf;
    }

    if(child_yang_name == "notifications")
    {
        if(notifications == nullptr)
        {
            notifications = std::make_shared<Confdconfig::Notifications>();
        }
        return notifications;
    }

    if(child_yang_name == "opcache")
    {
        if(opcache == nullptr)
        {
            opcache = std::make_shared<Confdconfig::Opcache>();
        }
        return opcache;
    }

    if(child_yang_name == "proxyForwarding")
    {
        if(proxyforwarding == nullptr)
        {
            proxyforwarding = std::make_shared<Confdconfig::Proxyforwarding>();
        }
        return proxyforwarding;
    }

    if(child_yang_name == "rest")
    {
        if(rest == nullptr)
        {
            rest = std::make_shared<Confdconfig::Rest>();
        }
        return rest;
    }

    if(child_yang_name == "restconf")
    {
        if(restconf == nullptr)
        {
            restconf = std::make_shared<Confdconfig::Restconf>();
        }
        return restconf;
    }

    if(child_yang_name == "sessionLimits")
    {
        if(sessionlimits == nullptr)
        {
            sessionlimits = std::make_shared<Confdconfig::Sessionlimits>();
        }
        return sessionlimits;
    }

    if(child_yang_name == "snmpAgent")
    {
        if(snmpagent == nullptr)
        {
            snmpagent = std::make_shared<Confdconfig::Snmpagent>();
        }
        return snmpagent;
    }

    if(child_yang_name == "snmpgw")
    {
        if(snmpgw == nullptr)
        {
            snmpgw = std::make_shared<Confdconfig::Snmpgw>();
        }
        return snmpgw;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "subagents")
    {
        if(subagents == nullptr)
        {
            subagents = std::make_shared<Confdconfig::Subagents>();
        }
        return subagents;
    }

    if(child_yang_name == "webui")
    {
        if(webui == nullptr)
        {
            webui = std::make_shared<Confdconfig::Webui>();
        }
        return webui;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    if(encryptedstrings != nullptr)
    {
        children["encryptedStrings"] = encryptedstrings;
    }

    for (auto const & c : hidegroup)
    {
        children[c->get_segment_path()] = c;
    }

    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    if(netconf != nullptr)
    {
        children["netconf"] = netconf;
    }

    if(notifications != nullptr)
    {
        children["notifications"] = notifications;
    }

    if(opcache != nullptr)
    {
        children["opcache"] = opcache;
    }

    if(proxyforwarding != nullptr)
    {
        children["proxyForwarding"] = proxyforwarding;
    }

    if(rest != nullptr)
    {
        children["rest"] = rest;
    }

    if(restconf != nullptr)
    {
        children["restconf"] = restconf;
    }

    if(sessionlimits != nullptr)
    {
        children["sessionLimits"] = sessionlimits;
    }

    if(snmpagent != nullptr)
    {
        children["snmpAgent"] = snmpagent;
    }

    if(snmpgw != nullptr)
    {
        children["snmpgw"] = snmpgw;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(subagents != nullptr)
    {
        children["subagents"] = subagents;
    }

    if(webui != nullptr)
    {
        children["webui"] = webui;
    }

    return children;
}

void Confdconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Confdconfig::clone_ptr() const
{
    return std::make_shared<Confdconfig>();
}

std::string Confdconfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Confdconfig::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Confdconfig::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Confdconfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Confdconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "cli" || name == "encryptedStrings" || name == "hideGroup" || name == "logs" || name == "netconf" || name == "notifications" || name == "opcache" || name == "proxyForwarding" || name == "rest" || name == "restconf" || name == "sessionLimits" || name == "snmpAgent" || name == "snmpgw" || name == "ssh" || name == "subagents" || name == "webui")
        return true;
    return false;
}

Confdconfig::Subagents::Subagents()
{
    yang_name = "subagents"; yang_parent_name = "confdConfig";
}

Confdconfig::Subagents::~Subagents()
{
}

bool Confdconfig::Subagents::has_data() const
{
    for (std::size_t index=0; index<subagent.size(); index++)
    {
        if(subagent[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Subagents::has_operation() const
{
    for (std::size_t index=0; index<subagent.size(); index++)
    {
        if(subagent[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Subagents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subagents";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subagent")
    {
        for(auto const & c : subagent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Subagents::Subagent>();
        c->parent = this;
        subagent.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subagent)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Subagents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Subagents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Subagents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subagent")
        return true;
    return false;
}

Confdconfig::Subagents::Subagent::Subagent()
    :
    name{YType::str, "name"},
    disablesubtreeoptimization{YType::boolean, "disableSubtreeOptimization"},
    enabled{YType::boolean, "enabled"}
    	,
    mount(std::make_shared<Confdconfig::Subagents::Subagent::Mount>())
	,ssh(nullptr) // presence node
	,tcp(nullptr) // presence node
{
    mount->parent = this;

    yang_name = "subagent"; yang_parent_name = "subagents";
}

Confdconfig::Subagents::Subagent::~Subagent()
{
}

bool Confdconfig::Subagents::Subagent::has_data() const
{
    return name.is_set
	|| disablesubtreeoptimization.is_set
	|| enabled.is_set
	|| (mount !=  nullptr && mount->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Confdconfig::Subagents::Subagent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(disablesubtreeoptimization.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (mount !=  nullptr && mount->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Confdconfig::Subagents::Subagent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subagent" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::Subagent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/subagents/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (disablesubtreeoptimization.is_set || is_set(disablesubtreeoptimization.yfilter)) leaf_name_data.push_back(disablesubtreeoptimization.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::Subagent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mount")
    {
        if(mount == nullptr)
        {
            mount = std::make_shared<Confdconfig::Subagents::Subagent::Mount>();
        }
        return mount;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Subagents::Subagent::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Confdconfig::Subagents::Subagent::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::Subagent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mount != nullptr)
    {
        children["mount"] = mount;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Confdconfig::Subagents::Subagent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableSubtreeOptimization")
    {
        disablesubtreeoptimization = value;
        disablesubtreeoptimization.value_namespace = name_space;
        disablesubtreeoptimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Subagents::Subagent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "disableSubtreeOptimization")
    {
        disablesubtreeoptimization.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Subagents::Subagent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mount" || name == "ssh" || name == "tcp" || name == "name" || name == "disableSubtreeOptimization" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Subagents::Subagent::Tcp::Tcp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
    	,
    confdauth(std::make_shared<Confdconfig::Subagents::Subagent::Tcp::Confdauth>())
{
    confdauth->parent = this;

    yang_name = "tcp"; yang_parent_name = "subagent";
}

Confdconfig::Subagents::Subagent::Tcp::~Tcp()
{
}

bool Confdconfig::Subagents::Subagent::Tcp::has_data() const
{
    return ip.is_set
	|| port.is_set
	|| (confdauth !=  nullptr && confdauth->has_data());
}

bool Confdconfig::Subagents::Subagent::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| (confdauth !=  nullptr && confdauth->has_operation());
}

std::string Confdconfig::Subagents::Subagent::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::Subagent::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::Subagent::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confdAuth")
    {
        if(confdauth == nullptr)
        {
            confdauth = std::make_shared<Confdconfig::Subagents::Subagent::Tcp::Confdauth>();
        }
        return confdauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::Subagent::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confdauth != nullptr)
    {
        children["confdAuth"] = confdauth;
    }

    return children;
}

void Confdconfig::Subagents::Subagent::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Subagents::Subagent::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Subagents::Subagent::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confdAuth" || name == "ip" || name == "port")
        return true;
    return false;
}

Confdconfig::Subagents::Subagent::Tcp::Confdauth::Confdauth()
    :
    group{YType::str, "group"},
    user{YType::str, "user"}
{
    yang_name = "confdAuth"; yang_parent_name = "tcp";
}

Confdconfig::Subagents::Subagent::Tcp::Confdauth::~Confdauth()
{
}

bool Confdconfig::Subagents::Subagent::Tcp::Confdauth::has_data() const
{
    return group.is_set
	|| user.is_set;
}

bool Confdconfig::Subagents::Subagent::Tcp::Confdauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(user.yfilter);
}

std::string Confdconfig::Subagents::Subagent::Tcp::Confdauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confdAuth";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::Subagent::Tcp::Confdauth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confdauth' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::Subagent::Tcp::Confdauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::Subagent::Tcp::Confdauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Subagents::Subagent::Tcp::Confdauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Subagents::Subagent::Tcp::Confdauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
}

bool Confdconfig::Subagents::Subagent::Tcp::Confdauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "user")
        return true;
    return false;
}

Confdconfig::Subagents::Subagent::Ssh::Ssh()
    :
    ip{YType::str, "ip"},
    password{YType::str, "password"},
    port{YType::uint16, "port"},
    user{YType::str, "user"}
{
    yang_name = "ssh"; yang_parent_name = "subagent";
}

Confdconfig::Subagents::Subagent::Ssh::~Ssh()
{
}

bool Confdconfig::Subagents::Subagent::Ssh::has_data() const
{
    return ip.is_set
	|| password.is_set
	|| port.is_set
	|| user.is_set;
}

bool Confdconfig::Subagents::Subagent::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(user.yfilter);
}

std::string Confdconfig::Subagents::Subagent::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::Subagent::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssh' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::Subagent::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::Subagent::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Subagents::Subagent::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Subagents::Subagent::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
}

bool Confdconfig::Subagents::Subagent::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "password" || name == "port" || name == "user")
        return true;
    return false;
}

Confdconfig::Subagents::Subagent::Mount::Mount()
    :
    node{YType::str, "node"},
    path{YType::str, "path"}
{
    yang_name = "mount"; yang_parent_name = "subagent";
}

Confdconfig::Subagents::Subagent::Mount::~Mount()
{
}

bool Confdconfig::Subagents::Subagent::Mount::has_data() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return path.is_set;
}

bool Confdconfig::Subagents::Subagent::Mount::has_operation() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Confdconfig::Subagents::Subagent::Mount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mount";

    return path_buffer.str();

}

const EntityPath Confdconfig::Subagents::Subagent::Mount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mount' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Subagents::Subagent::Mount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Subagents::Subagent::Mount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Subagents::Subagent::Mount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node.append(value);
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Subagents::Subagent::Mount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Confdconfig::Subagents::Subagent::Mount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "path")
        return true;
    return false;
}

Confdconfig::Notifications::Notifications()
    :
    eventstreams(std::make_shared<Confdconfig::Notifications::Eventstreams>())
{
    eventstreams->parent = this;

    yang_name = "notifications"; yang_parent_name = "confdConfig";
}

Confdconfig::Notifications::~Notifications()
{
}

bool Confdconfig::Notifications::has_data() const
{
    return (eventstreams !=  nullptr && eventstreams->has_data());
}

bool Confdconfig::Notifications::has_operation() const
{
    return is_set(yfilter)
	|| (eventstreams !=  nullptr && eventstreams->has_operation());
}

std::string Confdconfig::Notifications::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifications";

    return path_buffer.str();

}

const EntityPath Confdconfig::Notifications::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Notifications::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventStreams")
    {
        if(eventstreams == nullptr)
        {
            eventstreams = std::make_shared<Confdconfig::Notifications::Eventstreams>();
        }
        return eventstreams;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Notifications::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eventstreams != nullptr)
    {
        children["eventStreams"] = eventstreams;
    }

    return children;
}

void Confdconfig::Notifications::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Notifications::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Notifications::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventStreams")
        return true;
    return false;
}

Confdconfig::Notifications::Eventstreams::Eventstreams()
{
    yang_name = "eventStreams"; yang_parent_name = "notifications";
}

Confdconfig::Notifications::Eventstreams::~Eventstreams()
{
}

bool Confdconfig::Notifications::Eventstreams::has_data() const
{
    for (std::size_t index=0; index<stream.size(); index++)
    {
        if(stream[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Notifications::Eventstreams::has_operation() const
{
    for (std::size_t index=0; index<stream.size(); index++)
    {
        if(stream[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Notifications::Eventstreams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventStreams";

    return path_buffer.str();

}

const EntityPath Confdconfig::Notifications::Eventstreams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/notifications/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Notifications::Eventstreams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stream")
    {
        for(auto const & c : stream)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Notifications::Eventstreams::Stream>();
        c->parent = this;
        stream.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Notifications::Eventstreams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stream)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Notifications::Eventstreams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Notifications::Eventstreams::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Notifications::Eventstreams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

Confdconfig::Notifications::Eventstreams::Stream::Stream()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    replaysupport{YType::boolean, "replaySupport"}
    	,
    builtinreplaystore(nullptr) // presence node
{
    yang_name = "stream"; yang_parent_name = "eventStreams";
}

Confdconfig::Notifications::Eventstreams::Stream::~Stream()
{
}

bool Confdconfig::Notifications::Eventstreams::Stream::has_data() const
{
    return name.is_set
	|| description.is_set
	|| replaysupport.is_set
	|| (builtinreplaystore !=  nullptr && builtinreplaystore->has_data());
}

bool Confdconfig::Notifications::Eventstreams::Stream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(replaysupport.yfilter)
	|| (builtinreplaystore !=  nullptr && builtinreplaystore->has_operation());
}

std::string Confdconfig::Notifications::Eventstreams::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Notifications::Eventstreams::Stream::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/notifications/eventStreams/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (replaysupport.is_set || is_set(replaysupport.yfilter)) leaf_name_data.push_back(replaysupport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Notifications::Eventstreams::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "builtinReplayStore")
    {
        if(builtinreplaystore == nullptr)
        {
            builtinreplaystore = std::make_shared<Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore>();
        }
        return builtinreplaystore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Notifications::Eventstreams::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(builtinreplaystore != nullptr)
    {
        children["builtinReplayStore"] = builtinreplaystore;
    }

    return children;
}

void Confdconfig::Notifications::Eventstreams::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replaySupport")
    {
        replaysupport = value;
        replaysupport.value_namespace = name_space;
        replaysupport.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Notifications::Eventstreams::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "replaySupport")
    {
        replaysupport.yfilter = yfilter;
    }
}

bool Confdconfig::Notifications::Eventstreams::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "builtinReplayStore" || name == "name" || name == "description" || name == "replaySupport")
        return true;
    return false;
}

Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::Builtinreplaystore()
    :
    dir{YType::str, "dir"},
    enabled{YType::boolean, "enabled"},
    maxfiles{YType::int64, "maxFiles"},
    maxsize{YType::str, "maxSize"}
{
    yang_name = "builtinReplayStore"; yang_parent_name = "stream";
}

Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::~Builtinreplaystore()
{
}

bool Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::has_data() const
{
    return dir.is_set
	|| enabled.is_set
	|| maxfiles.is_set
	|| maxsize.is_set;
}

bool Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(maxfiles.yfilter)
	|| ydk::is_set(maxsize.yfilter);
}

std::string Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "builtinReplayStore";

    return path_buffer.str();

}

const EntityPath Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Builtinreplaystore' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (maxfiles.is_set || is_set(maxfiles.yfilter)) leaf_name_data.push_back(maxfiles.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxFiles")
    {
        maxfiles = value;
        maxfiles.value_namespace = name_space;
        maxfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "maxFiles")
    {
        maxfiles.yfilter = yfilter;
    }
    if(value_path == "maxSize")
    {
        maxsize.yfilter = yfilter;
    }
}

bool Confdconfig::Notifications::Eventstreams::Stream::Builtinreplaystore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir" || name == "enabled" || name == "maxFiles" || name == "maxSize")
        return true;
    return false;
}

Confdconfig::Opcache::Opcache()
    :
    enabled{YType::boolean, "enabled"},
    timeout{YType::uint64, "timeout"}
{
    yang_name = "opcache"; yang_parent_name = "confdConfig";
}

Confdconfig::Opcache::~Opcache()
{
}

bool Confdconfig::Opcache::has_data() const
{
    return enabled.is_set
	|| timeout.is_set;
}

bool Confdconfig::Opcache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Confdconfig::Opcache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opcache";

    return path_buffer.str();

}

const EntityPath Confdconfig::Opcache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Opcache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Opcache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Opcache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Opcache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Confdconfig::Opcache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "timeout")
        return true;
    return false;
}

Confdconfig::Snmpgw::Snmpgw()
    :
    enabled{YType::boolean, "enabled"},
    trapport{YType::uint16, "trapPort"}
{
    yang_name = "snmpgw"; yang_parent_name = "confdConfig";
}

Confdconfig::Snmpgw::~Snmpgw()
{
}

bool Confdconfig::Snmpgw::has_data() const
{
    for (std::size_t index=0; index<agent.size(); index++)
    {
        if(agent[index]->has_data())
            return true;
    }
    return enabled.is_set
	|| trapport.is_set;
}

bool Confdconfig::Snmpgw::has_operation() const
{
    for (std::size_t index=0; index<agent.size(); index++)
    {
        if(agent[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(trapport.yfilter);
}

std::string Confdconfig::Snmpgw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpgw";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpgw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trapport.is_set || is_set(trapport.yfilter)) leaf_name_data.push_back(trapport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpgw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        for(auto const & c : agent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Snmpgw::Agent>();
        c->parent = this;
        agent.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpgw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : agent)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Snmpgw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapPort")
    {
        trapport = value;
        trapport.value_namespace = name_space;
        trapport.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpgw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "trapPort")
    {
        trapport.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpgw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "enabled" || name == "trapPort")
        return true;
    return false;
}

Confdconfig::Snmpgw::Agent::Agent()
    :
    name{YType::str, "name"},
    community{YType::str, "community"},
    community_bin{YType::str, "community_bin"},
    enabled{YType::boolean, "enabled"},
    forwardnotifstream{YType::str, "forwardNotifStream"},
    ip{YType::str, "ip"},
    module{YType::str, "module"},
    port{YType::uint16, "port"},
    subscriptionid{YType::str, "subscriptionId"},
    timeout{YType::str, "timeout"},
    version{YType::enumeration, "version"}
{
    yang_name = "agent"; yang_parent_name = "snmpgw";
}

Confdconfig::Snmpgw::Agent::~Agent()
{
}

bool Confdconfig::Snmpgw::Agent::has_data() const
{
    for (auto const & leaf : module.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| community.is_set
	|| community_bin.is_set
	|| enabled.is_set
	|| forwardnotifstream.is_set
	|| ip.is_set
	|| port.is_set
	|| subscriptionid.is_set
	|| timeout.is_set
	|| version.is_set;
}

bool Confdconfig::Snmpgw::Agent::has_operation() const
{
    for (auto const & leaf : module.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(community_bin.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(forwardnotifstream.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(subscriptionid.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Confdconfig::Snmpgw::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpgw::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpgw/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (community_bin.is_set || is_set(community_bin.yfilter)) leaf_name_data.push_back(community_bin.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (forwardnotifstream.is_set || is_set(forwardnotifstream.yfilter)) leaf_name_data.push_back(forwardnotifstream.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (subscriptionid.is_set || is_set(subscriptionid.yfilter)) leaf_name_data.push_back(subscriptionid.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    auto module_name_datas = module.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), module_name_datas.begin(), module_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpgw::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpgw::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpgw::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community_bin")
    {
        community_bin = value;
        community_bin.value_namespace = name_space;
        community_bin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwardNotifStream")
    {
        forwardnotifstream = value;
        forwardnotifstream.value_namespace = name_space;
        forwardnotifstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module.append(value);
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriptionId")
    {
        subscriptionid = value;
        subscriptionid.value_namespace = name_space;
        subscriptionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpgw::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "community_bin")
    {
        community_bin.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "forwardNotifStream")
    {
        forwardnotifstream.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "subscriptionId")
    {
        subscriptionid.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpgw::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "community" || name == "community_bin" || name == "enabled" || name == "forwardNotifStream" || name == "ip" || name == "module" || name == "port" || name == "subscriptionId" || name == "timeout" || name == "version")
        return true;
    return false;
}

Confdconfig::Hidegroup::Hidegroup()
    :
    name{YType::str, "name"},
    callback{YType::str, "callback"},
    password{YType::str, "password"}
{
    yang_name = "hideGroup"; yang_parent_name = "confdConfig";
}

Confdconfig::Hidegroup::~Hidegroup()
{
}

bool Confdconfig::Hidegroup::has_data() const
{
    return name.is_set
	|| callback.is_set
	|| password.is_set;
}

bool Confdconfig::Hidegroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(callback.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Confdconfig::Hidegroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hideGroup" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Hidegroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (callback.is_set || is_set(callback.yfilter)) leaf_name_data.push_back(callback.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Hidegroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Hidegroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Hidegroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callback")
    {
        callback = value;
        callback.value_namespace = name_space;
        callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Hidegroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "callback")
    {
        callback.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Confdconfig::Hidegroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "callback" || name == "password")
        return true;
    return false;
}

Confdconfig::Encryptedstrings::Encryptedstrings()
    :
    aescfb128(nullptr) // presence node
	,des3cbc(nullptr) // presence node
{
    yang_name = "encryptedStrings"; yang_parent_name = "confdConfig";
}

Confdconfig::Encryptedstrings::~Encryptedstrings()
{
}

bool Confdconfig::Encryptedstrings::has_data() const
{
    return (aescfb128 !=  nullptr && aescfb128->has_data())
	|| (des3cbc !=  nullptr && des3cbc->has_data());
}

bool Confdconfig::Encryptedstrings::has_operation() const
{
    return is_set(yfilter)
	|| (aescfb128 !=  nullptr && aescfb128->has_operation())
	|| (des3cbc !=  nullptr && des3cbc->has_operation());
}

std::string Confdconfig::Encryptedstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryptedStrings";

    return path_buffer.str();

}

const EntityPath Confdconfig::Encryptedstrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Encryptedstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AESCFB128")
    {
        if(aescfb128 == nullptr)
        {
            aescfb128 = std::make_shared<Confdconfig::Encryptedstrings::Aescfb128>();
        }
        return aescfb128;
    }

    if(child_yang_name == "DES3CBC")
    {
        if(des3cbc == nullptr)
        {
            des3cbc = std::make_shared<Confdconfig::Encryptedstrings::Des3Cbc>();
        }
        return des3cbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Encryptedstrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aescfb128 != nullptr)
    {
        children["AESCFB128"] = aescfb128;
    }

    if(des3cbc != nullptr)
    {
        children["DES3CBC"] = des3cbc;
    }

    return children;
}

void Confdconfig::Encryptedstrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Encryptedstrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Encryptedstrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AESCFB128" || name == "DES3CBC")
        return true;
    return false;
}

Confdconfig::Encryptedstrings::Des3Cbc::Des3Cbc()
    :
    initvector{YType::str, "initVector"},
    key1{YType::str, "key1"},
    key2{YType::str, "key2"},
    key3{YType::str, "key3"}
{
    yang_name = "DES3CBC"; yang_parent_name = "encryptedStrings";
}

Confdconfig::Encryptedstrings::Des3Cbc::~Des3Cbc()
{
}

bool Confdconfig::Encryptedstrings::Des3Cbc::has_data() const
{
    return initvector.is_set
	|| key1.is_set
	|| key2.is_set
	|| key3.is_set;
}

bool Confdconfig::Encryptedstrings::Des3Cbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initvector.yfilter)
	|| ydk::is_set(key1.yfilter)
	|| ydk::is_set(key2.yfilter)
	|| ydk::is_set(key3.yfilter);
}

std::string Confdconfig::Encryptedstrings::Des3Cbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DES3CBC";

    return path_buffer.str();

}

const EntityPath Confdconfig::Encryptedstrings::Des3Cbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/encryptedStrings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initvector.is_set || is_set(initvector.yfilter)) leaf_name_data.push_back(initvector.get_name_leafdata());
    if (key1.is_set || is_set(key1.yfilter)) leaf_name_data.push_back(key1.get_name_leafdata());
    if (key2.is_set || is_set(key2.yfilter)) leaf_name_data.push_back(key2.get_name_leafdata());
    if (key3.is_set || is_set(key3.yfilter)) leaf_name_data.push_back(key3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Encryptedstrings::Des3Cbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Encryptedstrings::Des3Cbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Encryptedstrings::Des3Cbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initVector")
    {
        initvector = value;
        initvector.value_namespace = name_space;
        initvector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key1")
    {
        key1 = value;
        key1.value_namespace = name_space;
        key1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key2")
    {
        key2 = value;
        key2.value_namespace = name_space;
        key2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key3")
    {
        key3 = value;
        key3.value_namespace = name_space;
        key3.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Encryptedstrings::Des3Cbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initVector")
    {
        initvector.yfilter = yfilter;
    }
    if(value_path == "key1")
    {
        key1.yfilter = yfilter;
    }
    if(value_path == "key2")
    {
        key2.yfilter = yfilter;
    }
    if(value_path == "key3")
    {
        key3.yfilter = yfilter;
    }
}

bool Confdconfig::Encryptedstrings::Des3Cbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initVector" || name == "key1" || name == "key2" || name == "key3")
        return true;
    return false;
}

Confdconfig::Encryptedstrings::Aescfb128::Aescfb128()
    :
    initvector{YType::str, "initVector"},
    key{YType::str, "key"}
{
    yang_name = "AESCFB128"; yang_parent_name = "encryptedStrings";
}

Confdconfig::Encryptedstrings::Aescfb128::~Aescfb128()
{
}

bool Confdconfig::Encryptedstrings::Aescfb128::has_data() const
{
    return initvector.is_set
	|| key.is_set;
}

bool Confdconfig::Encryptedstrings::Aescfb128::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initvector.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Confdconfig::Encryptedstrings::Aescfb128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AESCFB128";

    return path_buffer.str();

}

const EntityPath Confdconfig::Encryptedstrings::Aescfb128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/encryptedStrings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initvector.is_set || is_set(initvector.yfilter)) leaf_name_data.push_back(initvector.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Encryptedstrings::Aescfb128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Encryptedstrings::Aescfb128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Encryptedstrings::Aescfb128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initVector")
    {
        initvector = value;
        initvector.value_namespace = name_space;
        initvector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Encryptedstrings::Aescfb128::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initVector")
    {
        initvector.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Confdconfig::Encryptedstrings::Aescfb128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initVector" || name == "key")
        return true;
    return false;
}

Confdconfig::Logs::Logs()
    :
    auditlogcommit{YType::boolean, "auditLogCommit"},
    developerloglevel{YType::enumeration, "developerLogLevel"},
    snmploglevel{YType::enumeration, "snmpLogLevel"}
    	,
    auditlog(nullptr) // presence node
	,confdlog(nullptr) // presence node
	,developerlog(nullptr) // presence node
	,errorlog(nullptr) // presence node
	,netconflog(nullptr) // presence node
	,netconftracelog(nullptr) // presence node
	,snmplog(nullptr) // presence node
	,syslogconfig(nullptr) // presence node
	,webuiaccesslog(nullptr) // presence node
	,webuibrowserlog(nullptr) // presence node
	,xpathtracelog(nullptr) // presence node
{
    yang_name = "logs"; yang_parent_name = "confdConfig";
}

Confdconfig::Logs::~Logs()
{
}

bool Confdconfig::Logs::has_data() const
{
    return auditlogcommit.is_set
	|| developerloglevel.is_set
	|| snmploglevel.is_set
	|| (auditlog !=  nullptr && auditlog->has_data())
	|| (confdlog !=  nullptr && confdlog->has_data())
	|| (developerlog !=  nullptr && developerlog->has_data())
	|| (errorlog !=  nullptr && errorlog->has_data())
	|| (netconflog !=  nullptr && netconflog->has_data())
	|| (netconftracelog !=  nullptr && netconftracelog->has_data())
	|| (snmplog !=  nullptr && snmplog->has_data())
	|| (syslogconfig !=  nullptr && syslogconfig->has_data())
	|| (webuiaccesslog !=  nullptr && webuiaccesslog->has_data())
	|| (webuibrowserlog !=  nullptr && webuibrowserlog->has_data())
	|| (xpathtracelog !=  nullptr && xpathtracelog->has_data());
}

bool Confdconfig::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auditlogcommit.yfilter)
	|| ydk::is_set(developerloglevel.yfilter)
	|| ydk::is_set(snmploglevel.yfilter)
	|| (auditlog !=  nullptr && auditlog->has_operation())
	|| (confdlog !=  nullptr && confdlog->has_operation())
	|| (developerlog !=  nullptr && developerlog->has_operation())
	|| (errorlog !=  nullptr && errorlog->has_operation())
	|| (netconflog !=  nullptr && netconflog->has_operation())
	|| (netconftracelog !=  nullptr && netconftracelog->has_operation())
	|| (snmplog !=  nullptr && snmplog->has_operation())
	|| (syslogconfig !=  nullptr && syslogconfig->has_operation())
	|| (webuiaccesslog !=  nullptr && webuiaccesslog->has_operation())
	|| (webuibrowserlog !=  nullptr && webuibrowserlog->has_operation())
	|| (xpathtracelog !=  nullptr && xpathtracelog->has_operation());
}

std::string Confdconfig::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auditlogcommit.is_set || is_set(auditlogcommit.yfilter)) leaf_name_data.push_back(auditlogcommit.get_name_leafdata());
    if (developerloglevel.is_set || is_set(developerloglevel.yfilter)) leaf_name_data.push_back(developerloglevel.get_name_leafdata());
    if (snmploglevel.is_set || is_set(snmploglevel.yfilter)) leaf_name_data.push_back(snmploglevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auditLog")
    {
        if(auditlog == nullptr)
        {
            auditlog = std::make_shared<Confdconfig::Logs::Auditlog>();
        }
        return auditlog;
    }

    if(child_yang_name == "confdLog")
    {
        if(confdlog == nullptr)
        {
            confdlog = std::make_shared<Confdconfig::Logs::Confdlog>();
        }
        return confdlog;
    }

    if(child_yang_name == "developerLog")
    {
        if(developerlog == nullptr)
        {
            developerlog = std::make_shared<Confdconfig::Logs::Developerlog>();
        }
        return developerlog;
    }

    if(child_yang_name == "errorLog")
    {
        if(errorlog == nullptr)
        {
            errorlog = std::make_shared<Confdconfig::Logs::Errorlog>();
        }
        return errorlog;
    }

    if(child_yang_name == "netconfLog")
    {
        if(netconflog == nullptr)
        {
            netconflog = std::make_shared<Confdconfig::Logs::Netconflog>();
        }
        return netconflog;
    }

    if(child_yang_name == "netconfTraceLog")
    {
        if(netconftracelog == nullptr)
        {
            netconftracelog = std::make_shared<Confdconfig::Logs::Netconftracelog>();
        }
        return netconftracelog;
    }

    if(child_yang_name == "snmpLog")
    {
        if(snmplog == nullptr)
        {
            snmplog = std::make_shared<Confdconfig::Logs::Snmplog>();
        }
        return snmplog;
    }

    if(child_yang_name == "syslogConfig")
    {
        if(syslogconfig == nullptr)
        {
            syslogconfig = std::make_shared<Confdconfig::Logs::Syslogconfig>();
        }
        return syslogconfig;
    }

    if(child_yang_name == "webuiAccessLog")
    {
        if(webuiaccesslog == nullptr)
        {
            webuiaccesslog = std::make_shared<Confdconfig::Logs::Webuiaccesslog>();
        }
        return webuiaccesslog;
    }

    if(child_yang_name == "webuiBrowserLog")
    {
        if(webuibrowserlog == nullptr)
        {
            webuibrowserlog = std::make_shared<Confdconfig::Logs::Webuibrowserlog>();
        }
        return webuibrowserlog;
    }

    if(child_yang_name == "xpathTraceLog")
    {
        if(xpathtracelog == nullptr)
        {
            xpathtracelog = std::make_shared<Confdconfig::Logs::Xpathtracelog>();
        }
        return xpathtracelog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auditlog != nullptr)
    {
        children["auditLog"] = auditlog;
    }

    if(confdlog != nullptr)
    {
        children["confdLog"] = confdlog;
    }

    if(developerlog != nullptr)
    {
        children["developerLog"] = developerlog;
    }

    if(errorlog != nullptr)
    {
        children["errorLog"] = errorlog;
    }

    if(netconflog != nullptr)
    {
        children["netconfLog"] = netconflog;
    }

    if(netconftracelog != nullptr)
    {
        children["netconfTraceLog"] = netconftracelog;
    }

    if(snmplog != nullptr)
    {
        children["snmpLog"] = snmplog;
    }

    if(syslogconfig != nullptr)
    {
        children["syslogConfig"] = syslogconfig;
    }

    if(webuiaccesslog != nullptr)
    {
        children["webuiAccessLog"] = webuiaccesslog;
    }

    if(webuibrowserlog != nullptr)
    {
        children["webuiBrowserLog"] = webuibrowserlog;
    }

    if(xpathtracelog != nullptr)
    {
        children["xpathTraceLog"] = xpathtracelog;
    }

    return children;
}

void Confdconfig::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auditLogCommit")
    {
        auditlogcommit = value;
        auditlogcommit.value_namespace = name_space;
        auditlogcommit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "developerLogLevel")
    {
        developerloglevel = value;
        developerloglevel.value_namespace = name_space;
        developerloglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpLogLevel")
    {
        snmploglevel = value;
        snmploglevel.value_namespace = name_space;
        snmploglevel.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auditLogCommit")
    {
        auditlogcommit.yfilter = yfilter;
    }
    if(value_path == "developerLogLevel")
    {
        developerloglevel.yfilter = yfilter;
    }
    if(value_path == "snmpLogLevel")
    {
        snmploglevel.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auditLog" || name == "confdLog" || name == "developerLog" || name == "errorLog" || name == "netconfLog" || name == "netconfTraceLog" || name == "snmpLog" || name == "syslogConfig" || name == "webuiAccessLog" || name == "webuiBrowserLog" || name == "xpathTraceLog" || name == "auditLogCommit" || name == "developerLogLevel" || name == "snmpLogLevel")
        return true;
    return false;
}

Confdconfig::Logs::Syslogconfig::Syslogconfig()
    :
    facility{YType::str, "facility"},
    version{YType::enumeration, "version"}
    	,
    syslogservers(nullptr) // presence node
	,udp(nullptr) // presence node
{
    yang_name = "syslogConfig"; yang_parent_name = "logs";
}

Confdconfig::Logs::Syslogconfig::~Syslogconfig()
{
}

bool Confdconfig::Logs::Syslogconfig::has_data() const
{
    return facility.is_set
	|| version.is_set
	|| (syslogservers !=  nullptr && syslogservers->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Confdconfig::Logs::Syslogconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (syslogservers !=  nullptr && syslogservers->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Confdconfig::Logs::Syslogconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslogConfig";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Syslogconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Syslogconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syslogServers")
    {
        if(syslogservers == nullptr)
        {
            syslogservers = std::make_shared<Confdconfig::Logs::Syslogconfig::Syslogservers>();
        }
        return syslogservers;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Confdconfig::Logs::Syslogconfig::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Syslogconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syslogservers != nullptr)
    {
        children["syslogServers"] = syslogservers;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Confdconfig::Logs::Syslogconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Syslogconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Syslogconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslogServers" || name == "udp" || name == "facility" || name == "version")
        return true;
    return false;
}

Confdconfig::Logs::Syslogconfig::Udp::Udp()
    :
    enabled{YType::boolean, "enabled"},
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "udp"; yang_parent_name = "syslogConfig";
}

Confdconfig::Logs::Syslogconfig::Udp::~Udp()
{
}

bool Confdconfig::Logs::Syslogconfig::Udp::has_data() const
{
    return enabled.is_set
	|| host.is_set
	|| port.is_set;
}

bool Confdconfig::Logs::Syslogconfig::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Logs::Syslogconfig::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Syslogconfig::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/syslogConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Syslogconfig::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Syslogconfig::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Syslogconfig::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Syslogconfig::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Syslogconfig::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "host" || name == "port")
        return true;
    return false;
}

Confdconfig::Logs::Syslogconfig::Syslogservers::Syslogservers()
{
    yang_name = "syslogServers"; yang_parent_name = "syslogConfig";
}

Confdconfig::Logs::Syslogconfig::Syslogservers::~Syslogservers()
{
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Logs::Syslogconfig::Syslogservers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslogServers";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Syslogconfig::Syslogservers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/syslogConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Syslogconfig::Syslogservers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Logs::Syslogconfig::Syslogservers::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Syslogconfig::Syslogservers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Logs::Syslogconfig::Syslogservers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Logs::Syslogconfig::Syslogservers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Confdconfig::Logs::Syslogconfig::Syslogservers::Server::Server()
    :
    host{YType::str, "host"},
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"},
    port{YType::uint16, "port"},
    version{YType::enumeration, "version"}
{
    yang_name = "server"; yang_parent_name = "syslogServers";
}

Confdconfig::Logs::Syslogconfig::Syslogservers::Server::~Server()
{
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::Server::has_data() const
{
    return host.is_set
	|| enabled.is_set
	|| facility.is_set
	|| port.is_set
	|| version.is_set;
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Confdconfig::Logs::Syslogconfig::Syslogservers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[host='" <<host <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Syslogconfig::Syslogservers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/syslogConfig/syslogServers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Syslogconfig::Syslogservers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Syslogconfig::Syslogservers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Syslogconfig::Syslogservers::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Syslogconfig::Syslogservers::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Syslogconfig::Syslogservers::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "enabled" || name == "facility" || name == "port" || name == "version")
        return true;
    return false;
}

Confdconfig::Logs::Confdlog::Confdlog()
    :
    enabled{YType::boolean, "enabled"}
    	,
    file(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "confdLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Confdlog::~Confdlog()
{
}

bool Confdconfig::Logs::Confdlog::has_data() const
{
    return enabled.is_set
	|| (file !=  nullptr && file->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Confdconfig::Logs::Confdlog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Confdconfig::Logs::Confdlog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confdLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Confdlog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Confdlog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Confdconfig::Logs::Confdlog::File>();
        }
        return file;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Confdconfig::Logs::Confdlog::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Confdlog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Confdconfig::Logs::Confdlog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Confdlog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Confdlog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "syslog" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Logs::Confdlog::File::File()
    :
    enabled{YType::boolean, "enabled"},
    name{YType::str, "name"}
{
    yang_name = "file"; yang_parent_name = "confdLog";
}

Confdconfig::Logs::Confdlog::File::~File()
{
}

bool Confdconfig::Logs::Confdlog::File::has_data() const
{
    return enabled.is_set
	|| name.is_set;
}

bool Confdconfig::Logs::Confdlog::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Confdconfig::Logs::Confdlog::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Confdlog::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/confdLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Confdlog::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Confdlog::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Confdlog::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Confdlog::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Confdlog::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "name")
        return true;
    return false;
}

Confdconfig::Logs::Confdlog::Syslog::Syslog()
    :
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"}
{
    yang_name = "syslog"; yang_parent_name = "confdLog";
}

Confdconfig::Logs::Confdlog::Syslog::~Syslog()
{
}

bool Confdconfig::Logs::Confdlog::Syslog::has_data() const
{
    return enabled.is_set
	|| facility.is_set;
}

bool Confdconfig::Logs::Confdlog::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter);
}

std::string Confdconfig::Logs::Confdlog::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Confdlog::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/confdLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Confdlog::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Confdlog::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Confdlog::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Confdlog::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Confdlog::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "facility")
        return true;
    return false;
}

Confdconfig::Logs::Developerlog::Developerlog()
    :
    enabled{YType::boolean, "enabled"}
    	,
    file(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "developerLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Developerlog::~Developerlog()
{
}

bool Confdconfig::Logs::Developerlog::has_data() const
{
    return enabled.is_set
	|| (file !=  nullptr && file->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Confdconfig::Logs::Developerlog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Confdconfig::Logs::Developerlog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "developerLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Developerlog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Developerlog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Confdconfig::Logs::Developerlog::File>();
        }
        return file;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Confdconfig::Logs::Developerlog::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Developerlog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Confdconfig::Logs::Developerlog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Developerlog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Developerlog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "syslog" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Logs::Developerlog::File::File()
    :
    enabled{YType::boolean, "enabled"},
    name{YType::str, "name"}
{
    yang_name = "file"; yang_parent_name = "developerLog";
}

Confdconfig::Logs::Developerlog::File::~File()
{
}

bool Confdconfig::Logs::Developerlog::File::has_data() const
{
    return enabled.is_set
	|| name.is_set;
}

bool Confdconfig::Logs::Developerlog::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Confdconfig::Logs::Developerlog::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Developerlog::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/developerLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Developerlog::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Developerlog::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Developerlog::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Developerlog::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Developerlog::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "name")
        return true;
    return false;
}

Confdconfig::Logs::Developerlog::Syslog::Syslog()
    :
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"}
{
    yang_name = "syslog"; yang_parent_name = "developerLog";
}

Confdconfig::Logs::Developerlog::Syslog::~Syslog()
{
}

bool Confdconfig::Logs::Developerlog::Syslog::has_data() const
{
    return enabled.is_set
	|| facility.is_set;
}

bool Confdconfig::Logs::Developerlog::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter);
}

std::string Confdconfig::Logs::Developerlog::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Developerlog::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/developerLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Developerlog::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Developerlog::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Developerlog::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Developerlog::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Developerlog::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "facility")
        return true;
    return false;
}

Confdconfig::Logs::Auditlog::Auditlog()
    :
    enabled{YType::boolean, "enabled"}
    	,
    file(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "auditLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Auditlog::~Auditlog()
{
}

bool Confdconfig::Logs::Auditlog::has_data() const
{
    return enabled.is_set
	|| (file !=  nullptr && file->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Confdconfig::Logs::Auditlog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Confdconfig::Logs::Auditlog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auditLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Auditlog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Auditlog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Confdconfig::Logs::Auditlog::File>();
        }
        return file;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Confdconfig::Logs::Auditlog::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Auditlog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Confdconfig::Logs::Auditlog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Auditlog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Auditlog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "syslog" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Logs::Auditlog::File::File()
    :
    enabled{YType::boolean, "enabled"},
    name{YType::str, "name"}
{
    yang_name = "file"; yang_parent_name = "auditLog";
}

Confdconfig::Logs::Auditlog::File::~File()
{
}

bool Confdconfig::Logs::Auditlog::File::has_data() const
{
    return enabled.is_set
	|| name.is_set;
}

bool Confdconfig::Logs::Auditlog::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Confdconfig::Logs::Auditlog::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Auditlog::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/auditLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Auditlog::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Auditlog::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Auditlog::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Auditlog::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Auditlog::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "name")
        return true;
    return false;
}

Confdconfig::Logs::Auditlog::Syslog::Syslog()
    :
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"}
{
    yang_name = "syslog"; yang_parent_name = "auditLog";
}

Confdconfig::Logs::Auditlog::Syslog::~Syslog()
{
}

bool Confdconfig::Logs::Auditlog::Syslog::has_data() const
{
    return enabled.is_set
	|| facility.is_set;
}

bool Confdconfig::Logs::Auditlog::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter);
}

std::string Confdconfig::Logs::Auditlog::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Auditlog::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/auditLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Auditlog::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Auditlog::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Auditlog::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Auditlog::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Auditlog::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "facility")
        return true;
    return false;
}

Confdconfig::Logs::Netconflog::Netconflog()
    :
    enabled{YType::boolean, "enabled"}
    	,
    file(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "netconfLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Netconflog::~Netconflog()
{
}

bool Confdconfig::Logs::Netconflog::has_data() const
{
    return enabled.is_set
	|| (file !=  nullptr && file->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Confdconfig::Logs::Netconflog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Confdconfig::Logs::Netconflog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconfLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Netconflog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Netconflog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Confdconfig::Logs::Netconflog::File>();
        }
        return file;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Confdconfig::Logs::Netconflog::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Netconflog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Confdconfig::Logs::Netconflog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Netconflog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Netconflog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "syslog" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Logs::Netconflog::File::File()
    :
    enabled{YType::boolean, "enabled"},
    name{YType::str, "name"}
{
    yang_name = "file"; yang_parent_name = "netconfLog";
}

Confdconfig::Logs::Netconflog::File::~File()
{
}

bool Confdconfig::Logs::Netconflog::File::has_data() const
{
    return enabled.is_set
	|| name.is_set;
}

bool Confdconfig::Logs::Netconflog::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Confdconfig::Logs::Netconflog::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Netconflog::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/netconfLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Netconflog::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Netconflog::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Netconflog::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Netconflog::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Netconflog::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "name")
        return true;
    return false;
}

Confdconfig::Logs::Netconflog::Syslog::Syslog()
    :
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"}
{
    yang_name = "syslog"; yang_parent_name = "netconfLog";
}

Confdconfig::Logs::Netconflog::Syslog::~Syslog()
{
}

bool Confdconfig::Logs::Netconflog::Syslog::has_data() const
{
    return enabled.is_set
	|| facility.is_set;
}

bool Confdconfig::Logs::Netconflog::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter);
}

std::string Confdconfig::Logs::Netconflog::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Netconflog::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/netconfLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Netconflog::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Netconflog::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Netconflog::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Netconflog::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Netconflog::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "facility")
        return true;
    return false;
}

Confdconfig::Logs::Snmplog::Snmplog()
    :
    enabled{YType::boolean, "enabled"}
    	,
    file(nullptr) // presence node
	,syslog(nullptr) // presence node
{
    yang_name = "snmpLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Snmplog::~Snmplog()
{
}

bool Confdconfig::Logs::Snmplog::has_data() const
{
    return enabled.is_set
	|| (file !=  nullptr && file->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Confdconfig::Logs::Snmplog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (file !=  nullptr && file->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Confdconfig::Logs::Snmplog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Snmplog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Snmplog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Confdconfig::Logs::Snmplog::File>();
        }
        return file;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Confdconfig::Logs::Snmplog::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Snmplog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Confdconfig::Logs::Snmplog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Snmplog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Snmplog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "syslog" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Logs::Snmplog::File::File()
    :
    enabled{YType::boolean, "enabled"},
    name{YType::str, "name"}
{
    yang_name = "file"; yang_parent_name = "snmpLog";
}

Confdconfig::Logs::Snmplog::File::~File()
{
}

bool Confdconfig::Logs::Snmplog::File::has_data() const
{
    return enabled.is_set
	|| name.is_set;
}

bool Confdconfig::Logs::Snmplog::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Confdconfig::Logs::Snmplog::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Snmplog::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/snmpLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Snmplog::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Snmplog::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Snmplog::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Snmplog::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Snmplog::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "name")
        return true;
    return false;
}

Confdconfig::Logs::Snmplog::Syslog::Syslog()
    :
    enabled{YType::boolean, "enabled"},
    facility{YType::str, "facility"}
{
    yang_name = "syslog"; yang_parent_name = "snmpLog";
}

Confdconfig::Logs::Snmplog::Syslog::~Syslog()
{
}

bool Confdconfig::Logs::Snmplog::Syslog::has_data() const
{
    return enabled.is_set
	|| facility.is_set;
}

bool Confdconfig::Logs::Snmplog::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(facility.yfilter);
}

std::string Confdconfig::Logs::Snmplog::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Snmplog::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/snmpLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Snmplog::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Snmplog::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Snmplog::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Snmplog::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Snmplog::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "facility")
        return true;
    return false;
}

Confdconfig::Logs::Webuibrowserlog::Webuibrowserlog()
    :
    enabled{YType::boolean, "enabled"},
    filename{YType::str, "filename"}
{
    yang_name = "webuiBrowserLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Webuibrowserlog::~Webuibrowserlog()
{
}

bool Confdconfig::Logs::Webuibrowserlog::has_data() const
{
    return enabled.is_set
	|| filename.is_set;
}

bool Confdconfig::Logs::Webuibrowserlog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Confdconfig::Logs::Webuibrowserlog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webuiBrowserLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Webuibrowserlog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Webuibrowserlog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Webuibrowserlog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Webuibrowserlog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Webuibrowserlog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Webuibrowserlog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "filename")
        return true;
    return false;
}

Confdconfig::Logs::Webuiaccesslog::Webuiaccesslog()
    :
    dir{YType::str, "dir"},
    enabled{YType::boolean, "enabled"},
    trafficlog{YType::boolean, "trafficLog"}
{
    yang_name = "webuiAccessLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Webuiaccesslog::~Webuiaccesslog()
{
}

bool Confdconfig::Logs::Webuiaccesslog::has_data() const
{
    return dir.is_set
	|| enabled.is_set
	|| trafficlog.is_set;
}

bool Confdconfig::Logs::Webuiaccesslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(trafficlog.yfilter);
}

std::string Confdconfig::Logs::Webuiaccesslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webuiAccessLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Webuiaccesslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (trafficlog.is_set || is_set(trafficlog.yfilter)) leaf_name_data.push_back(trafficlog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Webuiaccesslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Webuiaccesslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Webuiaccesslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trafficLog")
    {
        trafficlog = value;
        trafficlog.value_namespace = name_space;
        trafficlog.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Webuiaccesslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "trafficLog")
    {
        trafficlog.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Webuiaccesslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir" || name == "enabled" || name == "trafficLog")
        return true;
    return false;
}

Confdconfig::Logs::Netconftracelog::Netconftracelog()
    :
    enabled{YType::boolean, "enabled"},
    filename{YType::str, "filename"},
    format{YType::enumeration, "format"}
{
    yang_name = "netconfTraceLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Netconftracelog::~Netconftracelog()
{
}

bool Confdconfig::Logs::Netconftracelog::has_data() const
{
    return enabled.is_set
	|| filename.is_set
	|| format.is_set;
}

bool Confdconfig::Logs::Netconftracelog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Confdconfig::Logs::Netconftracelog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconfTraceLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Netconftracelog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Netconftracelog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Netconftracelog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Netconftracelog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Netconftracelog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Netconftracelog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "filename" || name == "format")
        return true;
    return false;
}

Confdconfig::Logs::Xpathtracelog::Xpathtracelog()
    :
    enabled{YType::boolean, "enabled"},
    filename{YType::str, "filename"}
{
    yang_name = "xpathTraceLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Xpathtracelog::~Xpathtracelog()
{
}

bool Confdconfig::Logs::Xpathtracelog::has_data() const
{
    return enabled.is_set
	|| filename.is_set;
}

bool Confdconfig::Logs::Xpathtracelog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Confdconfig::Logs::Xpathtracelog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xpathTraceLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Xpathtracelog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Xpathtracelog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Xpathtracelog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Xpathtracelog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Xpathtracelog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Xpathtracelog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "filename")
        return true;
    return false;
}

Confdconfig::Logs::Errorlog::Errorlog()
    :
    enabled{YType::boolean, "enabled"},
    filename{YType::str, "filename"},
    maxsize{YType::str, "maxSize"}
    	,
    debug(nullptr) // presence node
{
    yang_name = "errorLog"; yang_parent_name = "logs";
}

Confdconfig::Logs::Errorlog::~Errorlog()
{
}

bool Confdconfig::Logs::Errorlog::has_data() const
{
    return enabled.is_set
	|| filename.is_set
	|| maxsize.is_set
	|| (debug !=  nullptr && debug->has_data());
}

bool Confdconfig::Logs::Errorlog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| (debug !=  nullptr && debug->has_operation());
}

std::string Confdconfig::Logs::Errorlog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errorLog";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Errorlog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Errorlog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Confdconfig::Logs::Errorlog::Debug>();
        }
        return debug;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Errorlog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    return children;
}

void Confdconfig::Logs::Errorlog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Logs::Errorlog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "maxSize")
    {
        maxsize.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Errorlog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "enabled" || name == "filename" || name == "maxSize")
        return true;
    return false;
}

Confdconfig::Logs::Errorlog::Debug::Debug()
    :
    enabled{YType::boolean, "enabled"},
    level{YType::uint16, "level"},
    tag{YType::str, "tag"}
{
    yang_name = "debug"; yang_parent_name = "errorLog";
}

Confdconfig::Logs::Errorlog::Debug::~Debug()
{
}

bool Confdconfig::Logs::Errorlog::Debug::has_data() const
{
    for (auto const & leaf : tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| level.is_set;
}

bool Confdconfig::Logs::Errorlog::Debug::has_operation() const
{
    for (auto const & leaf : tag.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Confdconfig::Logs::Errorlog::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";

    return path_buffer.str();

}

const EntityPath Confdconfig::Logs::Errorlog::Debug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/logs/errorLog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    auto tag_name_datas = tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_name_datas.begin(), tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Logs::Errorlog::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Logs::Errorlog::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Logs::Errorlog::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag.append(value);
    }
}

void Confdconfig::Logs::Errorlog::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Confdconfig::Logs::Errorlog::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "level" || name == "tag")
        return true;
    return false;
}

Confdconfig::Sessionlimits::Sessionlimits()
    :
    maxconfigsessions{YType::str, "maxConfigSessions"},
    maxsessions{YType::str, "maxSessions"}
{
    yang_name = "sessionLimits"; yang_parent_name = "confdConfig";
}

Confdconfig::Sessionlimits::~Sessionlimits()
{
}

bool Confdconfig::Sessionlimits::has_data() const
{
    for (std::size_t index=0; index<configsessionlimit.size(); index++)
    {
        if(configsessionlimit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sessionlimit.size(); index++)
    {
        if(sessionlimit[index]->has_data())
            return true;
    }
    return maxconfigsessions.is_set
	|| maxsessions.is_set;
}

bool Confdconfig::Sessionlimits::has_operation() const
{
    for (std::size_t index=0; index<configsessionlimit.size(); index++)
    {
        if(configsessionlimit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sessionlimit.size(); index++)
    {
        if(sessionlimit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(maxconfigsessions.yfilter)
	|| ydk::is_set(maxsessions.yfilter);
}

std::string Confdconfig::Sessionlimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionLimits";

    return path_buffer.str();

}

const EntityPath Confdconfig::Sessionlimits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxconfigsessions.is_set || is_set(maxconfigsessions.yfilter)) leaf_name_data.push_back(maxconfigsessions.get_name_leafdata());
    if (maxsessions.is_set || is_set(maxsessions.yfilter)) leaf_name_data.push_back(maxsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Sessionlimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configSessionLimit")
    {
        for(auto const & c : configsessionlimit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Sessionlimits::Configsessionlimit>();
        c->parent = this;
        configsessionlimit.push_back(c);
        return c;
    }

    if(child_yang_name == "sessionLimit")
    {
        for(auto const & c : sessionlimit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Sessionlimits::Sessionlimit>();
        c->parent = this;
        sessionlimit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Sessionlimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configsessionlimit)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sessionlimit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Sessionlimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxConfigSessions")
    {
        maxconfigsessions = value;
        maxconfigsessions.value_namespace = name_space;
        maxconfigsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSessions")
    {
        maxsessions = value;
        maxsessions.value_namespace = name_space;
        maxsessions.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Sessionlimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxConfigSessions")
    {
        maxconfigsessions.yfilter = yfilter;
    }
    if(value_path == "maxSessions")
    {
        maxsessions.yfilter = yfilter;
    }
}

bool Confdconfig::Sessionlimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configSessionLimit" || name == "sessionLimit" || name == "maxConfigSessions" || name == "maxSessions")
        return true;
    return false;
}

Confdconfig::Sessionlimits::Sessionlimit::Sessionlimit()
    :
    context{YType::str, "context"},
    maxsessions{YType::str, "maxSessions"}
{
    yang_name = "sessionLimit"; yang_parent_name = "sessionLimits";
}

Confdconfig::Sessionlimits::Sessionlimit::~Sessionlimit()
{
}

bool Confdconfig::Sessionlimits::Sessionlimit::has_data() const
{
    return context.is_set
	|| maxsessions.is_set;
}

bool Confdconfig::Sessionlimits::Sessionlimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(maxsessions.yfilter);
}

std::string Confdconfig::Sessionlimits::Sessionlimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionLimit" <<"[context='" <<context <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Sessionlimits::Sessionlimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/sessionLimits/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (maxsessions.is_set || is_set(maxsessions.yfilter)) leaf_name_data.push_back(maxsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Sessionlimits::Sessionlimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Sessionlimits::Sessionlimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Sessionlimits::Sessionlimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSessions")
    {
        maxsessions = value;
        maxsessions.value_namespace = name_space;
        maxsessions.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Sessionlimits::Sessionlimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "maxSessions")
    {
        maxsessions.yfilter = yfilter;
    }
}

bool Confdconfig::Sessionlimits::Sessionlimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context" || name == "maxSessions")
        return true;
    return false;
}

Confdconfig::Sessionlimits::Configsessionlimit::Configsessionlimit()
    :
    context{YType::str, "context"},
    maxsessions{YType::str, "maxSessions"}
{
    yang_name = "configSessionLimit"; yang_parent_name = "sessionLimits";
}

Confdconfig::Sessionlimits::Configsessionlimit::~Configsessionlimit()
{
}

bool Confdconfig::Sessionlimits::Configsessionlimit::has_data() const
{
    return context.is_set
	|| maxsessions.is_set;
}

bool Confdconfig::Sessionlimits::Configsessionlimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(maxsessions.yfilter);
}

std::string Confdconfig::Sessionlimits::Configsessionlimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configSessionLimit" <<"[context='" <<context <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Sessionlimits::Configsessionlimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/sessionLimits/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (maxsessions.is_set || is_set(maxsessions.yfilter)) leaf_name_data.push_back(maxsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Sessionlimits::Configsessionlimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Sessionlimits::Configsessionlimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Sessionlimits::Configsessionlimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSessions")
    {
        maxsessions = value;
        maxsessions.value_namespace = name_space;
        maxsessions.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Sessionlimits::Configsessionlimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "maxSessions")
    {
        maxsessions.yfilter = yfilter;
    }
}

bool Confdconfig::Sessionlimits::Configsessionlimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context" || name == "maxSessions")
        return true;
    return false;
}

Confdconfig::Aaa::Aaa()
    :
    auditusername{YType::enumeration, "auditUserName"},
    authorder{YType::str, "authOrder"},
    defaultgroup{YType::str, "defaultGroup"},
    expirationwarning{YType::enumeration, "expirationWarning"},
    sshlogingracetime{YType::str, "sshLoginGraceTime"},
    sshmaxauthtries{YType::str, "sshMaxAuthTries"},
    sshpubkeyauthentication{YType::enumeration, "sshPubkeyAuthentication"}
    	,
    authenticationcallback(nullptr) // presence node
	,authorization(nullptr) // presence node
	,externalauthentication(nullptr) // presence node
	,localauthentication(nullptr) // presence node
	,pam(nullptr) // presence node
{
    yang_name = "aaa"; yang_parent_name = "confdConfig";
}

Confdconfig::Aaa::~Aaa()
{
}

bool Confdconfig::Aaa::has_data() const
{
    return auditusername.is_set
	|| authorder.is_set
	|| defaultgroup.is_set
	|| expirationwarning.is_set
	|| sshlogingracetime.is_set
	|| sshmaxauthtries.is_set
	|| sshpubkeyauthentication.is_set
	|| (authenticationcallback !=  nullptr && authenticationcallback->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (externalauthentication !=  nullptr && externalauthentication->has_data())
	|| (localauthentication !=  nullptr && localauthentication->has_data())
	|| (pam !=  nullptr && pam->has_data());
}

bool Confdconfig::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auditusername.yfilter)
	|| ydk::is_set(authorder.yfilter)
	|| ydk::is_set(defaultgroup.yfilter)
	|| ydk::is_set(expirationwarning.yfilter)
	|| ydk::is_set(sshlogingracetime.yfilter)
	|| ydk::is_set(sshmaxauthtries.yfilter)
	|| ydk::is_set(sshpubkeyauthentication.yfilter)
	|| (authenticationcallback !=  nullptr && authenticationcallback->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (externalauthentication !=  nullptr && externalauthentication->has_operation())
	|| (localauthentication !=  nullptr && localauthentication->has_operation())
	|| (pam !=  nullptr && pam->has_operation());
}

std::string Confdconfig::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auditusername.is_set || is_set(auditusername.yfilter)) leaf_name_data.push_back(auditusername.get_name_leafdata());
    if (authorder.is_set || is_set(authorder.yfilter)) leaf_name_data.push_back(authorder.get_name_leafdata());
    if (defaultgroup.is_set || is_set(defaultgroup.yfilter)) leaf_name_data.push_back(defaultgroup.get_name_leafdata());
    if (expirationwarning.is_set || is_set(expirationwarning.yfilter)) leaf_name_data.push_back(expirationwarning.get_name_leafdata());
    if (sshlogingracetime.is_set || is_set(sshlogingracetime.yfilter)) leaf_name_data.push_back(sshlogingracetime.get_name_leafdata());
    if (sshmaxauthtries.is_set || is_set(sshmaxauthtries.yfilter)) leaf_name_data.push_back(sshmaxauthtries.get_name_leafdata());
    if (sshpubkeyauthentication.is_set || is_set(sshpubkeyauthentication.yfilter)) leaf_name_data.push_back(sshpubkeyauthentication.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticationCallback")
    {
        if(authenticationcallback == nullptr)
        {
            authenticationcallback = std::make_shared<Confdconfig::Aaa::Authenticationcallback>();
        }
        return authenticationcallback;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Confdconfig::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "externalAuthentication")
    {
        if(externalauthentication == nullptr)
        {
            externalauthentication = std::make_shared<Confdconfig::Aaa::Externalauthentication>();
        }
        return externalauthentication;
    }

    if(child_yang_name == "localAuthentication")
    {
        if(localauthentication == nullptr)
        {
            localauthentication = std::make_shared<Confdconfig::Aaa::Localauthentication>();
        }
        return localauthentication;
    }

    if(child_yang_name == "pam")
    {
        if(pam == nullptr)
        {
            pam = std::make_shared<Confdconfig::Aaa::Pam>();
        }
        return pam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authenticationcallback != nullptr)
    {
        children["authenticationCallback"] = authenticationcallback;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(externalauthentication != nullptr)
    {
        children["externalAuthentication"] = externalauthentication;
    }

    if(localauthentication != nullptr)
    {
        children["localAuthentication"] = localauthentication;
    }

    if(pam != nullptr)
    {
        children["pam"] = pam;
    }

    return children;
}

void Confdconfig::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auditUserName")
    {
        auditusername = value;
        auditusername.value_namespace = name_space;
        auditusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authOrder")
    {
        authorder = value;
        authorder.value_namespace = name_space;
        authorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultGroup")
    {
        defaultgroup = value;
        defaultgroup.value_namespace = name_space;
        defaultgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expirationWarning")
    {
        expirationwarning = value;
        expirationwarning.value_namespace = name_space;
        expirationwarning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshLoginGraceTime")
    {
        sshlogingracetime = value;
        sshlogingracetime.value_namespace = name_space;
        sshlogingracetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshMaxAuthTries")
    {
        sshmaxauthtries = value;
        sshmaxauthtries.value_namespace = name_space;
        sshmaxauthtries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshPubkeyAuthentication")
    {
        sshpubkeyauthentication = value;
        sshpubkeyauthentication.value_namespace = name_space;
        sshpubkeyauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auditUserName")
    {
        auditusername.yfilter = yfilter;
    }
    if(value_path == "authOrder")
    {
        authorder.yfilter = yfilter;
    }
    if(value_path == "defaultGroup")
    {
        defaultgroup.yfilter = yfilter;
    }
    if(value_path == "expirationWarning")
    {
        expirationwarning.yfilter = yfilter;
    }
    if(value_path == "sshLoginGraceTime")
    {
        sshlogingracetime.yfilter = yfilter;
    }
    if(value_path == "sshMaxAuthTries")
    {
        sshmaxauthtries.yfilter = yfilter;
    }
    if(value_path == "sshPubkeyAuthentication")
    {
        sshpubkeyauthentication.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticationCallback" || name == "authorization" || name == "externalAuthentication" || name == "localAuthentication" || name == "pam" || name == "auditUserName" || name == "authOrder" || name == "defaultGroup" || name == "expirationWarning" || name == "sshLoginGraceTime" || name == "sshMaxAuthTries" || name == "sshPubkeyAuthentication")
        return true;
    return false;
}

Confdconfig::Aaa::Pam::Pam()
    :
    enabled{YType::boolean, "enabled"},
    service{YType::str, "service"},
    timeout{YType::str, "timeout"}
{
    yang_name = "pam"; yang_parent_name = "aaa";
}

Confdconfig::Aaa::Pam::~Pam()
{
}

bool Confdconfig::Aaa::Pam::has_data() const
{
    return enabled.is_set
	|| service.is_set
	|| timeout.is_set;
}

bool Confdconfig::Aaa::Pam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Confdconfig::Aaa::Pam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pam";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Pam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Pam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Pam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Aaa::Pam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Pam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Pam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "service" || name == "timeout")
        return true;
    return false;
}

Confdconfig::Aaa::Externalauthentication::Externalauthentication()
    :
    enabled{YType::boolean, "enabled"},
    executable{YType::str, "executable"},
    includeextra{YType::boolean, "includeExtra"},
    usebase64{YType::boolean, "useBase64"}
{
    yang_name = "externalAuthentication"; yang_parent_name = "aaa";
}

Confdconfig::Aaa::Externalauthentication::~Externalauthentication()
{
}

bool Confdconfig::Aaa::Externalauthentication::has_data() const
{
    return enabled.is_set
	|| executable.is_set
	|| includeextra.is_set
	|| usebase64.is_set;
}

bool Confdconfig::Aaa::Externalauthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(executable.yfilter)
	|| ydk::is_set(includeextra.yfilter)
	|| ydk::is_set(usebase64.yfilter);
}

std::string Confdconfig::Aaa::Externalauthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "externalAuthentication";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Externalauthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (executable.is_set || is_set(executable.yfilter)) leaf_name_data.push_back(executable.get_name_leafdata());
    if (includeextra.is_set || is_set(includeextra.yfilter)) leaf_name_data.push_back(includeextra.get_name_leafdata());
    if (usebase64.is_set || is_set(usebase64.yfilter)) leaf_name_data.push_back(usebase64.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Externalauthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Externalauthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Aaa::Externalauthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "executable")
    {
        executable = value;
        executable.value_namespace = name_space;
        executable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includeExtra")
    {
        includeextra = value;
        includeextra.value_namespace = name_space;
        includeextra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useBase64")
    {
        usebase64 = value;
        usebase64.value_namespace = name_space;
        usebase64.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Externalauthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "executable")
    {
        executable.yfilter = yfilter;
    }
    if(value_path == "includeExtra")
    {
        includeextra.yfilter = yfilter;
    }
    if(value_path == "useBase64")
    {
        usebase64.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Externalauthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "executable" || name == "includeExtra" || name == "useBase64")
        return true;
    return false;
}

Confdconfig::Aaa::Localauthentication::Localauthentication()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "localAuthentication"; yang_parent_name = "aaa";
}

Confdconfig::Aaa::Localauthentication::~Localauthentication()
{
}

bool Confdconfig::Aaa::Localauthentication::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Aaa::Localauthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Aaa::Localauthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localAuthentication";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Localauthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Localauthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Localauthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Aaa::Localauthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Localauthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Localauthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Aaa::Authenticationcallback::Authenticationcallback()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "authenticationCallback"; yang_parent_name = "aaa";
}

Confdconfig::Aaa::Authenticationcallback::~Authenticationcallback()
{
}

bool Confdconfig::Aaa::Authenticationcallback::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Aaa::Authenticationcallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Aaa::Authenticationcallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticationCallback";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Authenticationcallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Authenticationcallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Authenticationcallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Aaa::Authenticationcallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Authenticationcallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Authenticationcallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Aaa::Authorization::Authorization()
    :
    enabled{YType::boolean, "enabled"}
    	,
    callback(nullptr) // presence node
{
    yang_name = "authorization"; yang_parent_name = "aaa";
}

Confdconfig::Aaa::Authorization::~Authorization()
{
}

bool Confdconfig::Aaa::Authorization::has_data() const
{
    return enabled.is_set
	|| (callback !=  nullptr && callback->has_data());
}

bool Confdconfig::Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (callback !=  nullptr && callback->has_operation());
}

std::string Confdconfig::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "callback")
    {
        if(callback == nullptr)
        {
            callback = std::make_shared<Confdconfig::Aaa::Authorization::Callback>();
        }
        return callback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(callback != nullptr)
    {
        children["callback"] = callback;
    }

    return children;
}

void Confdconfig::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callback" || name == "enabled")
        return true;
    return false;
}

Confdconfig::Aaa::Authorization::Callback::Callback()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "callback"; yang_parent_name = "authorization";
}

Confdconfig::Aaa::Authorization::Callback::~Callback()
{
}

bool Confdconfig::Aaa::Authorization::Callback::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Aaa::Authorization::Callback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Aaa::Authorization::Callback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callback";

    return path_buffer.str();

}

const EntityPath Confdconfig::Aaa::Authorization::Callback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/aaa/authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Aaa::Authorization::Callback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Aaa::Authorization::Callback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Aaa::Authorization::Callback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Aaa::Authorization::Callback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Aaa::Authorization::Callback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Ssh::Ssh()
    :
    clientalivecountmax{YType::uint32, "clientAliveCountMax"},
    clientaliveinterval{YType::str, "clientAliveInterval"},
    idleconnectiontimeout{YType::str, "idleConnectionTimeout"}
    	,
    algorithms(nullptr) // presence node
{
    yang_name = "ssh"; yang_parent_name = "confdConfig";
}

Confdconfig::Ssh::~Ssh()
{
}

bool Confdconfig::Ssh::has_data() const
{
    return clientalivecountmax.is_set
	|| clientaliveinterval.is_set
	|| idleconnectiontimeout.is_set
	|| (algorithms !=  nullptr && algorithms->has_data());
}

bool Confdconfig::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientalivecountmax.yfilter)
	|| ydk::is_set(clientaliveinterval.yfilter)
	|| ydk::is_set(idleconnectiontimeout.yfilter)
	|| (algorithms !=  nullptr && algorithms->has_operation());
}

std::string Confdconfig::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientalivecountmax.is_set || is_set(clientalivecountmax.yfilter)) leaf_name_data.push_back(clientalivecountmax.get_name_leafdata());
    if (clientaliveinterval.is_set || is_set(clientaliveinterval.yfilter)) leaf_name_data.push_back(clientaliveinterval.get_name_leafdata());
    if (idleconnectiontimeout.is_set || is_set(idleconnectiontimeout.yfilter)) leaf_name_data.push_back(idleconnectiontimeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithms")
    {
        if(algorithms == nullptr)
        {
            algorithms = std::make_shared<Confdconfig::Ssh::Algorithms>();
        }
        return algorithms;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithms != nullptr)
    {
        children["algorithms"] = algorithms;
    }

    return children;
}

void Confdconfig::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientAliveCountMax")
    {
        clientalivecountmax = value;
        clientalivecountmax.value_namespace = name_space;
        clientalivecountmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientAliveInterval")
    {
        clientaliveinterval = value;
        clientaliveinterval.value_namespace = name_space;
        clientaliveinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleConnectionTimeout")
    {
        idleconnectiontimeout = value;
        idleconnectiontimeout.value_namespace = name_space;
        idleconnectiontimeout.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientAliveCountMax")
    {
        clientalivecountmax.yfilter = yfilter;
    }
    if(value_path == "clientAliveInterval")
    {
        clientaliveinterval.yfilter = yfilter;
    }
    if(value_path == "idleConnectionTimeout")
    {
        idleconnectiontimeout.yfilter = yfilter;
    }
}

bool Confdconfig::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithms" || name == "clientAliveCountMax" || name == "clientAliveInterval" || name == "idleConnectionTimeout")
        return true;
    return false;
}

Confdconfig::Ssh::Algorithms::Algorithms()
    :
    encryption{YType::str, "encryption"},
    kex{YType::str, "kex"},
    mac{YType::str, "mac"},
    serverhostkey{YType::str, "serverHostKey"}
    	,
    dhgroup(nullptr) // presence node
{
    yang_name = "algorithms"; yang_parent_name = "ssh";
}

Confdconfig::Ssh::Algorithms::~Algorithms()
{
}

bool Confdconfig::Ssh::Algorithms::has_data() const
{
    return encryption.is_set
	|| kex.is_set
	|| mac.is_set
	|| serverhostkey.is_set
	|| (dhgroup !=  nullptr && dhgroup->has_data());
}

bool Confdconfig::Ssh::Algorithms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(kex.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(serverhostkey.yfilter)
	|| (dhgroup !=  nullptr && dhgroup->has_operation());
}

std::string Confdconfig::Ssh::Algorithms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithms";

    return path_buffer.str();

}

const EntityPath Confdconfig::Ssh::Algorithms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (kex.is_set || is_set(kex.yfilter)) leaf_name_data.push_back(kex.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (serverhostkey.is_set || is_set(serverhostkey.yfilter)) leaf_name_data.push_back(serverhostkey.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Ssh::Algorithms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhGroup")
    {
        if(dhgroup == nullptr)
        {
            dhgroup = std::make_shared<Confdconfig::Ssh::Algorithms::Dhgroup>();
        }
        return dhgroup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Ssh::Algorithms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhgroup != nullptr)
    {
        children["dhGroup"] = dhgroup;
    }

    return children;
}

void Confdconfig::Ssh::Algorithms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kex")
    {
        kex = value;
        kex.value_namespace = name_space;
        kex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serverHostKey")
    {
        serverhostkey = value;
        serverhostkey.value_namespace = name_space;
        serverhostkey.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Ssh::Algorithms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "kex")
    {
        kex.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "serverHostKey")
    {
        serverhostkey.yfilter = yfilter;
    }
}

bool Confdconfig::Ssh::Algorithms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhGroup" || name == "encryption" || name == "kex" || name == "mac" || name == "serverHostKey")
        return true;
    return false;
}

Confdconfig::Ssh::Algorithms::Dhgroup::Dhgroup()
    :
    maxsize{YType::uint32, "maxSize"},
    minsize{YType::uint32, "minSize"}
{
    yang_name = "dhGroup"; yang_parent_name = "algorithms";
}

Confdconfig::Ssh::Algorithms::Dhgroup::~Dhgroup()
{
}

bool Confdconfig::Ssh::Algorithms::Dhgroup::has_data() const
{
    return maxsize.is_set
	|| minsize.is_set;
}

bool Confdconfig::Ssh::Algorithms::Dhgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(minsize.yfilter);
}

std::string Confdconfig::Ssh::Algorithms::Dhgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhGroup";

    return path_buffer.str();

}

const EntityPath Confdconfig::Ssh::Algorithms::Dhgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/ssh/algorithms/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (minsize.is_set || is_set(minsize.yfilter)) leaf_name_data.push_back(minsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Ssh::Algorithms::Dhgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Ssh::Algorithms::Dhgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Ssh::Algorithms::Dhgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxSize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSize")
    {
        minsize = value;
        minsize.value_namespace = name_space;
        minsize.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Ssh::Algorithms::Dhgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxSize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "minSize")
    {
        minsize.yfilter = yfilter;
    }
}

bool Confdconfig::Ssh::Algorithms::Dhgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxSize" || name == "minSize")
        return true;
    return false;
}

Confdconfig::Cli::Cli()
    :
    adderrorprefixsuffix{YType::boolean, "addErrorPrefixSuffix"},
    addextratablespacing{YType::boolean, "addExtraTableSpacing"},
    allornothingload{YType::boolean, "allOrNothingLoad"},
    allowabbrevcmds{YType::boolean, "allowAbbrevCmds"},
    allowabbrevcmdsonload{YType::boolean, "allowAbbrevCmdsOnLoad"},
    allowabbrevenums{YType::boolean, "allowAbbrevEnums"},
    allowabbrevkeys{YType::boolean, "allowAbbrevKeys"},
    allowabbrevparamnames{YType::boolean, "allowAbbrevParamNames"},
    allowallaswildcard{YType::boolean, "allowAllAsWildcard"},
    allowcaseinsensitiveenums{YType::boolean, "allowCaseInsensitiveEnums"},
    allowimplicitwildcard{YType::boolean, "allowImplicitWildcard"},
    allowoldstylemodecmds{YType::boolean, "allowOldStyleModeCmds"},
    allowoverwriteoncopy{YType::boolean, "allowOverwriteOnCopy"},
    allowparenquotes{YType::boolean, "allowParenQuotes"},
    allowrangeexpression{YType::boolean, "allowRangeExpression"},
    allowrangeexpressionalltypes{YType::boolean, "allowRangeExpressionAllTypes"},
    allowtablecellwrap{YType::boolean, "allowTableCellWrap"},
    allowtableoverflow{YType::boolean, "allowTableOverflow"},
    allowwildcard{YType::boolean, "allowWildcard"},
    asyncpromptrefresh{YType::boolean, "asyncPromptRefresh"},
    auditlogmode{YType::enumeration, "auditLogMode"},
    autocommitload{YType::boolean, "autocommitLoad"},
    autocommitloadchunksize{YType::uint64, "autocommitLoadChunkSize"},
    banner{YType::str, "banner"},
    bannerfile{YType::str, "bannerFile"},
    cabortedprefix{YType::str, "cAbortedPrefix"},
    calignleafvalues{YType::boolean, "cAlignLeafValues"},
    caseinsensitive{YType::boolean, "caseInsensitive"},
    caseinsensitivekeys{YType::boolean, "caseInsensitiveKeys"},
    cerrorprefix{YType::str, "cErrorPrefix"},
    cextendedcmdsearch{YType::boolean, "cExtendedCmdSearch"},
    chelp{YType::boolean, "cHelp"},
    cmdaaaforautowizard{YType::boolean, "cmdAAAForAutowizard"},
    cmodeexitformat{YType::str, "cModeExitFormat"},
    columnstats{YType::boolean, "columnStats"},
    commandtimeout{YType::str, "commandTimeout"},
    commitactivityclock{YType::boolean, "commitActivityClock"},
    commitmessage{YType::boolean, "commitMessage"},
    commitmessageformat{YType::str, "commitMessageFormat"},
    commitretrytimeout{YType::str, "commitRetryTimeout"},
    compactshow{YType::boolean, "compactShow"},
    compactstatsshow{YType::boolean, "compactStatsShow"},
    compacttable{YType::boolean, "compactTable"},
    completionlistline{YType::boolean, "completionListLine"},
    completionmetainfo{YType::enumeration, "completionMetaInfo"},
    completionshowmax{YType::uint32, "completionShowMax"},
    completionshowoldval{YType::boolean, "completionShowOldVal"},
    complistcompact{YType::boolean, "compListCompact"},
    confirmuncommitedonexit{YType::enumeration, "confirmUncommitedOnExit"},
    continueonerrorcmdstack{YType::boolean, "continueOnErrorCmdStack"},
    cprivate{YType::boolean, "cPrivate"},
    cprompt1{YType::str, "cPrompt1"},
    cprompt2{YType::str, "cPrompt2"},
    crestrictiveno{YType::boolean, "cRestrictiveNo"},
    csilentno{YType::boolean, "cSilentNo"},
    cstylepromptinjstyle{YType::boolean, "cStylePromptInJStyle"},
    csuppresscmdsearch{YType::boolean, "cSuppressCmdSearch"},
    ctab{YType::boolean, "cTab"},
    ctabinfo{YType::boolean, "cTabInfo"},
    cwarningprefix{YType::str, "cWarningPrefix"},
    defaultdisplaylevel{YType::int64, "defaultDisplayLevel"},
    defaultprefix{YType::str, "defaultPrefix"},
    defaulttablebehavior{YType::enumeration, "defaultTableBehavior"},
    dequotehidden{YType::boolean, "dequoteHidden"},
    disableidletimeoutoncmd{YType::boolean, "disableIdleTimeoutOnCmd"},
    disablepipe{YType::boolean, "disablePipe"},
    disablepipeconfig{YType::boolean, "disablePipeConfig"},
    displayemptyconfigcontainers{YType::boolean, "displayEmptyConfigContainers"},
    displaynonpresenceattributes{YType::boolean, "displayNonPresenceAttributes"},
    docwrap{YType::boolean, "docWrap"},
    editwrapmode{YType::enumeration, "editWrapMode"},
    enabled{YType::boolean, "enabled"},
    enabledisplaygroups{YType::boolean, "enableDisplayGroups"},
    enabledisplaylevel{YType::enumeration, "enableDisplayLevel"},
    enableloadmerge{YType::boolean, "enableLoadMerge"},
    entersubmodeonleaf{YType::boolean, "enterSubmodeOnLeaf"},
    enumkeyinfo{YType::boolean, "enumKeyInfo"},
    escapebackslash{YType::boolean, "escapeBackslash"},
    execnavigationcmds{YType::boolean, "execNavigationCmds"},
    exitconfigmodeonctrlc{YType::boolean, "exitConfigModeOnCtrlC"},
    exitmodeonemptyrange{YType::boolean, "exitModeOnEmptyRange"},
    expandaliasescape{YType::str, "expandAliasEscape"},
    expandaliasoncompletion{YType::boolean, "expandAliasOnCompletion"},
    explicitsetcreate{YType::boolean, "explicitSetCreate"},
    externalactionerrormsg{YType::str, "externalActionErrorMsg"},
    forcedexitformat{YType::str, "forcedExitFormat"},
    hidedotfiles{YType::boolean, "hideDotFiles"},
    historymaxsize{YType::int64, "historyMaxSize"},
    historyremoveduplicates{YType::boolean, "historyRemoveDuplicates"},
    historysave{YType::boolean, "historySave"},
    idletimeout{YType::str, "idleTimeout"},
    ignoreleadingwhitespace{YType::boolean, "ignoreLeadingWhitespace"},
    ignoreshowwithdefaultondiff{YType::boolean, "ignoreShowWithDefaultOnDiff"},
    ignoresubsystemfailures{YType::boolean, "ignoreSubsystemFailures"},
    inconsistentdatabasesuffix{YType::str, "inconsistentDatabaseSuffix"},
    indenttemplates{YType::boolean, "indentTemplates"},
    infoonmatch{YType::boolean, "infoOnMatch"},
    infoonspace{YType::boolean, "infoOnSpace"},
    infoontab{YType::boolean, "infoOnTab"},
    inheritpaginate{YType::boolean, "inheritPaginate"},
    instancedescription{YType::boolean, "instanceDescription"},
    invaliddatastring{YType::str, "invalidDataString"},
    jabortedprefix{YType::str, "jAbortedPrefix"},
    jalignleafvalues{YType::boolean, "jAlignLeafValues"},
    jallowdeleteall{YType::boolean, "jAllowDeleteAll"},
    jerrorprefix{YType::str, "jErrorPrefix"},
    jextendedshow{YType::boolean, "jExtendedShow"},
    jhidehelp{YType::boolean, "jHideHelp"},
    jshowcr{YType::boolean, "jShowCR"},
    jshowtablerecursive{YType::boolean, "jShowTableRecursive"},
    jshowunset{YType::boolean, "jShowUnset"},
    jshowunsettext{YType::str, "jShowUnsetText"},
    jstatusformat{YType::str, "jStatusFormat"},
    jwarningprefix{YType::str, "jWarningPrefix"},
    laxbarquoting{YType::boolean, "laxBarQuoting"},
    leafprompting{YType::boolean, "leafPrompting"},
    loadactivityclock{YType::boolean, "loadActivityClock"},
    mapactions{YType::enumeration, "mapActions"},
    matchcompletionsformat{YType::str, "matchCompletionsFormat"},
    messageformat{YType::str, "messageFormat"},
    messagemaxsize{YType::int64, "messageMaxSize"},
    messagequeuesize{YType::int64, "messageQueueSize"},
    messagewordwrap{YType::boolean, "messageWordWrap"},
    mixedmode{YType::boolean, "mixedMode"},
    modeinfoinaaa{YType::enumeration, "modeInfoInAAA"},
    modeinfoinaudit{YType::enumeration, "modeInfoInAudit"},
    modenamestyle{YType::enumeration, "modeNameStyle"},
    morebufferlines{YType::str, "moreBufferLines"},
    multipatternoperation{YType::enumeration, "multiPatternOperation"},
    newinsert{YType::boolean, "newInsert"},
    newlogout{YType::boolean, "newLogout"},
    nofollowincompletecommand{YType::boolean, "noFollowIncompleteCommand"},
    nomatchcompletionsformat{YType::str, "noMatchCompletionsFormat"},
    olddetailsarg{YType::boolean, "oldDetailsArg"},
    orderedshowconfig{YType::boolean, "orderedShowConfig"},
    pipehelpmode{YType::enumeration, "pipeHelpMode"},
    possiblecompletionsformat{YType::str, "possibleCompletionsFormat"},
    prettifystatsname{YType::boolean, "prettifyStatsName"},
    prioritizesubmodecmds{YType::boolean, "prioritizeSubmodeCmds"},
    prompt1{YType::str, "prompt1"},
    prompt2{YType::str, "prompt2"},
    promptenumlimit{YType::uint64, "promptEnumLimit"},
    prompthostnamedelimiter{YType::str, "promptHostnameDelimiter"},
    promptsessionscli{YType::boolean, "promptSessionsCLI"},
    quicksshteardown{YType::boolean, "quickSshTeardown"},
    quotestyle{YType::enumeration, "quoteStyle"},
    reallocateopertrans{YType::boolean, "reallocateOperTrans"},
    reconfirmhidden{YType::boolean, "reconfirmHidden"},
    reportinvalidcompletioninput{YType::boolean, "reportInvalidCompletionInput"},
    restrictedfileaccess{YType::boolean, "restrictedFileAccess"},
    restrictedfileregexp{YType::str, "restrictedFileRegexp"},
    rollbackaaa{YType::boolean, "rollbackAAA"},
    rollbackmax{YType::uint32, "rollbackMax"},
    rollbacknumbering{YType::enumeration, "rollbackNumbering"},
    rollbacknumberinginitial{YType::int64, "rollbackNumberingInitial"},
    safescriptexecution{YType::boolean, "safeScriptExecution"},
    showallns{YType::boolean, "showAllNs"},
    showannotations{YType::boolean, "showAnnotations"},
    showcommitprogress{YType::boolean, "showCommitProgress"},
    showdefaults{YType::boolean, "showDefaults"},
    showdescription{YType::boolean, "showDescription"},
    showeditors{YType::boolean, "showEditors"},
    showemptycontainers{YType::boolean, "showEmptyContainers"},
    showkeyname{YType::boolean, "showKeyName"},
    showlogdirectory{YType::str, "showLogDirectory"},
    showmatchbeforepossible{YType::boolean, "showMatchBeforePossible"},
    shownederrorasinfo{YType::boolean, "showNedErrorAsInfo"},
    showpipe{YType::boolean, "showPipe"},
    showpipeconfig{YType::boolean, "showPipeConfig"},
    showservicemetadata{YType::boolean, "showServiceMetaData"},
    showsubsystemmessages{YType::boolean, "showSubsystemMessages"},
    showtablelabelsifmultiple{YType::boolean, "showTableLabelsIfMultiple"},
    showtags{YType::boolean, "showTags"},
    singleelempattern{YType::boolean, "singleElemPattern"},
    smartrenamefiltering{YType::boolean, "smartRenameFiltering"},
    sortlocalcmds{YType::boolean, "sortLocalCmds"},
    sortshowelems{YType::boolean, "sortShowElems"},
    sortsubmodecmds{YType::boolean, "sortSubmodeCmds"},
    startupscriptnoninteractive{YType::boolean, "startupScriptNonInteractive"},
    stoploadonerror{YType::boolean, "stopLoadOnError"},
    strictrefsonload{YType::boolean, "strictRefsOnLoad"},
    style{YType::enumeration, "style"},
    supportquotedeol{YType::boolean, "supportQuotedEOL"},
    suppressfastshow{YType::boolean, "suppressFastShow"},
    suppressnederrors{YType::boolean, "suppressNedErrors"},
    suppressrangekeyword{YType::boolean, "suppressRangeKeyword"},
    tabextend{YType::boolean, "tabExtend"},
    tablelabel{YType::boolean, "tableLabel"},
    tablelookahead{YType::uint64, "tableLookAhead"},
    tableoverflowtruncate{YType::boolean, "tableOverflowTruncate"},
    timezone{YType::enumeration, "timezone"},
    toplevelcmdsinsubmode{YType::boolean, "topLevelCmdsInSubMode"},
    transactionctrlcmds{YType::boolean, "transactionCtrlCmds"},
    transactions{YType::boolean, "transactions"},
    trimdefaultsave{YType::boolean, "trimDefaultSave"},
    trimdefaultshow{YType::boolean, "trimDefaultShow"},
    unifiedhistory{YType::boolean, "unifiedHistory"},
    usedoubledotranges{YType::boolean, "useDoubleDotRanges"},
    useexposensprefix{YType::boolean, "useExposeNsPrefix"},
    useshortenabled{YType::boolean, "useShortEnabled"},
    utcoffset{YType::int64, "utcOffset"},
    whohistorydatetimeformat{YType::enumeration, "whoHistoryDateTimeFormat"},
    whoshowmode{YType::boolean, "whoShowMode"},
    withdefaults{YType::boolean, "withDefaults"},
    wrapinfo{YType::boolean, "wrapInfo"},
    wrapprompt{YType::boolean, "wrapPrompt"}
    	,
    autowizard(nullptr) // presence node
	,spacecompletion(nullptr) // presence node
	,ssh(nullptr) // presence node
	,suppresscommitmessages(nullptr) // presence node
	,timestamp(nullptr) // presence node
{
    yang_name = "cli"; yang_parent_name = "confdConfig";
}

Confdconfig::Cli::~Cli()
{
}

bool Confdconfig::Cli::has_data() const
{
    for (std::size_t index=0; index<templatefilter.size(); index++)
    {
        if(templatefilter[index]->has_data())
            return true;
    }
    return adderrorprefixsuffix.is_set
	|| addextratablespacing.is_set
	|| allornothingload.is_set
	|| allowabbrevcmds.is_set
	|| allowabbrevcmdsonload.is_set
	|| allowabbrevenums.is_set
	|| allowabbrevkeys.is_set
	|| allowabbrevparamnames.is_set
	|| allowallaswildcard.is_set
	|| allowcaseinsensitiveenums.is_set
	|| allowimplicitwildcard.is_set
	|| allowoldstylemodecmds.is_set
	|| allowoverwriteoncopy.is_set
	|| allowparenquotes.is_set
	|| allowrangeexpression.is_set
	|| allowrangeexpressionalltypes.is_set
	|| allowtablecellwrap.is_set
	|| allowtableoverflow.is_set
	|| allowwildcard.is_set
	|| asyncpromptrefresh.is_set
	|| auditlogmode.is_set
	|| autocommitload.is_set
	|| autocommitloadchunksize.is_set
	|| banner.is_set
	|| bannerfile.is_set
	|| cabortedprefix.is_set
	|| calignleafvalues.is_set
	|| caseinsensitive.is_set
	|| caseinsensitivekeys.is_set
	|| cerrorprefix.is_set
	|| cextendedcmdsearch.is_set
	|| chelp.is_set
	|| cmdaaaforautowizard.is_set
	|| cmodeexitformat.is_set
	|| columnstats.is_set
	|| commandtimeout.is_set
	|| commitactivityclock.is_set
	|| commitmessage.is_set
	|| commitmessageformat.is_set
	|| commitretrytimeout.is_set
	|| compactshow.is_set
	|| compactstatsshow.is_set
	|| compacttable.is_set
	|| completionlistline.is_set
	|| completionmetainfo.is_set
	|| completionshowmax.is_set
	|| completionshowoldval.is_set
	|| complistcompact.is_set
	|| confirmuncommitedonexit.is_set
	|| continueonerrorcmdstack.is_set
	|| cprivate.is_set
	|| cprompt1.is_set
	|| cprompt2.is_set
	|| crestrictiveno.is_set
	|| csilentno.is_set
	|| cstylepromptinjstyle.is_set
	|| csuppresscmdsearch.is_set
	|| ctab.is_set
	|| ctabinfo.is_set
	|| cwarningprefix.is_set
	|| defaultdisplaylevel.is_set
	|| defaultprefix.is_set
	|| defaulttablebehavior.is_set
	|| dequotehidden.is_set
	|| disableidletimeoutoncmd.is_set
	|| disablepipe.is_set
	|| disablepipeconfig.is_set
	|| displayemptyconfigcontainers.is_set
	|| displaynonpresenceattributes.is_set
	|| docwrap.is_set
	|| editwrapmode.is_set
	|| enabled.is_set
	|| enabledisplaygroups.is_set
	|| enabledisplaylevel.is_set
	|| enableloadmerge.is_set
	|| entersubmodeonleaf.is_set
	|| enumkeyinfo.is_set
	|| escapebackslash.is_set
	|| execnavigationcmds.is_set
	|| exitconfigmodeonctrlc.is_set
	|| exitmodeonemptyrange.is_set
	|| expandaliasescape.is_set
	|| expandaliasoncompletion.is_set
	|| explicitsetcreate.is_set
	|| externalactionerrormsg.is_set
	|| forcedexitformat.is_set
	|| hidedotfiles.is_set
	|| historymaxsize.is_set
	|| historyremoveduplicates.is_set
	|| historysave.is_set
	|| idletimeout.is_set
	|| ignoreleadingwhitespace.is_set
	|| ignoreshowwithdefaultondiff.is_set
	|| ignoresubsystemfailures.is_set
	|| inconsistentdatabasesuffix.is_set
	|| indenttemplates.is_set
	|| infoonmatch.is_set
	|| infoonspace.is_set
	|| infoontab.is_set
	|| inheritpaginate.is_set
	|| instancedescription.is_set
	|| invaliddatastring.is_set
	|| jabortedprefix.is_set
	|| jalignleafvalues.is_set
	|| jallowdeleteall.is_set
	|| jerrorprefix.is_set
	|| jextendedshow.is_set
	|| jhidehelp.is_set
	|| jshowcr.is_set
	|| jshowtablerecursive.is_set
	|| jshowunset.is_set
	|| jshowunsettext.is_set
	|| jstatusformat.is_set
	|| jwarningprefix.is_set
	|| laxbarquoting.is_set
	|| leafprompting.is_set
	|| loadactivityclock.is_set
	|| mapactions.is_set
	|| matchcompletionsformat.is_set
	|| messageformat.is_set
	|| messagemaxsize.is_set
	|| messagequeuesize.is_set
	|| messagewordwrap.is_set
	|| mixedmode.is_set
	|| modeinfoinaaa.is_set
	|| modeinfoinaudit.is_set
	|| modenamestyle.is_set
	|| morebufferlines.is_set
	|| multipatternoperation.is_set
	|| newinsert.is_set
	|| newlogout.is_set
	|| nofollowincompletecommand.is_set
	|| nomatchcompletionsformat.is_set
	|| olddetailsarg.is_set
	|| orderedshowconfig.is_set
	|| pipehelpmode.is_set
	|| possiblecompletionsformat.is_set
	|| prettifystatsname.is_set
	|| prioritizesubmodecmds.is_set
	|| prompt1.is_set
	|| prompt2.is_set
	|| promptenumlimit.is_set
	|| prompthostnamedelimiter.is_set
	|| promptsessionscli.is_set
	|| quicksshteardown.is_set
	|| quotestyle.is_set
	|| reallocateopertrans.is_set
	|| reconfirmhidden.is_set
	|| reportinvalidcompletioninput.is_set
	|| restrictedfileaccess.is_set
	|| restrictedfileregexp.is_set
	|| rollbackaaa.is_set
	|| rollbackmax.is_set
	|| rollbacknumbering.is_set
	|| rollbacknumberinginitial.is_set
	|| safescriptexecution.is_set
	|| showallns.is_set
	|| showannotations.is_set
	|| showcommitprogress.is_set
	|| showdefaults.is_set
	|| showdescription.is_set
	|| showeditors.is_set
	|| showemptycontainers.is_set
	|| showkeyname.is_set
	|| showlogdirectory.is_set
	|| showmatchbeforepossible.is_set
	|| shownederrorasinfo.is_set
	|| showpipe.is_set
	|| showpipeconfig.is_set
	|| showservicemetadata.is_set
	|| showsubsystemmessages.is_set
	|| showtablelabelsifmultiple.is_set
	|| showtags.is_set
	|| singleelempattern.is_set
	|| smartrenamefiltering.is_set
	|| sortlocalcmds.is_set
	|| sortshowelems.is_set
	|| sortsubmodecmds.is_set
	|| startupscriptnoninteractive.is_set
	|| stoploadonerror.is_set
	|| strictrefsonload.is_set
	|| style.is_set
	|| supportquotedeol.is_set
	|| suppressfastshow.is_set
	|| suppressnederrors.is_set
	|| suppressrangekeyword.is_set
	|| tabextend.is_set
	|| tablelabel.is_set
	|| tablelookahead.is_set
	|| tableoverflowtruncate.is_set
	|| timezone.is_set
	|| toplevelcmdsinsubmode.is_set
	|| transactionctrlcmds.is_set
	|| transactions.is_set
	|| trimdefaultsave.is_set
	|| trimdefaultshow.is_set
	|| unifiedhistory.is_set
	|| usedoubledotranges.is_set
	|| useexposensprefix.is_set
	|| useshortenabled.is_set
	|| utcoffset.is_set
	|| whohistorydatetimeformat.is_set
	|| whoshowmode.is_set
	|| withdefaults.is_set
	|| wrapinfo.is_set
	|| wrapprompt.is_set
	|| (autowizard !=  nullptr && autowizard->has_data())
	|| (spacecompletion !=  nullptr && spacecompletion->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (suppresscommitmessages !=  nullptr && suppresscommitmessages->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data());
}

bool Confdconfig::Cli::has_operation() const
{
    for (std::size_t index=0; index<templatefilter.size(); index++)
    {
        if(templatefilter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adderrorprefixsuffix.yfilter)
	|| ydk::is_set(addextratablespacing.yfilter)
	|| ydk::is_set(allornothingload.yfilter)
	|| ydk::is_set(allowabbrevcmds.yfilter)
	|| ydk::is_set(allowabbrevcmdsonload.yfilter)
	|| ydk::is_set(allowabbrevenums.yfilter)
	|| ydk::is_set(allowabbrevkeys.yfilter)
	|| ydk::is_set(allowabbrevparamnames.yfilter)
	|| ydk::is_set(allowallaswildcard.yfilter)
	|| ydk::is_set(allowcaseinsensitiveenums.yfilter)
	|| ydk::is_set(allowimplicitwildcard.yfilter)
	|| ydk::is_set(allowoldstylemodecmds.yfilter)
	|| ydk::is_set(allowoverwriteoncopy.yfilter)
	|| ydk::is_set(allowparenquotes.yfilter)
	|| ydk::is_set(allowrangeexpression.yfilter)
	|| ydk::is_set(allowrangeexpressionalltypes.yfilter)
	|| ydk::is_set(allowtablecellwrap.yfilter)
	|| ydk::is_set(allowtableoverflow.yfilter)
	|| ydk::is_set(allowwildcard.yfilter)
	|| ydk::is_set(asyncpromptrefresh.yfilter)
	|| ydk::is_set(auditlogmode.yfilter)
	|| ydk::is_set(autocommitload.yfilter)
	|| ydk::is_set(autocommitloadchunksize.yfilter)
	|| ydk::is_set(banner.yfilter)
	|| ydk::is_set(bannerfile.yfilter)
	|| ydk::is_set(cabortedprefix.yfilter)
	|| ydk::is_set(calignleafvalues.yfilter)
	|| ydk::is_set(caseinsensitive.yfilter)
	|| ydk::is_set(caseinsensitivekeys.yfilter)
	|| ydk::is_set(cerrorprefix.yfilter)
	|| ydk::is_set(cextendedcmdsearch.yfilter)
	|| ydk::is_set(chelp.yfilter)
	|| ydk::is_set(cmdaaaforautowizard.yfilter)
	|| ydk::is_set(cmodeexitformat.yfilter)
	|| ydk::is_set(columnstats.yfilter)
	|| ydk::is_set(commandtimeout.yfilter)
	|| ydk::is_set(commitactivityclock.yfilter)
	|| ydk::is_set(commitmessage.yfilter)
	|| ydk::is_set(commitmessageformat.yfilter)
	|| ydk::is_set(commitretrytimeout.yfilter)
	|| ydk::is_set(compactshow.yfilter)
	|| ydk::is_set(compactstatsshow.yfilter)
	|| ydk::is_set(compacttable.yfilter)
	|| ydk::is_set(completionlistline.yfilter)
	|| ydk::is_set(completionmetainfo.yfilter)
	|| ydk::is_set(completionshowmax.yfilter)
	|| ydk::is_set(completionshowoldval.yfilter)
	|| ydk::is_set(complistcompact.yfilter)
	|| ydk::is_set(confirmuncommitedonexit.yfilter)
	|| ydk::is_set(continueonerrorcmdstack.yfilter)
	|| ydk::is_set(cprivate.yfilter)
	|| ydk::is_set(cprompt1.yfilter)
	|| ydk::is_set(cprompt2.yfilter)
	|| ydk::is_set(crestrictiveno.yfilter)
	|| ydk::is_set(csilentno.yfilter)
	|| ydk::is_set(cstylepromptinjstyle.yfilter)
	|| ydk::is_set(csuppresscmdsearch.yfilter)
	|| ydk::is_set(ctab.yfilter)
	|| ydk::is_set(ctabinfo.yfilter)
	|| ydk::is_set(cwarningprefix.yfilter)
	|| ydk::is_set(defaultdisplaylevel.yfilter)
	|| ydk::is_set(defaultprefix.yfilter)
	|| ydk::is_set(defaulttablebehavior.yfilter)
	|| ydk::is_set(dequotehidden.yfilter)
	|| ydk::is_set(disableidletimeoutoncmd.yfilter)
	|| ydk::is_set(disablepipe.yfilter)
	|| ydk::is_set(disablepipeconfig.yfilter)
	|| ydk::is_set(displayemptyconfigcontainers.yfilter)
	|| ydk::is_set(displaynonpresenceattributes.yfilter)
	|| ydk::is_set(docwrap.yfilter)
	|| ydk::is_set(editwrapmode.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(enabledisplaygroups.yfilter)
	|| ydk::is_set(enabledisplaylevel.yfilter)
	|| ydk::is_set(enableloadmerge.yfilter)
	|| ydk::is_set(entersubmodeonleaf.yfilter)
	|| ydk::is_set(enumkeyinfo.yfilter)
	|| ydk::is_set(escapebackslash.yfilter)
	|| ydk::is_set(execnavigationcmds.yfilter)
	|| ydk::is_set(exitconfigmodeonctrlc.yfilter)
	|| ydk::is_set(exitmodeonemptyrange.yfilter)
	|| ydk::is_set(expandaliasescape.yfilter)
	|| ydk::is_set(expandaliasoncompletion.yfilter)
	|| ydk::is_set(explicitsetcreate.yfilter)
	|| ydk::is_set(externalactionerrormsg.yfilter)
	|| ydk::is_set(forcedexitformat.yfilter)
	|| ydk::is_set(hidedotfiles.yfilter)
	|| ydk::is_set(historymaxsize.yfilter)
	|| ydk::is_set(historyremoveduplicates.yfilter)
	|| ydk::is_set(historysave.yfilter)
	|| ydk::is_set(idletimeout.yfilter)
	|| ydk::is_set(ignoreleadingwhitespace.yfilter)
	|| ydk::is_set(ignoreshowwithdefaultondiff.yfilter)
	|| ydk::is_set(ignoresubsystemfailures.yfilter)
	|| ydk::is_set(inconsistentdatabasesuffix.yfilter)
	|| ydk::is_set(indenttemplates.yfilter)
	|| ydk::is_set(infoonmatch.yfilter)
	|| ydk::is_set(infoonspace.yfilter)
	|| ydk::is_set(infoontab.yfilter)
	|| ydk::is_set(inheritpaginate.yfilter)
	|| ydk::is_set(instancedescription.yfilter)
	|| ydk::is_set(invaliddatastring.yfilter)
	|| ydk::is_set(jabortedprefix.yfilter)
	|| ydk::is_set(jalignleafvalues.yfilter)
	|| ydk::is_set(jallowdeleteall.yfilter)
	|| ydk::is_set(jerrorprefix.yfilter)
	|| ydk::is_set(jextendedshow.yfilter)
	|| ydk::is_set(jhidehelp.yfilter)
	|| ydk::is_set(jshowcr.yfilter)
	|| ydk::is_set(jshowtablerecursive.yfilter)
	|| ydk::is_set(jshowunset.yfilter)
	|| ydk::is_set(jshowunsettext.yfilter)
	|| ydk::is_set(jstatusformat.yfilter)
	|| ydk::is_set(jwarningprefix.yfilter)
	|| ydk::is_set(laxbarquoting.yfilter)
	|| ydk::is_set(leafprompting.yfilter)
	|| ydk::is_set(loadactivityclock.yfilter)
	|| ydk::is_set(mapactions.yfilter)
	|| ydk::is_set(matchcompletionsformat.yfilter)
	|| ydk::is_set(messageformat.yfilter)
	|| ydk::is_set(messagemaxsize.yfilter)
	|| ydk::is_set(messagequeuesize.yfilter)
	|| ydk::is_set(messagewordwrap.yfilter)
	|| ydk::is_set(mixedmode.yfilter)
	|| ydk::is_set(modeinfoinaaa.yfilter)
	|| ydk::is_set(modeinfoinaudit.yfilter)
	|| ydk::is_set(modenamestyle.yfilter)
	|| ydk::is_set(morebufferlines.yfilter)
	|| ydk::is_set(multipatternoperation.yfilter)
	|| ydk::is_set(newinsert.yfilter)
	|| ydk::is_set(newlogout.yfilter)
	|| ydk::is_set(nofollowincompletecommand.yfilter)
	|| ydk::is_set(nomatchcompletionsformat.yfilter)
	|| ydk::is_set(olddetailsarg.yfilter)
	|| ydk::is_set(orderedshowconfig.yfilter)
	|| ydk::is_set(pipehelpmode.yfilter)
	|| ydk::is_set(possiblecompletionsformat.yfilter)
	|| ydk::is_set(prettifystatsname.yfilter)
	|| ydk::is_set(prioritizesubmodecmds.yfilter)
	|| ydk::is_set(prompt1.yfilter)
	|| ydk::is_set(prompt2.yfilter)
	|| ydk::is_set(promptenumlimit.yfilter)
	|| ydk::is_set(prompthostnamedelimiter.yfilter)
	|| ydk::is_set(promptsessionscli.yfilter)
	|| ydk::is_set(quicksshteardown.yfilter)
	|| ydk::is_set(quotestyle.yfilter)
	|| ydk::is_set(reallocateopertrans.yfilter)
	|| ydk::is_set(reconfirmhidden.yfilter)
	|| ydk::is_set(reportinvalidcompletioninput.yfilter)
	|| ydk::is_set(restrictedfileaccess.yfilter)
	|| ydk::is_set(restrictedfileregexp.yfilter)
	|| ydk::is_set(rollbackaaa.yfilter)
	|| ydk::is_set(rollbackmax.yfilter)
	|| ydk::is_set(rollbacknumbering.yfilter)
	|| ydk::is_set(rollbacknumberinginitial.yfilter)
	|| ydk::is_set(safescriptexecution.yfilter)
	|| ydk::is_set(showallns.yfilter)
	|| ydk::is_set(showannotations.yfilter)
	|| ydk::is_set(showcommitprogress.yfilter)
	|| ydk::is_set(showdefaults.yfilter)
	|| ydk::is_set(showdescription.yfilter)
	|| ydk::is_set(showeditors.yfilter)
	|| ydk::is_set(showemptycontainers.yfilter)
	|| ydk::is_set(showkeyname.yfilter)
	|| ydk::is_set(showlogdirectory.yfilter)
	|| ydk::is_set(showmatchbeforepossible.yfilter)
	|| ydk::is_set(shownederrorasinfo.yfilter)
	|| ydk::is_set(showpipe.yfilter)
	|| ydk::is_set(showpipeconfig.yfilter)
	|| ydk::is_set(showservicemetadata.yfilter)
	|| ydk::is_set(showsubsystemmessages.yfilter)
	|| ydk::is_set(showtablelabelsifmultiple.yfilter)
	|| ydk::is_set(showtags.yfilter)
	|| ydk::is_set(singleelempattern.yfilter)
	|| ydk::is_set(smartrenamefiltering.yfilter)
	|| ydk::is_set(sortlocalcmds.yfilter)
	|| ydk::is_set(sortshowelems.yfilter)
	|| ydk::is_set(sortsubmodecmds.yfilter)
	|| ydk::is_set(startupscriptnoninteractive.yfilter)
	|| ydk::is_set(stoploadonerror.yfilter)
	|| ydk::is_set(strictrefsonload.yfilter)
	|| ydk::is_set(style.yfilter)
	|| ydk::is_set(supportquotedeol.yfilter)
	|| ydk::is_set(suppressfastshow.yfilter)
	|| ydk::is_set(suppressnederrors.yfilter)
	|| ydk::is_set(suppressrangekeyword.yfilter)
	|| ydk::is_set(tabextend.yfilter)
	|| ydk::is_set(tablelabel.yfilter)
	|| ydk::is_set(tablelookahead.yfilter)
	|| ydk::is_set(tableoverflowtruncate.yfilter)
	|| ydk::is_set(timezone.yfilter)
	|| ydk::is_set(toplevelcmdsinsubmode.yfilter)
	|| ydk::is_set(transactionctrlcmds.yfilter)
	|| ydk::is_set(transactions.yfilter)
	|| ydk::is_set(trimdefaultsave.yfilter)
	|| ydk::is_set(trimdefaultshow.yfilter)
	|| ydk::is_set(unifiedhistory.yfilter)
	|| ydk::is_set(usedoubledotranges.yfilter)
	|| ydk::is_set(useexposensprefix.yfilter)
	|| ydk::is_set(useshortenabled.yfilter)
	|| ydk::is_set(utcoffset.yfilter)
	|| ydk::is_set(whohistorydatetimeformat.yfilter)
	|| ydk::is_set(whoshowmode.yfilter)
	|| ydk::is_set(withdefaults.yfilter)
	|| ydk::is_set(wrapinfo.yfilter)
	|| ydk::is_set(wrapprompt.yfilter)
	|| (autowizard !=  nullptr && autowizard->has_operation())
	|| (spacecompletion !=  nullptr && spacecompletion->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (suppresscommitmessages !=  nullptr && suppresscommitmessages->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Confdconfig::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adderrorprefixsuffix.is_set || is_set(adderrorprefixsuffix.yfilter)) leaf_name_data.push_back(adderrorprefixsuffix.get_name_leafdata());
    if (addextratablespacing.is_set || is_set(addextratablespacing.yfilter)) leaf_name_data.push_back(addextratablespacing.get_name_leafdata());
    if (allornothingload.is_set || is_set(allornothingload.yfilter)) leaf_name_data.push_back(allornothingload.get_name_leafdata());
    if (allowabbrevcmds.is_set || is_set(allowabbrevcmds.yfilter)) leaf_name_data.push_back(allowabbrevcmds.get_name_leafdata());
    if (allowabbrevcmdsonload.is_set || is_set(allowabbrevcmdsonload.yfilter)) leaf_name_data.push_back(allowabbrevcmdsonload.get_name_leafdata());
    if (allowabbrevenums.is_set || is_set(allowabbrevenums.yfilter)) leaf_name_data.push_back(allowabbrevenums.get_name_leafdata());
    if (allowabbrevkeys.is_set || is_set(allowabbrevkeys.yfilter)) leaf_name_data.push_back(allowabbrevkeys.get_name_leafdata());
    if (allowabbrevparamnames.is_set || is_set(allowabbrevparamnames.yfilter)) leaf_name_data.push_back(allowabbrevparamnames.get_name_leafdata());
    if (allowallaswildcard.is_set || is_set(allowallaswildcard.yfilter)) leaf_name_data.push_back(allowallaswildcard.get_name_leafdata());
    if (allowcaseinsensitiveenums.is_set || is_set(allowcaseinsensitiveenums.yfilter)) leaf_name_data.push_back(allowcaseinsensitiveenums.get_name_leafdata());
    if (allowimplicitwildcard.is_set || is_set(allowimplicitwildcard.yfilter)) leaf_name_data.push_back(allowimplicitwildcard.get_name_leafdata());
    if (allowoldstylemodecmds.is_set || is_set(allowoldstylemodecmds.yfilter)) leaf_name_data.push_back(allowoldstylemodecmds.get_name_leafdata());
    if (allowoverwriteoncopy.is_set || is_set(allowoverwriteoncopy.yfilter)) leaf_name_data.push_back(allowoverwriteoncopy.get_name_leafdata());
    if (allowparenquotes.is_set || is_set(allowparenquotes.yfilter)) leaf_name_data.push_back(allowparenquotes.get_name_leafdata());
    if (allowrangeexpression.is_set || is_set(allowrangeexpression.yfilter)) leaf_name_data.push_back(allowrangeexpression.get_name_leafdata());
    if (allowrangeexpressionalltypes.is_set || is_set(allowrangeexpressionalltypes.yfilter)) leaf_name_data.push_back(allowrangeexpressionalltypes.get_name_leafdata());
    if (allowtablecellwrap.is_set || is_set(allowtablecellwrap.yfilter)) leaf_name_data.push_back(allowtablecellwrap.get_name_leafdata());
    if (allowtableoverflow.is_set || is_set(allowtableoverflow.yfilter)) leaf_name_data.push_back(allowtableoverflow.get_name_leafdata());
    if (allowwildcard.is_set || is_set(allowwildcard.yfilter)) leaf_name_data.push_back(allowwildcard.get_name_leafdata());
    if (asyncpromptrefresh.is_set || is_set(asyncpromptrefresh.yfilter)) leaf_name_data.push_back(asyncpromptrefresh.get_name_leafdata());
    if (auditlogmode.is_set || is_set(auditlogmode.yfilter)) leaf_name_data.push_back(auditlogmode.get_name_leafdata());
    if (autocommitload.is_set || is_set(autocommitload.yfilter)) leaf_name_data.push_back(autocommitload.get_name_leafdata());
    if (autocommitloadchunksize.is_set || is_set(autocommitloadchunksize.yfilter)) leaf_name_data.push_back(autocommitloadchunksize.get_name_leafdata());
    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());
    if (bannerfile.is_set || is_set(bannerfile.yfilter)) leaf_name_data.push_back(bannerfile.get_name_leafdata());
    if (cabortedprefix.is_set || is_set(cabortedprefix.yfilter)) leaf_name_data.push_back(cabortedprefix.get_name_leafdata());
    if (calignleafvalues.is_set || is_set(calignleafvalues.yfilter)) leaf_name_data.push_back(calignleafvalues.get_name_leafdata());
    if (caseinsensitive.is_set || is_set(caseinsensitive.yfilter)) leaf_name_data.push_back(caseinsensitive.get_name_leafdata());
    if (caseinsensitivekeys.is_set || is_set(caseinsensitivekeys.yfilter)) leaf_name_data.push_back(caseinsensitivekeys.get_name_leafdata());
    if (cerrorprefix.is_set || is_set(cerrorprefix.yfilter)) leaf_name_data.push_back(cerrorprefix.get_name_leafdata());
    if (cextendedcmdsearch.is_set || is_set(cextendedcmdsearch.yfilter)) leaf_name_data.push_back(cextendedcmdsearch.get_name_leafdata());
    if (chelp.is_set || is_set(chelp.yfilter)) leaf_name_data.push_back(chelp.get_name_leafdata());
    if (cmdaaaforautowizard.is_set || is_set(cmdaaaforautowizard.yfilter)) leaf_name_data.push_back(cmdaaaforautowizard.get_name_leafdata());
    if (cmodeexitformat.is_set || is_set(cmodeexitformat.yfilter)) leaf_name_data.push_back(cmodeexitformat.get_name_leafdata());
    if (columnstats.is_set || is_set(columnstats.yfilter)) leaf_name_data.push_back(columnstats.get_name_leafdata());
    if (commandtimeout.is_set || is_set(commandtimeout.yfilter)) leaf_name_data.push_back(commandtimeout.get_name_leafdata());
    if (commitactivityclock.is_set || is_set(commitactivityclock.yfilter)) leaf_name_data.push_back(commitactivityclock.get_name_leafdata());
    if (commitmessage.is_set || is_set(commitmessage.yfilter)) leaf_name_data.push_back(commitmessage.get_name_leafdata());
    if (commitmessageformat.is_set || is_set(commitmessageformat.yfilter)) leaf_name_data.push_back(commitmessageformat.get_name_leafdata());
    if (commitretrytimeout.is_set || is_set(commitretrytimeout.yfilter)) leaf_name_data.push_back(commitretrytimeout.get_name_leafdata());
    if (compactshow.is_set || is_set(compactshow.yfilter)) leaf_name_data.push_back(compactshow.get_name_leafdata());
    if (compactstatsshow.is_set || is_set(compactstatsshow.yfilter)) leaf_name_data.push_back(compactstatsshow.get_name_leafdata());
    if (compacttable.is_set || is_set(compacttable.yfilter)) leaf_name_data.push_back(compacttable.get_name_leafdata());
    if (completionlistline.is_set || is_set(completionlistline.yfilter)) leaf_name_data.push_back(completionlistline.get_name_leafdata());
    if (completionmetainfo.is_set || is_set(completionmetainfo.yfilter)) leaf_name_data.push_back(completionmetainfo.get_name_leafdata());
    if (completionshowmax.is_set || is_set(completionshowmax.yfilter)) leaf_name_data.push_back(completionshowmax.get_name_leafdata());
    if (completionshowoldval.is_set || is_set(completionshowoldval.yfilter)) leaf_name_data.push_back(completionshowoldval.get_name_leafdata());
    if (complistcompact.is_set || is_set(complistcompact.yfilter)) leaf_name_data.push_back(complistcompact.get_name_leafdata());
    if (confirmuncommitedonexit.is_set || is_set(confirmuncommitedonexit.yfilter)) leaf_name_data.push_back(confirmuncommitedonexit.get_name_leafdata());
    if (continueonerrorcmdstack.is_set || is_set(continueonerrorcmdstack.yfilter)) leaf_name_data.push_back(continueonerrorcmdstack.get_name_leafdata());
    if (cprivate.is_set || is_set(cprivate.yfilter)) leaf_name_data.push_back(cprivate.get_name_leafdata());
    if (cprompt1.is_set || is_set(cprompt1.yfilter)) leaf_name_data.push_back(cprompt1.get_name_leafdata());
    if (cprompt2.is_set || is_set(cprompt2.yfilter)) leaf_name_data.push_back(cprompt2.get_name_leafdata());
    if (crestrictiveno.is_set || is_set(crestrictiveno.yfilter)) leaf_name_data.push_back(crestrictiveno.get_name_leafdata());
    if (csilentno.is_set || is_set(csilentno.yfilter)) leaf_name_data.push_back(csilentno.get_name_leafdata());
    if (cstylepromptinjstyle.is_set || is_set(cstylepromptinjstyle.yfilter)) leaf_name_data.push_back(cstylepromptinjstyle.get_name_leafdata());
    if (csuppresscmdsearch.is_set || is_set(csuppresscmdsearch.yfilter)) leaf_name_data.push_back(csuppresscmdsearch.get_name_leafdata());
    if (ctab.is_set || is_set(ctab.yfilter)) leaf_name_data.push_back(ctab.get_name_leafdata());
    if (ctabinfo.is_set || is_set(ctabinfo.yfilter)) leaf_name_data.push_back(ctabinfo.get_name_leafdata());
    if (cwarningprefix.is_set || is_set(cwarningprefix.yfilter)) leaf_name_data.push_back(cwarningprefix.get_name_leafdata());
    if (defaultdisplaylevel.is_set || is_set(defaultdisplaylevel.yfilter)) leaf_name_data.push_back(defaultdisplaylevel.get_name_leafdata());
    if (defaultprefix.is_set || is_set(defaultprefix.yfilter)) leaf_name_data.push_back(defaultprefix.get_name_leafdata());
    if (defaulttablebehavior.is_set || is_set(defaulttablebehavior.yfilter)) leaf_name_data.push_back(defaulttablebehavior.get_name_leafdata());
    if (dequotehidden.is_set || is_set(dequotehidden.yfilter)) leaf_name_data.push_back(dequotehidden.get_name_leafdata());
    if (disableidletimeoutoncmd.is_set || is_set(disableidletimeoutoncmd.yfilter)) leaf_name_data.push_back(disableidletimeoutoncmd.get_name_leafdata());
    if (disablepipe.is_set || is_set(disablepipe.yfilter)) leaf_name_data.push_back(disablepipe.get_name_leafdata());
    if (disablepipeconfig.is_set || is_set(disablepipeconfig.yfilter)) leaf_name_data.push_back(disablepipeconfig.get_name_leafdata());
    if (displayemptyconfigcontainers.is_set || is_set(displayemptyconfigcontainers.yfilter)) leaf_name_data.push_back(displayemptyconfigcontainers.get_name_leafdata());
    if (displaynonpresenceattributes.is_set || is_set(displaynonpresenceattributes.yfilter)) leaf_name_data.push_back(displaynonpresenceattributes.get_name_leafdata());
    if (docwrap.is_set || is_set(docwrap.yfilter)) leaf_name_data.push_back(docwrap.get_name_leafdata());
    if (editwrapmode.is_set || is_set(editwrapmode.yfilter)) leaf_name_data.push_back(editwrapmode.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (enabledisplaygroups.is_set || is_set(enabledisplaygroups.yfilter)) leaf_name_data.push_back(enabledisplaygroups.get_name_leafdata());
    if (enabledisplaylevel.is_set || is_set(enabledisplaylevel.yfilter)) leaf_name_data.push_back(enabledisplaylevel.get_name_leafdata());
    if (enableloadmerge.is_set || is_set(enableloadmerge.yfilter)) leaf_name_data.push_back(enableloadmerge.get_name_leafdata());
    if (entersubmodeonleaf.is_set || is_set(entersubmodeonleaf.yfilter)) leaf_name_data.push_back(entersubmodeonleaf.get_name_leafdata());
    if (enumkeyinfo.is_set || is_set(enumkeyinfo.yfilter)) leaf_name_data.push_back(enumkeyinfo.get_name_leafdata());
    if (escapebackslash.is_set || is_set(escapebackslash.yfilter)) leaf_name_data.push_back(escapebackslash.get_name_leafdata());
    if (execnavigationcmds.is_set || is_set(execnavigationcmds.yfilter)) leaf_name_data.push_back(execnavigationcmds.get_name_leafdata());
    if (exitconfigmodeonctrlc.is_set || is_set(exitconfigmodeonctrlc.yfilter)) leaf_name_data.push_back(exitconfigmodeonctrlc.get_name_leafdata());
    if (exitmodeonemptyrange.is_set || is_set(exitmodeonemptyrange.yfilter)) leaf_name_data.push_back(exitmodeonemptyrange.get_name_leafdata());
    if (expandaliasescape.is_set || is_set(expandaliasescape.yfilter)) leaf_name_data.push_back(expandaliasescape.get_name_leafdata());
    if (expandaliasoncompletion.is_set || is_set(expandaliasoncompletion.yfilter)) leaf_name_data.push_back(expandaliasoncompletion.get_name_leafdata());
    if (explicitsetcreate.is_set || is_set(explicitsetcreate.yfilter)) leaf_name_data.push_back(explicitsetcreate.get_name_leafdata());
    if (externalactionerrormsg.is_set || is_set(externalactionerrormsg.yfilter)) leaf_name_data.push_back(externalactionerrormsg.get_name_leafdata());
    if (forcedexitformat.is_set || is_set(forcedexitformat.yfilter)) leaf_name_data.push_back(forcedexitformat.get_name_leafdata());
    if (hidedotfiles.is_set || is_set(hidedotfiles.yfilter)) leaf_name_data.push_back(hidedotfiles.get_name_leafdata());
    if (historymaxsize.is_set || is_set(historymaxsize.yfilter)) leaf_name_data.push_back(historymaxsize.get_name_leafdata());
    if (historyremoveduplicates.is_set || is_set(historyremoveduplicates.yfilter)) leaf_name_data.push_back(historyremoveduplicates.get_name_leafdata());
    if (historysave.is_set || is_set(historysave.yfilter)) leaf_name_data.push_back(historysave.get_name_leafdata());
    if (idletimeout.is_set || is_set(idletimeout.yfilter)) leaf_name_data.push_back(idletimeout.get_name_leafdata());
    if (ignoreleadingwhitespace.is_set || is_set(ignoreleadingwhitespace.yfilter)) leaf_name_data.push_back(ignoreleadingwhitespace.get_name_leafdata());
    if (ignoreshowwithdefaultondiff.is_set || is_set(ignoreshowwithdefaultondiff.yfilter)) leaf_name_data.push_back(ignoreshowwithdefaultondiff.get_name_leafdata());
    if (ignoresubsystemfailures.is_set || is_set(ignoresubsystemfailures.yfilter)) leaf_name_data.push_back(ignoresubsystemfailures.get_name_leafdata());
    if (inconsistentdatabasesuffix.is_set || is_set(inconsistentdatabasesuffix.yfilter)) leaf_name_data.push_back(inconsistentdatabasesuffix.get_name_leafdata());
    if (indenttemplates.is_set || is_set(indenttemplates.yfilter)) leaf_name_data.push_back(indenttemplates.get_name_leafdata());
    if (infoonmatch.is_set || is_set(infoonmatch.yfilter)) leaf_name_data.push_back(infoonmatch.get_name_leafdata());
    if (infoonspace.is_set || is_set(infoonspace.yfilter)) leaf_name_data.push_back(infoonspace.get_name_leafdata());
    if (infoontab.is_set || is_set(infoontab.yfilter)) leaf_name_data.push_back(infoontab.get_name_leafdata());
    if (inheritpaginate.is_set || is_set(inheritpaginate.yfilter)) leaf_name_data.push_back(inheritpaginate.get_name_leafdata());
    if (instancedescription.is_set || is_set(instancedescription.yfilter)) leaf_name_data.push_back(instancedescription.get_name_leafdata());
    if (invaliddatastring.is_set || is_set(invaliddatastring.yfilter)) leaf_name_data.push_back(invaliddatastring.get_name_leafdata());
    if (jabortedprefix.is_set || is_set(jabortedprefix.yfilter)) leaf_name_data.push_back(jabortedprefix.get_name_leafdata());
    if (jalignleafvalues.is_set || is_set(jalignleafvalues.yfilter)) leaf_name_data.push_back(jalignleafvalues.get_name_leafdata());
    if (jallowdeleteall.is_set || is_set(jallowdeleteall.yfilter)) leaf_name_data.push_back(jallowdeleteall.get_name_leafdata());
    if (jerrorprefix.is_set || is_set(jerrorprefix.yfilter)) leaf_name_data.push_back(jerrorprefix.get_name_leafdata());
    if (jextendedshow.is_set || is_set(jextendedshow.yfilter)) leaf_name_data.push_back(jextendedshow.get_name_leafdata());
    if (jhidehelp.is_set || is_set(jhidehelp.yfilter)) leaf_name_data.push_back(jhidehelp.get_name_leafdata());
    if (jshowcr.is_set || is_set(jshowcr.yfilter)) leaf_name_data.push_back(jshowcr.get_name_leafdata());
    if (jshowtablerecursive.is_set || is_set(jshowtablerecursive.yfilter)) leaf_name_data.push_back(jshowtablerecursive.get_name_leafdata());
    if (jshowunset.is_set || is_set(jshowunset.yfilter)) leaf_name_data.push_back(jshowunset.get_name_leafdata());
    if (jshowunsettext.is_set || is_set(jshowunsettext.yfilter)) leaf_name_data.push_back(jshowunsettext.get_name_leafdata());
    if (jstatusformat.is_set || is_set(jstatusformat.yfilter)) leaf_name_data.push_back(jstatusformat.get_name_leafdata());
    if (jwarningprefix.is_set || is_set(jwarningprefix.yfilter)) leaf_name_data.push_back(jwarningprefix.get_name_leafdata());
    if (laxbarquoting.is_set || is_set(laxbarquoting.yfilter)) leaf_name_data.push_back(laxbarquoting.get_name_leafdata());
    if (leafprompting.is_set || is_set(leafprompting.yfilter)) leaf_name_data.push_back(leafprompting.get_name_leafdata());
    if (loadactivityclock.is_set || is_set(loadactivityclock.yfilter)) leaf_name_data.push_back(loadactivityclock.get_name_leafdata());
    if (mapactions.is_set || is_set(mapactions.yfilter)) leaf_name_data.push_back(mapactions.get_name_leafdata());
    if (matchcompletionsformat.is_set || is_set(matchcompletionsformat.yfilter)) leaf_name_data.push_back(matchcompletionsformat.get_name_leafdata());
    if (messageformat.is_set || is_set(messageformat.yfilter)) leaf_name_data.push_back(messageformat.get_name_leafdata());
    if (messagemaxsize.is_set || is_set(messagemaxsize.yfilter)) leaf_name_data.push_back(messagemaxsize.get_name_leafdata());
    if (messagequeuesize.is_set || is_set(messagequeuesize.yfilter)) leaf_name_data.push_back(messagequeuesize.get_name_leafdata());
    if (messagewordwrap.is_set || is_set(messagewordwrap.yfilter)) leaf_name_data.push_back(messagewordwrap.get_name_leafdata());
    if (mixedmode.is_set || is_set(mixedmode.yfilter)) leaf_name_data.push_back(mixedmode.get_name_leafdata());
    if (modeinfoinaaa.is_set || is_set(modeinfoinaaa.yfilter)) leaf_name_data.push_back(modeinfoinaaa.get_name_leafdata());
    if (modeinfoinaudit.is_set || is_set(modeinfoinaudit.yfilter)) leaf_name_data.push_back(modeinfoinaudit.get_name_leafdata());
    if (modenamestyle.is_set || is_set(modenamestyle.yfilter)) leaf_name_data.push_back(modenamestyle.get_name_leafdata());
    if (morebufferlines.is_set || is_set(morebufferlines.yfilter)) leaf_name_data.push_back(morebufferlines.get_name_leafdata());
    if (multipatternoperation.is_set || is_set(multipatternoperation.yfilter)) leaf_name_data.push_back(multipatternoperation.get_name_leafdata());
    if (newinsert.is_set || is_set(newinsert.yfilter)) leaf_name_data.push_back(newinsert.get_name_leafdata());
    if (newlogout.is_set || is_set(newlogout.yfilter)) leaf_name_data.push_back(newlogout.get_name_leafdata());
    if (nofollowincompletecommand.is_set || is_set(nofollowincompletecommand.yfilter)) leaf_name_data.push_back(nofollowincompletecommand.get_name_leafdata());
    if (nomatchcompletionsformat.is_set || is_set(nomatchcompletionsformat.yfilter)) leaf_name_data.push_back(nomatchcompletionsformat.get_name_leafdata());
    if (olddetailsarg.is_set || is_set(olddetailsarg.yfilter)) leaf_name_data.push_back(olddetailsarg.get_name_leafdata());
    if (orderedshowconfig.is_set || is_set(orderedshowconfig.yfilter)) leaf_name_data.push_back(orderedshowconfig.get_name_leafdata());
    if (pipehelpmode.is_set || is_set(pipehelpmode.yfilter)) leaf_name_data.push_back(pipehelpmode.get_name_leafdata());
    if (possiblecompletionsformat.is_set || is_set(possiblecompletionsformat.yfilter)) leaf_name_data.push_back(possiblecompletionsformat.get_name_leafdata());
    if (prettifystatsname.is_set || is_set(prettifystatsname.yfilter)) leaf_name_data.push_back(prettifystatsname.get_name_leafdata());
    if (prioritizesubmodecmds.is_set || is_set(prioritizesubmodecmds.yfilter)) leaf_name_data.push_back(prioritizesubmodecmds.get_name_leafdata());
    if (prompt1.is_set || is_set(prompt1.yfilter)) leaf_name_data.push_back(prompt1.get_name_leafdata());
    if (prompt2.is_set || is_set(prompt2.yfilter)) leaf_name_data.push_back(prompt2.get_name_leafdata());
    if (promptenumlimit.is_set || is_set(promptenumlimit.yfilter)) leaf_name_data.push_back(promptenumlimit.get_name_leafdata());
    if (prompthostnamedelimiter.is_set || is_set(prompthostnamedelimiter.yfilter)) leaf_name_data.push_back(prompthostnamedelimiter.get_name_leafdata());
    if (promptsessionscli.is_set || is_set(promptsessionscli.yfilter)) leaf_name_data.push_back(promptsessionscli.get_name_leafdata());
    if (quicksshteardown.is_set || is_set(quicksshteardown.yfilter)) leaf_name_data.push_back(quicksshteardown.get_name_leafdata());
    if (quotestyle.is_set || is_set(quotestyle.yfilter)) leaf_name_data.push_back(quotestyle.get_name_leafdata());
    if (reallocateopertrans.is_set || is_set(reallocateopertrans.yfilter)) leaf_name_data.push_back(reallocateopertrans.get_name_leafdata());
    if (reconfirmhidden.is_set || is_set(reconfirmhidden.yfilter)) leaf_name_data.push_back(reconfirmhidden.get_name_leafdata());
    if (reportinvalidcompletioninput.is_set || is_set(reportinvalidcompletioninput.yfilter)) leaf_name_data.push_back(reportinvalidcompletioninput.get_name_leafdata());
    if (restrictedfileaccess.is_set || is_set(restrictedfileaccess.yfilter)) leaf_name_data.push_back(restrictedfileaccess.get_name_leafdata());
    if (restrictedfileregexp.is_set || is_set(restrictedfileregexp.yfilter)) leaf_name_data.push_back(restrictedfileregexp.get_name_leafdata());
    if (rollbackaaa.is_set || is_set(rollbackaaa.yfilter)) leaf_name_data.push_back(rollbackaaa.get_name_leafdata());
    if (rollbackmax.is_set || is_set(rollbackmax.yfilter)) leaf_name_data.push_back(rollbackmax.get_name_leafdata());
    if (rollbacknumbering.is_set || is_set(rollbacknumbering.yfilter)) leaf_name_data.push_back(rollbacknumbering.get_name_leafdata());
    if (rollbacknumberinginitial.is_set || is_set(rollbacknumberinginitial.yfilter)) leaf_name_data.push_back(rollbacknumberinginitial.get_name_leafdata());
    if (safescriptexecution.is_set || is_set(safescriptexecution.yfilter)) leaf_name_data.push_back(safescriptexecution.get_name_leafdata());
    if (showallns.is_set || is_set(showallns.yfilter)) leaf_name_data.push_back(showallns.get_name_leafdata());
    if (showannotations.is_set || is_set(showannotations.yfilter)) leaf_name_data.push_back(showannotations.get_name_leafdata());
    if (showcommitprogress.is_set || is_set(showcommitprogress.yfilter)) leaf_name_data.push_back(showcommitprogress.get_name_leafdata());
    if (showdefaults.is_set || is_set(showdefaults.yfilter)) leaf_name_data.push_back(showdefaults.get_name_leafdata());
    if (showdescription.is_set || is_set(showdescription.yfilter)) leaf_name_data.push_back(showdescription.get_name_leafdata());
    if (showeditors.is_set || is_set(showeditors.yfilter)) leaf_name_data.push_back(showeditors.get_name_leafdata());
    if (showemptycontainers.is_set || is_set(showemptycontainers.yfilter)) leaf_name_data.push_back(showemptycontainers.get_name_leafdata());
    if (showkeyname.is_set || is_set(showkeyname.yfilter)) leaf_name_data.push_back(showkeyname.get_name_leafdata());
    if (showlogdirectory.is_set || is_set(showlogdirectory.yfilter)) leaf_name_data.push_back(showlogdirectory.get_name_leafdata());
    if (showmatchbeforepossible.is_set || is_set(showmatchbeforepossible.yfilter)) leaf_name_data.push_back(showmatchbeforepossible.get_name_leafdata());
    if (shownederrorasinfo.is_set || is_set(shownederrorasinfo.yfilter)) leaf_name_data.push_back(shownederrorasinfo.get_name_leafdata());
    if (showpipe.is_set || is_set(showpipe.yfilter)) leaf_name_data.push_back(showpipe.get_name_leafdata());
    if (showpipeconfig.is_set || is_set(showpipeconfig.yfilter)) leaf_name_data.push_back(showpipeconfig.get_name_leafdata());
    if (showservicemetadata.is_set || is_set(showservicemetadata.yfilter)) leaf_name_data.push_back(showservicemetadata.get_name_leafdata());
    if (showsubsystemmessages.is_set || is_set(showsubsystemmessages.yfilter)) leaf_name_data.push_back(showsubsystemmessages.get_name_leafdata());
    if (showtablelabelsifmultiple.is_set || is_set(showtablelabelsifmultiple.yfilter)) leaf_name_data.push_back(showtablelabelsifmultiple.get_name_leafdata());
    if (showtags.is_set || is_set(showtags.yfilter)) leaf_name_data.push_back(showtags.get_name_leafdata());
    if (singleelempattern.is_set || is_set(singleelempattern.yfilter)) leaf_name_data.push_back(singleelempattern.get_name_leafdata());
    if (smartrenamefiltering.is_set || is_set(smartrenamefiltering.yfilter)) leaf_name_data.push_back(smartrenamefiltering.get_name_leafdata());
    if (sortlocalcmds.is_set || is_set(sortlocalcmds.yfilter)) leaf_name_data.push_back(sortlocalcmds.get_name_leafdata());
    if (sortshowelems.is_set || is_set(sortshowelems.yfilter)) leaf_name_data.push_back(sortshowelems.get_name_leafdata());
    if (sortsubmodecmds.is_set || is_set(sortsubmodecmds.yfilter)) leaf_name_data.push_back(sortsubmodecmds.get_name_leafdata());
    if (startupscriptnoninteractive.is_set || is_set(startupscriptnoninteractive.yfilter)) leaf_name_data.push_back(startupscriptnoninteractive.get_name_leafdata());
    if (stoploadonerror.is_set || is_set(stoploadonerror.yfilter)) leaf_name_data.push_back(stoploadonerror.get_name_leafdata());
    if (strictrefsonload.is_set || is_set(strictrefsonload.yfilter)) leaf_name_data.push_back(strictrefsonload.get_name_leafdata());
    if (style.is_set || is_set(style.yfilter)) leaf_name_data.push_back(style.get_name_leafdata());
    if (supportquotedeol.is_set || is_set(supportquotedeol.yfilter)) leaf_name_data.push_back(supportquotedeol.get_name_leafdata());
    if (suppressfastshow.is_set || is_set(suppressfastshow.yfilter)) leaf_name_data.push_back(suppressfastshow.get_name_leafdata());
    if (suppressnederrors.is_set || is_set(suppressnederrors.yfilter)) leaf_name_data.push_back(suppressnederrors.get_name_leafdata());
    if (suppressrangekeyword.is_set || is_set(suppressrangekeyword.yfilter)) leaf_name_data.push_back(suppressrangekeyword.get_name_leafdata());
    if (tabextend.is_set || is_set(tabextend.yfilter)) leaf_name_data.push_back(tabextend.get_name_leafdata());
    if (tablelabel.is_set || is_set(tablelabel.yfilter)) leaf_name_data.push_back(tablelabel.get_name_leafdata());
    if (tablelookahead.is_set || is_set(tablelookahead.yfilter)) leaf_name_data.push_back(tablelookahead.get_name_leafdata());
    if (tableoverflowtruncate.is_set || is_set(tableoverflowtruncate.yfilter)) leaf_name_data.push_back(tableoverflowtruncate.get_name_leafdata());
    if (timezone.is_set || is_set(timezone.yfilter)) leaf_name_data.push_back(timezone.get_name_leafdata());
    if (toplevelcmdsinsubmode.is_set || is_set(toplevelcmdsinsubmode.yfilter)) leaf_name_data.push_back(toplevelcmdsinsubmode.get_name_leafdata());
    if (transactionctrlcmds.is_set || is_set(transactionctrlcmds.yfilter)) leaf_name_data.push_back(transactionctrlcmds.get_name_leafdata());
    if (transactions.is_set || is_set(transactions.yfilter)) leaf_name_data.push_back(transactions.get_name_leafdata());
    if (trimdefaultsave.is_set || is_set(trimdefaultsave.yfilter)) leaf_name_data.push_back(trimdefaultsave.get_name_leafdata());
    if (trimdefaultshow.is_set || is_set(trimdefaultshow.yfilter)) leaf_name_data.push_back(trimdefaultshow.get_name_leafdata());
    if (unifiedhistory.is_set || is_set(unifiedhistory.yfilter)) leaf_name_data.push_back(unifiedhistory.get_name_leafdata());
    if (usedoubledotranges.is_set || is_set(usedoubledotranges.yfilter)) leaf_name_data.push_back(usedoubledotranges.get_name_leafdata());
    if (useexposensprefix.is_set || is_set(useexposensprefix.yfilter)) leaf_name_data.push_back(useexposensprefix.get_name_leafdata());
    if (useshortenabled.is_set || is_set(useshortenabled.yfilter)) leaf_name_data.push_back(useshortenabled.get_name_leafdata());
    if (utcoffset.is_set || is_set(utcoffset.yfilter)) leaf_name_data.push_back(utcoffset.get_name_leafdata());
    if (whohistorydatetimeformat.is_set || is_set(whohistorydatetimeformat.yfilter)) leaf_name_data.push_back(whohistorydatetimeformat.get_name_leafdata());
    if (whoshowmode.is_set || is_set(whoshowmode.yfilter)) leaf_name_data.push_back(whoshowmode.get_name_leafdata());
    if (withdefaults.is_set || is_set(withdefaults.yfilter)) leaf_name_data.push_back(withdefaults.get_name_leafdata());
    if (wrapinfo.is_set || is_set(wrapinfo.yfilter)) leaf_name_data.push_back(wrapinfo.get_name_leafdata());
    if (wrapprompt.is_set || is_set(wrapprompt.yfilter)) leaf_name_data.push_back(wrapprompt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoWizard")
    {
        if(autowizard == nullptr)
        {
            autowizard = std::make_shared<Confdconfig::Cli::Autowizard>();
        }
        return autowizard;
    }

    if(child_yang_name == "spaceCompletion")
    {
        if(spacecompletion == nullptr)
        {
            spacecompletion = std::make_shared<Confdconfig::Cli::Spacecompletion>();
        }
        return spacecompletion;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Cli::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "suppressCommitMessages")
    {
        if(suppresscommitmessages == nullptr)
        {
            suppresscommitmessages = std::make_shared<Confdconfig::Cli::Suppresscommitmessages>();
        }
        return suppresscommitmessages;
    }

    if(child_yang_name == "templateFilter")
    {
        for(auto const & c : templatefilter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Cli::Templatefilter>();
        c->parent = this;
        templatefilter.push_back(c);
        return c;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Confdconfig::Cli::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autowizard != nullptr)
    {
        children["autoWizard"] = autowizard;
    }

    if(spacecompletion != nullptr)
    {
        children["spaceCompletion"] = spacecompletion;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(suppresscommitmessages != nullptr)
    {
        children["suppressCommitMessages"] = suppresscommitmessages;
    }

    for (auto const & c : templatefilter)
    {
        children[c->get_segment_path()] = c;
    }

    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Confdconfig::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addErrorPrefixSuffix")
    {
        adderrorprefixsuffix = value;
        adderrorprefixsuffix.value_namespace = name_space;
        adderrorprefixsuffix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addExtraTableSpacing")
    {
        addextratablespacing = value;
        addextratablespacing.value_namespace = name_space;
        addextratablespacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allOrNothingLoad")
    {
        allornothingload = value;
        allornothingload.value_namespace = name_space;
        allornothingload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAbbrevCmds")
    {
        allowabbrevcmds = value;
        allowabbrevcmds.value_namespace = name_space;
        allowabbrevcmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAbbrevCmdsOnLoad")
    {
        allowabbrevcmdsonload = value;
        allowabbrevcmdsonload.value_namespace = name_space;
        allowabbrevcmdsonload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAbbrevEnums")
    {
        allowabbrevenums = value;
        allowabbrevenums.value_namespace = name_space;
        allowabbrevenums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAbbrevKeys")
    {
        allowabbrevkeys = value;
        allowabbrevkeys.value_namespace = name_space;
        allowabbrevkeys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAbbrevParamNames")
    {
        allowabbrevparamnames = value;
        allowabbrevparamnames.value_namespace = name_space;
        allowabbrevparamnames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowAllAsWildcard")
    {
        allowallaswildcard = value;
        allowallaswildcard.value_namespace = name_space;
        allowallaswildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowCaseInsensitiveEnums")
    {
        allowcaseinsensitiveenums = value;
        allowcaseinsensitiveenums.value_namespace = name_space;
        allowcaseinsensitiveenums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowImplicitWildcard")
    {
        allowimplicitwildcard = value;
        allowimplicitwildcard.value_namespace = name_space;
        allowimplicitwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowOldStyleModeCmds")
    {
        allowoldstylemodecmds = value;
        allowoldstylemodecmds.value_namespace = name_space;
        allowoldstylemodecmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowOverwriteOnCopy")
    {
        allowoverwriteoncopy = value;
        allowoverwriteoncopy.value_namespace = name_space;
        allowoverwriteoncopy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowParenQuotes")
    {
        allowparenquotes = value;
        allowparenquotes.value_namespace = name_space;
        allowparenquotes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowRangeExpression")
    {
        allowrangeexpression = value;
        allowrangeexpression.value_namespace = name_space;
        allowrangeexpression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowRangeExpressionAllTypes")
    {
        allowrangeexpressionalltypes = value;
        allowrangeexpressionalltypes.value_namespace = name_space;
        allowrangeexpressionalltypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowTableCellWrap")
    {
        allowtablecellwrap = value;
        allowtablecellwrap.value_namespace = name_space;
        allowtablecellwrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowTableOverflow")
    {
        allowtableoverflow = value;
        allowtableoverflow.value_namespace = name_space;
        allowtableoverflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowWildcard")
    {
        allowwildcard = value;
        allowwildcard.value_namespace = name_space;
        allowwildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asyncPromptRefresh")
    {
        asyncpromptrefresh = value;
        asyncpromptrefresh.value_namespace = name_space;
        asyncpromptrefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auditLogMode")
    {
        auditlogmode = value;
        auditlogmode.value_namespace = name_space;
        auditlogmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autocommitLoad")
    {
        autocommitload = value;
        autocommitload.value_namespace = name_space;
        autocommitload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autocommitLoadChunkSize")
    {
        autocommitloadchunksize = value;
        autocommitloadchunksize.value_namespace = name_space;
        autocommitloadchunksize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bannerFile")
    {
        bannerfile = value;
        bannerfile.value_namespace = name_space;
        bannerfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAbortedPrefix")
    {
        cabortedprefix = value;
        cabortedprefix.value_namespace = name_space;
        cabortedprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAlignLeafValues")
    {
        calignleafvalues = value;
        calignleafvalues.value_namespace = name_space;
        calignleafvalues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caseInsensitive")
    {
        caseinsensitive = value;
        caseinsensitive.value_namespace = name_space;
        caseinsensitive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caseInsensitiveKeys")
    {
        caseinsensitivekeys = value;
        caseinsensitivekeys.value_namespace = name_space;
        caseinsensitivekeys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cErrorPrefix")
    {
        cerrorprefix = value;
        cerrorprefix.value_namespace = name_space;
        cerrorprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cExtendedCmdSearch")
    {
        cextendedcmdsearch = value;
        cextendedcmdsearch.value_namespace = name_space;
        cextendedcmdsearch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHelp")
    {
        chelp = value;
        chelp.value_namespace = name_space;
        chelp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdAAAForAutowizard")
    {
        cmdaaaforautowizard = value;
        cmdaaaforautowizard.value_namespace = name_space;
        cmdaaaforautowizard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cModeExitFormat")
    {
        cmodeexitformat = value;
        cmodeexitformat.value_namespace = name_space;
        cmodeexitformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "columnStats")
    {
        columnstats = value;
        columnstats.value_namespace = name_space;
        columnstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commandTimeout")
    {
        commandtimeout = value;
        commandtimeout.value_namespace = name_space;
        commandtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commitActivityClock")
    {
        commitactivityclock = value;
        commitactivityclock.value_namespace = name_space;
        commitactivityclock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commitMessage")
    {
        commitmessage = value;
        commitmessage.value_namespace = name_space;
        commitmessage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commitMessageFormat")
    {
        commitmessageformat = value;
        commitmessageformat.value_namespace = name_space;
        commitmessageformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commitRetryTimeout")
    {
        commitretrytimeout = value;
        commitretrytimeout.value_namespace = name_space;
        commitretrytimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compactShow")
    {
        compactshow = value;
        compactshow.value_namespace = name_space;
        compactshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compactStatsShow")
    {
        compactstatsshow = value;
        compactstatsshow.value_namespace = name_space;
        compactstatsshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compactTable")
    {
        compacttable = value;
        compacttable.value_namespace = name_space;
        compacttable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completionListLine")
    {
        completionlistline = value;
        completionlistline.value_namespace = name_space;
        completionlistline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completionMetaInfo")
    {
        completionmetainfo = value;
        completionmetainfo.value_namespace = name_space;
        completionmetainfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completionShowMax")
    {
        completionshowmax = value;
        completionshowmax.value_namespace = name_space;
        completionshowmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completionShowOldVal")
    {
        completionshowoldval = value;
        completionshowoldval.value_namespace = name_space;
        completionshowoldval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compListCompact")
    {
        complistcompact = value;
        complistcompact.value_namespace = name_space;
        complistcompact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confirmUncommitedOnExit")
    {
        confirmuncommitedonexit = value;
        confirmuncommitedonexit.value_namespace = name_space;
        confirmuncommitedonexit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "continueOnErrorCmdStack")
    {
        continueonerrorcmdstack = value;
        continueonerrorcmdstack.value_namespace = name_space;
        continueonerrorcmdstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPrivate")
    {
        cprivate = value;
        cprivate.value_namespace = name_space;
        cprivate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPrompt1")
    {
        cprompt1 = value;
        cprompt1.value_namespace = name_space;
        cprompt1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPrompt2")
    {
        cprompt2 = value;
        cprompt2.value_namespace = name_space;
        cprompt2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRestrictiveNo")
    {
        crestrictiveno = value;
        crestrictiveno.value_namespace = name_space;
        crestrictiveno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSilentNo")
    {
        csilentno = value;
        csilentno.value_namespace = name_space;
        csilentno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cStylePromptInJStyle")
    {
        cstylepromptinjstyle = value;
        cstylepromptinjstyle.value_namespace = name_space;
        cstylepromptinjstyle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cSuppressCmdSearch")
    {
        csuppresscmdsearch = value;
        csuppresscmdsearch.value_namespace = name_space;
        csuppresscmdsearch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTab")
    {
        ctab = value;
        ctab.value_namespace = name_space;
        ctab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTabInfo")
    {
        ctabinfo = value;
        ctabinfo.value_namespace = name_space;
        ctabinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cWarningPrefix")
    {
        cwarningprefix = value;
        cwarningprefix.value_namespace = name_space;
        cwarningprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultDisplayLevel")
    {
        defaultdisplaylevel = value;
        defaultdisplaylevel.value_namespace = name_space;
        defaultdisplaylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultPrefix")
    {
        defaultprefix = value;
        defaultprefix.value_namespace = name_space;
        defaultprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultTableBehavior")
    {
        defaulttablebehavior = value;
        defaulttablebehavior.value_namespace = name_space;
        defaulttablebehavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dequoteHidden")
    {
        dequotehidden = value;
        dequotehidden.value_namespace = name_space;
        dequotehidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableIdleTimeoutOnCmd")
    {
        disableidletimeoutoncmd = value;
        disableidletimeoutoncmd.value_namespace = name_space;
        disableidletimeoutoncmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disablePipe")
    {
        disablepipe = value;
        disablepipe.value_namespace = name_space;
        disablepipe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disablePipeConfig")
    {
        disablepipeconfig = value;
        disablepipeconfig.value_namespace = name_space;
        disablepipeconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "displayEmptyConfigContainers")
    {
        displayemptyconfigcontainers = value;
        displayemptyconfigcontainers.value_namespace = name_space;
        displayemptyconfigcontainers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "displayNonPresenceAttributes")
    {
        displaynonpresenceattributes = value;
        displaynonpresenceattributes.value_namespace = name_space;
        displaynonpresenceattributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docWrap")
    {
        docwrap = value;
        docwrap.value_namespace = name_space;
        docwrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editWrapMode")
    {
        editwrapmode = value;
        editwrapmode.value_namespace = name_space;
        editwrapmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableDisplayGroups")
    {
        enabledisplaygroups = value;
        enabledisplaygroups.value_namespace = name_space;
        enabledisplaygroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableDisplayLevel")
    {
        enabledisplaylevel = value;
        enabledisplaylevel.value_namespace = name_space;
        enabledisplaylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableLoadMerge")
    {
        enableloadmerge = value;
        enableloadmerge.value_namespace = name_space;
        enableloadmerge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enterSubmodeOnLeaf")
    {
        entersubmodeonleaf = value;
        entersubmodeonleaf.value_namespace = name_space;
        entersubmodeonleaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumKeyInfo")
    {
        enumkeyinfo = value;
        enumkeyinfo.value_namespace = name_space;
        enumkeyinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "escapeBackslash")
    {
        escapebackslash = value;
        escapebackslash.value_namespace = name_space;
        escapebackslash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execNavigationCmds")
    {
        execnavigationcmds = value;
        execnavigationcmds.value_namespace = name_space;
        execnavigationcmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exitConfigModeOnCtrlC")
    {
        exitconfigmodeonctrlc = value;
        exitconfigmodeonctrlc.value_namespace = name_space;
        exitconfigmodeonctrlc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exitModeOnEmptyRange")
    {
        exitmodeonemptyrange = value;
        exitmodeonemptyrange.value_namespace = name_space;
        exitmodeonemptyrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expandAliasEscape")
    {
        expandaliasescape = value;
        expandaliasescape.value_namespace = name_space;
        expandaliasescape.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expandAliasOnCompletion")
    {
        expandaliasoncompletion = value;
        expandaliasoncompletion.value_namespace = name_space;
        expandaliasoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicitSetCreate")
    {
        explicitsetcreate = value;
        explicitsetcreate.value_namespace = name_space;
        explicitsetcreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "externalActionErrorMsg")
    {
        externalactionerrormsg = value;
        externalactionerrormsg.value_namespace = name_space;
        externalactionerrormsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forcedExitFormat")
    {
        forcedexitformat = value;
        forcedexitformat.value_namespace = name_space;
        forcedexitformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hideDotFiles")
    {
        hidedotfiles = value;
        hidedotfiles.value_namespace = name_space;
        hidedotfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyMaxSize")
    {
        historymaxsize = value;
        historymaxsize.value_namespace = name_space;
        historymaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyRemoveDuplicates")
    {
        historyremoveduplicates = value;
        historyremoveduplicates.value_namespace = name_space;
        historyremoveduplicates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historySave")
    {
        historysave = value;
        historysave.value_namespace = name_space;
        historysave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout = value;
        idletimeout.value_namespace = name_space;
        idletimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignoreLeadingWhitespace")
    {
        ignoreleadingwhitespace = value;
        ignoreleadingwhitespace.value_namespace = name_space;
        ignoreleadingwhitespace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignoreShowWithDefaultOnDiff")
    {
        ignoreshowwithdefaultondiff = value;
        ignoreshowwithdefaultondiff.value_namespace = name_space;
        ignoreshowwithdefaultondiff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignoreSubsystemFailures")
    {
        ignoresubsystemfailures = value;
        ignoresubsystemfailures.value_namespace = name_space;
        ignoresubsystemfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inconsistentDatabaseSuffix")
    {
        inconsistentdatabasesuffix = value;
        inconsistentdatabasesuffix.value_namespace = name_space;
        inconsistentdatabasesuffix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "indentTemplates")
    {
        indenttemplates = value;
        indenttemplates.value_namespace = name_space;
        indenttemplates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infoOnMatch")
    {
        infoonmatch = value;
        infoonmatch.value_namespace = name_space;
        infoonmatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infoOnSpace")
    {
        infoonspace = value;
        infoonspace.value_namespace = name_space;
        infoonspace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infoOnTab")
    {
        infoontab = value;
        infoontab.value_namespace = name_space;
        infoontab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inheritPaginate")
    {
        inheritpaginate = value;
        inheritpaginate.value_namespace = name_space;
        inheritpaginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instanceDescription")
    {
        instancedescription = value;
        instancedescription.value_namespace = name_space;
        instancedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDataString")
    {
        invaliddatastring = value;
        invaliddatastring.value_namespace = name_space;
        invaliddatastring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jAbortedPrefix")
    {
        jabortedprefix = value;
        jabortedprefix.value_namespace = name_space;
        jabortedprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jAlignLeafValues")
    {
        jalignleafvalues = value;
        jalignleafvalues.value_namespace = name_space;
        jalignleafvalues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jAllowDeleteAll")
    {
        jallowdeleteall = value;
        jallowdeleteall.value_namespace = name_space;
        jallowdeleteall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jErrorPrefix")
    {
        jerrorprefix = value;
        jerrorprefix.value_namespace = name_space;
        jerrorprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jExtendedShow")
    {
        jextendedshow = value;
        jextendedshow.value_namespace = name_space;
        jextendedshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jHideHelp")
    {
        jhidehelp = value;
        jhidehelp.value_namespace = name_space;
        jhidehelp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jShowCR")
    {
        jshowcr = value;
        jshowcr.value_namespace = name_space;
        jshowcr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jShowTableRecursive")
    {
        jshowtablerecursive = value;
        jshowtablerecursive.value_namespace = name_space;
        jshowtablerecursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jShowUnset")
    {
        jshowunset = value;
        jshowunset.value_namespace = name_space;
        jshowunset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jShowUnsetText")
    {
        jshowunsettext = value;
        jshowunsettext.value_namespace = name_space;
        jshowunsettext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jStatusFormat")
    {
        jstatusformat = value;
        jstatusformat.value_namespace = name_space;
        jstatusformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jWarningPrefix")
    {
        jwarningprefix = value;
        jwarningprefix.value_namespace = name_space;
        jwarningprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laxBarQuoting")
    {
        laxbarquoting = value;
        laxbarquoting.value_namespace = name_space;
        laxbarquoting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leafPrompting")
    {
        leafprompting = value;
        leafprompting.value_namespace = name_space;
        leafprompting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadActivityClock")
    {
        loadactivityclock = value;
        loadactivityclock.value_namespace = name_space;
        loadactivityclock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapActions")
    {
        mapactions = value;
        mapactions.value_namespace = name_space;
        mapactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchCompletionsFormat")
    {
        matchcompletionsformat = value;
        matchcompletionsformat.value_namespace = name_space;
        matchcompletionsformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageFormat")
    {
        messageformat = value;
        messageformat.value_namespace = name_space;
        messageformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageMaxSize")
    {
        messagemaxsize = value;
        messagemaxsize.value_namespace = name_space;
        messagemaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageQueueSize")
    {
        messagequeuesize = value;
        messagequeuesize.value_namespace = name_space;
        messagequeuesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messageWordWrap")
    {
        messagewordwrap = value;
        messagewordwrap.value_namespace = name_space;
        messagewordwrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mixedMode")
    {
        mixedmode = value;
        mixedmode.value_namespace = name_space;
        mixedmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modeInfoInAAA")
    {
        modeinfoinaaa = value;
        modeinfoinaaa.value_namespace = name_space;
        modeinfoinaaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modeInfoInAudit")
    {
        modeinfoinaudit = value;
        modeinfoinaudit.value_namespace = name_space;
        modeinfoinaudit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modeNameStyle")
    {
        modenamestyle = value;
        modenamestyle.value_namespace = name_space;
        modenamestyle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moreBufferLines")
    {
        morebufferlines = value;
        morebufferlines.value_namespace = name_space;
        morebufferlines.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiPatternOperation")
    {
        multipatternoperation = value;
        multipatternoperation.value_namespace = name_space;
        multipatternoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newInsert")
    {
        newinsert = value;
        newinsert.value_namespace = name_space;
        newinsert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLogout")
    {
        newlogout = value;
        newlogout.value_namespace = name_space;
        newlogout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noFollowIncompleteCommand")
    {
        nofollowincompletecommand = value;
        nofollowincompletecommand.value_namespace = name_space;
        nofollowincompletecommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noMatchCompletionsFormat")
    {
        nomatchcompletionsformat = value;
        nomatchcompletionsformat.value_namespace = name_space;
        nomatchcompletionsformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldDetailsArg")
    {
        olddetailsarg = value;
        olddetailsarg.value_namespace = name_space;
        olddetailsarg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orderedShowConfig")
    {
        orderedshowconfig = value;
        orderedshowconfig.value_namespace = name_space;
        orderedshowconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pipeHelpMode")
    {
        pipehelpmode = value;
        pipehelpmode.value_namespace = name_space;
        pipehelpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "possibleCompletionsFormat")
    {
        possiblecompletionsformat = value;
        possiblecompletionsformat.value_namespace = name_space;
        possiblecompletionsformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prettifyStatsName")
    {
        prettifystatsname = value;
        prettifystatsname.value_namespace = name_space;
        prettifystatsname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prioritizeSubmodeCmds")
    {
        prioritizesubmodecmds = value;
        prioritizesubmodecmds.value_namespace = name_space;
        prioritizesubmodecmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt1")
    {
        prompt1 = value;
        prompt1.value_namespace = name_space;
        prompt1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt2")
    {
        prompt2 = value;
        prompt2.value_namespace = name_space;
        prompt2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promptEnumLimit")
    {
        promptenumlimit = value;
        promptenumlimit.value_namespace = name_space;
        promptenumlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promptHostnameDelimiter")
    {
        prompthostnamedelimiter = value;
        prompthostnamedelimiter.value_namespace = name_space;
        prompthostnamedelimiter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promptSessionsCLI")
    {
        promptsessionscli = value;
        promptsessionscli.value_namespace = name_space;
        promptsessionscli.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quickSshTeardown")
    {
        quicksshteardown = value;
        quicksshteardown.value_namespace = name_space;
        quicksshteardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quoteStyle")
    {
        quotestyle = value;
        quotestyle.value_namespace = name_space;
        quotestyle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reallocateOperTrans")
    {
        reallocateopertrans = value;
        reallocateopertrans.value_namespace = name_space;
        reallocateopertrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconfirmHidden")
    {
        reconfirmhidden = value;
        reconfirmhidden.value_namespace = name_space;
        reconfirmhidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reportInvalidCompletionInput")
    {
        reportinvalidcompletioninput = value;
        reportinvalidcompletioninput.value_namespace = name_space;
        reportinvalidcompletioninput.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrictedFileAccess")
    {
        restrictedfileaccess = value;
        restrictedfileaccess.value_namespace = name_space;
        restrictedfileaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restrictedFileRegexp")
    {
        restrictedfileregexp = value;
        restrictedfileregexp.value_namespace = name_space;
        restrictedfileregexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollbackAAA")
    {
        rollbackaaa = value;
        rollbackaaa.value_namespace = name_space;
        rollbackaaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollbackMax")
    {
        rollbackmax = value;
        rollbackmax.value_namespace = name_space;
        rollbackmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollbackNumbering")
    {
        rollbacknumbering = value;
        rollbacknumbering.value_namespace = name_space;
        rollbacknumbering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollbackNumberingInitial")
    {
        rollbacknumberinginitial = value;
        rollbacknumberinginitial.value_namespace = name_space;
        rollbacknumberinginitial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safeScriptExecution")
    {
        safescriptexecution = value;
        safescriptexecution.value_namespace = name_space;
        safescriptexecution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showAllNs")
    {
        showallns = value;
        showallns.value_namespace = name_space;
        showallns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showAnnotations")
    {
        showannotations = value;
        showannotations.value_namespace = name_space;
        showannotations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showCommitProgress")
    {
        showcommitprogress = value;
        showcommitprogress.value_namespace = name_space;
        showcommitprogress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showDefaults")
    {
        showdefaults = value;
        showdefaults.value_namespace = name_space;
        showdefaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showDescription")
    {
        showdescription = value;
        showdescription.value_namespace = name_space;
        showdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showEditors")
    {
        showeditors = value;
        showeditors.value_namespace = name_space;
        showeditors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showEmptyContainers")
    {
        showemptycontainers = value;
        showemptycontainers.value_namespace = name_space;
        showemptycontainers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showKeyName")
    {
        showkeyname = value;
        showkeyname.value_namespace = name_space;
        showkeyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showLogDirectory")
    {
        showlogdirectory = value;
        showlogdirectory.value_namespace = name_space;
        showlogdirectory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showMatchBeforePossible")
    {
        showmatchbeforepossible = value;
        showmatchbeforepossible.value_namespace = name_space;
        showmatchbeforepossible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showNedErrorAsInfo")
    {
        shownederrorasinfo = value;
        shownederrorasinfo.value_namespace = name_space;
        shownederrorasinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showPipe")
    {
        showpipe = value;
        showpipe.value_namespace = name_space;
        showpipe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showPipeConfig")
    {
        showpipeconfig = value;
        showpipeconfig.value_namespace = name_space;
        showpipeconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showServiceMetaData")
    {
        showservicemetadata = value;
        showservicemetadata.value_namespace = name_space;
        showservicemetadata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showSubsystemMessages")
    {
        showsubsystemmessages = value;
        showsubsystemmessages.value_namespace = name_space;
        showsubsystemmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showTableLabelsIfMultiple")
    {
        showtablelabelsifmultiple = value;
        showtablelabelsifmultiple.value_namespace = name_space;
        showtablelabelsifmultiple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showTags")
    {
        showtags = value;
        showtags.value_namespace = name_space;
        showtags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleElemPattern")
    {
        singleelempattern = value;
        singleelempattern.value_namespace = name_space;
        singleelempattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smartRenameFiltering")
    {
        smartrenamefiltering = value;
        smartrenamefiltering.value_namespace = name_space;
        smartrenamefiltering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sortLocalCmds")
    {
        sortlocalcmds = value;
        sortlocalcmds.value_namespace = name_space;
        sortlocalcmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sortShowElems")
    {
        sortshowelems = value;
        sortshowelems.value_namespace = name_space;
        sortshowelems.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sortSubmodeCmds")
    {
        sortsubmodecmds = value;
        sortsubmodecmds.value_namespace = name_space;
        sortsubmodecmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupScriptNonInteractive")
    {
        startupscriptnoninteractive = value;
        startupscriptnoninteractive.value_namespace = name_space;
        startupscriptnoninteractive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopLoadOnError")
    {
        stoploadonerror = value;
        stoploadonerror.value_namespace = name_space;
        stoploadonerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strictRefsOnLoad")
    {
        strictrefsonload = value;
        strictrefsonload.value_namespace = name_space;
        strictrefsonload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "style")
    {
        style = value;
        style.value_namespace = name_space;
        style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supportQuotedEOL")
    {
        supportquotedeol = value;
        supportquotedeol.value_namespace = name_space;
        supportquotedeol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressFastShow")
    {
        suppressfastshow = value;
        suppressfastshow.value_namespace = name_space;
        suppressfastshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressNedErrors")
    {
        suppressnederrors = value;
        suppressnederrors.value_namespace = name_space;
        suppressnederrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressRangeKeyword")
    {
        suppressrangekeyword = value;
        suppressrangekeyword.value_namespace = name_space;
        suppressrangekeyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tabExtend")
    {
        tabextend = value;
        tabextend.value_namespace = name_space;
        tabextend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableLabel")
    {
        tablelabel = value;
        tablelabel.value_namespace = name_space;
        tablelabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableLookAhead")
    {
        tablelookahead = value;
        tablelookahead.value_namespace = name_space;
        tablelookahead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableOverflowTruncate")
    {
        tableoverflowtruncate = value;
        tableoverflowtruncate.value_namespace = name_space;
        tableoverflowtruncate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timezone")
    {
        timezone = value;
        timezone.value_namespace = name_space;
        timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topLevelCmdsInSubMode")
    {
        toplevelcmdsinsubmode = value;
        toplevelcmdsinsubmode.value_namespace = name_space;
        toplevelcmdsinsubmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transactionCtrlCmds")
    {
        transactionctrlcmds = value;
        transactionctrlcmds.value_namespace = name_space;
        transactionctrlcmds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transactions")
    {
        transactions = value;
        transactions.value_namespace = name_space;
        transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trimDefaultSave")
    {
        trimdefaultsave = value;
        trimdefaultsave.value_namespace = name_space;
        trimdefaultsave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trimDefaultShow")
    {
        trimdefaultshow = value;
        trimdefaultshow.value_namespace = name_space;
        trimdefaultshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unifiedHistory")
    {
        unifiedhistory = value;
        unifiedhistory.value_namespace = name_space;
        unifiedhistory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useDoubleDotRanges")
    {
        usedoubledotranges = value;
        usedoubledotranges.value_namespace = name_space;
        usedoubledotranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useExposeNsPrefix")
    {
        useexposensprefix = value;
        useexposensprefix.value_namespace = name_space;
        useexposensprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useShortEnabled")
    {
        useshortenabled = value;
        useshortenabled.value_namespace = name_space;
        useshortenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utcOffset")
    {
        utcoffset = value;
        utcoffset.value_namespace = name_space;
        utcoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whoHistoryDateTimeFormat")
    {
        whohistorydatetimeformat = value;
        whohistorydatetimeformat.value_namespace = name_space;
        whohistorydatetimeformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whoShowMode")
    {
        whoshowmode = value;
        whoshowmode.value_namespace = name_space;
        whoshowmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withDefaults")
    {
        withdefaults = value;
        withdefaults.value_namespace = name_space;
        withdefaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrapInfo")
    {
        wrapinfo = value;
        wrapinfo.value_namespace = name_space;
        wrapinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrapPrompt")
    {
        wrapprompt = value;
        wrapprompt.value_namespace = name_space;
        wrapprompt.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addErrorPrefixSuffix")
    {
        adderrorprefixsuffix.yfilter = yfilter;
    }
    if(value_path == "addExtraTableSpacing")
    {
        addextratablespacing.yfilter = yfilter;
    }
    if(value_path == "allOrNothingLoad")
    {
        allornothingload.yfilter = yfilter;
    }
    if(value_path == "allowAbbrevCmds")
    {
        allowabbrevcmds.yfilter = yfilter;
    }
    if(value_path == "allowAbbrevCmdsOnLoad")
    {
        allowabbrevcmdsonload.yfilter = yfilter;
    }
    if(value_path == "allowAbbrevEnums")
    {
        allowabbrevenums.yfilter = yfilter;
    }
    if(value_path == "allowAbbrevKeys")
    {
        allowabbrevkeys.yfilter = yfilter;
    }
    if(value_path == "allowAbbrevParamNames")
    {
        allowabbrevparamnames.yfilter = yfilter;
    }
    if(value_path == "allowAllAsWildcard")
    {
        allowallaswildcard.yfilter = yfilter;
    }
    if(value_path == "allowCaseInsensitiveEnums")
    {
        allowcaseinsensitiveenums.yfilter = yfilter;
    }
    if(value_path == "allowImplicitWildcard")
    {
        allowimplicitwildcard.yfilter = yfilter;
    }
    if(value_path == "allowOldStyleModeCmds")
    {
        allowoldstylemodecmds.yfilter = yfilter;
    }
    if(value_path == "allowOverwriteOnCopy")
    {
        allowoverwriteoncopy.yfilter = yfilter;
    }
    if(value_path == "allowParenQuotes")
    {
        allowparenquotes.yfilter = yfilter;
    }
    if(value_path == "allowRangeExpression")
    {
        allowrangeexpression.yfilter = yfilter;
    }
    if(value_path == "allowRangeExpressionAllTypes")
    {
        allowrangeexpressionalltypes.yfilter = yfilter;
    }
    if(value_path == "allowTableCellWrap")
    {
        allowtablecellwrap.yfilter = yfilter;
    }
    if(value_path == "allowTableOverflow")
    {
        allowtableoverflow.yfilter = yfilter;
    }
    if(value_path == "allowWildcard")
    {
        allowwildcard.yfilter = yfilter;
    }
    if(value_path == "asyncPromptRefresh")
    {
        asyncpromptrefresh.yfilter = yfilter;
    }
    if(value_path == "auditLogMode")
    {
        auditlogmode.yfilter = yfilter;
    }
    if(value_path == "autocommitLoad")
    {
        autocommitload.yfilter = yfilter;
    }
    if(value_path == "autocommitLoadChunkSize")
    {
        autocommitloadchunksize.yfilter = yfilter;
    }
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
    if(value_path == "bannerFile")
    {
        bannerfile.yfilter = yfilter;
    }
    if(value_path == "cAbortedPrefix")
    {
        cabortedprefix.yfilter = yfilter;
    }
    if(value_path == "cAlignLeafValues")
    {
        calignleafvalues.yfilter = yfilter;
    }
    if(value_path == "caseInsensitive")
    {
        caseinsensitive.yfilter = yfilter;
    }
    if(value_path == "caseInsensitiveKeys")
    {
        caseinsensitivekeys.yfilter = yfilter;
    }
    if(value_path == "cErrorPrefix")
    {
        cerrorprefix.yfilter = yfilter;
    }
    if(value_path == "cExtendedCmdSearch")
    {
        cextendedcmdsearch.yfilter = yfilter;
    }
    if(value_path == "cHelp")
    {
        chelp.yfilter = yfilter;
    }
    if(value_path == "cmdAAAForAutowizard")
    {
        cmdaaaforautowizard.yfilter = yfilter;
    }
    if(value_path == "cModeExitFormat")
    {
        cmodeexitformat.yfilter = yfilter;
    }
    if(value_path == "columnStats")
    {
        columnstats.yfilter = yfilter;
    }
    if(value_path == "commandTimeout")
    {
        commandtimeout.yfilter = yfilter;
    }
    if(value_path == "commitActivityClock")
    {
        commitactivityclock.yfilter = yfilter;
    }
    if(value_path == "commitMessage")
    {
        commitmessage.yfilter = yfilter;
    }
    if(value_path == "commitMessageFormat")
    {
        commitmessageformat.yfilter = yfilter;
    }
    if(value_path == "commitRetryTimeout")
    {
        commitretrytimeout.yfilter = yfilter;
    }
    if(value_path == "compactShow")
    {
        compactshow.yfilter = yfilter;
    }
    if(value_path == "compactStatsShow")
    {
        compactstatsshow.yfilter = yfilter;
    }
    if(value_path == "compactTable")
    {
        compacttable.yfilter = yfilter;
    }
    if(value_path == "completionListLine")
    {
        completionlistline.yfilter = yfilter;
    }
    if(value_path == "completionMetaInfo")
    {
        completionmetainfo.yfilter = yfilter;
    }
    if(value_path == "completionShowMax")
    {
        completionshowmax.yfilter = yfilter;
    }
    if(value_path == "completionShowOldVal")
    {
        completionshowoldval.yfilter = yfilter;
    }
    if(value_path == "compListCompact")
    {
        complistcompact.yfilter = yfilter;
    }
    if(value_path == "confirmUncommitedOnExit")
    {
        confirmuncommitedonexit.yfilter = yfilter;
    }
    if(value_path == "continueOnErrorCmdStack")
    {
        continueonerrorcmdstack.yfilter = yfilter;
    }
    if(value_path == "cPrivate")
    {
        cprivate.yfilter = yfilter;
    }
    if(value_path == "cPrompt1")
    {
        cprompt1.yfilter = yfilter;
    }
    if(value_path == "cPrompt2")
    {
        cprompt2.yfilter = yfilter;
    }
    if(value_path == "cRestrictiveNo")
    {
        crestrictiveno.yfilter = yfilter;
    }
    if(value_path == "cSilentNo")
    {
        csilentno.yfilter = yfilter;
    }
    if(value_path == "cStylePromptInJStyle")
    {
        cstylepromptinjstyle.yfilter = yfilter;
    }
    if(value_path == "cSuppressCmdSearch")
    {
        csuppresscmdsearch.yfilter = yfilter;
    }
    if(value_path == "cTab")
    {
        ctab.yfilter = yfilter;
    }
    if(value_path == "cTabInfo")
    {
        ctabinfo.yfilter = yfilter;
    }
    if(value_path == "cWarningPrefix")
    {
        cwarningprefix.yfilter = yfilter;
    }
    if(value_path == "defaultDisplayLevel")
    {
        defaultdisplaylevel.yfilter = yfilter;
    }
    if(value_path == "defaultPrefix")
    {
        defaultprefix.yfilter = yfilter;
    }
    if(value_path == "defaultTableBehavior")
    {
        defaulttablebehavior.yfilter = yfilter;
    }
    if(value_path == "dequoteHidden")
    {
        dequotehidden.yfilter = yfilter;
    }
    if(value_path == "disableIdleTimeoutOnCmd")
    {
        disableidletimeoutoncmd.yfilter = yfilter;
    }
    if(value_path == "disablePipe")
    {
        disablepipe.yfilter = yfilter;
    }
    if(value_path == "disablePipeConfig")
    {
        disablepipeconfig.yfilter = yfilter;
    }
    if(value_path == "displayEmptyConfigContainers")
    {
        displayemptyconfigcontainers.yfilter = yfilter;
    }
    if(value_path == "displayNonPresenceAttributes")
    {
        displaynonpresenceattributes.yfilter = yfilter;
    }
    if(value_path == "docWrap")
    {
        docwrap.yfilter = yfilter;
    }
    if(value_path == "editWrapMode")
    {
        editwrapmode.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "enableDisplayGroups")
    {
        enabledisplaygroups.yfilter = yfilter;
    }
    if(value_path == "enableDisplayLevel")
    {
        enabledisplaylevel.yfilter = yfilter;
    }
    if(value_path == "enableLoadMerge")
    {
        enableloadmerge.yfilter = yfilter;
    }
    if(value_path == "enterSubmodeOnLeaf")
    {
        entersubmodeonleaf.yfilter = yfilter;
    }
    if(value_path == "enumKeyInfo")
    {
        enumkeyinfo.yfilter = yfilter;
    }
    if(value_path == "escapeBackslash")
    {
        escapebackslash.yfilter = yfilter;
    }
    if(value_path == "execNavigationCmds")
    {
        execnavigationcmds.yfilter = yfilter;
    }
    if(value_path == "exitConfigModeOnCtrlC")
    {
        exitconfigmodeonctrlc.yfilter = yfilter;
    }
    if(value_path == "exitModeOnEmptyRange")
    {
        exitmodeonemptyrange.yfilter = yfilter;
    }
    if(value_path == "expandAliasEscape")
    {
        expandaliasescape.yfilter = yfilter;
    }
    if(value_path == "expandAliasOnCompletion")
    {
        expandaliasoncompletion.yfilter = yfilter;
    }
    if(value_path == "explicitSetCreate")
    {
        explicitsetcreate.yfilter = yfilter;
    }
    if(value_path == "externalActionErrorMsg")
    {
        externalactionerrormsg.yfilter = yfilter;
    }
    if(value_path == "forcedExitFormat")
    {
        forcedexitformat.yfilter = yfilter;
    }
    if(value_path == "hideDotFiles")
    {
        hidedotfiles.yfilter = yfilter;
    }
    if(value_path == "historyMaxSize")
    {
        historymaxsize.yfilter = yfilter;
    }
    if(value_path == "historyRemoveDuplicates")
    {
        historyremoveduplicates.yfilter = yfilter;
    }
    if(value_path == "historySave")
    {
        historysave.yfilter = yfilter;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout.yfilter = yfilter;
    }
    if(value_path == "ignoreLeadingWhitespace")
    {
        ignoreleadingwhitespace.yfilter = yfilter;
    }
    if(value_path == "ignoreShowWithDefaultOnDiff")
    {
        ignoreshowwithdefaultondiff.yfilter = yfilter;
    }
    if(value_path == "ignoreSubsystemFailures")
    {
        ignoresubsystemfailures.yfilter = yfilter;
    }
    if(value_path == "inconsistentDatabaseSuffix")
    {
        inconsistentdatabasesuffix.yfilter = yfilter;
    }
    if(value_path == "indentTemplates")
    {
        indenttemplates.yfilter = yfilter;
    }
    if(value_path == "infoOnMatch")
    {
        infoonmatch.yfilter = yfilter;
    }
    if(value_path == "infoOnSpace")
    {
        infoonspace.yfilter = yfilter;
    }
    if(value_path == "infoOnTab")
    {
        infoontab.yfilter = yfilter;
    }
    if(value_path == "inheritPaginate")
    {
        inheritpaginate.yfilter = yfilter;
    }
    if(value_path == "instanceDescription")
    {
        instancedescription.yfilter = yfilter;
    }
    if(value_path == "invalidDataString")
    {
        invaliddatastring.yfilter = yfilter;
    }
    if(value_path == "jAbortedPrefix")
    {
        jabortedprefix.yfilter = yfilter;
    }
    if(value_path == "jAlignLeafValues")
    {
        jalignleafvalues.yfilter = yfilter;
    }
    if(value_path == "jAllowDeleteAll")
    {
        jallowdeleteall.yfilter = yfilter;
    }
    if(value_path == "jErrorPrefix")
    {
        jerrorprefix.yfilter = yfilter;
    }
    if(value_path == "jExtendedShow")
    {
        jextendedshow.yfilter = yfilter;
    }
    if(value_path == "jHideHelp")
    {
        jhidehelp.yfilter = yfilter;
    }
    if(value_path == "jShowCR")
    {
        jshowcr.yfilter = yfilter;
    }
    if(value_path == "jShowTableRecursive")
    {
        jshowtablerecursive.yfilter = yfilter;
    }
    if(value_path == "jShowUnset")
    {
        jshowunset.yfilter = yfilter;
    }
    if(value_path == "jShowUnsetText")
    {
        jshowunsettext.yfilter = yfilter;
    }
    if(value_path == "jStatusFormat")
    {
        jstatusformat.yfilter = yfilter;
    }
    if(value_path == "jWarningPrefix")
    {
        jwarningprefix.yfilter = yfilter;
    }
    if(value_path == "laxBarQuoting")
    {
        laxbarquoting.yfilter = yfilter;
    }
    if(value_path == "leafPrompting")
    {
        leafprompting.yfilter = yfilter;
    }
    if(value_path == "loadActivityClock")
    {
        loadactivityclock.yfilter = yfilter;
    }
    if(value_path == "mapActions")
    {
        mapactions.yfilter = yfilter;
    }
    if(value_path == "matchCompletionsFormat")
    {
        matchcompletionsformat.yfilter = yfilter;
    }
    if(value_path == "messageFormat")
    {
        messageformat.yfilter = yfilter;
    }
    if(value_path == "messageMaxSize")
    {
        messagemaxsize.yfilter = yfilter;
    }
    if(value_path == "messageQueueSize")
    {
        messagequeuesize.yfilter = yfilter;
    }
    if(value_path == "messageWordWrap")
    {
        messagewordwrap.yfilter = yfilter;
    }
    if(value_path == "mixedMode")
    {
        mixedmode.yfilter = yfilter;
    }
    if(value_path == "modeInfoInAAA")
    {
        modeinfoinaaa.yfilter = yfilter;
    }
    if(value_path == "modeInfoInAudit")
    {
        modeinfoinaudit.yfilter = yfilter;
    }
    if(value_path == "modeNameStyle")
    {
        modenamestyle.yfilter = yfilter;
    }
    if(value_path == "moreBufferLines")
    {
        morebufferlines.yfilter = yfilter;
    }
    if(value_path == "multiPatternOperation")
    {
        multipatternoperation.yfilter = yfilter;
    }
    if(value_path == "newInsert")
    {
        newinsert.yfilter = yfilter;
    }
    if(value_path == "newLogout")
    {
        newlogout.yfilter = yfilter;
    }
    if(value_path == "noFollowIncompleteCommand")
    {
        nofollowincompletecommand.yfilter = yfilter;
    }
    if(value_path == "noMatchCompletionsFormat")
    {
        nomatchcompletionsformat.yfilter = yfilter;
    }
    if(value_path == "oldDetailsArg")
    {
        olddetailsarg.yfilter = yfilter;
    }
    if(value_path == "orderedShowConfig")
    {
        orderedshowconfig.yfilter = yfilter;
    }
    if(value_path == "pipeHelpMode")
    {
        pipehelpmode.yfilter = yfilter;
    }
    if(value_path == "possibleCompletionsFormat")
    {
        possiblecompletionsformat.yfilter = yfilter;
    }
    if(value_path == "prettifyStatsName")
    {
        prettifystatsname.yfilter = yfilter;
    }
    if(value_path == "prioritizeSubmodeCmds")
    {
        prioritizesubmodecmds.yfilter = yfilter;
    }
    if(value_path == "prompt1")
    {
        prompt1.yfilter = yfilter;
    }
    if(value_path == "prompt2")
    {
        prompt2.yfilter = yfilter;
    }
    if(value_path == "promptEnumLimit")
    {
        promptenumlimit.yfilter = yfilter;
    }
    if(value_path == "promptHostnameDelimiter")
    {
        prompthostnamedelimiter.yfilter = yfilter;
    }
    if(value_path == "promptSessionsCLI")
    {
        promptsessionscli.yfilter = yfilter;
    }
    if(value_path == "quickSshTeardown")
    {
        quicksshteardown.yfilter = yfilter;
    }
    if(value_path == "quoteStyle")
    {
        quotestyle.yfilter = yfilter;
    }
    if(value_path == "reallocateOperTrans")
    {
        reallocateopertrans.yfilter = yfilter;
    }
    if(value_path == "reconfirmHidden")
    {
        reconfirmhidden.yfilter = yfilter;
    }
    if(value_path == "reportInvalidCompletionInput")
    {
        reportinvalidcompletioninput.yfilter = yfilter;
    }
    if(value_path == "restrictedFileAccess")
    {
        restrictedfileaccess.yfilter = yfilter;
    }
    if(value_path == "restrictedFileRegexp")
    {
        restrictedfileregexp.yfilter = yfilter;
    }
    if(value_path == "rollbackAAA")
    {
        rollbackaaa.yfilter = yfilter;
    }
    if(value_path == "rollbackMax")
    {
        rollbackmax.yfilter = yfilter;
    }
    if(value_path == "rollbackNumbering")
    {
        rollbacknumbering.yfilter = yfilter;
    }
    if(value_path == "rollbackNumberingInitial")
    {
        rollbacknumberinginitial.yfilter = yfilter;
    }
    if(value_path == "safeScriptExecution")
    {
        safescriptexecution.yfilter = yfilter;
    }
    if(value_path == "showAllNs")
    {
        showallns.yfilter = yfilter;
    }
    if(value_path == "showAnnotations")
    {
        showannotations.yfilter = yfilter;
    }
    if(value_path == "showCommitProgress")
    {
        showcommitprogress.yfilter = yfilter;
    }
    if(value_path == "showDefaults")
    {
        showdefaults.yfilter = yfilter;
    }
    if(value_path == "showDescription")
    {
        showdescription.yfilter = yfilter;
    }
    if(value_path == "showEditors")
    {
        showeditors.yfilter = yfilter;
    }
    if(value_path == "showEmptyContainers")
    {
        showemptycontainers.yfilter = yfilter;
    }
    if(value_path == "showKeyName")
    {
        showkeyname.yfilter = yfilter;
    }
    if(value_path == "showLogDirectory")
    {
        showlogdirectory.yfilter = yfilter;
    }
    if(value_path == "showMatchBeforePossible")
    {
        showmatchbeforepossible.yfilter = yfilter;
    }
    if(value_path == "showNedErrorAsInfo")
    {
        shownederrorasinfo.yfilter = yfilter;
    }
    if(value_path == "showPipe")
    {
        showpipe.yfilter = yfilter;
    }
    if(value_path == "showPipeConfig")
    {
        showpipeconfig.yfilter = yfilter;
    }
    if(value_path == "showServiceMetaData")
    {
        showservicemetadata.yfilter = yfilter;
    }
    if(value_path == "showSubsystemMessages")
    {
        showsubsystemmessages.yfilter = yfilter;
    }
    if(value_path == "showTableLabelsIfMultiple")
    {
        showtablelabelsifmultiple.yfilter = yfilter;
    }
    if(value_path == "showTags")
    {
        showtags.yfilter = yfilter;
    }
    if(value_path == "singleElemPattern")
    {
        singleelempattern.yfilter = yfilter;
    }
    if(value_path == "smartRenameFiltering")
    {
        smartrenamefiltering.yfilter = yfilter;
    }
    if(value_path == "sortLocalCmds")
    {
        sortlocalcmds.yfilter = yfilter;
    }
    if(value_path == "sortShowElems")
    {
        sortshowelems.yfilter = yfilter;
    }
    if(value_path == "sortSubmodeCmds")
    {
        sortsubmodecmds.yfilter = yfilter;
    }
    if(value_path == "startupScriptNonInteractive")
    {
        startupscriptnoninteractive.yfilter = yfilter;
    }
    if(value_path == "stopLoadOnError")
    {
        stoploadonerror.yfilter = yfilter;
    }
    if(value_path == "strictRefsOnLoad")
    {
        strictrefsonload.yfilter = yfilter;
    }
    if(value_path == "style")
    {
        style.yfilter = yfilter;
    }
    if(value_path == "supportQuotedEOL")
    {
        supportquotedeol.yfilter = yfilter;
    }
    if(value_path == "suppressFastShow")
    {
        suppressfastshow.yfilter = yfilter;
    }
    if(value_path == "suppressNedErrors")
    {
        suppressnederrors.yfilter = yfilter;
    }
    if(value_path == "suppressRangeKeyword")
    {
        suppressrangekeyword.yfilter = yfilter;
    }
    if(value_path == "tabExtend")
    {
        tabextend.yfilter = yfilter;
    }
    if(value_path == "tableLabel")
    {
        tablelabel.yfilter = yfilter;
    }
    if(value_path == "tableLookAhead")
    {
        tablelookahead.yfilter = yfilter;
    }
    if(value_path == "tableOverflowTruncate")
    {
        tableoverflowtruncate.yfilter = yfilter;
    }
    if(value_path == "timezone")
    {
        timezone.yfilter = yfilter;
    }
    if(value_path == "topLevelCmdsInSubMode")
    {
        toplevelcmdsinsubmode.yfilter = yfilter;
    }
    if(value_path == "transactionCtrlCmds")
    {
        transactionctrlcmds.yfilter = yfilter;
    }
    if(value_path == "transactions")
    {
        transactions.yfilter = yfilter;
    }
    if(value_path == "trimDefaultSave")
    {
        trimdefaultsave.yfilter = yfilter;
    }
    if(value_path == "trimDefaultShow")
    {
        trimdefaultshow.yfilter = yfilter;
    }
    if(value_path == "unifiedHistory")
    {
        unifiedhistory.yfilter = yfilter;
    }
    if(value_path == "useDoubleDotRanges")
    {
        usedoubledotranges.yfilter = yfilter;
    }
    if(value_path == "useExposeNsPrefix")
    {
        useexposensprefix.yfilter = yfilter;
    }
    if(value_path == "useShortEnabled")
    {
        useshortenabled.yfilter = yfilter;
    }
    if(value_path == "utcOffset")
    {
        utcoffset.yfilter = yfilter;
    }
    if(value_path == "whoHistoryDateTimeFormat")
    {
        whohistorydatetimeformat.yfilter = yfilter;
    }
    if(value_path == "whoShowMode")
    {
        whoshowmode.yfilter = yfilter;
    }
    if(value_path == "withDefaults")
    {
        withdefaults.yfilter = yfilter;
    }
    if(value_path == "wrapInfo")
    {
        wrapinfo.yfilter = yfilter;
    }
    if(value_path == "wrapPrompt")
    {
        wrapprompt.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoWizard" || name == "spaceCompletion" || name == "ssh" || name == "suppressCommitMessages" || name == "templateFilter" || name == "timestamp" || name == "addErrorPrefixSuffix" || name == "addExtraTableSpacing" || name == "allOrNothingLoad" || name == "allowAbbrevCmds" || name == "allowAbbrevCmdsOnLoad" || name == "allowAbbrevEnums" || name == "allowAbbrevKeys" || name == "allowAbbrevParamNames" || name == "allowAllAsWildcard" || name == "allowCaseInsensitiveEnums" || name == "allowImplicitWildcard" || name == "allowOldStyleModeCmds" || name == "allowOverwriteOnCopy" || name == "allowParenQuotes" || name == "allowRangeExpression" || name == "allowRangeExpressionAllTypes" || name == "allowTableCellWrap" || name == "allowTableOverflow" || name == "allowWildcard" || name == "asyncPromptRefresh" || name == "auditLogMode" || name == "autocommitLoad" || name == "autocommitLoadChunkSize" || name == "banner" || name == "bannerFile" || name == "cAbortedPrefix" || name == "cAlignLeafValues" || name == "caseInsensitive" || name == "caseInsensitiveKeys" || name == "cErrorPrefix" || name == "cExtendedCmdSearch" || name == "cHelp" || name == "cmdAAAForAutowizard" || name == "cModeExitFormat" || name == "columnStats" || name == "commandTimeout" || name == "commitActivityClock" || name == "commitMessage" || name == "commitMessageFormat" || name == "commitRetryTimeout" || name == "compactShow" || name == "compactStatsShow" || name == "compactTable" || name == "completionListLine" || name == "completionMetaInfo" || name == "completionShowMax" || name == "completionShowOldVal" || name == "compListCompact" || name == "confirmUncommitedOnExit" || name == "continueOnErrorCmdStack" || name == "cPrivate" || name == "cPrompt1" || name == "cPrompt2" || name == "cRestrictiveNo" || name == "cSilentNo" || name == "cStylePromptInJStyle" || name == "cSuppressCmdSearch" || name == "cTab" || name == "cTabInfo" || name == "cWarningPrefix" || name == "defaultDisplayLevel" || name == "defaultPrefix" || name == "defaultTableBehavior" || name == "dequoteHidden" || name == "disableIdleTimeoutOnCmd" || name == "disablePipe" || name == "disablePipeConfig" || name == "displayEmptyConfigContainers" || name == "displayNonPresenceAttributes" || name == "docWrap" || name == "editWrapMode" || name == "enabled" || name == "enableDisplayGroups" || name == "enableDisplayLevel" || name == "enableLoadMerge" || name == "enterSubmodeOnLeaf" || name == "enumKeyInfo" || name == "escapeBackslash" || name == "execNavigationCmds" || name == "exitConfigModeOnCtrlC" || name == "exitModeOnEmptyRange" || name == "expandAliasEscape" || name == "expandAliasOnCompletion" || name == "explicitSetCreate" || name == "externalActionErrorMsg" || name == "forcedExitFormat" || name == "hideDotFiles" || name == "historyMaxSize" || name == "historyRemoveDuplicates" || name == "historySave" || name == "idleTimeout" || name == "ignoreLeadingWhitespace" || name == "ignoreShowWithDefaultOnDiff" || name == "ignoreSubsystemFailures" || name == "inconsistentDatabaseSuffix" || name == "indentTemplates" || name == "infoOnMatch" || name == "infoOnSpace" || name == "infoOnTab" || name == "inheritPaginate" || name == "instanceDescription" || name == "invalidDataString" || name == "jAbortedPrefix" || name == "jAlignLeafValues" || name == "jAllowDeleteAll" || name == "jErrorPrefix" || name == "jExtendedShow" || name == "jHideHelp" || name == "jShowCR" || name == "jShowTableRecursive" || name == "jShowUnset" || name == "jShowUnsetText" || name == "jStatusFormat" || name == "jWarningPrefix" || name == "laxBarQuoting" || name == "leafPrompting" || name == "loadActivityClock" || name == "mapActions" || name == "matchCompletionsFormat" || name == "messageFormat" || name == "messageMaxSize" || name == "messageQueueSize" || name == "messageWordWrap" || name == "mixedMode" || name == "modeInfoInAAA" || name == "modeInfoInAudit" || name == "modeNameStyle" || name == "moreBufferLines" || name == "multiPatternOperation" || name == "newInsert" || name == "newLogout" || name == "noFollowIncompleteCommand" || name == "noMatchCompletionsFormat" || name == "oldDetailsArg" || name == "orderedShowConfig" || name == "pipeHelpMode" || name == "possibleCompletionsFormat" || name == "prettifyStatsName" || name == "prioritizeSubmodeCmds" || name == "prompt1" || name == "prompt2" || name == "promptEnumLimit" || name == "promptHostnameDelimiter" || name == "promptSessionsCLI" || name == "quickSshTeardown" || name == "quoteStyle" || name == "reallocateOperTrans" || name == "reconfirmHidden" || name == "reportInvalidCompletionInput" || name == "restrictedFileAccess" || name == "restrictedFileRegexp" || name == "rollbackAAA" || name == "rollbackMax" || name == "rollbackNumbering" || name == "rollbackNumberingInitial" || name == "safeScriptExecution" || name == "showAllNs" || name == "showAnnotations" || name == "showCommitProgress" || name == "showDefaults" || name == "showDescription" || name == "showEditors" || name == "showEmptyContainers" || name == "showKeyName" || name == "showLogDirectory" || name == "showMatchBeforePossible" || name == "showNedErrorAsInfo" || name == "showPipe" || name == "showPipeConfig" || name == "showServiceMetaData" || name == "showSubsystemMessages" || name == "showTableLabelsIfMultiple" || name == "showTags" || name == "singleElemPattern" || name == "smartRenameFiltering" || name == "sortLocalCmds" || name == "sortShowElems" || name == "sortSubmodeCmds" || name == "startupScriptNonInteractive" || name == "stopLoadOnError" || name == "strictRefsOnLoad" || name == "style" || name == "supportQuotedEOL" || name == "suppressFastShow" || name == "suppressNedErrors" || name == "suppressRangeKeyword" || name == "tabExtend" || name == "tableLabel" || name == "tableLookAhead" || name == "tableOverflowTruncate" || name == "timezone" || name == "topLevelCmdsInSubMode" || name == "transactionCtrlCmds" || name == "transactions" || name == "trimDefaultSave" || name == "trimDefaultShow" || name == "unifiedHistory" || name == "useDoubleDotRanges" || name == "useExposeNsPrefix" || name == "useShortEnabled" || name == "utcOffset" || name == "whoHistoryDateTimeFormat" || name == "whoShowMode" || name == "withDefaults" || name == "wrapInfo" || name == "wrapPrompt")
        return true;
    return false;
}

Confdconfig::Cli::Spacecompletion::Spacecompletion()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "spaceCompletion"; yang_parent_name = "cli";
}

Confdconfig::Cli::Spacecompletion::~Spacecompletion()
{
}

bool Confdconfig::Cli::Spacecompletion::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Cli::Spacecompletion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Cli::Spacecompletion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spaceCompletion";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Spacecompletion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Spacecompletion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Spacecompletion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Spacecompletion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::Spacecompletion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Spacecompletion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Cli::Timestamp::Timestamp()
    :
    clock24{YType::boolean, "clock24"},
    enabled{YType::boolean, "enabled"},
    format{YType::str, "format"}
{
    yang_name = "timestamp"; yang_parent_name = "cli";
}

Confdconfig::Cli::Timestamp::~Timestamp()
{
}

bool Confdconfig::Cli::Timestamp::has_data() const
{
    return clock24.is_set
	|| enabled.is_set
	|| format.is_set;
}

bool Confdconfig::Cli::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock24.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Confdconfig::Cli::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock24.is_set || is_set(clock24.yfilter)) leaf_name_data.push_back(clock24.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock24")
    {
        clock24 = value;
        clock24.value_namespace = name_space;
        clock24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock24")
    {
        clock24.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock24" || name == "enabled" || name == "format")
        return true;
    return false;
}

Confdconfig::Cli::Autowizard::Autowizard()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "autoWizard"; yang_parent_name = "cli";
}

Confdconfig::Cli::Autowizard::~Autowizard()
{
}

bool Confdconfig::Cli::Autowizard::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Cli::Autowizard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Cli::Autowizard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoWizard";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Autowizard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Autowizard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Autowizard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Autowizard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::Autowizard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Autowizard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Cli::Ssh::Ssh()
    :
    banner{YType::str, "banner"},
    bannerfile{YType::str, "bannerFile"},
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "cli";
}

Confdconfig::Cli::Ssh::~Ssh()
{
}

bool Confdconfig::Cli::Ssh::has_data() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return banner.is_set
	|| bannerfile.is_set
	|| dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| port.is_set;
}

bool Confdconfig::Cli::Ssh::has_operation() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(banner.yfilter)
	|| ydk::is_set(bannerfile.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Cli::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());
    if (bannerfile.is_set || is_set(bannerfile.yfilter)) leaf_name_data.push_back(bannerfile.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bannerFile")
    {
        bannerfile = value;
        bannerfile.value_namespace = name_space;
        bannerfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
    if(value_path == "bannerFile")
    {
        bannerfile.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner" || name == "bannerFile" || name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "port")
        return true;
    return false;
}

Confdconfig::Cli::Suppresscommitmessages::Suppresscommitmessages()
    :
    context{YType::str, "context"}
{
    yang_name = "suppressCommitMessages"; yang_parent_name = "cli";
}

Confdconfig::Cli::Suppresscommitmessages::~Suppresscommitmessages()
{
}

bool Confdconfig::Cli::Suppresscommitmessages::has_data() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Confdconfig::Cli::Suppresscommitmessages::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Confdconfig::Cli::Suppresscommitmessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressCommitMessages";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Suppresscommitmessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Suppresscommitmessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Suppresscommitmessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Suppresscommitmessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Confdconfig::Cli::Suppresscommitmessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Suppresscommitmessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Confdconfig::Cli::Templatefilter::Templatefilter()
    :
    name{YType::str, "name"},
    callback{YType::str, "callback"}
{
    yang_name = "templateFilter"; yang_parent_name = "cli";
}

Confdconfig::Cli::Templatefilter::~Templatefilter()
{
}

bool Confdconfig::Cli::Templatefilter::has_data() const
{
    return name.is_set
	|| callback.is_set;
}

bool Confdconfig::Cli::Templatefilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(callback.yfilter);
}

std::string Confdconfig::Cli::Templatefilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateFilter" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Cli::Templatefilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (callback.is_set || is_set(callback.yfilter)) leaf_name_data.push_back(callback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Cli::Templatefilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Cli::Templatefilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Cli::Templatefilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callback")
    {
        callback = value;
        callback.value_namespace = name_space;
        callback.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Cli::Templatefilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "callback")
    {
        callback.yfilter = yfilter;
    }
}

bool Confdconfig::Cli::Templatefilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "callback")
        return true;
    return false;
}

Confdconfig::Webui::Webui()
    :
    absolutetimeout{YType::str, "absoluteTimeout"},
    allowsymlinks{YType::boolean, "allowSymlinks"},
    audit{YType::boolean, "audit"},
    cacherefreshsecs{YType::uint64, "cacheRefreshSecs"},
    customdir{YType::str, "customDir"},
    docroot{YType::str, "docroot"},
    enabled{YType::boolean, "enabled"},
    idletimeout{YType::str, "idleTimeout"},
    logindir{YType::str, "loginDir"},
    matchhostname{YType::boolean, "matchHostName"},
    maxrefentries{YType::uint64, "maxRefEntries"},
    ratelimiting{YType::uint64, "rateLimiting"},
    servername{YType::str, "serverName"},
    x_frame_options{YType::enumeration, "X-Frame-Options"}
    	,
    cgi(nullptr) // presence node
	,customheaders(nullptr) // presence node
	,disableauth(nullptr) // presence node
	,transport(nullptr) // presence node
{
    yang_name = "webui"; yang_parent_name = "confdConfig";
}

Confdconfig::Webui::~Webui()
{
}

bool Confdconfig::Webui::has_data() const
{
    return absolutetimeout.is_set
	|| allowsymlinks.is_set
	|| audit.is_set
	|| cacherefreshsecs.is_set
	|| customdir.is_set
	|| docroot.is_set
	|| enabled.is_set
	|| idletimeout.is_set
	|| logindir.is_set
	|| matchhostname.is_set
	|| maxrefentries.is_set
	|| ratelimiting.is_set
	|| servername.is_set
	|| x_frame_options.is_set
	|| (cgi !=  nullptr && cgi->has_data())
	|| (customheaders !=  nullptr && customheaders->has_data())
	|| (disableauth !=  nullptr && disableauth->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Confdconfig::Webui::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolutetimeout.yfilter)
	|| ydk::is_set(allowsymlinks.yfilter)
	|| ydk::is_set(audit.yfilter)
	|| ydk::is_set(cacherefreshsecs.yfilter)
	|| ydk::is_set(customdir.yfilter)
	|| ydk::is_set(docroot.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(idletimeout.yfilter)
	|| ydk::is_set(logindir.yfilter)
	|| ydk::is_set(matchhostname.yfilter)
	|| ydk::is_set(maxrefentries.yfilter)
	|| ydk::is_set(ratelimiting.yfilter)
	|| ydk::is_set(servername.yfilter)
	|| ydk::is_set(x_frame_options.yfilter)
	|| (cgi !=  nullptr && cgi->has_operation())
	|| (customheaders !=  nullptr && customheaders->has_operation())
	|| (disableauth !=  nullptr && disableauth->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Confdconfig::Webui::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webui";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolutetimeout.is_set || is_set(absolutetimeout.yfilter)) leaf_name_data.push_back(absolutetimeout.get_name_leafdata());
    if (allowsymlinks.is_set || is_set(allowsymlinks.yfilter)) leaf_name_data.push_back(allowsymlinks.get_name_leafdata());
    if (audit.is_set || is_set(audit.yfilter)) leaf_name_data.push_back(audit.get_name_leafdata());
    if (cacherefreshsecs.is_set || is_set(cacherefreshsecs.yfilter)) leaf_name_data.push_back(cacherefreshsecs.get_name_leafdata());
    if (customdir.is_set || is_set(customdir.yfilter)) leaf_name_data.push_back(customdir.get_name_leafdata());
    if (docroot.is_set || is_set(docroot.yfilter)) leaf_name_data.push_back(docroot.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (idletimeout.is_set || is_set(idletimeout.yfilter)) leaf_name_data.push_back(idletimeout.get_name_leafdata());
    if (logindir.is_set || is_set(logindir.yfilter)) leaf_name_data.push_back(logindir.get_name_leafdata());
    if (matchhostname.is_set || is_set(matchhostname.yfilter)) leaf_name_data.push_back(matchhostname.get_name_leafdata());
    if (maxrefentries.is_set || is_set(maxrefentries.yfilter)) leaf_name_data.push_back(maxrefentries.get_name_leafdata());
    if (ratelimiting.is_set || is_set(ratelimiting.yfilter)) leaf_name_data.push_back(ratelimiting.get_name_leafdata());
    if (servername.is_set || is_set(servername.yfilter)) leaf_name_data.push_back(servername.get_name_leafdata());
    if (x_frame_options.is_set || is_set(x_frame_options.yfilter)) leaf_name_data.push_back(x_frame_options.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cgi")
    {
        if(cgi == nullptr)
        {
            cgi = std::make_shared<Confdconfig::Webui::Cgi>();
        }
        return cgi;
    }

    if(child_yang_name == "customHeaders")
    {
        if(customheaders == nullptr)
        {
            customheaders = std::make_shared<Confdconfig::Webui::Customheaders>();
        }
        return customheaders;
    }

    if(child_yang_name == "disableAuth")
    {
        if(disableauth == nullptr)
        {
            disableauth = std::make_shared<Confdconfig::Webui::Disableauth>();
        }
        return disableauth;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Confdconfig::Webui::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cgi != nullptr)
    {
        children["cgi"] = cgi;
    }

    if(customheaders != nullptr)
    {
        children["customHeaders"] = customheaders;
    }

    if(disableauth != nullptr)
    {
        children["disableAuth"] = disableauth;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Confdconfig::Webui::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absoluteTimeout")
    {
        absolutetimeout = value;
        absolutetimeout.value_namespace = name_space;
        absolutetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowSymlinks")
    {
        allowsymlinks = value;
        allowsymlinks.value_namespace = name_space;
        allowsymlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit")
    {
        audit = value;
        audit.value_namespace = name_space;
        audit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheRefreshSecs")
    {
        cacherefreshsecs = value;
        cacherefreshsecs.value_namespace = name_space;
        cacherefreshsecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customDir")
    {
        customdir = value;
        customdir.value_namespace = name_space;
        customdir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docroot")
    {
        docroot = value;
        docroot.value_namespace = name_space;
        docroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout = value;
        idletimeout.value_namespace = name_space;
        idletimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loginDir")
    {
        logindir = value;
        logindir.value_namespace = name_space;
        logindir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchHostName")
    {
        matchhostname = value;
        matchhostname.value_namespace = name_space;
        matchhostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRefEntries")
    {
        maxrefentries = value;
        maxrefentries.value_namespace = name_space;
        maxrefentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateLimiting")
    {
        ratelimiting = value;
        ratelimiting.value_namespace = name_space;
        ratelimiting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serverName")
    {
        servername = value;
        servername.value_namespace = name_space;
        servername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "X-Frame-Options")
    {
        x_frame_options = value;
        x_frame_options.value_namespace = name_space;
        x_frame_options.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absoluteTimeout")
    {
        absolutetimeout.yfilter = yfilter;
    }
    if(value_path == "allowSymlinks")
    {
        allowsymlinks.yfilter = yfilter;
    }
    if(value_path == "audit")
    {
        audit.yfilter = yfilter;
    }
    if(value_path == "cacheRefreshSecs")
    {
        cacherefreshsecs.yfilter = yfilter;
    }
    if(value_path == "customDir")
    {
        customdir.yfilter = yfilter;
    }
    if(value_path == "docroot")
    {
        docroot.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout.yfilter = yfilter;
    }
    if(value_path == "loginDir")
    {
        logindir.yfilter = yfilter;
    }
    if(value_path == "matchHostName")
    {
        matchhostname.yfilter = yfilter;
    }
    if(value_path == "maxRefEntries")
    {
        maxrefentries.yfilter = yfilter;
    }
    if(value_path == "rateLimiting")
    {
        ratelimiting.yfilter = yfilter;
    }
    if(value_path == "serverName")
    {
        servername.yfilter = yfilter;
    }
    if(value_path == "X-Frame-Options")
    {
        x_frame_options.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cgi" || name == "customHeaders" || name == "disableAuth" || name == "transport" || name == "absoluteTimeout" || name == "allowSymlinks" || name == "audit" || name == "cacheRefreshSecs" || name == "customDir" || name == "docroot" || name == "enabled" || name == "idleTimeout" || name == "loginDir" || name == "matchHostName" || name == "maxRefEntries" || name == "rateLimiting" || name == "serverName" || name == "X-Frame-Options")
        return true;
    return false;
}

Confdconfig::Webui::Customheaders::Customheaders()
{
    yang_name = "customHeaders"; yang_parent_name = "webui";
}

Confdconfig::Webui::Customheaders::~Customheaders()
{
}

bool Confdconfig::Webui::Customheaders::has_data() const
{
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Webui::Customheaders::has_operation() const
{
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Webui::Customheaders::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customHeaders";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Customheaders::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Customheaders::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        for(auto const & c : header)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Webui::Customheaders::Header>();
        c->parent = this;
        header.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Customheaders::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : header)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Webui::Customheaders::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Webui::Customheaders::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Webui::Customheaders::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header")
        return true;
    return false;
}

Confdconfig::Webui::Customheaders::Header::Header()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{
    yang_name = "header"; yang_parent_name = "customHeaders";
}

Confdconfig::Webui::Customheaders::Header::~Header()
{
}

bool Confdconfig::Webui::Customheaders::Header::has_data() const
{
    return name.is_set
	|| value_.is_set;
}

bool Confdconfig::Webui::Customheaders::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Confdconfig::Webui::Customheaders::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Customheaders::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/customHeaders/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Customheaders::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Customheaders::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Webui::Customheaders::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::Customheaders::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Customheaders::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value")
        return true;
    return false;
}

Confdconfig::Webui::Disableauth::Disableauth()
    :
    dir{YType::str, "dir"}
{
    yang_name = "disableAuth"; yang_parent_name = "webui";
}

Confdconfig::Webui::Disableauth::~Disableauth()
{
}

bool Confdconfig::Webui::Disableauth::has_data() const
{
    for (auto const & leaf : dir.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Confdconfig::Webui::Disableauth::has_operation() const
{
    for (auto const & leaf : dir.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter);
}

std::string Confdconfig::Webui::Disableauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disableAuth";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Disableauth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dir_name_datas = dir.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dir_name_datas.begin(), dir_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Disableauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Disableauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Webui::Disableauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir.append(value);
    }
}

void Confdconfig::Webui::Disableauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Disableauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir")
        return true;
    return false;
}

Confdconfig::Webui::Transport::Transport()
    :
    ssl(nullptr) // presence node
	,tcp(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "webui";
}

Confdconfig::Webui::Transport::~Transport()
{
}

bool Confdconfig::Webui::Transport::has_data() const
{
    return (ssl !=  nullptr && ssl->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Confdconfig::Webui::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Confdconfig::Webui::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Confdconfig::Webui::Transport::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Confdconfig::Webui::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Confdconfig::Webui::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Webui::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Webui::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssl" || name == "tcp")
        return true;
    return false;
}

Confdconfig::Webui::Transport::Tcp::Tcp()
    :
    disablenonauthredirect{YType::boolean, "disableNonAuthRedirect"},
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"},
    redirect{YType::str, "redirect"}
{
    yang_name = "tcp"; yang_parent_name = "transport";
}

Confdconfig::Webui::Transport::Tcp::~Tcp()
{
}

bool Confdconfig::Webui::Transport::Tcp::has_data() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return disablenonauthredirect.is_set
	|| dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| port.is_set
	|| redirect.is_set;
}

bool Confdconfig::Webui::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disablenonauthredirect.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(redirect.yfilter);
}

std::string Confdconfig::Webui::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Transport::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/transport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disablenonauthredirect.is_set || is_set(disablenonauthredirect.yfilter)) leaf_name_data.push_back(disablenonauthredirect.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Webui::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disableNonAuthRedirect")
    {
        disablenonauthredirect = value;
        disablenonauthredirect.value_namespace = name_space;
        disablenonauthredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disableNonAuthRedirect")
    {
        disablenonauthredirect.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disableNonAuthRedirect" || name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "port" || name == "redirect")
        return true;
    return false;
}

Confdconfig::Webui::Transport::Ssl::Ssl()
    :
    cacertfile{YType::str, "caCertFile"},
    certfile{YType::str, "certFile"},
    ciphers{YType::str, "ciphers"},
    depth{YType::uint64, "depth"},
    disablenonauthredirect{YType::boolean, "disableNonAuthRedirect"},
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    keyfile{YType::str, "keyFile"},
    port{YType::uint16, "port"},
    protocols{YType::str, "protocols"},
    redirect{YType::str, "redirect"},
    verify{YType::uint32, "verify"}
{
    yang_name = "ssl"; yang_parent_name = "transport";
}

Confdconfig::Webui::Transport::Ssl::~Ssl()
{
}

bool Confdconfig::Webui::Transport::Ssl::has_data() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return cacertfile.is_set
	|| certfile.is_set
	|| ciphers.is_set
	|| depth.is_set
	|| disablenonauthredirect.is_set
	|| dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| keyfile.is_set
	|| port.is_set
	|| protocols.is_set
	|| redirect.is_set
	|| verify.is_set;
}

bool Confdconfig::Webui::Transport::Ssl::has_operation() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cacertfile.yfilter)
	|| ydk::is_set(certfile.yfilter)
	|| ydk::is_set(ciphers.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(disablenonauthredirect.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(keyfile.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocols.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Confdconfig::Webui::Transport::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Transport::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/transport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cacertfile.is_set || is_set(cacertfile.yfilter)) leaf_name_data.push_back(cacertfile.get_name_leafdata());
    if (certfile.is_set || is_set(certfile.yfilter)) leaf_name_data.push_back(certfile.get_name_leafdata());
    if (ciphers.is_set || is_set(ciphers.yfilter)) leaf_name_data.push_back(ciphers.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (disablenonauthredirect.is_set || is_set(disablenonauthredirect.yfilter)) leaf_name_data.push_back(disablenonauthredirect.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (keyfile.is_set || is_set(keyfile.yfilter)) leaf_name_data.push_back(keyfile.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Transport::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Transport::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Webui::Transport::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "caCertFile")
    {
        cacertfile = value;
        cacertfile.value_namespace = name_space;
        cacertfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certFile")
    {
        certfile = value;
        certfile.value_namespace = name_space;
        certfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciphers")
    {
        ciphers = value;
        ciphers.value_namespace = name_space;
        ciphers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableNonAuthRedirect")
    {
        disablenonauthredirect = value;
        disablenonauthredirect.value_namespace = name_space;
        disablenonauthredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyFile")
    {
        keyfile = value;
        keyfile.value_namespace = name_space;
        keyfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::Transport::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "caCertFile")
    {
        cacertfile.yfilter = yfilter;
    }
    if(value_path == "certFile")
    {
        certfile.yfilter = yfilter;
    }
    if(value_path == "ciphers")
    {
        ciphers.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "disableNonAuthRedirect")
    {
        disablenonauthredirect.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "keyFile")
    {
        keyfile.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Transport::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caCertFile" || name == "certFile" || name == "ciphers" || name == "depth" || name == "disableNonAuthRedirect" || name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "keyFile" || name == "port" || name == "protocols" || name == "redirect" || name == "verify")
        return true;
    return false;
}

Confdconfig::Webui::Cgi::Cgi()
    :
    dir{YType::str, "dir"},
    enabled{YType::boolean, "enabled"},
    maxrequestlength{YType::uint16, "maxRequestLength"},
    requestfilter{YType::str, "requestFilter"}
    	,
    php(nullptr) // presence node
{
    yang_name = "cgi"; yang_parent_name = "webui";
}

Confdconfig::Webui::Cgi::~Cgi()
{
}

bool Confdconfig::Webui::Cgi::has_data() const
{
    return dir.is_set
	|| enabled.is_set
	|| maxrequestlength.is_set
	|| requestfilter.is_set
	|| (php !=  nullptr && php->has_data());
}

bool Confdconfig::Webui::Cgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(maxrequestlength.yfilter)
	|| ydk::is_set(requestfilter.yfilter)
	|| (php !=  nullptr && php->has_operation());
}

std::string Confdconfig::Webui::Cgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cgi";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Cgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (maxrequestlength.is_set || is_set(maxrequestlength.yfilter)) leaf_name_data.push_back(maxrequestlength.get_name_leafdata());
    if (requestfilter.is_set || is_set(requestfilter.yfilter)) leaf_name_data.push_back(requestfilter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Cgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "php")
    {
        if(php == nullptr)
        {
            php = std::make_shared<Confdconfig::Webui::Cgi::Php>();
        }
        return php;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Cgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(php != nullptr)
    {
        children["php"] = php;
    }

    return children;
}

void Confdconfig::Webui::Cgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRequestLength")
    {
        maxrequestlength = value;
        maxrequestlength.value_namespace = name_space;
        maxrequestlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requestFilter")
    {
        requestfilter = value;
        requestfilter.value_namespace = name_space;
        requestfilter.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::Cgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "maxRequestLength")
    {
        maxrequestlength.yfilter = yfilter;
    }
    if(value_path == "requestFilter")
    {
        requestfilter.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Cgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "php" || name == "dir" || name == "enabled" || name == "maxRequestLength" || name == "requestFilter")
        return true;
    return false;
}

Confdconfig::Webui::Cgi::Php::Php()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "php"; yang_parent_name = "cgi";
}

Confdconfig::Webui::Cgi::Php::~Php()
{
}

bool Confdconfig::Webui::Cgi::Php::has_data() const
{
    return enabled.is_set;
}

bool Confdconfig::Webui::Cgi::Php::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Confdconfig::Webui::Cgi::Php::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "php";

    return path_buffer.str();

}

const EntityPath Confdconfig::Webui::Cgi::Php::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/webui/cgi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Webui::Cgi::Php::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Webui::Cgi::Php::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Webui::Cgi::Php::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Webui::Cgi::Php::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Confdconfig::Webui::Cgi::Php::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Confdconfig::Rest::Rest()
    :
    enabled{YType::boolean, "enabled"},
    showhidden{YType::boolean, "showHidden"}
    	,
    customheaders(nullptr) // presence node
{
    yang_name = "rest"; yang_parent_name = "confdConfig";
}

Confdconfig::Rest::~Rest()
{
}

bool Confdconfig::Rest::has_data() const
{
    return enabled.is_set
	|| showhidden.is_set
	|| (customheaders !=  nullptr && customheaders->has_data());
}

bool Confdconfig::Rest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(showhidden.yfilter)
	|| (customheaders !=  nullptr && customheaders->has_operation());
}

std::string Confdconfig::Rest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest";

    return path_buffer.str();

}

const EntityPath Confdconfig::Rest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (showhidden.is_set || is_set(showhidden.yfilter)) leaf_name_data.push_back(showhidden.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Rest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customHeaders")
    {
        if(customheaders == nullptr)
        {
            customheaders = std::make_shared<Confdconfig::Rest::Customheaders>();
        }
        return customheaders;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Rest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(customheaders != nullptr)
    {
        children["customHeaders"] = customheaders;
    }

    return children;
}

void Confdconfig::Rest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "showHidden")
    {
        showhidden = value;
        showhidden.value_namespace = name_space;
        showhidden.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Rest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "showHidden")
    {
        showhidden.yfilter = yfilter;
    }
}

bool Confdconfig::Rest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customHeaders" || name == "enabled" || name == "showHidden")
        return true;
    return false;
}

Confdconfig::Rest::Customheaders::Customheaders()
{
    yang_name = "customHeaders"; yang_parent_name = "rest";
}

Confdconfig::Rest::Customheaders::~Customheaders()
{
}

bool Confdconfig::Rest::Customheaders::has_data() const
{
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Rest::Customheaders::has_operation() const
{
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Rest::Customheaders::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customHeaders";

    return path_buffer.str();

}

const EntityPath Confdconfig::Rest::Customheaders::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/rest/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Rest::Customheaders::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        for(auto const & c : header)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Rest::Customheaders::Header>();
        c->parent = this;
        header.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Rest::Customheaders::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : header)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Rest::Customheaders::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Rest::Customheaders::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Rest::Customheaders::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header")
        return true;
    return false;
}

Confdconfig::Rest::Customheaders::Header::Header()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{
    yang_name = "header"; yang_parent_name = "customHeaders";
}

Confdconfig::Rest::Customheaders::Header::~Header()
{
}

bool Confdconfig::Rest::Customheaders::Header::has_data() const
{
    return name.is_set
	|| value_.is_set;
}

bool Confdconfig::Rest::Customheaders::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Confdconfig::Rest::Customheaders::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Rest::Customheaders::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/rest/customHeaders/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Rest::Customheaders::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Rest::Customheaders::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Rest::Customheaders::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Rest::Customheaders::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Confdconfig::Rest::Customheaders::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value")
        return true;
    return false;
}

Confdconfig::Restconf::Restconf()
    :
    enabled{YType::boolean, "enabled"},
    rootresource{YType::str, "rootResource"}
{
    yang_name = "restconf"; yang_parent_name = "confdConfig";
}

Confdconfig::Restconf::~Restconf()
{
}

bool Confdconfig::Restconf::has_data() const
{
    return enabled.is_set
	|| rootresource.is_set;
}

bool Confdconfig::Restconf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(rootresource.yfilter);
}

std::string Confdconfig::Restconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restconf";

    return path_buffer.str();

}

const EntityPath Confdconfig::Restconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (rootresource.is_set || is_set(rootresource.yfilter)) leaf_name_data.push_back(rootresource.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Restconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Restconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Restconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootResource")
    {
        rootresource = value;
        rootresource.value_namespace = name_space;
        rootresource.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Restconf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "rootResource")
    {
        rootresource.yfilter = yfilter;
    }
}

bool Confdconfig::Restconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "rootResource")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxyforwarding()
    :
    autologin{YType::boolean, "autoLogin"}
{
    yang_name = "proxyForwarding"; yang_parent_name = "confdConfig";
}

Confdconfig::Proxyforwarding::~Proxyforwarding()
{
}

bool Confdconfig::Proxyforwarding::has_data() const
{
    for (std::size_t index=0; index<proxy.size(); index++)
    {
        if(proxy[index]->has_data())
            return true;
    }
    return autologin.is_set;
}

bool Confdconfig::Proxyforwarding::has_operation() const
{
    for (std::size_t index=0; index<proxy.size(); index++)
    {
        if(proxy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(autologin.yfilter);
}

std::string Confdconfig::Proxyforwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxyForwarding";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autologin.is_set || is_set(autologin.yfilter)) leaf_name_data.push_back(autologin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy")
    {
        for(auto const & c : proxy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Proxyforwarding::Proxy>();
        c->parent = this;
        proxy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : proxy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Proxyforwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autoLogin")
    {
        autologin = value;
        autologin.value_namespace = name_space;
        autologin.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Proxyforwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autoLogin")
    {
        autologin.yfilter = yfilter;
    }
}

bool Confdconfig::Proxyforwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy" || name == "autoLogin")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Proxy()
    :
    target{YType::str, "target"},
    address{YType::str, "address"}
    	,
    cli(nullptr) // presence node
	,netconf(nullptr) // presence node
{
    yang_name = "proxy"; yang_parent_name = "proxyForwarding";
}

Confdconfig::Proxyforwarding::Proxy::~Proxy()
{
}

bool Confdconfig::Proxyforwarding::Proxy::has_data() const
{
    return target.is_set
	|| address.is_set
	|| (cli !=  nullptr && cli->has_data())
	|| (netconf !=  nullptr && netconf->has_data());
}

bool Confdconfig::Proxyforwarding::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target.yfilter)
	|| ydk::is_set(address.yfilter)
	|| (cli !=  nullptr && cli->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation());
}

std::string Confdconfig::Proxyforwarding::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy" <<"[target='" <<target <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/proxyForwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Confdconfig::Proxyforwarding::Proxy::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf == nullptr)
        {
            netconf = std::make_shared<Confdconfig::Proxyforwarding::Proxy::Netconf>();
        }
        return netconf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    if(netconf != nullptr)
    {
        children["netconf"] = netconf;
    }

    return children;
}

void Confdconfig::Proxyforwarding::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Proxyforwarding::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Confdconfig::Proxyforwarding::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli" || name == "netconf" || name == "target" || name == "address")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Netconf::Netconf()
    :
    ssh(std::make_shared<Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh>())
	,tcp(std::make_shared<Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp>())
{
    ssh->parent = this;

    tcp->parent = this;

    yang_name = "netconf"; yang_parent_name = "proxy";
}

Confdconfig::Proxyforwarding::Proxy::Netconf::~Netconf()
{
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::has_data() const
{
    return (ssh !=  nullptr && ssh->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Confdconfig::Proxyforwarding::Proxy::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::Netconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Netconf' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh" || name == "tcp")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::Ssh()
    :
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "netconf";
}

Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::~Ssh()
{
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::has_data() const
{
    return port.is_set;
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssh' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{
    yang_name = "tcp"; yang_parent_name = "netconf";
}

Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::~Tcp()
{
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::has_data() const
{
    return port.is_set;
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Proxyforwarding::Proxy::Netconf::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Cli::Cli()
    :
    ssh(std::make_shared<Confdconfig::Proxyforwarding::Proxy::Cli::Ssh>())
{
    ssh->parent = this;

    yang_name = "cli"; yang_parent_name = "proxy";
}

Confdconfig::Proxyforwarding::Proxy::Cli::~Cli()
{
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::has_data() const
{
    return (ssh !=  nullptr && ssh->has_data());
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (ssh !=  nullptr && ssh->has_operation());
}

std::string Confdconfig::Proxyforwarding::Proxy::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::Cli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cli' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Proxyforwarding::Proxy::Cli::Ssh>();
        }
        return ssh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    return children;
}

void Confdconfig::Proxyforwarding::Proxy::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Proxyforwarding::Proxy::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh")
        return true;
    return false;
}

Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::Ssh()
    :
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "cli";
}

Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::~Ssh()
{
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::has_data() const
{
    return port.is_set;
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssh' in confd_dyncfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Proxyforwarding::Proxy::Cli::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Confdconfig::Snmpagent::Snmpagent()
    :
    authenticationfailurenotifyname{YType::str, "authenticationFailureNotifyName"},
    contexts{YType::str, "contexts"},
    dropwheninuse{YType::boolean, "dropWhenInUse"},
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"},
    sessionignoreport{YType::boolean, "sessionIgnorePort"},
    temporarystoragetime{YType::uint32, "temporaryStorageTime"}
    	,
    candidate(nullptr) // presence node
	,mibs(nullptr) // presence node
	,snmpengine(nullptr) // presence node
	,snmpversions(nullptr) // presence node
	,system(nullptr) // presence node
{
    yang_name = "snmpAgent"; yang_parent_name = "confdConfig";
}

Confdconfig::Snmpagent::~Snmpagent()
{
}

bool Confdconfig::Snmpagent::has_data() const
{
    for (auto const & leaf : contexts.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenticationfailurenotifyname.is_set
	|| dropwheninuse.is_set
	|| dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| port.is_set
	|| sessionignoreport.is_set
	|| temporarystoragetime.is_set
	|| (candidate !=  nullptr && candidate->has_data())
	|| (mibs !=  nullptr && mibs->has_data())
	|| (snmpengine !=  nullptr && snmpengine->has_data())
	|| (snmpversions !=  nullptr && snmpversions->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Confdconfig::Snmpagent::has_operation() const
{
    for (auto const & leaf : contexts.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticationfailurenotifyname.yfilter)
	|| ydk::is_set(contexts.yfilter)
	|| ydk::is_set(dropwheninuse.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(sessionignoreport.yfilter)
	|| ydk::is_set(temporarystoragetime.yfilter)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (mibs !=  nullptr && mibs->has_operation())
	|| (snmpengine !=  nullptr && snmpengine->has_operation())
	|| (snmpversions !=  nullptr && snmpversions->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Confdconfig::Snmpagent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpAgent";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticationfailurenotifyname.is_set || is_set(authenticationfailurenotifyname.yfilter)) leaf_name_data.push_back(authenticationfailurenotifyname.get_name_leafdata());
    if (dropwheninuse.is_set || is_set(dropwheninuse.yfilter)) leaf_name_data.push_back(dropwheninuse.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (sessionignoreport.is_set || is_set(sessionignoreport.yfilter)) leaf_name_data.push_back(sessionignoreport.get_name_leafdata());
    if (temporarystoragetime.is_set || is_set(temporarystoragetime.yfilter)) leaf_name_data.push_back(temporarystoragetime.get_name_leafdata());

    auto contexts_name_datas = contexts.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), contexts_name_datas.begin(), contexts_name_datas.end());
    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Confdconfig::Snmpagent::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "mibs")
    {
        if(mibs == nullptr)
        {
            mibs = std::make_shared<Confdconfig::Snmpagent::Mibs>();
        }
        return mibs;
    }

    if(child_yang_name == "snmpEngine")
    {
        if(snmpengine == nullptr)
        {
            snmpengine = std::make_shared<Confdconfig::Snmpagent::Snmpengine>();
        }
        return snmpengine;
    }

    if(child_yang_name == "snmpVersions")
    {
        if(snmpversions == nullptr)
        {
            snmpversions = std::make_shared<Confdconfig::Snmpagent::Snmpversions>();
        }
        return snmpversions;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Confdconfig::Snmpagent::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate != nullptr)
    {
        children["candidate"] = candidate;
    }

    if(mibs != nullptr)
    {
        children["mibs"] = mibs;
    }

    if(snmpengine != nullptr)
    {
        children["snmpEngine"] = snmpengine;
    }

    if(snmpversions != nullptr)
    {
        children["snmpVersions"] = snmpversions;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void Confdconfig::Snmpagent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticationFailureNotifyName")
    {
        authenticationfailurenotifyname = value;
        authenticationfailurenotifyname.value_namespace = name_space;
        authenticationfailurenotifyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contexts")
    {
        contexts.append(value);
    }
    if(value_path == "dropWhenInUse")
    {
        dropwheninuse = value;
        dropwheninuse.value_namespace = name_space;
        dropwheninuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionIgnorePort")
    {
        sessionignoreport = value;
        sessionignoreport.value_namespace = name_space;
        sessionignoreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temporaryStorageTime")
    {
        temporarystoragetime = value;
        temporarystoragetime.value_namespace = name_space;
        temporarystoragetime.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticationFailureNotifyName")
    {
        authenticationfailurenotifyname.yfilter = yfilter;
    }
    if(value_path == "contexts")
    {
        contexts.yfilter = yfilter;
    }
    if(value_path == "dropWhenInUse")
    {
        dropwheninuse.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "sessionIgnorePort")
    {
        sessionignoreport.yfilter = yfilter;
    }
    if(value_path == "temporaryStorageTime")
    {
        temporarystoragetime.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "mibs" || name == "snmpEngine" || name == "snmpVersions" || name == "system" || name == "authenticationFailureNotifyName" || name == "contexts" || name == "dropWhenInUse" || name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "port" || name == "sessionIgnorePort" || name == "temporaryStorageTime")
        return true;
    return false;
}

Confdconfig::Snmpagent::Mibs::Mibs()
    :
    file{YType::str, "file"},
    fromloadpath{YType::boolean, "fromLoadPath"}
{
    yang_name = "mibs"; yang_parent_name = "snmpAgent";
}

Confdconfig::Snmpagent::Mibs::~Mibs()
{
}

bool Confdconfig::Snmpagent::Mibs::has_data() const
{
    for (auto const & leaf : file.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fromloadpath.is_set;
}

bool Confdconfig::Snmpagent::Mibs::has_operation() const
{
    for (auto const & leaf : file.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(fromloadpath.yfilter);
}

std::string Confdconfig::Snmpagent::Mibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mibs";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::Mibs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fromloadpath.is_set || is_set(fromloadpath.yfilter)) leaf_name_data.push_back(fromloadpath.get_name_leafdata());

    auto file_name_datas = file.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), file_name_datas.begin(), file_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::Mibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::Mibs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpagent::Mibs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file.append(value);
    }
    if(value_path == "fromLoadPath")
    {
        fromloadpath = value;
        fromloadpath.value_namespace = name_space;
        fromloadpath.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::Mibs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "fromLoadPath")
    {
        fromloadpath.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::Mibs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "fromLoadPath")
        return true;
    return false;
}

Confdconfig::Snmpagent::Snmpversions::Snmpversions()
    :
    v1{YType::boolean, "v1"},
    v2c{YType::boolean, "v2c"},
    v3{YType::boolean, "v3"}
{
    yang_name = "snmpVersions"; yang_parent_name = "snmpAgent";
}

Confdconfig::Snmpagent::Snmpversions::~Snmpversions()
{
}

bool Confdconfig::Snmpagent::Snmpversions::has_data() const
{
    return v1.is_set
	|| v2c.is_set
	|| v3.is_set;
}

bool Confdconfig::Snmpagent::Snmpversions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1.yfilter)
	|| ydk::is_set(v2c.yfilter)
	|| ydk::is_set(v3.yfilter);
}

std::string Confdconfig::Snmpagent::Snmpversions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpVersions";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::Snmpversions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1.is_set || is_set(v1.yfilter)) leaf_name_data.push_back(v1.get_name_leafdata());
    if (v2c.is_set || is_set(v2c.yfilter)) leaf_name_data.push_back(v2c.get_name_leafdata());
    if (v3.is_set || is_set(v3.yfilter)) leaf_name_data.push_back(v3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::Snmpversions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::Snmpversions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpagent::Snmpversions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1")
    {
        v1 = value;
        v1.value_namespace = name_space;
        v1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2c")
    {
        v2c = value;
        v2c.value_namespace = name_space;
        v2c.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3")
    {
        v3 = value;
        v3.value_namespace = name_space;
        v3.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::Snmpversions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1")
    {
        v1.yfilter = yfilter;
    }
    if(value_path == "v2c")
    {
        v2c.yfilter = yfilter;
    }
    if(value_path == "v3")
    {
        v3.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::Snmpversions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1" || name == "v2c" || name == "v3")
        return true;
    return false;
}

Confdconfig::Snmpagent::Snmpengine::Snmpengine()
    :
    snmpengineid{YType::str, "snmpEngineID"},
    snmpenginemaxmessagesize{YType::uint64, "snmpEngineMaxMessageSize"}
{
    yang_name = "snmpEngine"; yang_parent_name = "snmpAgent";
}

Confdconfig::Snmpagent::Snmpengine::~Snmpengine()
{
}

bool Confdconfig::Snmpagent::Snmpengine::has_data() const
{
    return snmpengineid.is_set
	|| snmpenginemaxmessagesize.is_set;
}

bool Confdconfig::Snmpagent::Snmpengine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpengineid.yfilter)
	|| ydk::is_set(snmpenginemaxmessagesize.yfilter);
}

std::string Confdconfig::Snmpagent::Snmpengine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpEngine";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::Snmpengine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpengineid.is_set || is_set(snmpengineid.yfilter)) leaf_name_data.push_back(snmpengineid.get_name_leafdata());
    if (snmpenginemaxmessagesize.is_set || is_set(snmpenginemaxmessagesize.yfilter)) leaf_name_data.push_back(snmpenginemaxmessagesize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::Snmpengine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::Snmpengine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpagent::Snmpengine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpEngineID")
    {
        snmpengineid = value;
        snmpengineid.value_namespace = name_space;
        snmpengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize = value;
        snmpenginemaxmessagesize.value_namespace = name_space;
        snmpenginemaxmessagesize.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::Snmpengine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpEngineID")
    {
        snmpengineid.yfilter = yfilter;
    }
    if(value_path == "snmpEngineMaxMessageSize")
    {
        snmpenginemaxmessagesize.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::Snmpengine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpEngineID" || name == "snmpEngineMaxMessageSize")
        return true;
    return false;
}

Confdconfig::Snmpagent::Candidate::Candidate()
    :
    maxlockwait{YType::str, "maxLockWait"},
    pendingchangesaction{YType::enumeration, "pendingChangesAction"}
{
    yang_name = "candidate"; yang_parent_name = "snmpAgent";
}

Confdconfig::Snmpagent::Candidate::~Candidate()
{
}

bool Confdconfig::Snmpagent::Candidate::has_data() const
{
    return maxlockwait.is_set
	|| pendingchangesaction.is_set;
}

bool Confdconfig::Snmpagent::Candidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxlockwait.yfilter)
	|| ydk::is_set(pendingchangesaction.yfilter);
}

std::string Confdconfig::Snmpagent::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::Candidate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxlockwait.is_set || is_set(maxlockwait.yfilter)) leaf_name_data.push_back(maxlockwait.get_name_leafdata());
    if (pendingchangesaction.is_set || is_set(pendingchangesaction.yfilter)) leaf_name_data.push_back(pendingchangesaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpagent::Candidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxLockWait")
    {
        maxlockwait = value;
        maxlockwait.value_namespace = name_space;
        maxlockwait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pendingChangesAction")
    {
        pendingchangesaction = value;
        pendingchangesaction.value_namespace = name_space;
        pendingchangesaction.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::Candidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxLockWait")
    {
        maxlockwait.yfilter = yfilter;
    }
    if(value_path == "pendingChangesAction")
    {
        pendingchangesaction.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::Candidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxLockWait" || name == "pendingChangesAction")
        return true;
    return false;
}

Confdconfig::Snmpagent::System::System()
    :
    sysdescr{YType::str, "sysDescr"},
    sysobjectid{YType::str, "sysObjectID"},
    sysservices{YType::uint64, "sysServices"}
    	,
    sysortable(nullptr) // presence node
{
    yang_name = "system"; yang_parent_name = "snmpAgent";
}

Confdconfig::Snmpagent::System::~System()
{
}

bool Confdconfig::Snmpagent::System::has_data() const
{
    return sysdescr.is_set
	|| sysobjectid.is_set
	|| sysservices.is_set
	|| (sysortable !=  nullptr && sysortable->has_data());
}

bool Confdconfig::Snmpagent::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysdescr.yfilter)
	|| ydk::is_set(sysobjectid.yfilter)
	|| ydk::is_set(sysservices.yfilter)
	|| (sysortable !=  nullptr && sysortable->has_operation());
}

std::string Confdconfig::Snmpagent::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysdescr.is_set || is_set(sysdescr.yfilter)) leaf_name_data.push_back(sysdescr.get_name_leafdata());
    if (sysobjectid.is_set || is_set(sysobjectid.yfilter)) leaf_name_data.push_back(sysobjectid.get_name_leafdata());
    if (sysservices.is_set || is_set(sysservices.yfilter)) leaf_name_data.push_back(sysservices.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysORTable")
    {
        if(sysortable == nullptr)
        {
            sysortable = std::make_shared<Confdconfig::Snmpagent::System::Sysortable>();
        }
        return sysortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sysortable != nullptr)
    {
        children["sysORTable"] = sysortable;
    }

    return children;
}

void Confdconfig::Snmpagent::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysDescr")
    {
        sysdescr = value;
        sysdescr.value_namespace = name_space;
        sysdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysObjectID")
    {
        sysobjectid = value;
        sysobjectid.value_namespace = name_space;
        sysobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysServices")
    {
        sysservices = value;
        sysservices.value_namespace = name_space;
        sysservices.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysDescr")
    {
        sysdescr.yfilter = yfilter;
    }
    if(value_path == "sysObjectID")
    {
        sysobjectid.yfilter = yfilter;
    }
    if(value_path == "sysServices")
    {
        sysservices.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysORTable" || name == "sysDescr" || name == "sysObjectID" || name == "sysServices")
        return true;
    return false;
}

Confdconfig::Snmpagent::System::Sysortable::Sysortable()
{
    yang_name = "sysORTable"; yang_parent_name = "system";
}

Confdconfig::Snmpagent::System::Sysortable::~Sysortable()
{
}

bool Confdconfig::Snmpagent::System::Sysortable::has_data() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_data())
            return true;
    }
    return false;
}

bool Confdconfig::Snmpagent::System::Sysortable::has_operation() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Confdconfig::Snmpagent::System::Sysortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysORTable";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::System::Sysortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::System::Sysortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysOREntry")
    {
        for(auto const & c : sysorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Confdconfig::Snmpagent::System::Sysortable::Sysorentry>();
        c->parent = this;
        sysorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::System::Sysortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sysorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Confdconfig::Snmpagent::System::Sysortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Snmpagent::System::Sysortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Snmpagent::System::Sysortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysOREntry")
        return true;
    return false;
}

Confdconfig::Snmpagent::System::Sysortable::Sysorentry::Sysorentry()
    :
    sysorindex{YType::uint64, "sysORIndex"},
    sysordescr{YType::str, "sysORDescr"},
    sysorid{YType::str, "sysORID"}
{
    yang_name = "sysOREntry"; yang_parent_name = "sysORTable";
}

Confdconfig::Snmpagent::System::Sysortable::Sysorentry::~Sysorentry()
{
}

bool Confdconfig::Snmpagent::System::Sysortable::Sysorentry::has_data() const
{
    return sysorindex.is_set
	|| sysordescr.is_set
	|| sysorid.is_set;
}

bool Confdconfig::Snmpagent::System::Sysortable::Sysorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysorindex.yfilter)
	|| ydk::is_set(sysordescr.yfilter)
	|| ydk::is_set(sysorid.yfilter);
}

std::string Confdconfig::Snmpagent::System::Sysortable::Sysorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysOREntry" <<"[sysORIndex='" <<sysorindex <<"']";

    return path_buffer.str();

}

const EntityPath Confdconfig::Snmpagent::System::Sysortable::Sysorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/snmpAgent/system/sysORTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysorindex.is_set || is_set(sysorindex.yfilter)) leaf_name_data.push_back(sysorindex.get_name_leafdata());
    if (sysordescr.is_set || is_set(sysordescr.yfilter)) leaf_name_data.push_back(sysordescr.get_name_leafdata());
    if (sysorid.is_set || is_set(sysorid.yfilter)) leaf_name_data.push_back(sysorid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Snmpagent::System::Sysortable::Sysorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Snmpagent::System::Sysortable::Sysorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Snmpagent::System::Sysortable::Sysorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysORIndex")
    {
        sysorindex = value;
        sysorindex.value_namespace = name_space;
        sysorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysORDescr")
    {
        sysordescr = value;
        sysordescr.value_namespace = name_space;
        sysordescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysORID")
    {
        sysorid = value;
        sysorid.value_namespace = name_space;
        sysorid.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Snmpagent::System::Sysortable::Sysorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysORIndex")
    {
        sysorindex.yfilter = yfilter;
    }
    if(value_path == "sysORDescr")
    {
        sysordescr.yfilter = yfilter;
    }
    if(value_path == "sysORID")
    {
        sysorid.yfilter = yfilter;
    }
}

bool Confdconfig::Snmpagent::System::Sysortable::Sysorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysORIndex" || name == "sysORDescr" || name == "sysORID")
        return true;
    return false;
}

Confdconfig::Netconf::Netconf()
    :
    enabled{YType::boolean, "enabled"},
    extendedsessions{YType::boolean, "extendedSessions"},
    idletimeout{YType::str, "idleTimeout"},
    maxbatchprocesses{YType::str, "maxBatchProcesses"},
    rpcerrors{YType::enumeration, "rpcErrors"},
    senddefaults{YType::boolean, "sendDefaults"},
    writetimeout{YType::str, "writeTimeout"}
    	,
    transport(nullptr) // presence node
{
    yang_name = "netconf"; yang_parent_name = "confdConfig";
}

Confdconfig::Netconf::~Netconf()
{
}

bool Confdconfig::Netconf::has_data() const
{
    return enabled.is_set
	|| extendedsessions.is_set
	|| idletimeout.is_set
	|| maxbatchprocesses.is_set
	|| rpcerrors.is_set
	|| senddefaults.is_set
	|| writetimeout.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Confdconfig::Netconf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extendedsessions.yfilter)
	|| ydk::is_set(idletimeout.yfilter)
	|| ydk::is_set(maxbatchprocesses.yfilter)
	|| ydk::is_set(rpcerrors.yfilter)
	|| ydk::is_set(senddefaults.yfilter)
	|| ydk::is_set(writetimeout.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Confdconfig::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";

    return path_buffer.str();

}

const EntityPath Confdconfig::Netconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (extendedsessions.is_set || is_set(extendedsessions.yfilter)) leaf_name_data.push_back(extendedsessions.get_name_leafdata());
    if (idletimeout.is_set || is_set(idletimeout.yfilter)) leaf_name_data.push_back(idletimeout.get_name_leafdata());
    if (maxbatchprocesses.is_set || is_set(maxbatchprocesses.yfilter)) leaf_name_data.push_back(maxbatchprocesses.get_name_leafdata());
    if (rpcerrors.is_set || is_set(rpcerrors.yfilter)) leaf_name_data.push_back(rpcerrors.get_name_leafdata());
    if (senddefaults.is_set || is_set(senddefaults.yfilter)) leaf_name_data.push_back(senddefaults.get_name_leafdata());
    if (writetimeout.is_set || is_set(writetimeout.yfilter)) leaf_name_data.push_back(writetimeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Confdconfig::Netconf::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Confdconfig::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendedSessions")
    {
        extendedsessions = value;
        extendedsessions.value_namespace = name_space;
        extendedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout = value;
        idletimeout.value_namespace = name_space;
        idletimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxBatchProcesses")
    {
        maxbatchprocesses = value;
        maxbatchprocesses.value_namespace = name_space;
        maxbatchprocesses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpcErrors")
    {
        rpcerrors = value;
        rpcerrors.value_namespace = name_space;
        rpcerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendDefaults")
    {
        senddefaults = value;
        senddefaults.value_namespace = name_space;
        senddefaults.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "writeTimeout")
    {
        writetimeout = value;
        writetimeout.value_namespace = name_space;
        writetimeout.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extendedSessions")
    {
        extendedsessions.yfilter = yfilter;
    }
    if(value_path == "idleTimeout")
    {
        idletimeout.yfilter = yfilter;
    }
    if(value_path == "maxBatchProcesses")
    {
        maxbatchprocesses.yfilter = yfilter;
    }
    if(value_path == "rpcErrors")
    {
        rpcerrors.yfilter = yfilter;
    }
    if(value_path == "sendDefaults")
    {
        senddefaults.yfilter = yfilter;
    }
    if(value_path == "writeTimeout")
    {
        writetimeout.yfilter = yfilter;
    }
}

bool Confdconfig::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "enabled" || name == "extendedSessions" || name == "idleTimeout" || name == "maxBatchProcesses" || name == "rpcErrors" || name == "sendDefaults" || name == "writeTimeout")
        return true;
    return false;
}

Confdconfig::Netconf::Transport::Transport()
    :
    ssh(nullptr) // presence node
	,tcp(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "netconf";
}

Confdconfig::Netconf::Transport::~Transport()
{
}

bool Confdconfig::Netconf::Transport::has_data() const
{
    return (ssh !=  nullptr && ssh->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Confdconfig::Netconf::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Confdconfig::Netconf::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Confdconfig::Netconf::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/netconf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Netconf::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Confdconfig::Netconf::Transport::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Confdconfig::Netconf::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Netconf::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Confdconfig::Netconf::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Confdconfig::Netconf::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Confdconfig::Netconf::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssh" || name == "tcp")
        return true;
    return false;
}

Confdconfig::Netconf::Transport::Ssh::Ssh()
    :
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "ssh"; yang_parent_name = "transport";
}

Confdconfig::Netconf::Transport::Ssh::~Ssh()
{
}

bool Confdconfig::Netconf::Transport::Ssh::has_data() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| port.is_set;
}

bool Confdconfig::Netconf::Transport::Ssh::has_operation() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Netconf::Transport::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Confdconfig::Netconf::Transport::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/netconf/transport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Netconf::Transport::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Netconf::Transport::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Netconf::Transport::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Netconf::Transport::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Netconf::Transport::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "port")
        return true;
    return false;
}

Confdconfig::Netconf::Transport::Tcp::Tcp()
    :
    dscp{YType::uint8, "dscp"},
    enabled{YType::boolean, "enabled"},
    extraipports{YType::str, "extraIpPorts"},
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "tcp"; yang_parent_name = "transport";
}

Confdconfig::Netconf::Transport::Tcp::~Tcp()
{
}

bool Confdconfig::Netconf::Transport::Tcp::has_data() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dscp.is_set
	|| enabled.is_set
	|| ip.is_set
	|| port.is_set;
}

bool Confdconfig::Netconf::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : extraipports.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(extraipports.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Confdconfig::Netconf::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Confdconfig::Netconf::Transport::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "confd_dyncfg:confdConfig/netconf/transport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    auto extraipports_name_datas = extraipports.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extraipports_name_datas.begin(), extraipports_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Confdconfig::Netconf::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Confdconfig::Netconf::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Confdconfig::Netconf::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.append(value);
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Confdconfig::Netconf::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "extraIpPorts")
    {
        extraipports.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Confdconfig::Netconf::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "enabled" || name == "extraIpPorts" || name == "ip" || name == "port")
        return true;
    return false;
}

const Enum::YLeaf Snmplogleveltype::error {126243105, "error"};
const Enum::YLeaf Snmplogleveltype::info {2062105651, "info"};

const Enum::YLeaf Operationalreplicationmodetype::async {1368962940, "async"};
const Enum::YLeaf Operationalreplicationmodetype::sync {2047869128, "sync"};

const Enum::YLeaf Clitimezonetype::utc {1427039597, "utc"};
const Enum::YLeaf Clitimezonetype::local {2129802687, "local"};

const Enum::YLeaf Enabledisplayleveltype::true_ {1808796341, "true"};
const Enum::YLeaf Enabledisplayleveltype::false_ {1249155036, "false"};
const Enum::YLeaf Enabledisplayleveltype::pipe {612053909, "pipe"};

const Enum::YLeaf Rollbacktype::full {476261018, "full"};
const Enum::YLeaf Rollbacktype::delta {1928409309, "delta"};

const Enum::YLeaf Whohistorydatetimeformattype::long_ {105537656, "long"};
const Enum::YLeaf Whohistorydatetimeformattype::short_ {2029155337, "short"};

const Enum::YLeaf Defaulthandlingmodetype::explicit_ {920928367, "explicit"};
const Enum::YLeaf Defaulthandlingmodetype::trim {250701330, "trim"};
const Enum::YLeaf Defaulthandlingmodetype::report_all {1824535838, "report-all"};

const Enum::YLeaf Auditusernametype::always {1980885055, "always"};
const Enum::YLeaf Auditusernametype::known {584303659, "known"};
const Enum::YLeaf Auditusernametype::never {1258673503, "never"};

const Enum::YLeaf Bsdfacilitytype::daemon {137874048, "daemon"};
const Enum::YLeaf Bsdfacilitytype::authpriv {2143429981, "authpriv"};
const Enum::YLeaf Bsdfacilitytype::local0 {1223389442, "local0"};
const Enum::YLeaf Bsdfacilitytype::local1 {659974174, "local1"};
const Enum::YLeaf Bsdfacilitytype::local2 {388815177, "local2"};
const Enum::YLeaf Bsdfacilitytype::local3 {133202671, "local3"};
const Enum::YLeaf Bsdfacilitytype::local4 {1369253367, "local4"};
const Enum::YLeaf Bsdfacilitytype::local5 {37794477, "local5"};
const Enum::YLeaf Bsdfacilitytype::local6 {918612352, "local6"};
const Enum::YLeaf Bsdfacilitytype::local7 {1098748970, "local7"};

const Enum::YLeaf Runtimereconfigurationtype::config_file {2073952695, "config-file"};
const Enum::YLeaf Runtimereconfigurationtype::namespace_ {1847615892, "namespace"};

const Enum::YLeaf Operationalpersistenttype::confspec {2093298699, "confspec"};
const Enum::YLeaf Operationalpersistenttype::always {1980885055, "always"};
const Enum::YLeaf Operationalpersistenttype::never {1258673503, "never"};

const Enum::YLeaf Operationalreplicationtype::never {1258673503, "never"};
const Enum::YLeaf Operationalreplicationtype::always {1980885055, "always"};
const Enum::YLeaf Operationalreplicationtype::persistent {1783422916, "persistent"};

const Enum::YLeaf Cliauditlogtype::all {2031982792, "all"};
const Enum::YLeaf Cliauditlogtype::none {432063804, "none"};
const Enum::YLeaf Cliauditlogtype::denied {1293974345, "denied"};
const Enum::YLeaf Cliauditlogtype::allowed {1631106802, "allowed"};

const Enum::YLeaf Infinitytype::infinity {1378257424, "infinity"};

const Enum::YLeaf Expirationwarningtype::ignore {1852995428, "ignore"};
const Enum::YLeaf Expirationwarningtype::display {2135153981, "display"};
const Enum::YLeaf Expirationwarningtype::prompt {1796253006, "prompt"};

const Enum::YLeaf Editwrapmodetype::wrap {1386835265, "wrap"};
const Enum::YLeaf Editwrapmodetype::newline {100405574, "newline"};
const Enum::YLeaf Editwrapmodetype::vt100 {321017956, "vt100"};

const Enum::YLeaf Snmpversiontype::v1 {1223356638, "v1"};
const Enum::YLeaf Snmpversiontype::v2c {406691283, "v2c"};

const Enum::YLeaf Falsetype::false_ {1249155036, "false"};

const Enum::YLeaf Quotestyletype::quote {883581901, "quote"};
const Enum::YLeaf Quotestyletype::backslash {1857839842, "backslash"};

const Enum::YLeaf Climodenamestyletype::short_ {2029155337, "short"};
const Enum::YLeaf Climodenamestyletype::two {87009233, "two"};
const Enum::YLeaf Climodenamestyletype::full {476261018, "full"};

const Enum::YLeaf Candidateimplementationtype::confd {664387550, "confd"};
const Enum::YLeaf Candidateimplementationtype::external {1055777754, "external"};

const Enum::YLeaf Journalcompactiontype::automatic {1726921432, "automatic"};
const Enum::YLeaf Journalcompactiontype::manual {48828153, "manual"};

const Enum::YLeaf Clistyle::j {641834109, "j"};
const Enum::YLeaf Clistyle::c {589337185, "c"};
const Enum::YLeaf Clistyle::i {1541010383, "i"};

const Enum::YLeaf Developerlogleveltype::error {126243105, "error"};
const Enum::YLeaf Developerlogleveltype::info {2062105651, "info"};
const Enum::YLeaf Developerlogleveltype::trace {1896625767, "trace"};

const Enum::YLeaf Pipehelpmodetype::always {1980885055, "always"};
const Enum::YLeaf Pipehelpmodetype::auto_ {1146214388, "auto"};
const Enum::YLeaf Pipehelpmodetype::never {1258673503, "never"};

const Enum::YLeaf Rpcerrortype::close {1912083739, "close"};
const Enum::YLeaf Rpcerrortype::inline_ {1987224790, "inline"};

const Enum::YLeaf Fixedidtype::confd {664387550, "confd"};
const Enum::YLeaf Fixedidtype::user {1529217067, "user"};
const Enum::YLeaf Fixedidtype::root {1945751049, "root"};

const Enum::YLeaf Cliactionmaptype::both {1577301616, "both"};
const Enum::YLeaf Cliactionmaptype::config {2105663071, "config"};
const Enum::YLeaf Cliactionmaptype::oper {1313484953, "oper"};

const Enum::YLeaf Tablebehaviortype::dynamic {1339207079, "dynamic"};
const Enum::YLeaf Tablebehaviortype::suppress {1746378947, "suppress"};
const Enum::YLeaf Tablebehaviortype::enforce {868039165, "enforce"};

const Enum::YLeaf Crypthashalgorithmtype::md5 {721897608, "md5"};
const Enum::YLeaf Crypthashalgorithmtype::sha_256 {1426210322, "sha-256"};
const Enum::YLeaf Crypthashalgorithmtype::sha_512 {945188773, "sha-512"};

const Enum::YLeaf Syslogversiontype::bsd {1701318, "bsd"};
const Enum::YLeaf Syslogversiontype::Y_1 {1535449617, "1"};

const Enum::YLeaf Netconftraceformattype::pretty {560733322, "pretty"};
const Enum::YLeaf Netconftraceformattype::raw {764753385, "raw"};

const Enum::YLeaf Dbaccesstype::read_write {1464236954, "read-write"};
const Enum::YLeaf Dbaccesstype::writable_through_candidate {532826246, "writable-through-candidate"};

const Enum::YLeaf XFrameOptionstype::DENY {864815184, "DENY"};
const Enum::YLeaf XFrameOptionstype::SAMEORIGIN {1594198254, "SAMEORIGIN"};
const Enum::YLeaf XFrameOptionstype::ALLOW_FROM {2088887798, "ALLOW-FROM"};

const Enum::YLeaf Completionmetainfotype::false_ {1249155036, "false"};
const Enum::YLeaf Completionmetainfotype::alt1 {1173421906, "alt1"};
const Enum::YLeaf Completionmetainfotype::alt2 {780021010, "alt2"};

const Enum::YLeaf Multipatternoperationtype::any {383440309, "any"};
const Enum::YLeaf Multipatternoperationtype::all {2031982792, "all"};

const Enum::YLeaf Modeinfoinaaatype::true_ {1808796341, "true"};
const Enum::YLeaf Modeinfoinaaatype::false_ {1249155036, "false"};
const Enum::YLeaf Modeinfoinaaatype::path {1002915403, "path"};

const Enum::YLeaf Rollnumbering::fixed {1180146474, "fixed"};
const Enum::YLeaf Rollnumbering::rolling {492733776, "rolling"};

const Enum::YLeaf Unboundedtype::unbounded {1813338730, "unbounded"};

const Enum::YLeaf Pubkeyauthenticationtype::none {432063804, "none"};
const Enum::YLeaf Pubkeyauthenticationtype::local {2129802687, "local"};
const Enum::YLeaf Pubkeyauthenticationtype::system {1534086422, "system"};

const Enum::YLeaf Configurationreplicationtype::async {1368962940, "async"};
const Enum::YLeaf Configurationreplicationtype::sync {2047869128, "sync"};

const Enum::YLeaf Modeinfoinaudittype::true_ {1808796341, "true"};
const Enum::YLeaf Modeinfoinaudittype::false_ {1249155036, "false"};
const Enum::YLeaf Modeinfoinaudittype::path {1002915403, "path"};

const Enum::YLeaf Pendingchangesactiontype::continue_ {1852005625, "continue"};
const Enum::YLeaf Pendingchangesactiontype::fail {1504483183, "fail"};

const Enum::YLeaf Candidatestoragetype::disk {334675513, "disk"};
const Enum::YLeaf Candidatestoragetype::ram {781613798, "ram"};
const Enum::YLeaf Candidatestoragetype::auto_ {1146214388, "auto"};

const Enum::YLeaf Confirmuncommitedonexittype::prompt {1796253006, "prompt"};
const Enum::YLeaf Confirmuncommitedonexittype::discard {664427145, "discard"};
const Enum::YLeaf Confirmuncommitedonexittype::commit {128787545, "commit"};


}
}

