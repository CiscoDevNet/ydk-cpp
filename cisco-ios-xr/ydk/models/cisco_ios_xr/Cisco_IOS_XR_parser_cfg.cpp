
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_parser_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_parser_cfg {

Parser::Parser()
    :
    indentation(std::make_shared<Parser::Indentation>())
	,alias(std::make_shared<Parser::Alias>())
	,history(std::make_shared<Parser::History>())
	,interactive(std::make_shared<Parser::Interactive>())
	,sysadmin_login_banner(std::make_shared<Parser::SysadminLoginBanner>())
	,interface_display(std::make_shared<Parser::InterfaceDisplay>())
	,netmask_format(std::make_shared<Parser::NetmaskFormat>())
	,configuration(std::make_shared<Parser::Configuration>())
	,submode_exit(std::make_shared<Parser::SubmodeExit>())
{
    indentation->parent = this;
    alias->parent = this;
    history->parent = this;
    interactive->parent = this;
    sysadmin_login_banner->parent = this;
    interface_display->parent = this;
    netmask_format->parent = this;
    configuration->parent = this;
    submode_exit->parent = this;

    yang_name = "parser"; yang_parent_name = "Cisco-IOS-XR-parser-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Parser::~Parser()
{
}

bool Parser::has_data() const
{
    return (indentation !=  nullptr && indentation->has_data())
	|| (alias !=  nullptr && alias->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (interactive !=  nullptr && interactive->has_data())
	|| (sysadmin_login_banner !=  nullptr && sysadmin_login_banner->has_data())
	|| (interface_display !=  nullptr && interface_display->has_data())
	|| (netmask_format !=  nullptr && netmask_format->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (submode_exit !=  nullptr && submode_exit->has_data());
}

bool Parser::has_operation() const
{
    return is_set(yfilter)
	|| (indentation !=  nullptr && indentation->has_operation())
	|| (alias !=  nullptr && alias->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (interactive !=  nullptr && interactive->has_operation())
	|| (sysadmin_login_banner !=  nullptr && sysadmin_login_banner->has_operation())
	|| (interface_display !=  nullptr && interface_display->has_operation())
	|| (netmask_format !=  nullptr && netmask_format->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (submode_exit !=  nullptr && submode_exit->has_operation());
}

std::string Parser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indentation")
    {
        if(indentation == nullptr)
        {
            indentation = std::make_shared<Parser::Indentation>();
        }
        return indentation;
    }

    if(child_yang_name == "alias")
    {
        if(alias == nullptr)
        {
            alias = std::make_shared<Parser::Alias>();
        }
        return alias;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Parser::History>();
        }
        return history;
    }

    if(child_yang_name == "interactive")
    {
        if(interactive == nullptr)
        {
            interactive = std::make_shared<Parser::Interactive>();
        }
        return interactive;
    }

    if(child_yang_name == "sysadmin-login-banner")
    {
        if(sysadmin_login_banner == nullptr)
        {
            sysadmin_login_banner = std::make_shared<Parser::SysadminLoginBanner>();
        }
        return sysadmin_login_banner;
    }

    if(child_yang_name == "interface-display")
    {
        if(interface_display == nullptr)
        {
            interface_display = std::make_shared<Parser::InterfaceDisplay>();
        }
        return interface_display;
    }

    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Parser::NetmaskFormat>();
        }
        return netmask_format;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Parser::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "submode-exit")
    {
        if(submode_exit == nullptr)
        {
            submode_exit = std::make_shared<Parser::SubmodeExit>();
        }
        return submode_exit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(indentation != nullptr)
    {
        children["indentation"] = indentation;
    }

    if(alias != nullptr)
    {
        children["alias"] = alias;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(interactive != nullptr)
    {
        children["interactive"] = interactive;
    }

    if(sysadmin_login_banner != nullptr)
    {
        children["sysadmin-login-banner"] = sysadmin_login_banner;
    }

    if(interface_display != nullptr)
    {
        children["interface-display"] = interface_display;
    }

    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(submode_exit != nullptr)
    {
        children["submode-exit"] = submode_exit;
    }

    return children;
}

void Parser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Parser::clone_ptr() const
{
    return std::make_shared<Parser>();
}

std::string Parser::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Parser::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Parser::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Parser::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Parser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indentation" || name == "alias" || name == "history" || name == "interactive" || name == "sysadmin-login-banner" || name == "interface-display" || name == "netmask-format" || name == "configuration" || name == "submode-exit")
        return true;
    return false;
}

Parser::Indentation::Indentation()
    :
    indentation_disable{YType::boolean, "indentation-disable"}
{

    yang_name = "indentation"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Indentation::~Indentation()
{
}

bool Parser::Indentation::has_data() const
{
    return indentation_disable.is_set;
}

bool Parser::Indentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(indentation_disable.yfilter);
}

std::string Parser::Indentation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Indentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Indentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (indentation_disable.is_set || is_set(indentation_disable.yfilter)) leaf_name_data.push_back(indentation_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Indentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Indentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Indentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "indentation-disable")
    {
        indentation_disable = value;
        indentation_disable.value_namespace = name_space;
        indentation_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Indentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "indentation-disable")
    {
        indentation_disable.yfilter = yfilter;
    }
}

bool Parser::Indentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indentation-disable")
        return true;
    return false;
}

Parser::Alias::Alias()
    :
    execs(std::make_shared<Parser::Alias::Execs>())
	,configurations(std::make_shared<Parser::Alias::Configurations>())
	,alls(std::make_shared<Parser::Alias::Alls>())
{
    execs->parent = this;
    configurations->parent = this;
    alls->parent = this;

    yang_name = "alias"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::~Alias()
{
}

bool Parser::Alias::has_data() const
{
    return (execs !=  nullptr && execs->has_data())
	|| (configurations !=  nullptr && configurations->has_data())
	|| (alls !=  nullptr && alls->has_data());
}

bool Parser::Alias::has_operation() const
{
    return is_set(yfilter)
	|| (execs !=  nullptr && execs->has_operation())
	|| (configurations !=  nullptr && configurations->has_operation())
	|| (alls !=  nullptr && alls->has_operation());
}

std::string Parser::Alias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "execs")
    {
        if(execs == nullptr)
        {
            execs = std::make_shared<Parser::Alias::Execs>();
        }
        return execs;
    }

    if(child_yang_name == "configurations")
    {
        if(configurations == nullptr)
        {
            configurations = std::make_shared<Parser::Alias::Configurations>();
        }
        return configurations;
    }

    if(child_yang_name == "alls")
    {
        if(alls == nullptr)
        {
            alls = std::make_shared<Parser::Alias::Alls>();
        }
        return alls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(execs != nullptr)
    {
        children["execs"] = execs;
    }

    if(configurations != nullptr)
    {
        children["configurations"] = configurations;
    }

    if(alls != nullptr)
    {
        children["alls"] = alls;
    }

    return children;
}

void Parser::Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Parser::Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "execs" || name == "configurations" || name == "alls")
        return true;
    return false;
}

Parser::Alias::Execs::Execs()
{

    yang_name = "execs"; yang_parent_name = "alias"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Execs::~Execs()
{
}

bool Parser::Alias::Execs::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Execs::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Parser::Alias::Execs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Execs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "execs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Execs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Execs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        auto c = std::make_shared<Parser::Alias::Execs::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Execs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : exec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Parser::Alias::Execs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::Alias::Execs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Parser::Alias::Execs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Parser::Alias::Execs::Exec::Exec()
    :
    identifier{YType::str, "identifier"},
    identifier_xr{YType::str, "identifier-xr"}
{

    yang_name = "exec"; yang_parent_name = "execs"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Execs::Exec::~Exec()
{
}

bool Parser::Alias::Execs::Exec::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Execs::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(identifier_xr.yfilter);
}

std::string Parser::Alias::Execs::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/execs/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Execs::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[identifier='" <<identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Execs::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.yfilter)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Execs::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Execs::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Alias::Execs::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
        identifier_xr.value_namespace = name_space;
        identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Alias::Execs::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr.yfilter = yfilter;
    }
}

bool Parser::Alias::Execs::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "identifier-xr")
        return true;
    return false;
}

Parser::Alias::Configurations::Configurations()
{

    yang_name = "configurations"; yang_parent_name = "alias"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Configurations::~Configurations()
{
}

bool Parser::Alias::Configurations::has_data() const
{
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Configurations::has_operation() const
{
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Parser::Alias::Configurations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Configurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configurations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Configurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Configurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        auto c = std::make_shared<Parser::Alias::Configurations::Configuration>();
        c->parent = this;
        configuration.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Configurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Parser::Alias::Configurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::Alias::Configurations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Parser::Alias::Configurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration")
        return true;
    return false;
}

Parser::Alias::Configurations::Configuration::Configuration()
    :
    identifier{YType::str, "identifier"},
    identifier_xr{YType::str, "identifier-xr"}
{

    yang_name = "configuration"; yang_parent_name = "configurations"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Configurations::Configuration::~Configuration()
{
}

bool Parser::Alias::Configurations::Configuration::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Configurations::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(identifier_xr.yfilter);
}

std::string Parser::Alias::Configurations::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Configurations::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration" <<"[identifier='" <<identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Configurations::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.yfilter)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Configurations::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Configurations::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Alias::Configurations::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
        identifier_xr.value_namespace = name_space;
        identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Alias::Configurations::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr.yfilter = yfilter;
    }
}

bool Parser::Alias::Configurations::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "identifier-xr")
        return true;
    return false;
}

Parser::Alias::Alls::Alls()
{

    yang_name = "alls"; yang_parent_name = "alias"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Alls::~Alls()
{
}

bool Parser::Alias::Alls::has_data() const
{
    for (std::size_t index=0; index<all.size(); index++)
    {
        if(all[index]->has_data())
            return true;
    }
    return false;
}

bool Parser::Alias::Alls::has_operation() const
{
    for (std::size_t index=0; index<all.size(); index++)
    {
        if(all[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Parser::Alias::Alls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Alls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Alls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Alls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        auto c = std::make_shared<Parser::Alias::Alls::All>();
        c->parent = this;
        all.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Alls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : all)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Parser::Alias::Alls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::Alias::Alls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Parser::Alias::Alls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Parser::Alias::Alls::All::All()
    :
    identifier{YType::str, "identifier"},
    identifier_xr{YType::str, "identifier-xr"}
{

    yang_name = "all"; yang_parent_name = "alls"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Alias::Alls::All::~All()
{
}

bool Parser::Alias::Alls::All::has_data() const
{
    return identifier.is_set
	|| identifier_xr.is_set;
}

bool Parser::Alias::Alls::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(identifier_xr.yfilter);
}

std::string Parser::Alias::Alls::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/alias/alls/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Alias::Alls::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all" <<"[identifier='" <<identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Alias::Alls::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (identifier_xr.is_set || is_set(identifier_xr.yfilter)) leaf_name_data.push_back(identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Alias::Alls::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Alias::Alls::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Alias::Alls::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr = value;
        identifier_xr.value_namespace = name_space;
        identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Alias::Alls::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "identifier-xr")
    {
        identifier_xr.yfilter = yfilter;
    }
}

bool Parser::Alias::Alls::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "identifier-xr")
        return true;
    return false;
}

Parser::History::History()
    :
    size{YType::uint32, "size"}
{

    yang_name = "history"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::History::~History()
{
}

bool Parser::History::has_data() const
{
    return size.is_set;
}

bool Parser::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Parser::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Parser::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Parser::Interactive::Interactive()
    :
    interactive_disable{YType::boolean, "interactive-disable"}
{

    yang_name = "interactive"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Interactive::~Interactive()
{
}

bool Parser::Interactive::has_data() const
{
    return interactive_disable.is_set;
}

bool Parser::Interactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interactive_disable.yfilter);
}

std::string Parser::Interactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Interactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Interactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interactive_disable.is_set || is_set(interactive_disable.yfilter)) leaf_name_data.push_back(interactive_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Interactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Interactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Interactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interactive-disable")
    {
        interactive_disable = value;
        interactive_disable.value_namespace = name_space;
        interactive_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Interactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interactive-disable")
    {
        interactive_disable.yfilter = yfilter;
    }
}

bool Parser::Interactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interactive-disable")
        return true;
    return false;
}

Parser::SysadminLoginBanner::SysadminLoginBanner()
    :
    sysadmin_login_banner_disable{YType::boolean, "sysadmin-login-banner-disable"}
{

    yang_name = "sysadmin-login-banner"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::SysadminLoginBanner::~SysadminLoginBanner()
{
}

bool Parser::SysadminLoginBanner::has_data() const
{
    return sysadmin_login_banner_disable.is_set;
}

bool Parser::SysadminLoginBanner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysadmin_login_banner_disable.yfilter);
}

std::string Parser::SysadminLoginBanner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::SysadminLoginBanner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysadmin-login-banner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::SysadminLoginBanner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysadmin_login_banner_disable.is_set || is_set(sysadmin_login_banner_disable.yfilter)) leaf_name_data.push_back(sysadmin_login_banner_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::SysadminLoginBanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::SysadminLoginBanner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::SysadminLoginBanner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysadmin-login-banner-disable")
    {
        sysadmin_login_banner_disable = value;
        sysadmin_login_banner_disable.value_namespace = name_space;
        sysadmin_login_banner_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::SysadminLoginBanner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysadmin-login-banner-disable")
    {
        sysadmin_login_banner_disable.yfilter = yfilter;
    }
}

bool Parser::SysadminLoginBanner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysadmin-login-banner-disable")
        return true;
    return false;
}

Parser::InterfaceDisplay::InterfaceDisplay()
    :
    slot_order{YType::boolean, "slot-order"}
{

    yang_name = "interface-display"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::InterfaceDisplay::~InterfaceDisplay()
{
}

bool Parser::InterfaceDisplay::has_data() const
{
    return slot_order.is_set;
}

bool Parser::InterfaceDisplay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_order.yfilter);
}

std::string Parser::InterfaceDisplay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::InterfaceDisplay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-display";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::InterfaceDisplay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_order.is_set || is_set(slot_order.yfilter)) leaf_name_data.push_back(slot_order.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::InterfaceDisplay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::InterfaceDisplay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::InterfaceDisplay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-order")
    {
        slot_order = value;
        slot_order.value_namespace = name_space;
        slot_order.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::InterfaceDisplay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-order")
    {
        slot_order.yfilter = yfilter;
    }
}

bool Parser::InterfaceDisplay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot-order")
        return true;
    return false;
}

Parser::NetmaskFormat::NetmaskFormat()
    :
    bit_count{YType::boolean, "bit-count"}
{

    yang_name = "netmask-format"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::NetmaskFormat::~NetmaskFormat()
{
}

bool Parser::NetmaskFormat::has_data() const
{
    return bit_count.is_set;
}

bool Parser::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_count.yfilter);
}

std::string Parser::NetmaskFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_count.is_set || is_set(bit_count.yfilter)) leaf_name_data.push_back(bit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-count")
    {
        bit_count = value;
        bit_count.value_namespace = name_space;
        bit_count.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-count")
    {
        bit_count.yfilter = yfilter;
    }
}

bool Parser::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-count")
        return true;
    return false;
}

Parser::Configuration::Configuration()
    :
    disable(std::make_shared<Parser::Configuration::Disable>())
{
    disable->parent = this;

    yang_name = "configuration"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Configuration::~Configuration()
{
}

bool Parser::Configuration::has_data() const
{
    return (disable !=  nullptr && disable->has_data());
}

bool Parser::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (disable !=  nullptr && disable->has_operation());
}

std::string Parser::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Parser::Configuration::Disable>();
        }
        return disable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    return children;
}

void Parser::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Parser::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Parser::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Parser::Configuration::Disable::Disable()
    :
    usergroup{YType::str, "usergroup"}
{

    yang_name = "disable"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::Configuration::Disable::~Disable()
{
}

bool Parser::Configuration::Disable::has_data() const
{
    return usergroup.is_set;
}

bool Parser::Configuration::Disable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usergroup.yfilter);
}

std::string Parser::Configuration::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::Configuration::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::Configuration::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usergroup.is_set || is_set(usergroup.yfilter)) leaf_name_data.push_back(usergroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::Configuration::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::Configuration::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::Configuration::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usergroup")
    {
        usergroup = value;
        usergroup.value_namespace = name_space;
        usergroup.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::Configuration::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usergroup")
    {
        usergroup.yfilter = yfilter;
    }
}

bool Parser::Configuration::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usergroup")
        return true;
    return false;
}

Parser::SubmodeExit::SubmodeExit()
    :
    enable{YType::boolean, "enable"}
{

    yang_name = "submode-exit"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Parser::SubmodeExit::~SubmodeExit()
{
}

bool Parser::SubmodeExit::has_data() const
{
    return enable.is_set;
}

bool Parser::SubmodeExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Parser::SubmodeExit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-parser-cfg:parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Parser::SubmodeExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "submode-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Parser::SubmodeExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Parser::SubmodeExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Parser::SubmodeExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Parser::SubmodeExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Parser::SubmodeExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Parser::SubmodeExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}


}
}

