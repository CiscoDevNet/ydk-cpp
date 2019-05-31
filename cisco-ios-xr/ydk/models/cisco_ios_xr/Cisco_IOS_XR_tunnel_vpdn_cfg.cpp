
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_vpdn_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_vpdn_cfg {

Vpdn::Vpdn()
    :
    session_limit{YType::uint32, "session-limit"},
    enable{YType::empty, "enable"},
    soft_shut{YType::empty, "soft-shut"}
        ,
    history(std::make_shared<Vpdn::History>())
    , redundancy(std::make_shared<Vpdn::Redundancy>())
    , local(std::make_shared<Vpdn::Local>())
    , templates(std::make_shared<Vpdn::Templates>())
    , caller_id(std::make_shared<Vpdn::CallerId>())
    , vpd_ngroups(std::make_shared<Vpdn::VpdNgroups>())
    , loggings(std::make_shared<Vpdn::Loggings>())
    , l2tp(std::make_shared<Vpdn::L2tp>())
{
    history->parent = this;
    redundancy->parent = this;
    local->parent = this;
    templates->parent = this;
    caller_id->parent = this;
    vpd_ngroups->parent = this;
    loggings->parent = this;
    l2tp->parent = this;

    yang_name = "vpdn"; yang_parent_name = "Cisco-IOS-XR-tunnel-vpdn-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Vpdn::~Vpdn()
{
}

bool Vpdn::has_data() const
{
    if (is_presence_container) return true;
    return session_limit.is_set
	|| enable.is_set
	|| soft_shut.is_set
	|| (history !=  nullptr && history->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (templates !=  nullptr && templates->has_data())
	|| (caller_id !=  nullptr && caller_id->has_data())
	|| (vpd_ngroups !=  nullptr && vpd_ngroups->has_data())
	|| (loggings !=  nullptr && loggings->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data());
}

bool Vpdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(soft_shut.yfilter)
	|| (history !=  nullptr && history->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (templates !=  nullptr && templates->has_operation())
	|| (caller_id !=  nullptr && caller_id->has_operation())
	|| (vpd_ngroups !=  nullptr && vpd_ngroups->has_operation())
	|| (loggings !=  nullptr && loggings->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation());
}

std::string Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (soft_shut.is_set || is_set(soft_shut.yfilter)) leaf_name_data.push_back(soft_shut.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Vpdn::History>();
        }
        return history;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Vpdn::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Vpdn::Local>();
        }
        return local;
    }

    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<Vpdn::Templates>();
        }
        return templates;
    }

    if(child_yang_name == "caller-id")
    {
        if(caller_id == nullptr)
        {
            caller_id = std::make_shared<Vpdn::CallerId>();
        }
        return caller_id;
    }

    if(child_yang_name == "vpd-ngroups")
    {
        if(vpd_ngroups == nullptr)
        {
            vpd_ngroups = std::make_shared<Vpdn::VpdNgroups>();
        }
        return vpd_ngroups;
    }

    if(child_yang_name == "loggings")
    {
        if(loggings == nullptr)
        {
            loggings = std::make_shared<Vpdn::Loggings>();
        }
        return loggings;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<Vpdn::L2tp>();
        }
        return l2tp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(templates != nullptr)
    {
        _children["templates"] = templates;
    }

    if(caller_id != nullptr)
    {
        _children["caller-id"] = caller_id;
    }

    if(vpd_ngroups != nullptr)
    {
        _children["vpd-ngroups"] = vpd_ngroups;
    }

    if(loggings != nullptr)
    {
        _children["loggings"] = loggings;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    return _children;
}

void Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-shut")
    {
        soft_shut = value;
        soft_shut.value_namespace = name_space;
        soft_shut.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "soft-shut")
    {
        soft_shut.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Vpdn::clone_ptr() const
{
    return std::make_shared<Vpdn>();
}

std::string Vpdn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vpdn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vpdn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vpdn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "redundancy" || name == "local" || name == "templates" || name == "caller-id" || name == "vpd-ngroups" || name == "loggings" || name == "l2tp" || name == "session-limit" || name == "enable" || name == "soft-shut")
        return true;
    return false;
}

Vpdn::History::History()
    :
    failure{YType::empty, "failure"}
{

    yang_name = "history"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::History::~History()
{
}

bool Vpdn::History::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set;
}

bool Vpdn::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Vpdn::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Vpdn::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Vpdn::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
        ,
    process_failures(std::make_shared<Vpdn::Redundancy::ProcessFailures>())
{
    process_failures->parent = this;

    yang_name = "redundancy"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Redundancy::~Redundancy()
{
}

bool Vpdn::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (process_failures !=  nullptr && process_failures->has_data());
}

bool Vpdn::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (process_failures !=  nullptr && process_failures->has_operation());
}

std::string Vpdn::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-failures")
    {
        if(process_failures == nullptr)
        {
            process_failures = std::make_shared<Vpdn::Redundancy::ProcessFailures>();
        }
        return process_failures;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(process_failures != nullptr)
    {
        _children["process-failures"] = process_failures;
    }

    return _children;
}

void Vpdn::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Vpdn::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-failures" || name == "enable")
        return true;
    return false;
}

Vpdn::Redundancy::ProcessFailures::ProcessFailures()
    :
    switchover{YType::empty, "switchover"}
{

    yang_name = "process-failures"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Redundancy::ProcessFailures::~ProcessFailures()
{
}

bool Vpdn::Redundancy::ProcessFailures::has_data() const
{
    if (is_presence_container) return true;
    return switchover.is_set;
}

bool Vpdn::Redundancy::ProcessFailures::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Vpdn::Redundancy::ProcessFailures::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Redundancy::ProcessFailures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-failures";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Redundancy::ProcessFailures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Redundancy::ProcessFailures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Redundancy::ProcessFailures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Redundancy::ProcessFailures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Redundancy::ProcessFailures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Vpdn::Redundancy::ProcessFailures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover")
        return true;
    return false;
}

Vpdn::Local::Local()
    :
    secret_text{YType::str, "secret-text"},
    path{YType::str, "path"},
    cache_disabled{YType::empty, "cache-disabled"},
    port{YType::uint16, "port"}
{

    yang_name = "local"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Local::~Local()
{
}

bool Vpdn::Local::has_data() const
{
    if (is_presence_container) return true;
    return secret_text.is_set
	|| path.is_set
	|| cache_disabled.is_set
	|| port.is_set;
}

bool Vpdn::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secret_text.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(cache_disabled.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Vpdn::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret_text.is_set || is_set(secret_text.yfilter)) leaf_name_data.push_back(secret_text.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (cache_disabled.is_set || is_set(cache_disabled.yfilter)) leaf_name_data.push_back(cache_disabled.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secret-text")
    {
        secret_text = value;
        secret_text.value_namespace = name_space;
        secret_text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-disabled")
    {
        cache_disabled = value;
        cache_disabled.value_namespace = name_space;
        cache_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secret-text")
    {
        secret_text.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "cache-disabled")
    {
        cache_disabled.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Vpdn::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret-text" || name == "path" || name == "cache-disabled" || name == "port")
        return true;
    return false;
}

Vpdn::Templates::Templates()
    :
    template_(this, {"template_name"})
{

    yang_name = "templates"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Templates::~Templates()
{
}

bool Vpdn::Templates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<template_.len(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.len(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::Templates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        auto ent_ = std::make_shared<Vpdn::Templates::Template>();
        ent_->parent = this;
        template_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : template_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::Templates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::Templates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::Templates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Vpdn::Templates::Template::Template()
    :
    template_name{YType::str, "template-name"},
    cisco_avp100_format_e_enable{YType::empty, "cisco-avp100-format-e-enable"},
    rate_convert_speed_avps{YType::empty, "rate-convert-speed-avps"},
    description{YType::str, "description"},
    l2tp_class{YType::str, "l2tp-class"},
    dsl_line_forwarding{YType::empty, "dsl-line-forwarding"}
        ,
    caller_id(std::make_shared<Vpdn::Templates::Template::CallerId>())
    , vpn(std::make_shared<Vpdn::Templates::Template::Vpn>())
    , tunnel(std::make_shared<Vpdn::Templates::Template::Tunnel>())
    , ip(std::make_shared<Vpdn::Templates::Template::Ip>())
    , ipv4(std::make_shared<Vpdn::Templates::Template::Ipv4>())
{
    caller_id->parent = this;
    vpn->parent = this;
    tunnel->parent = this;
    ip->parent = this;
    ipv4->parent = this;

    yang_name = "template"; yang_parent_name = "templates"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Templates::Template::~Template()
{
}

bool Vpdn::Templates::Template::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| cisco_avp100_format_e_enable.is_set
	|| rate_convert_speed_avps.is_set
	|| description.is_set
	|| l2tp_class.is_set
	|| dsl_line_forwarding.is_set
	|| (caller_id !=  nullptr && caller_id->has_data())
	|| (vpn !=  nullptr && vpn->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Vpdn::Templates::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(cisco_avp100_format_e_enable.yfilter)
	|| ydk::is_set(rate_convert_speed_avps.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(l2tp_class.yfilter)
	|| ydk::is_set(dsl_line_forwarding.yfilter)
	|| (caller_id !=  nullptr && caller_id->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Vpdn::Templates::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/templates/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Templates::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    ADD_KEY_TOKEN(template_name, "template-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (cisco_avp100_format_e_enable.is_set || is_set(cisco_avp100_format_e_enable.yfilter)) leaf_name_data.push_back(cisco_avp100_format_e_enable.get_name_leafdata());
    if (rate_convert_speed_avps.is_set || is_set(rate_convert_speed_avps.yfilter)) leaf_name_data.push_back(rate_convert_speed_avps.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (l2tp_class.is_set || is_set(l2tp_class.yfilter)) leaf_name_data.push_back(l2tp_class.get_name_leafdata());
    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.yfilter)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caller-id")
    {
        if(caller_id == nullptr)
        {
            caller_id = std::make_shared<Vpdn::Templates::Template::CallerId>();
        }
        return caller_id;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Vpdn::Templates::Template::Vpn>();
        }
        return vpn;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Vpdn::Templates::Template::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Vpdn::Templates::Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Vpdn::Templates::Template::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(caller_id != nullptr)
    {
        _children["caller-id"] = caller_id;
    }

    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Vpdn::Templates::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-avp100-format-e-enable")
    {
        cisco_avp100_format_e_enable = value;
        cisco_avp100_format_e_enable.value_namespace = name_space;
        cisco_avp100_format_e_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-convert-speed-avps")
    {
        rate_convert_speed_avps = value;
        rate_convert_speed_avps.value_namespace = name_space;
        rate_convert_speed_avps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class = value;
        l2tp_class.value_namespace = name_space;
        l2tp_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
        dsl_line_forwarding.value_namespace = name_space;
        dsl_line_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "cisco-avp100-format-e-enable")
    {
        cisco_avp100_format_e_enable.yfilter = yfilter;
    }
    if(value_path == "rate-convert-speed-avps")
    {
        rate_convert_speed_avps.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class.yfilter = yfilter;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caller-id" || name == "vpn" || name == "tunnel" || name == "ip" || name == "ipv4" || name == "template-name" || name == "cisco-avp100-format-e-enable" || name == "rate-convert-speed-avps" || name == "description" || name == "l2tp-class" || name == "dsl-line-forwarding")
        return true;
    return false;
}

Vpdn::Templates::Template::CallerId::CallerId()
    :
    mask{YType::str, "mask"}
{

    yang_name = "caller-id"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::CallerId::~CallerId()
{
}

bool Vpdn::Templates::Template::CallerId::has_data() const
{
    if (is_presence_container) return true;
    return mask.is_set;
}

bool Vpdn::Templates::Template::CallerId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Vpdn::Templates::Template::CallerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caller-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::CallerId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::CallerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::CallerId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Templates::Template::CallerId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::CallerId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::CallerId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask")
        return true;
    return false;
}

Vpdn::Templates::Template::Vpn::Vpn()
    :
    vrf{YType::str, "vrf"}
        ,
    id(std::make_shared<Vpdn::Templates::Template::Vpn::Id>())
{
    id->parent = this;

    yang_name = "vpn"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::Vpn::~Vpn()
{
}

bool Vpdn::Templates::Template::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Vpdn::Templates::Template::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Vpdn::Templates::Template::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Vpdn::Templates::Template::Vpn::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void Vpdn::Templates::Template::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vrf")
        return true;
    return false;
}

Vpdn::Templates::Template::Vpn::Id::Id()
    :
    oui{YType::str, "oui"},
    index_{YType::str, "index"}
{

    yang_name = "id"; yang_parent_name = "vpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::Vpn::Id::~Id()
{
}

bool Vpdn::Templates::Template::Vpn::Id::has_data() const
{
    if (is_presence_container) return true;
    return oui.is_set
	|| index_.is_set;
}

bool Vpdn::Templates::Template::Vpn::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Vpdn::Templates::Template::Vpn::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::Vpn::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::Vpn::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::Vpn::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Templates::Template::Vpn::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::Vpn::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::Vpn::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "index")
        return true;
    return false;
}

Vpdn::Templates::Template::Tunnel::Tunnel()
    :
    busy_timeout{YType::uint32, "busy-timeout"}
{

    yang_name = "tunnel"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::Tunnel::~Tunnel()
{
}

bool Vpdn::Templates::Template::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return busy_timeout.is_set;
}

bool Vpdn::Templates::Template::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(busy_timeout.yfilter);
}

std::string Vpdn::Templates::Template::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (busy_timeout.is_set || is_set(busy_timeout.yfilter)) leaf_name_data.push_back(busy_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Templates::Template::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "busy-timeout")
    {
        busy_timeout = value;
        busy_timeout.value_namespace = name_space;
        busy_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "busy-timeout")
    {
        busy_timeout.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "busy-timeout")
        return true;
    return false;
}

Vpdn::Templates::Template::Ip::Ip()
    :
    tos{YType::uint32, "tos"}
{

    yang_name = "ip"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::Ip::~Ip()
{
}

bool Vpdn::Templates::Template::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tos.is_set;
}

bool Vpdn::Templates::Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos.yfilter);
}

std::string Vpdn::Templates::Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Templates::Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Vpdn::Templates::Template::Ipv4::Ipv4()
    :
    df_bit{YType::enumeration, "df-bit"},
    source{YType::str, "source"}
{

    yang_name = "ipv4"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Templates::Template::Ipv4::~Ipv4()
{
}

bool Vpdn::Templates::Template::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| source.is_set;
}

bool Vpdn::Templates::Template::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Vpdn::Templates::Template::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Templates::Template::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Templates::Template::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Templates::Template::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Templates::Template::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Templates::Template::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Vpdn::Templates::Template::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "source")
        return true;
    return false;
}

Vpdn::CallerId::CallerId()
    :
    mask{YType::str, "mask"}
{

    yang_name = "caller-id"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::CallerId::~CallerId()
{
}

bool Vpdn::CallerId::has_data() const
{
    if (is_presence_container) return true;
    return mask.is_set;
}

bool Vpdn::CallerId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Vpdn::CallerId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::CallerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caller-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::CallerId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::CallerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::CallerId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::CallerId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::CallerId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Vpdn::CallerId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask")
        return true;
    return false;
}

Vpdn::VpdNgroups::VpdNgroups()
    :
    vpd_ngroup(this, {"vpd_ngroupname"})
{

    yang_name = "vpd-ngroups"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdNgroups::~VpdNgroups()
{
}

bool Vpdn::VpdNgroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpd_ngroup.len(); index++)
    {
        if(vpd_ngroup[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::VpdNgroups::has_operation() const
{
    for (std::size_t index=0; index<vpd_ngroup.len(); index++)
    {
        if(vpd_ngroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::VpdNgroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdNgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpd-ngroups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdNgroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdNgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpd-ngroup")
    {
        auto ent_ = std::make_shared<Vpdn::VpdNgroups::VpdNgroup>();
        ent_->parent = this;
        vpd_ngroup.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdNgroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vpd_ngroup.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::VpdNgroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::VpdNgroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::VpdNgroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpd-ngroup")
        return true;
    return false;
}

Vpdn::VpdNgroups::VpdNgroup::VpdNgroup()
    :
    vpd_ngroupname{YType::str, "vpd-ngroupname"},
    dsl_line_forwarding{YType::empty, "dsl-line-forwarding"},
    cisco_avp100_format_e_enable{YType::empty, "cisco-avp100-format-e-enable"},
    desc{YType::str, "desc"},
    attribute{YType::str, "attribute"},
    l2tp_class{YType::str, "l2tp-class"},
    tunnel_busy_timeout{YType::uint32, "tunnel-busy-timeout"},
    vrf_name{YType::str, "vrf-name"},
    sr_ctemplate{YType::str, "sr-ctemplate"}
        ,
    vpn_id(std::make_shared<Vpdn::VpdNgroups::VpdNgroup::VpnId>())
    , ip(std::make_shared<Vpdn::VpdNgroups::VpdNgroup::Ip>())
{
    vpn_id->parent = this;
    ip->parent = this;

    yang_name = "vpd-ngroup"; yang_parent_name = "vpd-ngroups"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdNgroups::VpdNgroup::~VpdNgroup()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::has_data() const
{
    if (is_presence_container) return true;
    return vpd_ngroupname.is_set
	|| dsl_line_forwarding.is_set
	|| cisco_avp100_format_e_enable.is_set
	|| desc.is_set
	|| attribute.is_set
	|| l2tp_class.is_set
	|| tunnel_busy_timeout.is_set
	|| vrf_name.is_set
	|| sr_ctemplate.is_set
	|| (vpn_id !=  nullptr && vpn_id->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Vpdn::VpdNgroups::VpdNgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpd_ngroupname.yfilter)
	|| ydk::is_set(dsl_line_forwarding.yfilter)
	|| ydk::is_set(cisco_avp100_format_e_enable.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(l2tp_class.yfilter)
	|| ydk::is_set(tunnel_busy_timeout.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(sr_ctemplate.yfilter)
	|| (vpn_id !=  nullptr && vpn_id->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Vpdn::VpdNgroups::VpdNgroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/vpd-ngroups/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdNgroups::VpdNgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpd-ngroup";
    ADD_KEY_TOKEN(vpd_ngroupname, "vpd-ngroupname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdNgroups::VpdNgroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpd_ngroupname.is_set || is_set(vpd_ngroupname.yfilter)) leaf_name_data.push_back(vpd_ngroupname.get_name_leafdata());
    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.yfilter)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());
    if (cisco_avp100_format_e_enable.is_set || is_set(cisco_avp100_format_e_enable.yfilter)) leaf_name_data.push_back(cisco_avp100_format_e_enable.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (l2tp_class.is_set || is_set(l2tp_class.yfilter)) leaf_name_data.push_back(l2tp_class.get_name_leafdata());
    if (tunnel_busy_timeout.is_set || is_set(tunnel_busy_timeout.yfilter)) leaf_name_data.push_back(tunnel_busy_timeout.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (sr_ctemplate.is_set || is_set(sr_ctemplate.yfilter)) leaf_name_data.push_back(sr_ctemplate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdNgroups::VpdNgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn-id")
    {
        if(vpn_id == nullptr)
        {
            vpn_id = std::make_shared<Vpdn::VpdNgroups::VpdNgroup::VpnId>();
        }
        return vpn_id;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Vpdn::VpdNgroups::VpdNgroup::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdNgroups::VpdNgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpn_id != nullptr)
    {
        _children["vpn-id"] = vpn_id;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Vpdn::VpdNgroups::VpdNgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpd-ngroupname")
    {
        vpd_ngroupname = value;
        vpd_ngroupname.value_namespace = name_space;
        vpd_ngroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
        dsl_line_forwarding.value_namespace = name_space;
        dsl_line_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-avp100-format-e-enable")
    {
        cisco_avp100_format_e_enable = value;
        cisco_avp100_format_e_enable.value_namespace = name_space;
        cisco_avp100_format_e_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class = value;
        l2tp_class.value_namespace = name_space;
        l2tp_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-busy-timeout")
    {
        tunnel_busy_timeout = value;
        tunnel_busy_timeout.value_namespace = name_space;
        tunnel_busy_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ctemplate")
    {
        sr_ctemplate = value;
        sr_ctemplate.value_namespace = name_space;
        sr_ctemplate.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdNgroups::VpdNgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpd-ngroupname")
    {
        vpd_ngroupname.yfilter = yfilter;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding.yfilter = yfilter;
    }
    if(value_path == "cisco-avp100-format-e-enable")
    {
        cisco_avp100_format_e_enable.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class.yfilter = yfilter;
    }
    if(value_path == "tunnel-busy-timeout")
    {
        tunnel_busy_timeout.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "sr-ctemplate")
    {
        sr_ctemplate.yfilter = yfilter;
    }
}

bool Vpdn::VpdNgroups::VpdNgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "ip" || name == "vpd-ngroupname" || name == "dsl-line-forwarding" || name == "cisco-avp100-format-e-enable" || name == "desc" || name == "attribute" || name == "l2tp-class" || name == "tunnel-busy-timeout" || name == "vrf-name" || name == "sr-ctemplate")
        return true;
    return false;
}

Vpdn::VpdNgroups::VpdNgroup::VpnId::VpnId()
    :
    vpn_id_oui{YType::str, "vpn-id-oui"},
    vpn_id_index{YType::str, "vpn-id-index"}
{

    yang_name = "vpn-id"; yang_parent_name = "vpd-ngroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::VpdNgroups::VpdNgroup::VpnId::~VpnId()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::VpnId::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id_oui.is_set
	|| vpn_id_index.is_set;
}

bool Vpdn::VpdNgroups::VpdNgroup::VpnId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id_oui.yfilter)
	|| ydk::is_set(vpn_id_index.yfilter);
}

std::string Vpdn::VpdNgroups::VpdNgroup::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdNgroups::VpdNgroup::VpnId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id_oui.is_set || is_set(vpn_id_oui.yfilter)) leaf_name_data.push_back(vpn_id_oui.get_name_leafdata());
    if (vpn_id_index.is_set || is_set(vpn_id_index.yfilter)) leaf_name_data.push_back(vpn_id_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdNgroups::VpdNgroup::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdNgroups::VpdNgroup::VpnId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdNgroups::VpdNgroup::VpnId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id-oui")
    {
        vpn_id_oui = value;
        vpn_id_oui.value_namespace = name_space;
        vpn_id_oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id-index")
    {
        vpn_id_index = value;
        vpn_id_index.value_namespace = name_space;
        vpn_id_index.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdNgroups::VpdNgroup::VpnId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id-oui")
    {
        vpn_id_oui.yfilter = yfilter;
    }
    if(value_path == "vpn-id-index")
    {
        vpn_id_index.yfilter = yfilter;
    }
}

bool Vpdn::VpdNgroups::VpdNgroup::VpnId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id-oui" || name == "vpn-id-index")
        return true;
    return false;
}

Vpdn::VpdNgroups::VpdNgroup::Ip::Ip()
    :
    tos{YType::uint32, "tos"}
{

    yang_name = "ip"; yang_parent_name = "vpd-ngroup"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::VpdNgroups::VpdNgroup::Ip::~Ip()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tos.is_set;
}

bool Vpdn::VpdNgroups::VpdNgroup::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos.yfilter);
}

std::string Vpdn::VpdNgroups::VpdNgroup::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdNgroups::VpdNgroup::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdNgroups::VpdNgroup::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdNgroups::VpdNgroup::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdNgroups::VpdNgroup::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdNgroups::VpdNgroup::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
}

bool Vpdn::VpdNgroups::VpdNgroup::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Vpdn::Loggings::Loggings()
    :
    logging(this, {"option"})
{

    yang_name = "loggings"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Loggings::~Loggings()
{
}

bool Vpdn::Loggings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logging.len(); index++)
    {
        if(logging[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Loggings::has_operation() const
{
    for (std::size_t index=0; index<logging.len(); index++)
    {
        if(logging[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::Loggings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Loggings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loggings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Loggings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Loggings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        auto ent_ = std::make_shared<Vpdn::Loggings::Logging>();
        ent_->parent = this;
        logging.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Loggings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : logging.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::Loggings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::Loggings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::Loggings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Vpdn::Loggings::Logging::Logging()
    :
    option{YType::enumeration, "option"}
{

    yang_name = "logging"; yang_parent_name = "loggings"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Loggings::Logging::~Logging()
{
}

bool Vpdn::Loggings::Logging::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set;
}

bool Vpdn::Loggings::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Vpdn::Loggings::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/loggings/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Loggings::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Loggings::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Loggings::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Loggings::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Loggings::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Loggings::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Vpdn::Loggings::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Vpdn::L2tp::L2tp()
    :
    tcp_mss_adjust{YType::uint32, "tcp-mss-adjust"},
    reassembly{YType::empty, "reassembly"}
        ,
    session_id(std::make_shared<Vpdn::L2tp::SessionId>())
{
    session_id->parent = this;

    yang_name = "l2tp"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::L2tp::~L2tp()
{
}

bool Vpdn::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss_adjust.is_set
	|| reassembly.is_set
	|| (session_id !=  nullptr && session_id->has_data());
}

bool Vpdn::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss_adjust.yfilter)
	|| ydk::is_set(reassembly.yfilter)
	|| (session_id !=  nullptr && session_id->has_operation());
}

std::string Vpdn::L2tp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss_adjust.is_set || is_set(tcp_mss_adjust.yfilter)) leaf_name_data.push_back(tcp_mss_adjust.get_name_leafdata());
    if (reassembly.is_set || is_set(reassembly.yfilter)) leaf_name_data.push_back(reassembly.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-id")
    {
        if(session_id == nullptr)
        {
            session_id = std::make_shared<Vpdn::L2tp::SessionId>();
        }
        return session_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_id != nullptr)
    {
        _children["session-id"] = session_id;
    }

    return _children;
}

void Vpdn::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust = value;
        tcp_mss_adjust.value_namespace = name_space;
        tcp_mss_adjust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly")
    {
        reassembly = value;
        reassembly.value_namespace = name_space;
        reassembly.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust.yfilter = yfilter;
    }
    if(value_path == "reassembly")
    {
        reassembly.yfilter = yfilter;
    }
}

bool Vpdn::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tcp-mss-adjust" || name == "reassembly")
        return true;
    return false;
}

Vpdn::L2tp::SessionId::SessionId()
    :
    space(std::make_shared<Vpdn::L2tp::SessionId::Space>())
{
    space->parent = this;

    yang_name = "session-id"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::L2tp::SessionId::~SessionId()
{
}

bool Vpdn::L2tp::SessionId::has_data() const
{
    if (is_presence_container) return true;
    return (space !=  nullptr && space->has_data());
}

bool Vpdn::L2tp::SessionId::has_operation() const
{
    return is_set(yfilter)
	|| (space !=  nullptr && space->has_operation());
}

std::string Vpdn::L2tp::SessionId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/l2tp/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::L2tp::SessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::L2tp::SessionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::L2tp::SessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "space")
    {
        if(space == nullptr)
        {
            space = std::make_shared<Vpdn::L2tp::SessionId::Space>();
        }
        return space;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::L2tp::SessionId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(space != nullptr)
    {
        _children["space"] = space;
    }

    return _children;
}

void Vpdn::L2tp::SessionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::L2tp::SessionId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::L2tp::SessionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "space")
        return true;
    return false;
}

Vpdn::L2tp::SessionId::Space::Space()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "space"; yang_parent_name = "session-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::L2tp::SessionId::Space::~Space()
{
}

bool Vpdn::L2tp::SessionId::Space::has_data() const
{
    if (is_presence_container) return true;
    return hierarchy.is_set;
}

bool Vpdn::L2tp::SessionId::Space::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Vpdn::L2tp::SessionId::Space::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/l2tp/session-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::L2tp::SessionId::Space::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "space";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::L2tp::SessionId::Space::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::L2tp::SessionId::Space::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::L2tp::SessionId::Space::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::L2tp::SessionId::Space::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::L2tp::SessionId::Space::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Vpdn::L2tp::SessionId::Space::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

const Enum::YLeaf DfBit::clear {0, "clear"};
const Enum::YLeaf DfBit::reflect {1, "reflect"};
const Enum::YLeaf DfBit::set {2, "set"};

const Enum::YLeaf Option::local {1, "local"};
const Enum::YLeaf Option::user {2, "user"};
const Enum::YLeaf Option::dead_cache {8, "dead-cache"};
const Enum::YLeaf Option::tunnel_drop {16, "tunnel-drop"};


}
}

