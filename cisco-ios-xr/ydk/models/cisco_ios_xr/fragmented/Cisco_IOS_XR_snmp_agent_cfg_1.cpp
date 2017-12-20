
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunities()
{

    yang_name = "inform-encrypted-user-communities"; yang_parent_name = "inform-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::~InformEncryptedUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_data() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<inform_encrypted_user_community.size(); index++)
    {
        if(inform_encrypted_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inform-encrypted-user-community")
    {
        for(auto const & c : inform_encrypted_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity>();
        c->parent = this;
        inform_encrypted_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inform_encrypted_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inform-encrypted-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::InformEncryptedUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"}
{

    yang_name = "inform-encrypted-user-community"; yang_parent_name = "inform-encrypted-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::~InformEncryptedUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_data() const
{
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform-encrypted-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunities()
{

    yang_name = "default-user-communities"; yang_parent_name = "trap-host"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::~DefaultUserCommunities()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_data() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_user_community.size(); index++)
    {
        if(default_user_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-user-community")
    {
        for(auto const & c : default_user_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity>();
        c->parent = this;
        default_user_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_user_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-user-community")
        return true;
    return false;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::DefaultUserCommunity()
    :
    community_name{YType::str, "community-name"},
    port{YType::uint16, "port"},
    version{YType::str, "version"},
    security_level{YType::enumeration, "security-level"},
    basic_trap_types{YType::int32, "basic-trap-types"},
    advanced_trap_types1{YType::int32, "advanced-trap-types1"},
    advanced_trap_types2{YType::int32, "advanced-trap-types2"}
{

    yang_name = "default-user-community"; yang_parent_name = "default-user-communities"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::~DefaultUserCommunity()
{
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_data() const
{
    return community_name.is_set
	|| port.is_set
	|| version.is_set
	|| security_level.is_set
	|| basic_trap_types.is_set
	|| advanced_trap_types1.is_set
	|| advanced_trap_types2.is_set;
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(basic_trap_types.yfilter)
	|| ydk::is_set(advanced_trap_types1.yfilter)
	|| ydk::is_set(advanced_trap_types2.yfilter);
}

std::string Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-user-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (basic_trap_types.is_set || is_set(basic_trap_types.yfilter)) leaf_name_data.push_back(basic_trap_types.get_name_leafdata());
    if (advanced_trap_types1.is_set || is_set(advanced_trap_types1.yfilter)) leaf_name_data.push_back(advanced_trap_types1.get_name_leafdata());
    if (advanced_trap_types2.is_set || is_set(advanced_trap_types2.yfilter)) leaf_name_data.push_back(advanced_trap_types2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types = value;
        basic_trap_types.value_namespace = name_space;
        basic_trap_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1 = value;
        advanced_trap_types1.value_namespace = name_space;
        advanced_trap_types1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2 = value;
        advanced_trap_types2.value_namespace = name_space;
        advanced_trap_types2.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "basic-trap-types")
    {
        basic_trap_types.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types1")
    {
        advanced_trap_types1.yfilter = yfilter;
    }
    if(value_path == "advanced-trap-types2")
    {
        advanced_trap_types2.yfilter = yfilter;
    }
}

bool Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "port" || name == "version" || name == "security-level" || name == "basic-trap-types" || name == "advanced-trap-types1" || name == "advanced-trap-types2")
        return true;
    return false;
}

Snmp::Contexts::Contexts()
{

    yang_name = "contexts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Contexts::~Contexts()
{
}

bool Snmp::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Contexts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Snmp::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Contexts::Context::~Context()
{
}

bool Snmp::Contexts::Context::has_data() const
{
    return context_name.is_set;
}

bool Snmp::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_name.yfilter);
}

std::string Snmp::Contexts::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/contexts/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context-name='" <<context_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
}

bool Snmp::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-name")
        return true;
    return false;
}

Snmp::ContextMappings::ContextMappings()
{

    yang_name = "context-mappings"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::ContextMappings::~ContextMappings()
{
}

bool Snmp::ContextMappings::has_data() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::ContextMappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::ContextMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        for(auto const & c : context_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::ContextMappings::ContextMapping>();
        c->parent = this;
        context_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::ContextMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::ContextMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::ContextMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping")
        return true;
    return false;
}

Snmp::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "context-mapping"; yang_parent_name = "context-mappings"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::ContextMappings::ContextMapping::has_data() const
{
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Snmp::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_mapping_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Snmp::ContextMappings::ContextMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/context-mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping" <<"[context-mapping-name='" <<context_mapping_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::ContextMappings::ContextMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.yfilter)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::ContextMappings::ContextMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
        context_mapping_name.value_namespace = name_space;
        context_mapping_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::ContextMappings::ContextMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Snmp::ContextMappings::ContextMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping-name" || name == "context" || name == "instance-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Mib::Mib()
    :
    sensor_mib_cache{YType::empty, "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor-mib-cache"}
    	,
    mpls_te_mib(std::make_shared<Mib::MplsTeMib>())
	,mpls_p2mp_mib(std::make_shared<Mib::MplsP2MpMib>())
	,mpls_te_ext_std_mib(std::make_shared<Mib::MplsTeExtStdMib>())
	,mpls_te_ext_mib(std::make_shared<Mib::MplsTeExtMib>())
	,mpls_frr_mib(std::make_shared<Mib::MplsFrrMib>())
	,cb_qosmib(std::make_shared<Mib::CbQosmib>())
	,entity_mib(std::make_shared<Mib::EntityMib>())
	,interface_mib(std::make_shared<Mib::InterfaceMib>())
	,subscriber(std::make_shared<Mib::Subscriber>())
{
    mpls_te_mib->parent = this;
    mpls_p2mp_mib->parent = this;
    mpls_te_ext_std_mib->parent = this;
    mpls_te_ext_mib->parent = this;
    mpls_frr_mib->parent = this;
    cb_qosmib->parent = this;
    entity_mib->parent = this;
    interface_mib->parent = this;
    subscriber->parent = this;

    yang_name = "mib"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Mib::~Mib()
{
}

bool Mib::has_data() const
{
    return sensor_mib_cache.is_set
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_data())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_data())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_data())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_data())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_data())
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_data())
	|| (entity_mib !=  nullptr && entity_mib->has_data())
	|| (interface_mib !=  nullptr && interface_mib->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data());
}

bool Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_mib_cache.yfilter)
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_operation())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_operation())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_operation())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_operation())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_operation())
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_operation())
	|| (entity_mib !=  nullptr && entity_mib->has_operation())
	|| (interface_mib !=  nullptr && interface_mib->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation());
}

std::string Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_mib_cache.is_set || is_set(sensor_mib_cache.yfilter)) leaf_name_data.push_back(sensor_mib_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib")
    {
        if(mpls_te_mib == nullptr)
        {
            mpls_te_mib = std::make_shared<Mib::MplsTeMib>();
        }
        return mpls_te_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib")
    {
        if(mpls_p2mp_mib == nullptr)
        {
            mpls_p2mp_mib = std::make_shared<Mib::MplsP2MpMib>();
        }
        return mpls_p2mp_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib")
    {
        if(mpls_te_ext_std_mib == nullptr)
        {
            mpls_te_ext_std_mib = std::make_shared<Mib::MplsTeExtStdMib>();
        }
        return mpls_te_ext_std_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib")
    {
        if(mpls_te_ext_mib == nullptr)
        {
            mpls_te_ext_mib = std::make_shared<Mib::MplsTeExtMib>();
        }
        return mpls_te_ext_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib")
    {
        if(mpls_frr_mib == nullptr)
        {
            mpls_frr_mib = std::make_shared<Mib::MplsFrrMib>();
        }
        return mpls_frr_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib")
    {
        if(cb_qosmib == nullptr)
        {
            cb_qosmib = std::make_shared<Mib::CbQosmib>();
        }
        return cb_qosmib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib")
    {
        if(entity_mib == nullptr)
        {
            entity_mib = std::make_shared<Mib::EntityMib>();
        }
        return entity_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib")
    {
        if(interface_mib == nullptr)
        {
            interface_mib = std::make_shared<Mib::InterfaceMib>();
        }
        return interface_mib;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Mib::Subscriber>();
        }
        return subscriber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_te_mib != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib"] = mpls_te_mib;
    }

    if(mpls_p2mp_mib != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib"] = mpls_p2mp_mib;
    }

    if(mpls_te_ext_std_mib != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib"] = mpls_te_ext_std_mib;
    }

    if(mpls_te_ext_mib != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib"] = mpls_te_ext_mib;
    }

    if(mpls_frr_mib != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib"] = mpls_frr_mib;
    }

    if(cb_qosmib != nullptr)
    {
        children["Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib"] = cb_qosmib;
    }

    if(entity_mib != nullptr)
    {
        children["Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib"] = entity_mib;
    }

    if(interface_mib != nullptr)
    {
        children["Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib"] = interface_mib;
    }

    if(subscriber != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber"] = subscriber;
    }

    return children;
}

void Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor-mib-cache")
    {
        sensor_mib_cache = value;
        sensor_mib_cache.value_namespace = name_space;
        sensor_mib_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-mib-cache")
    {
        sensor_mib_cache.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Mib::clone_ptr() const
{
    return std::make_shared<Mib>();
}

std::string Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-mib" || name == "mpls-p2mp-mib" || name == "mpls-te-ext-std-mib" || name == "mpls-te-ext-mib" || name == "mpls-frr-mib" || name == "cb-qosmib" || name == "entity-mib" || name == "interface-mib" || name == "subscriber" || name == "sensor-mib-cache")
        return true;
    return false;
}

Mib::MplsTeMib::MplsTeMib()
    :
    cache_garbage_collect_timer{YType::uint32, "cache-garbage-collect-timer"},
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::MplsTeMib::~MplsTeMib()
{
}

bool Mib::MplsTeMib::has_data() const
{
    return cache_garbage_collect_timer.is_set
	|| cache_timer.is_set;
}

bool Mib::MplsTeMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_garbage_collect_timer.yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_garbage_collect_timer.is_set || is_set(cache_garbage_collect_timer.yfilter)) leaf_name_data.push_back(cache_garbage_collect_timer.get_name_leafdata());
    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::MplsTeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer = value;
        cache_garbage_collect_timer.value_namespace = name_space;
        cache_garbage_collect_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer.yfilter = yfilter;
    }
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-garbage-collect-timer" || name == "cache-timer")
        return true;
    return false;
}

Mib::MplsP2MpMib::MplsP2MpMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-p2mp-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::MplsP2MpMib::~MplsP2MpMib()
{
}

bool Mib::MplsP2MpMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsP2MpMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsP2MpMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsP2MpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsP2MpMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::MplsP2MpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsP2MpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsP2MpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsP2MpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsP2MpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsTeExtStdMib::MplsTeExtStdMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-ext-std-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::MplsTeExtStdMib::~MplsTeExtStdMib()
{
}

bool Mib::MplsTeExtStdMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtStdMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeExtStdMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeExtStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeExtStdMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::MplsTeExtStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeExtStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeExtStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeExtStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeExtStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsTeExtMib::MplsTeExtMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-ext-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::MplsTeExtMib::~MplsTeExtMib()
{
}

bool Mib::MplsTeExtMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeExtMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeExtMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::MplsTeExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeExtMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeExtMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeExtMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsFrrMib::MplsFrrMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-frr-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::MplsFrrMib::~MplsFrrMib()
{
}

bool Mib::MplsFrrMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsFrrMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsFrrMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsFrrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsFrrMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::MplsFrrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsFrrMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsFrrMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsFrrMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsFrrMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::CbQosmib::CbQosmib()
    :
    member_interface_stats{YType::empty, "member-interface-stats"},
    persist{YType::empty, "persist"}
    	,
    cache(std::make_shared<Mib::CbQosmib::Cache>())
{
    cache->parent = this;

    yang_name = "cb-qosmib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::CbQosmib::~CbQosmib()
{
}

bool Mib::CbQosmib::has_data() const
{
    return member_interface_stats.is_set
	|| persist.is_set
	|| (cache !=  nullptr && cache->has_data());
}

bool Mib::CbQosmib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface_stats.yfilter)
	|| ydk::is_set(persist.yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Mib::CbQosmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::CbQosmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::CbQosmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface_stats.is_set || is_set(member_interface_stats.yfilter)) leaf_name_data.push_back(member_interface_stats.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::CbQosmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Mib::CbQosmib::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::CbQosmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    return children;
}

void Mib::CbQosmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface-stats")
    {
        member_interface_stats = value;
        member_interface_stats.value_namespace = name_space;
        member_interface_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::CbQosmib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface-stats")
    {
        member_interface_stats.yfilter = yfilter;
    }
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Mib::CbQosmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "member-interface-stats" || name == "persist")
        return true;
    return false;
}

Mib::CbQosmib::Cache::Cache()
    :
    enable{YType::empty, "enable"},
    refresh_time{YType::uint32, "refresh-time"},
    service_policy_count{YType::uint32, "service-policy-count"}
{

    yang_name = "cache"; yang_parent_name = "cb-qosmib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::CbQosmib::Cache::~Cache()
{
}

bool Mib::CbQosmib::Cache::has_data() const
{
    return enable.is_set
	|| refresh_time.is_set
	|| service_policy_count.is_set;
}

bool Mib::CbQosmib::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(service_policy_count.yfilter);
}

std::string Mib::CbQosmib::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::CbQosmib::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::CbQosmib::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (service_policy_count.is_set || is_set(service_policy_count.yfilter)) leaf_name_data.push_back(service_policy_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::CbQosmib::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::CbQosmib::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::CbQosmib::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy-count")
    {
        service_policy_count = value;
        service_policy_count.value_namespace = name_space;
        service_policy_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::CbQosmib::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "service-policy-count")
    {
        service_policy_count.yfilter = yfilter;
    }
}

bool Mib::CbQosmib::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "refresh-time" || name == "service-policy-count")
        return true;
    return false;
}

Mib::EntityMib::EntityMib()
    :
    entity_index_persistence{YType::empty, "entity-index-persistence"}
{

    yang_name = "entity-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::EntityMib::~EntityMib()
{
}

bool Mib::EntityMib::has_data() const
{
    return entity_index_persistence.is_set;
}

bool Mib::EntityMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entity_index_persistence.yfilter);
}

std::string Mib::EntityMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::EntityMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_index_persistence.is_set || is_set(entity_index_persistence.yfilter)) leaf_name_data.push_back(entity_index_persistence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::EntityMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::EntityMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-index-persistence")
    {
        entity_index_persistence = value;
        entity_index_persistence.value_namespace = name_space;
        entity_index_persistence.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::EntityMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-index-persistence")
    {
        entity_index_persistence.yfilter = yfilter;
    }
}

bool Mib::EntityMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-index-persistence")
        return true;
    return false;
}

Mib::InterfaceMib::InterfaceMib()
    :
    internal_cache{YType::uint32, "internal-cache"},
    interface_alias_long{YType::empty, "interface-alias-long"},
    ip_subscriber{YType::empty, "ip-subscriber"},
    interface_index_persistence{YType::empty, "interface-index-persistence"},
    statistics_cache{YType::empty, "statistics-cache"}
    	,
    interfaces(std::make_shared<Mib::InterfaceMib::Interfaces>())
	,notification(std::make_shared<Mib::InterfaceMib::Notification>())
	,subsets(std::make_shared<Mib::InterfaceMib::Subsets>())
{
    interfaces->parent = this;
    notification->parent = this;
    subsets->parent = this;

    yang_name = "interface-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::~InterfaceMib()
{
}

bool Mib::InterfaceMib::has_data() const
{
    return internal_cache.is_set
	|| interface_alias_long.is_set
	|| ip_subscriber.is_set
	|| interface_index_persistence.is_set
	|| statistics_cache.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (subsets !=  nullptr && subsets->has_data());
}

bool Mib::InterfaceMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_cache.yfilter)
	|| ydk::is_set(interface_alias_long.yfilter)
	|| ydk::is_set(ip_subscriber.yfilter)
	|| ydk::is_set(interface_index_persistence.yfilter)
	|| ydk::is_set(statistics_cache.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (subsets !=  nullptr && subsets->has_operation());
}

std::string Mib::InterfaceMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_cache.is_set || is_set(internal_cache.yfilter)) leaf_name_data.push_back(internal_cache.get_name_leafdata());
    if (interface_alias_long.is_set || is_set(interface_alias_long.yfilter)) leaf_name_data.push_back(interface_alias_long.get_name_leafdata());
    if (ip_subscriber.is_set || is_set(ip_subscriber.yfilter)) leaf_name_data.push_back(ip_subscriber.get_name_leafdata());
    if (interface_index_persistence.is_set || is_set(interface_index_persistence.yfilter)) leaf_name_data.push_back(interface_index_persistence.get_name_leafdata());
    if (statistics_cache.is_set || is_set(statistics_cache.yfilter)) leaf_name_data.push_back(statistics_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mib::InterfaceMib::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Mib::InterfaceMib::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "subsets")
    {
        if(subsets == nullptr)
        {
            subsets = std::make_shared<Mib::InterfaceMib::Subsets>();
        }
        return subsets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(subsets != nullptr)
    {
        children["subsets"] = subsets;
    }

    return children;
}

void Mib::InterfaceMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-cache")
    {
        internal_cache = value;
        internal_cache.value_namespace = name_space;
        internal_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-alias-long")
    {
        interface_alias_long = value;
        interface_alias_long.value_namespace = name_space;
        interface_alias_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-subscriber")
    {
        ip_subscriber = value;
        ip_subscriber.value_namespace = name_space;
        ip_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-persistence")
    {
        interface_index_persistence = value;
        interface_index_persistence.value_namespace = name_space;
        interface_index_persistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-cache")
    {
        statistics_cache = value;
        statistics_cache.value_namespace = name_space;
        statistics_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-cache")
    {
        internal_cache.yfilter = yfilter;
    }
    if(value_path == "interface-alias-long")
    {
        interface_alias_long.yfilter = yfilter;
    }
    if(value_path == "ip-subscriber")
    {
        ip_subscriber.yfilter = yfilter;
    }
    if(value_path == "interface-index-persistence")
    {
        interface_index_persistence.yfilter = yfilter;
    }
    if(value_path == "statistics-cache")
    {
        statistics_cache.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "notification" || name == "subsets" || name == "internal-cache" || name == "interface-alias-long" || name == "ip-subscriber" || name == "interface-index-persistence" || name == "statistics-cache")
        return true;
    return false;
}

Mib::InterfaceMib::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::Interfaces::~Interfaces()
{
}

bool Mib::InterfaceMib::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::InterfaceMib::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::InterfaceMib::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mib::InterfaceMib::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::InterfaceMib::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::InterfaceMib::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::InterfaceMib::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mib::InterfaceMib::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    link_up_down{YType::boolean, "link-up-down"},
    index_persistence{YType::boolean, "index-persistence"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::Interfaces::Interface::~Interface()
{
}

bool Mib::InterfaceMib::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| link_up_down.is_set
	|| index_persistence.is_set;
}

bool Mib::InterfaceMib::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_up_down.yfilter)
	|| ydk::is_set(index_persistence.yfilter);
}

std::string Mib::InterfaceMib::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_up_down.is_set || is_set(link_up_down.yfilter)) leaf_name_data.push_back(link_up_down.get_name_leafdata());
    if (index_persistence.is_set || is_set(index_persistence.yfilter)) leaf_name_data.push_back(index_persistence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up-down")
    {
        link_up_down = value;
        link_up_down.value_namespace = name_space;
        link_up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index-persistence")
    {
        index_persistence = value;
        index_persistence.value_namespace = name_space;
        index_persistence.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-up-down")
    {
        link_up_down.yfilter = yfilter;
    }
    if(value_path == "index-persistence")
    {
        index_persistence.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "link-up-down" || name == "index-persistence")
        return true;
    return false;
}

Mib::InterfaceMib::Notification::Notification()
    :
    link_ietf{YType::empty, "link-ietf"}
{

    yang_name = "notification"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::Notification::~Notification()
{
}

bool Mib::InterfaceMib::Notification::has_data() const
{
    return link_ietf.is_set;
}

bool Mib::InterfaceMib::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_ietf.yfilter);
}

std::string Mib::InterfaceMib::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_ietf.is_set || is_set(link_ietf.yfilter)) leaf_name_data.push_back(link_ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-ietf")
    {
        link_ietf = value;
        link_ietf.value_namespace = name_space;
        link_ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-ietf")
    {
        link_ietf.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-ietf")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subsets()
{

    yang_name = "subsets"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::Subsets::~Subsets()
{
}

bool Mib::InterfaceMib::Subsets::has_data() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::InterfaceMib::Subsets::has_operation() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::InterfaceMib::Subsets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subset")
    {
        for(auto const & c : subset)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::InterfaceMib::Subsets::Subset>();
        c->parent = this;
        subset.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subset)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::InterfaceMib::Subsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::InterfaceMib::Subsets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::InterfaceMib::Subsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subset")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subset::Subset()
    :
    subset_id{YType::uint32, "subset-id"}
    	,
    link_up_down(std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>())
{
    link_up_down->parent = this;

    yang_name = "subset"; yang_parent_name = "subsets"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::InterfaceMib::Subsets::Subset::~Subset()
{
}

bool Mib::InterfaceMib::Subsets::Subset::has_data() const
{
    return subset_id.is_set
	|| (link_up_down !=  nullptr && link_up_down->has_data());
}

bool Mib::InterfaceMib::Subsets::Subset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subset_id.yfilter)
	|| (link_up_down !=  nullptr && link_up_down->has_operation());
}

std::string Mib::InterfaceMib::Subsets::Subset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/subsets/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::Subset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.yfilter)) leaf_name_data.push_back(subset_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-up-down")
    {
        if(link_up_down == nullptr)
        {
            link_up_down = std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>();
        }
        return link_up_down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::Subset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_up_down != nullptr)
    {
        children["link-up-down"] = link_up_down;
    }

    return children;
}

void Mib::InterfaceMib::Subsets::Subset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subset-id")
    {
        subset_id = value;
        subset_id.value_namespace = name_space;
        subset_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Subsets::Subset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subset-id")
    {
        subset_id.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Subsets::Subset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up-down" || name == "subset-id")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::LinkUpDown()
    :
    enable{YType::boolean, "enable"},
    regular_expression{YType::str, "regular-expression"}
{

    yang_name = "link-up-down"; yang_parent_name = "subset"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::~LinkUpDown()
{
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_data() const
{
    return enable.is_set
	|| regular_expression.is_set;
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(regular_expression.yfilter);
}

std::string Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-up-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (regular_expression.is_set || is_set(regular_expression.yfilter)) leaf_name_data.push_back(regular_expression.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Subsets::Subset::LinkUpDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-expression")
    {
        regular_expression = value;
        regular_expression.value_namespace = name_space;
        regular_expression.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Subsets::Subset::LinkUpDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "regular-expression")
    {
        regular_expression.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "regular-expression")
        return true;
    return false;
}

Mib::Subscriber::Subscriber()
    :
    threshold(std::make_shared<Mib::Subscriber::Threshold>())
{
    threshold->parent = this;

    yang_name = "subscriber"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::~Subscriber()
{
}

bool Mib::Subscriber::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Mib::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Mib::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Mib::Subscriber::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Mib::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Threshold()
    :
    delta(std::make_shared<Mib::Subscriber::Threshold::Delta>())
	,access_interface_sub(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub>())
	,falling(std::make_shared<Mib::Subscriber::Threshold::Falling>())
	,rising(std::make_shared<Mib::Subscriber::Threshold::Rising>())
{
    delta->parent = this;
    access_interface_sub->parent = this;
    falling->parent = this;
    rising->parent = this;

    yang_name = "threshold"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::~Threshold()
{
}

bool Mib::Subscriber::Threshold::has_data() const
{
    return (delta !=  nullptr && delta->has_data())
	|| (access_interface_sub !=  nullptr && access_interface_sub->has_data())
	|| (falling !=  nullptr && falling->has_data())
	|| (rising !=  nullptr && rising->has_data());
}

bool Mib::Subscriber::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (delta !=  nullptr && delta->has_operation())
	|| (access_interface_sub !=  nullptr && access_interface_sub->has_operation())
	|| (falling !=  nullptr && falling->has_operation())
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Mib::Subscriber::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delta")
    {
        if(delta == nullptr)
        {
            delta = std::make_shared<Mib::Subscriber::Threshold::Delta>();
        }
        return delta;
    }

    if(child_yang_name == "access-interface-sub")
    {
        if(access_interface_sub == nullptr)
        {
            access_interface_sub = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub>();
        }
        return access_interface_sub;
    }

    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Mib::Subscriber::Threshold::Falling>();
        }
        return falling;
    }

    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Mib::Subscriber::Threshold::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delta != nullptr)
    {
        children["delta"] = delta;
    }

    if(access_interface_sub != nullptr)
    {
        children["access-interface-sub"] = access_interface_sub;
    }

    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Mib::Subscriber::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta" || name == "access-interface-sub" || name == "falling" || name == "rising")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Delta()
    :
    evaluation(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation>())
	,percent(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent>())
{
    evaluation->parent = this;
    percent->parent = this;

    yang_name = "delta"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::~Delta()
{
}

bool Mib::Subscriber::Threshold::Delta::has_data() const
{
    return (evaluation !=  nullptr && evaluation->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Mib::Subscriber::Threshold::Delta::has_operation() const
{
    return is_set(yfilter)
	|| (evaluation !=  nullptr && evaluation->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delta";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evaluation")
    {
        if(evaluation == nullptr)
        {
            evaluation = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation>();
        }
        return evaluation;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evaluation != nullptr)
    {
        children["evaluation"] = evaluation;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evaluation" || name == "percent")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Evaluation()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "evaluation"; yang_parent_name = "delta"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::~Evaluation()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evaluation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Percent()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "percent"; yang_parent_name = "delta"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::~Percent()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::Percent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::AccessInterfaceSub()
    :
    subsets(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets>())
{
    subsets->parent = this;

    yang_name = "access-interface-sub"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::~AccessInterfaceSub()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_data() const
{
    return (subsets !=  nullptr && subsets->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_operation() const
{
    return is_set(yfilter)
	|| (subsets !=  nullptr && subsets->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subsets")
    {
        if(subsets == nullptr)
        {
            subsets = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets>();
        }
        return subsets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subsets != nullptr)
    {
        children["subsets"] = subsets;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subsets")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subsets()
{

    yang_name = "subsets"; yang_parent_name = "access-interface-sub"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::~Subsets()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_data() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_operation() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/access-interface-sub/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subset")
    {
        for(auto const & c : subset)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset>();
        c->parent = this;
        subset.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subset)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subset")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::Subset()
    :
    subset_id{YType::uint32, "subset-id"}
    	,
    regular_expression(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression>())
{
    regular_expression->parent = this;

    yang_name = "subset"; yang_parent_name = "subsets"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::~Subset()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_data() const
{
    return subset_id.is_set
	|| (regular_expression !=  nullptr && regular_expression->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subset_id.yfilter)
	|| (regular_expression !=  nullptr && regular_expression->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/access-interface-sub/subsets/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.yfilter)) leaf_name_data.push_back(subset_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-expression")
    {
        if(regular_expression == nullptr)
        {
            regular_expression = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression>();
        }
        return regular_expression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(regular_expression != nullptr)
    {
        children["regular-expression"] = regular_expression;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subset-id")
    {
        subset_id = value;
        subset_id.value_namespace = name_space;
        subset_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subset-id")
    {
        subset_id.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular-expression" || name == "subset-id")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::RegularExpression()
    :
    notification(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification>())
{
    notification->parent = this;

    yang_name = "regular-expression"; yang_parent_name = "subset"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::~RegularExpression()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_data() const
{
    return (notification !=  nullptr && notification->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_operation() const
{
    return is_set(yfilter)
	|| (notification !=  nullptr && notification->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-expression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification>();
        }
        return notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::Notification()
    :
    rising_falling(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling>())
{
    rising_falling->parent = this;

    yang_name = "notification"; yang_parent_name = "regular-expression"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::~Notification()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_data() const
{
    return (rising_falling !=  nullptr && rising_falling->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_operation() const
{
    return is_set(yfilter)
	|| (rising_falling !=  nullptr && rising_falling->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising-falling")
    {
        if(rising_falling == nullptr)
        {
            rising_falling = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling>();
        }
        return rising_falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising_falling != nullptr)
    {
        children["rising-falling"] = rising_falling;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-falling")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::RisingFalling()
    :
    disable{YType::str, "disable"}
{

    yang_name = "rising-falling"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::~RisingFalling()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_data() const
{
    return disable.is_set;
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising-falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Falling()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "falling"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::~Falling()
{
}

bool Mib::Subscriber::Threshold::Falling::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Falling::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Falling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Falling::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Falling::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Rising()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "rising"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::~Rising()
{
}

bool Mib::Subscriber::Threshold::Rising::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Rising::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    session_count{YType::uint32, "session-count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| session_count.is_set
	|| interval.is_set;
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Rising::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Rising::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "session-count" || name == "interval")
        return true;
    return false;
}


}
}

