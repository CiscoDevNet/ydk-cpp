
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_229.hpp"
#include "Cisco_IOS_XE_native_230.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::UtdSt::Utd::Engine::Standard::Logging::Logging()
    :
    syslog{YType::empty, "syslog"}
        ,
    host(this, {"name"})
{

    yang_name = "logging"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return syslog.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "syslog")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::Logging::Host::Host()
    :
    name{YType::str, "name"}
{

    yang_name = "host"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::Logging::Host::~Host()
{
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::Logging::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::Logging::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::ThreatInspection()
    :
    threat{YType::enumeration, "threat"},
    policy{YType::enumeration, "policy"},
    whitelist{YType::empty, "whitelist"}
        ,
    signature(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature>())
    , logging(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging>())
{
    signature->parent = this;
    logging->parent = this;

    yang_name = "threat-inspection"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    return threat.is_set
	|| policy.is_set
	|| whitelist.is_set
	|| (signature !=  nullptr && signature->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threat.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(whitelist.yfilter)
	|| (signature !=  nullptr && signature->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (whitelist.is_set || is_set(whitelist.yfilter)) leaf_name_data.push_back(whitelist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature>();
        }
        return signature;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signature != nullptr)
    {
        _children["signature"] = signature;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whitelist")
    {
        whitelist = value;
        whitelist.value_namespace = name_space;
        whitelist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "whitelist")
    {
        whitelist.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature" || name == "logging" || name == "threat" || name == "policy" || name == "whitelist")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Signature()
    :
    update(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::~Signature()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_data() const
{
    if (is_presence_container) return true;
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update != nullptr)
    {
        _children["update"] = update;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt>())
    , server(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server>())
{
    occur_at->parent = this;
    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::~Update()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_data() const
{
    if (is_presence_container) return true;
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_operation() const
{
    return is_set(yfilter)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(occur_at != nullptr)
    {
        _children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "occur-at" || name == "server")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::OccurAt()
    :
    daily{YType::empty, "daily"},
    monthly{YType::str, "monthly"},
    weekly{YType::str, "weekly"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "occur-at"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_data() const
{
    if (is_presence_container) return true;
    return daily.is_set
	|| monthly.is_set
	|| weekly.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daily.yfilter)
	|| ydk::is_set(monthly.yfilter)
	|| ydk::is_set(weekly.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daily.is_set || is_set(daily.yfilter)) leaf_name_data.push_back(daily.get_name_leafdata());
    if (monthly.is_set || is_set(monthly.yfilter)) leaf_name_data.push_back(monthly.get_name_leafdata());
    if (weekly.is_set || is_set(weekly.yfilter)) leaf_name_data.push_back(weekly.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daily")
    {
        daily = value;
        daily.value_namespace = name_space;
        daily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monthly")
    {
        monthly = value;
        monthly.value_namespace = name_space;
        monthly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekly")
    {
        weekly = value;
        weekly.value_namespace = name_space;
        weekly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daily")
    {
        daily.yfilter = yfilter;
    }
    if(value_path == "monthly")
    {
        monthly.yfilter = yfilter;
    }
    if(value_path == "weekly")
    {
        weekly.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco>())
    , url(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url>())
{
    cisco->parent = this;
    url->parent = this;

    yang_name = "server"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::~Server()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_data() const
{
    if (is_presence_container) return true;
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco != nullptr)
    {
        _children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::Cisco()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "cisco"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| password.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
        ,
    all(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "all"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| username.is_set
	|| password.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::WebFilter::WebFilter()
    :
    sourcedb{YType::str, "sourcedb"},
    domain_profile{YType::str, "domain-profile"},
    url_profile{YType::str, "url-profile"}
{

    yang_name = "web-filter"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdSt::Utd::Engine::Standard::WebFilter::~WebFilter()
{
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_data() const
{
    if (is_presence_container) return true;
    return sourcedb.is_set
	|| domain_profile.is_set
	|| url_profile.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourcedb.yfilter)
	|| ydk::is_set(domain_profile.yfilter)
	|| ydk::is_set(url_profile.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::WebFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourcedb.is_set || is_set(sourcedb.yfilter)) leaf_name_data.push_back(sourcedb.get_name_leafdata());
    if (domain_profile.is_set || is_set(domain_profile.yfilter)) leaf_name_data.push_back(domain_profile.get_name_leafdata());
    if (url_profile.is_set || is_set(url_profile.yfilter)) leaf_name_data.push_back(url_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::Engine::Standard::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::Engine::Standard::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::Engine::Standard::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourcedb")
    {
        sourcedb = value;
        sourcedb.value_namespace = name_space;
        sourcedb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-profile")
    {
        domain_profile = value;
        domain_profile.value_namespace = name_space;
        domain_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-profile")
    {
        url_profile = value;
        url_profile.value_namespace = name_space;
        url_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourcedb")
    {
        sourcedb.yfilter = yfilter;
    }
    if(value_path == "domain-profile")
    {
        domain_profile.yfilter = yfilter;
    }
    if(value_path == "url-profile")
    {
        url_profile.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourcedb" || name == "domain-profile" || name == "url-profile")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::ThreatInspection()
    :
    whitelist(nullptr) // presence node
{

    yang_name = "threat-inspection"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdSt::Utd::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    return (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::ThreatInspection::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::UtdSt::Utd::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "whitelist")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Whitelist()
    :
    generator(this, {"id"})
{

    yang_name = "whitelist"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generator.len(); index++)
    {
        if(generator[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_operation() const
{
    for (std::size_t index=0; index<generator.len(); index++)
    {
        if(generator[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::ThreatInspection::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generator")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator>();
        ent_->parent = this;
        generator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::ThreatInspection::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generator")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Generator()
    :
    id{YType::uint32, "id"}
        ,
    signature(this, {"id"})
{

    yang_name = "generator"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::~Generator()
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signature.len(); index++)
    {
        if(signature[index]->has_data())
            return true;
    }
    return id.is_set;
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::has_operation() const
{
    for (std::size_t index=0; index<signature.len(); index++)
    {
        if(signature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/threat-inspection/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generator";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        auto ent_ = std::make_shared<Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature>();
        ent_->parent = this;
        signature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : signature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature" || name == "id")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::Signature()
    :
    id{YType::uint32, "id"},
    comment{YType::str, "comment"}
{

    yang_name = "signature"; yang_parent_name = "generator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::~Signature()
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| comment.is_set;
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Generator::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "comment")
        return true;
    return false;
}

Native::UtdMt::UtdMt()
    :
    utd(std::make_shared<Native::UtdMt::Utd>())
{
    utd->parent = this;

    yang_name = "utd-mt"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::~UtdMt()
{
}

bool Native::UtdMt::has_data() const
{
    if (is_presence_container) return true;
    return (utd !=  nullptr && utd->has_data());
}

bool Native::UtdMt::has_operation() const
{
    return is_set(yfilter)
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdMt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd-mt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdMt::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utd != nullptr)
    {
        _children["utd"] = utd;
    }

    return _children;
}

void Native::UtdMt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utd")
        return true;
    return false;
}

Native::UtdMt::Utd::Utd()
    :
    multi_tenancy{YType::empty, "multi-tenancy"}
        ,
    engine(std::make_shared<Native::UtdMt::Utd::Engine>())
{
    engine->parent = this;

    yang_name = "utd"; yang_parent_name = "utd-mt"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::~Utd()
{
}

bool Native::UtdMt::Utd::has_data() const
{
    if (is_presence_container) return true;
    return multi_tenancy.is_set
	|| (engine !=  nullptr && engine->has_data());
}

bool Native::UtdMt::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_tenancy.yfilter)
	|| (engine !=  nullptr && engine->has_operation());
}

std::string Native::UtdMt::Utd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_tenancy.is_set || is_set(multi_tenancy.yfilter)) leaf_name_data.push_back(multi_tenancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::UtdMt::Utd::Engine>();
        }
        return engine;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(engine != nullptr)
    {
        _children["engine"] = engine;
    }

    return _children;
}

void Native::UtdMt::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-tenancy")
    {
        multi_tenancy = value;
        multi_tenancy.value_namespace = name_space;
        multi_tenancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-tenancy")
    {
        multi_tenancy.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine" || name == "multi-tenancy")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Engine()
    :
    standard(std::make_shared<Native::UtdMt::Utd::Engine::Standard>())
{
    standard->parent = this;

    yang_name = "engine"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::~Engine()
{
}

bool Native::UtdMt::Utd::Engine::has_data() const
{
    if (is_presence_container) return true;
    return (standard !=  nullptr && standard->has_data());
}

bool Native::UtdMt::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdMt::Utd::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdMt::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(standard != nullptr)
    {
        _children["standard"] = standard;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standard")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::Standard()
    :
    multi_tenancy(nullptr) // presence node
{

    yang_name = "standard"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdMt::Utd::Engine::Standard::has_data() const
{
    if (is_presence_container) return true;
    return (multi_tenancy !=  nullptr && multi_tenancy->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::has_operation() const
{
    return is_set(yfilter)
	|| (multi_tenancy !=  nullptr && multi_tenancy->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-tenancy")
    {
        if(multi_tenancy == nullptr)
        {
            multi_tenancy = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy>();
        }
        return multi_tenancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multi_tenancy != nullptr)
    {
        _children["multi-tenancy"] = multi_tenancy;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-tenancy")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::MultiTenancy()
    :
    web_filter(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter>())
    , threat_inspection(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection>())
    , utd(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_>())
    , policy(this, {"name"})
{
    web_filter->parent = this;
    threat_inspection->parent = this;
    utd->parent = this;

    yang_name = "multi-tenancy"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::~MultiTenancy()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (web_filter !=  nullptr && web_filter->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data())
	|| (utd !=  nullptr && utd->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (web_filter !=  nullptr && web_filter->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation())
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-tenancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter>();
        }
        return web_filter;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection>();
        }
        return threat_inspection;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_>();
        }
        return utd;
    }

    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(web_filter != nullptr)
    {
        _children["web-filter"] = web_filter;
    }

    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    if(utd != nullptr)
    {
        _children["utd"] = utd;
    }

    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "web-filter" || name == "threat-inspection" || name == "utd" || name == "policy")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::WebFilter()
    :
    block(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block>())
    , sourcedb(this, {"id"})
    , url(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url>())
{
    block->parent = this;
    url->parent = this;

    yang_name = "web-filter"; yang_parent_name = "multi-tenancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::~WebFilter()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourcedb.len(); index++)
    {
        if(sourcedb[index]->has_data())
            return true;
    }
    return (block !=  nullptr && block->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::has_operation() const
{
    for (std::size_t index=0; index<sourcedb.len(); index++)
    {
        if(sourcedb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (block !=  nullptr && block->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block>();
        }
        return block;
    }

    if(child_yang_name == "sourcedb")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb>();
        ent_->parent = this;
        sourcedb.append(ent_);
        return ent_;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(block != nullptr)
    {
        _children["block"] = block;
    }

    count_ = 0;
    for (auto ent_ : sourcedb.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block" || name == "sourcedb" || name == "url")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Block()
    :
    local_server(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer>())
    , page(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page>())
{
    local_server->parent = this;
    page->parent = this;

    yang_name = "block"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::~Block()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::has_data() const
{
    if (is_presence_container) return true;
    return (local_server !=  nullptr && local_server->has_data())
	|| (page !=  nullptr && page->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::has_operation() const
{
    return is_set(yfilter)
	|| (local_server !=  nullptr && local_server->has_operation())
	|| (page !=  nullptr && page->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-server")
    {
        if(local_server == nullptr)
        {
            local_server = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer>();
        }
        return local_server;
    }

    if(child_yang_name == "page")
    {
        if(page == nullptr)
        {
            page = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page>();
        }
        return page;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_server != nullptr)
    {
        _children["local-server"] = local_server;
    }

    if(page != nullptr)
    {
        _children["page"] = page;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-server" || name == "page")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::LocalServer()
    :
    profile(this, {"id"})
{

    yang_name = "local-server"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::~LocalServer()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Profile()
    :
    id{YType::str, "id"},
    http_ports{YType::str, "http-ports"}
        ,
    block_page_interface(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface>())
    , content(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content>())
{
    block_page_interface->parent = this;
    content->parent = this;

    yang_name = "profile"; yang_parent_name = "local-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::~Profile()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| http_ports.is_set
	|| (block_page_interface !=  nullptr && block_page_interface->has_data())
	|| (content !=  nullptr && content->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(http_ports.yfilter)
	|| (block_page_interface !=  nullptr && block_page_interface->has_operation())
	|| (content !=  nullptr && content->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/block/local-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (http_ports.is_set || is_set(http_ports.yfilter)) leaf_name_data.push_back(http_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-page-interface")
    {
        if(block_page_interface == nullptr)
        {
            block_page_interface = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface>();
        }
        return block_page_interface;
    }

    if(child_yang_name == "content")
    {
        if(content == nullptr)
        {
            content = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content>();
        }
        return content;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(block_page_interface != nullptr)
    {
        _children["block-page-interface"] = block_page_interface;
    }

    if(content != nullptr)
    {
        _children["content"] = content;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http-ports")
    {
        http_ports = value;
        http_ports.value_namespace = name_space;
        http_ports.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "http-ports")
    {
        http_ports.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-page-interface" || name == "content" || name == "id" || name == "http-ports")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::BlockPageInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "block-page-interface"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::~BlockPageInterface()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-page-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::Content()
    :
    text{YType::str, "text"},
    file{YType::str, "file"}
{

    yang_name = "content"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::~Content()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::has_data() const
{
    if (is_presence_container) return true;
    return text.is_set
	|| file.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(file.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "content";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::LocalServer::Profile::Content::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text" || name == "file")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Page()
    :
    profile(this, {"id"})
{

    yang_name = "page"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::~Page()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "page";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::Profile()
    :
    id{YType::str, "id"},
    file{YType::str, "file"},
    redirect_url{YType::str, "redirect-url"},
    text{YType::str, "text"}
{

    yang_name = "profile"; yang_parent_name = "page"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::~Profile()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| file.is_set
	|| redirect_url.is_set
	|| text.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(redirect_url.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/block/page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (redirect_url.is_set || is_set(redirect_url.yfilter)) leaf_name_data.push_back(redirect_url.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-url")
    {
        redirect_url = value;
        redirect_url.value_namespace = name_space;
        redirect_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "redirect-url")
    {
        redirect_url.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Block::Page::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "file" || name == "redirect-url" || name == "text")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Sourcedb()
    :
    id{YType::str, "id"}
        ,
    logging(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging>())
{
    logging->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::~Sourcedb()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "id")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::~Logging()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Url()
    :
    profile(this, {"id"})
{

    yang_name = "url"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::~Url()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Profile()
    :
    id{YType::str, "id"},
    alert{YType::enumeration, "alert"}
        ,
    blacklist(nullptr) // presence node
    , categories(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories>())
    , block(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block>())
    , log(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log>())
    , reputation(nullptr) // presence node
    , sourcedb(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb>())
    , whitelist(nullptr) // presence node
{
    categories->parent = this;
    block->parent = this;
    log->parent = this;
    sourcedb->parent = this;

    yang_name = "profile"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::~Profile()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : alert.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| (blacklist !=  nullptr && blacklist->has_data())
	|| (categories !=  nullptr && categories->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (reputation !=  nullptr && reputation->has_data())
	|| (sourcedb !=  nullptr && sourcedb->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::has_operation() const
{
    for (auto const & leaf : alert.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| (blacklist !=  nullptr && blacklist->has_operation())
	|| (categories !=  nullptr && categories->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (reputation !=  nullptr && reputation->has_operation())
	|| (sourcedb !=  nullptr && sourcedb->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/web-filter/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto alert_name_datas = alert.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), alert_name_datas.begin(), alert_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blacklist")
    {
        if(blacklist == nullptr)
        {
            blacklist = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist>();
        }
        return blacklist;
    }

    if(child_yang_name == "categories")
    {
        if(categories == nullptr)
        {
            categories = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories>();
        }
        return categories;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block>();
        }
        return block;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log>();
        }
        return log;
    }

    if(child_yang_name == "reputation")
    {
        if(reputation == nullptr)
        {
            reputation = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation>();
        }
        return reputation;
    }

    if(child_yang_name == "sourcedb")
    {
        if(sourcedb == nullptr)
        {
            sourcedb = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb>();
        }
        return sourcedb;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(blacklist != nullptr)
    {
        _children["blacklist"] = blacklist;
    }

    if(categories != nullptr)
    {
        _children["categories"] = categories;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    if(reputation != nullptr)
    {
        _children["reputation"] = reputation;
    }

    if(sourcedb != nullptr)
    {
        _children["sourcedb"] = sourcedb;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert.append(value);
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blacklist" || name == "categories" || name == "block" || name == "log" || name == "reputation" || name == "sourcedb" || name == "whitelist" || name == "id" || name == "alert")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::Blacklist()
    :
    parameter_map(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "blacklist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::~Blacklist()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blacklist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "blacklist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Blacklist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Categories()
    :
    allow(nullptr) // presence node
    , block(nullptr) // presence node
{

    yang_name = "categories"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::~Categories()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::has_data() const
{
    if (is_presence_container) return true;
    return (allow !=  nullptr && allow->has_data())
	|| (block !=  nullptr && block->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (block !=  nullptr && block->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "categories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block>();
        }
        return block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allow != nullptr)
    {
        _children["allow"] = allow;
    }

    if(block != nullptr)
    {
        _children["block"] = block;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Allow()
    :
    category(this, {"name"})
{

    yang_name = "allow"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::~Allow()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::has_operation() const
{
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::~Category()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Block()
    :
    category(this, {"name"})
{

    yang_name = "block"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::~Block()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::has_operation() const
{
    for (std::size_t index=0; index<category.len(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category>();
        ent_->parent = this;
        category.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : category.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::~Category()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::Block()
    :
    local_server{YType::str, "local-server"},
    page_profile{YType::str, "page-profile"}
{

    yang_name = "block"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::~Block()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::has_data() const
{
    if (is_presence_container) return true;
    return local_server.is_set
	|| page_profile.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_server.yfilter)
	|| ydk::is_set(page_profile.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_server.is_set || is_set(local_server.yfilter)) leaf_name_data.push_back(local_server.get_name_leafdata());
    if (page_profile.is_set || is_set(page_profile.yfilter)) leaf_name_data.push_back(page_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-server")
    {
        local_server = value;
        local_server.value_namespace = name_space;
        local_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "page-profile")
    {
        page_profile = value;
        page_profile.value_namespace = name_space;
        page_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-server")
    {
        local_server.yfilter = yfilter;
    }
    if(value_path == "page-profile")
    {
        page_profile.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-server" || name == "page-profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Log()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "log"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::~Log()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::Reputation()
    :
    block_threshold{YType::enumeration, "block-threshold"}
{

    yang_name = "reputation"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::~Reputation()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::has_data() const
{
    if (is_presence_container) return true;
    return block_threshold.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_threshold.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reputation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_threshold.is_set || is_set(block_threshold.yfilter)) leaf_name_data.push_back(block_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-threshold")
    {
        block_threshold = value;
        block_threshold.value_namespace = name_space;
        block_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-threshold")
    {
        block_threshold.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-threshold")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Sourcedb()
    :
    fail(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail>())
{
    fail->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::~Sourcedb()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::has_data() const
{
    if (is_presence_container) return true;
    return (fail !=  nullptr && fail->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| (fail !=  nullptr && fail->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail>();
        }
        return fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::Fail()
    :
    close{YType::empty, "close"}
{

    yang_name = "fail"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::~Fail()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::has_data() const
{
    if (is_presence_container) return true;
    return close.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close.is_set || is_set(close.yfilter)) leaf_name_data.push_back(close.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close")
    {
        close = value;
        close.value_namespace = name_space;
        close.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close")
    {
        close.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::Whitelist()
    :
    parameter_map(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::has_data() const
{
    if (is_presence_container) return true;
    return regex.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::ThreatInspection()
    :
    whitelist(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist>())
    , profile(this, {"name"})
{
    whitelist->parent = this;

    yang_name = "threat-inspection"; yang_parent_name = "multi-tenancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist>();
        }
        return whitelist;
    }

    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "whitelist" || name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Whitelist()
    :
    profile(this, {"name"})
{

    yang_name = "whitelist"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::~Whitelist()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Profile()
    :
    name{YType::str, "name"}
        ,
    generator(this, {"id"})
{

    yang_name = "profile"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::~Profile()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generator.len(); index++)
    {
        if(generator[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::has_operation() const
{
    for (std::size_t index=0; index<generator.len(); index++)
    {
        if(generator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/threat-inspection/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generator")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator>();
        ent_->parent = this;
        generator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generator" || name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Generator()
    :
    id{YType::uint32, "id"}
        ,
    signature(this, {"id"})
{

    yang_name = "generator"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::~Generator()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signature.len(); index++)
    {
        if(signature[index]->has_data())
            return true;
    }
    return id.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::has_operation() const
{
    for (std::size_t index=0; index<signature.len(); index++)
    {
        if(signature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generator";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature>();
        ent_->parent = this;
        signature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : signature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature" || name == "id")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::Signature()
    :
    id{YType::uint32, "id"},
    comment{YType::str, "comment"}
{

    yang_name = "signature"; yang_parent_name = "generator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::~Signature()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| comment.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "comment")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Profile()
    :
    name{YType::str, "name"},
    threat{YType::enumeration, "threat"},
    policy{YType::enumeration, "policy"}
        ,
    logging(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging>())
    , whitelist(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist>())
{
    logging->parent = this;
    whitelist->parent = this;

    yang_name = "profile"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::~Profile()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| threat.is_set
	|| policy.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(threat.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "whitelist" || name == "name" || name == "threat" || name == "policy")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::~Logging()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::Whitelist()
    :
    profile{YType::str, "profile"}
{

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Utd_()
    :
    global(nullptr) // presence node
{

    yang_name = "utd"; yang_parent_name = "multi-tenancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::~Utd_()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Global()
    :
    logging(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging>())
    , threat_inspection(nullptr) // presence node
    , web_filter(nullptr) // presence node
{
    logging->parent = this;

    yang_name = "global"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::~Global()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data())
	|| (web_filter !=  nullptr && web_filter->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation())
	|| (web_filter !=  nullptr && web_filter->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection>();
        }
        return threat_inspection;
    }

    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter>();
        }
        return web_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    if(web_filter != nullptr)
    {
        _children["web-filter"] = web_filter;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "threat-inspection" || name == "web-filter")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Logging()
    :
    syslog{YType::empty, "syslog"}
        ,
    host(this, {"name"})
{

    yang_name = "logging"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::~Logging()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return syslog.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "syslog")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::Host()
    :
    name{YType::str, "name"}
{

    yang_name = "host"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::~Host()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::ThreatInspection()
    :
    signature(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature>())
{
    signature->parent = this;

    yang_name = "threat-inspection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    return (signature !=  nullptr && signature->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signature != nullptr)
    {
        _children["signature"] = signature;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Signature()
    :
    update(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::~Signature()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::has_data() const
{
    if (is_presence_container) return true;
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update != nullptr)
    {
        _children["update"] = update;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt>())
    , server(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server>())
{
    occur_at->parent = this;
    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::~Update()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::has_data() const
{
    if (is_presence_container) return true;
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::has_operation() const
{
    return is_set(yfilter)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(occur_at != nullptr)
    {
        _children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "occur-at" || name == "server")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::OccurAt()
    :
    daily{YType::empty, "daily"},
    monthly{YType::str, "monthly"},
    weekly{YType::str, "weekly"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "occur-at"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::has_data() const
{
    if (is_presence_container) return true;
    return daily.is_set
	|| monthly.is_set
	|| weekly.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daily.yfilter)
	|| ydk::is_set(monthly.yfilter)
	|| ydk::is_set(weekly.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daily.is_set || is_set(daily.yfilter)) leaf_name_data.push_back(daily.get_name_leafdata());
    if (monthly.is_set || is_set(monthly.yfilter)) leaf_name_data.push_back(monthly.get_name_leafdata());
    if (weekly.is_set || is_set(weekly.yfilter)) leaf_name_data.push_back(weekly.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daily")
    {
        daily = value;
        daily.value_namespace = name_space;
        daily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monthly")
    {
        monthly = value;
        monthly.value_namespace = name_space;
        monthly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekly")
    {
        weekly = value;
        weekly.value_namespace = name_space;
        weekly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daily")
    {
        daily.yfilter = yfilter;
    }
    if(value_path == "monthly")
    {
        monthly.yfilter = yfilter;
    }
    if(value_path == "weekly")
    {
        weekly.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco>())
    , url(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url>())
{
    cisco->parent = this;
    url->parent = this;

    yang_name = "server"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::~Server()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::has_data() const
{
    if (is_presence_container) return true;
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco != nullptr)
    {
        _children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::Cisco()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "cisco"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| password.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
        ,
    all(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "all"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| username.is_set
	|| password.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/threat-inspection/signature/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::WebFilter()
    :
    sourcedb{YType::str, "sourcedb"}
{

    yang_name = "web-filter"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::~WebFilter()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::has_data() const
{
    if (is_presence_container) return true;
    return sourcedb.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourcedb.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/utd/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourcedb.is_set || is_set(sourcedb.yfilter)) leaf_name_data.push_back(sourcedb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourcedb")
    {
        sourcedb = value;
        sourcedb.value_namespace = name_space;
        sourcedb.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourcedb")
    {
        sourcedb.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourcedb")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Policy()
    :
    name{YType::str, "name"},
    all_interfaces{YType::empty, "all-interfaces"}
        ,
    fail(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail>())
    , vrf(this, {"name"})
    , threat_inspection(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection>())
    , web_filter(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter>())
{
    fail->parent = this;
    threat_inspection->parent = this;
    web_filter->parent = this;

    yang_name = "policy"; yang_parent_name = "multi-tenancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::~Policy()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set
	|| all_interfaces.is_set
	|| (fail !=  nullptr && fail->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data())
	|| (web_filter !=  nullptr && web_filter->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (fail !=  nullptr && fail->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation())
	|| (web_filter !=  nullptr && web_filter->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-mt/utd/engine/standard/multi-tenancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection>();
        }
        return threat_inspection;
    }

    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter>();
        }
        return web_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    if(web_filter != nullptr)
    {
        _children["web-filter"] = web_filter;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail" || name == "vrf" || name == "threat-inspection" || name == "web-filter" || name == "name" || name == "all-interfaces")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::Fail()
    :
    close{YType::empty, "close"}
{

    yang_name = "fail"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::~Fail()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::has_data() const
{
    if (is_presence_container) return true;
    return close.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close.is_set || is_set(close.yfilter)) leaf_name_data.push_back(close.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close")
    {
        close = value;
        close.value_namespace = name_space;
        close.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close")
    {
        close.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::~Vrf()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::ThreatInspection()
    :
    profile{YType::str, "profile"}
{

    yang_name = "threat-inspection"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::WebFilter()
    :
    url(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url>())
{
    url->parent = this;

    yang_name = "web-filter"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::~WebFilter()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_data() const
{
    if (is_presence_container) return true;
    return (url !=  nullptr && url->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_operation() const
{
    return is_set(yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::Url()
    :
    profile{YType::str, "profile"}
{

    yang_name = "url"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::~Url()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::FabricGroup::FabricGroup()
    :
    fabric(std::make_shared<Native::FabricGroup::Fabric>())
{
    fabric->parent = this;

    yang_name = "fabric-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::~FabricGroup()
{
}

bool Native::FabricGroup::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data());
}

bool Native::FabricGroup::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Native::FabricGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Native::FabricGroup::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    return _children;
}

void Native::FabricGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Fabric()
    :
    auto_(nullptr) // presence node
{

    yang_name = "fabric"; yang_parent_name = "fabric-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::~Fabric()
{
}

bool Native::FabricGroup::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (auto_ !=  nullptr && auto_->has_data());
}

bool Native::FabricGroup::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::FabricGroup::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::FabricGroup::Fabric::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::Auto()
    :
    config_fabric_auto(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto>())
{
    config_fabric_auto->parent = this;

    yang_name = "auto"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::FabricGroup::Fabric::Auto::~Auto()
{
}

bool Native::FabricGroup::Fabric::Auto::has_data() const
{
    if (is_presence_container) return true;
    return (config_fabric_auto !=  nullptr && config_fabric_auto->has_data());
}

bool Native::FabricGroup::Fabric::Auto::has_operation() const
{
    return is_set(yfilter)
	|| (config_fabric_auto !=  nullptr && config_fabric_auto->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-auto")
    {
        if(config_fabric_auto == nullptr)
        {
            config_fabric_auto = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto>();
        }
        return config_fabric_auto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_fabric_auto != nullptr)
    {
        _children["config-fabric-auto"] = config_fabric_auto;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-auto")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::ConfigFabricAuto()
    :
    domain(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain>())
{
    domain->parent = this;

    yang_name = "config-fabric-auto"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::~ConfigFabricAuto()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_data() const
{
    if (is_presence_container) return true;
    return (domain !=  nullptr && domain->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_operation() const
{
    return is_set(yfilter)
	|| (domain !=  nullptr && domain->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain>();
        }
        return domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::Domain()
    :
    iwan_fabric(nullptr) // presence node
{

    yang_name = "domain"; yang_parent_name = "config-fabric-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::~Domain()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_data() const
{
    if (is_presence_container) return true;
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iwan_fabric != nullptr)
    {
        _children["iwan-fabric"] = iwan_fabric;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::IwanFabric()
    :
    config_fabric_iwan(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan>())
{
    config_fabric_iwan->parent = this;

    yang_name = "iwan-fabric"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::~IwanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_data() const
{
    if (is_presence_container) return true;
    return (config_fabric_iwan !=  nullptr && config_fabric_iwan->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_operation() const
{
    return is_set(yfilter)
	|| (config_fabric_iwan !=  nullptr && config_fabric_iwan->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan")
    {
        if(config_fabric_iwan == nullptr)
        {
            config_fabric_iwan = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan>();
        }
        return config_fabric_iwan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_fabric_iwan != nullptr)
    {
        _children["config-fabric-iwan"] = config_fabric_iwan;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ConfigFabricIwan()
    :
    fabric_device_id{YType::uint16, "fabric-device-id"},
    shutdown{YType::empty, "shutdown"}
        ,
    border(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border>())
    , control_plane(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane>())
    , device_role(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole>())
    , region(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region>())
    , site(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site>())
    , tenant(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant>())
    , virtual_network(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork>())
{
    border->parent = this;
    control_plane->parent = this;
    device_role->parent = this;
    region->parent = this;
    site->parent = this;
    tenant->parent = this;
    virtual_network->parent = this;

    yang_name = "config-fabric-iwan"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::~ConfigFabricIwan()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_data() const
{
    if (is_presence_container) return true;
    return fabric_device_id.is_set
	|| shutdown.is_set
	|| (border !=  nullptr && border->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (device_role !=  nullptr && device_role->has_data())
	|| (region !=  nullptr && region->has_data())
	|| (site !=  nullptr && site->has_data())
	|| (tenant !=  nullptr && tenant->has_data())
	|| (virtual_network !=  nullptr && virtual_network->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabric_device_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (region !=  nullptr && region->has_operation())
	|| (site !=  nullptr && site->has_operation())
	|| (tenant !=  nullptr && tenant->has_operation())
	|| (virtual_network !=  nullptr && virtual_network->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabric_device_id.is_set || is_set(fabric_device_id.yfilter)) leaf_name_data.push_back(fabric_device_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border>();
        }
        return border;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "region")
    {
        if(region == nullptr)
        {
            region = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region>();
        }
        return region;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site>();
        }
        return site;
    }

    if(child_yang_name == "tenant")
    {
        if(tenant == nullptr)
        {
            tenant = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant>();
        }
        return tenant;
    }

    if(child_yang_name == "virtual-network")
    {
        if(virtual_network == nullptr)
        {
            virtual_network = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork>();
        }
        return virtual_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(border != nullptr)
    {
        _children["border"] = border;
    }

    if(control_plane != nullptr)
    {
        _children["control-plane"] = control_plane;
    }

    if(device_role != nullptr)
    {
        _children["device-role"] = device_role;
    }

    if(region != nullptr)
    {
        _children["region"] = region;
    }

    if(site != nullptr)
    {
        _children["site"] = site;
    }

    if(tenant != nullptr)
    {
        _children["tenant"] = tenant;
    }

    if(virtual_network != nullptr)
    {
        _children["virtual-network"] = virtual_network;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabric-device-id")
    {
        fabric_device_id = value;
        fabric_device_id.value_namespace = name_space;
        fabric_device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabric-device-id")
    {
        fabric_device_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "control-plane" || name == "device-role" || name == "region" || name == "site" || name == "tenant" || name == "virtual-network" || name == "fabric-device-id" || name == "shutdown")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::Border()
    :
    self{YType::empty, "self"}
{

    yang_name = "border"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::~Border()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_data() const
{
    if (is_presence_container) return true;
    return self.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(self.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (self.is_set || is_set(self.yfilter)) leaf_name_data.push_back(self.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "self")
    {
        self = value;
        self.value_namespace = name_space;
        self.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "self")
    {
        self.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "self")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::ControlPlane()
    :
    destination_address(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress>())
    , source_address(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress>())
{
    destination_address->parent = this;
    source_address->parent = this;

    yang_name = "control-plane"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::~ControlPlane()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_data() const
{
    if (is_presence_container) return true;
    return (destination_address !=  nullptr && destination_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "source-address")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::DestinationAddress()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "destination-address"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::~DestinationAddress()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
        ,
    auth_key(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey>())
{
    auth_key->parent = this;

    yang_name = "ipv4"; yang_parent_name = "destination-address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (auth_key !=  nullptr && auth_key->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (auth_key !=  nullptr && auth_key->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/destination-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-key")
    {
        if(auth_key == nullptr)
        {
            auth_key = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey>();
        }
        return auth_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_key != nullptr)
    {
        _children["auth-key"] = auth_key;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "ipv4")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::AuthKey()
    :
    range(this, {"range"})
{

    yang_name = "auth-key"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::~AuthKey()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::Range()
    :
    range{YType::uint16, "range"},
    word{YType::str, "word"}
{

    yang_name = "range"; yang_parent_name = "auth-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::SourceAddress()
    :
    interface{YType::str, "interface"}
{

    yang_name = "source-address"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::~SourceAddress()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::DeviceRole()
    :
    border{YType::empty, "border"},
    edge{YType::empty, "edge"},
    nat_traversal_router{YType::empty, "nat-traversal-router"},
    transit_router{YType::empty, "transit-router"}
{

    yang_name = "device-role"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::~DeviceRole()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_data() const
{
    if (is_presence_container) return true;
    return border.is_set
	|| edge.is_set
	|| nat_traversal_router.is_set
	|| transit_router.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(nat_traversal_router.yfilter)
	|| ydk::is_set(transit_router.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (nat_traversal_router.is_set || is_set(nat_traversal_router.yfilter)) leaf_name_data.push_back(nat_traversal_router.get_name_leafdata());
    if (transit_router.is_set || is_set(transit_router.yfilter)) leaf_name_data.push_back(transit_router.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-traversal-router")
    {
        nat_traversal_router = value;
        nat_traversal_router.value_namespace = name_space;
        nat_traversal_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-router")
    {
        transit_router = value;
        transit_router.value_namespace = name_space;
        transit_router.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "nat-traversal-router")
    {
        nat_traversal_router.yfilter = yfilter;
    }
    if(value_path == "transit-router")
    {
        transit_router.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "edge" || name == "nat-traversal-router" || name == "transit-router")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Region()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id>())
{
    id->parent = this;

    yang_name = "region"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::~Region()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Id()
    :
    range(this, {"range"})
{

    yang_name = "id"; yang_parent_name = "region"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/region/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/region/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Site()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id>())
{
    id->parent = this;

    yang_name = "site"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::~Site()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Id()
    :
    range(this, {"range"})
{

    yang_name = "id"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/site/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Tenant()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id>())
{
    id->parent = this;

    yang_name = "tenant"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::~Tenant()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Id()
    :
    range(this, {"range"})
{

    yang_name = "id"; yang_parent_name = "tenant"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/tenant/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::Range()
    :
    range{YType::uint32, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/tenant/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::VirtualNetwork()
    :
    name(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name>())
{
    name->parent = this;

    yang_name = "virtual-network"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::~VirtualNetwork()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (name !=  nullptr && name->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name != nullptr)
    {
        _children["name"] = name;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Name()
    :
    word(this, {"word"})
{

    yang_name = "name"; yang_parent_name = "virtual-network"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::~Name()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/virtual-network/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Word()
    :
    word{YType::str, "word"}
        ,
    id(this, {"range"})
{

    yang_name = "word"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::~Word()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_operation() const
{
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/virtual-network/name/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id>();
        ent_->parent = this;
        id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::Id()
    :
    range{YType::uint32, "range"}
        ,
    config_fabric_iwan_virtual_network(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork>())
{
    config_fabric_iwan_virtual_network->parent = this;

    yang_name = "id"; yang_parent_name = "word"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (config_fabric_iwan_virtual_network !=  nullptr && config_fabric_iwan_virtual_network->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (config_fabric_iwan_virtual_network !=  nullptr && config_fabric_iwan_virtual_network->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan-virtual-network")
    {
        if(config_fabric_iwan_virtual_network == nullptr)
        {
            config_fabric_iwan_virtual_network = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork>();
        }
        return config_fabric_iwan_virtual_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_fabric_iwan_virtual_network != nullptr)
    {
        _children["config-fabric-iwan-virtual-network"] = config_fabric_iwan_virtual_network;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan-virtual-network" || name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::ConfigFabricIwanVirtualNetwork()
    :
    enterprise_prefix(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix>())
    , prefix_group(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup>())
{
    enterprise_prefix->parent = this;
    prefix_group->parent = this;

    yang_name = "config-fabric-iwan-virtual-network"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::~ConfigFabricIwanVirtualNetwork()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (enterprise_prefix !=  nullptr && enterprise_prefix->has_data())
	|| (prefix_group !=  nullptr && prefix_group->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation())
	|| (prefix_group !=  nullptr && prefix_group->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan-virtual-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    if(child_yang_name == "prefix-group")
    {
        if(prefix_group == nullptr)
        {
            prefix_group = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup>();
        }
        return prefix_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enterprise_prefix != nullptr)
    {
        _children["enterprise-prefix"] = enterprise_prefix;
    }

    if(prefix_group != nullptr)
    {
        _children["prefix-group"] = prefix_group;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-prefix" || name == "prefix-group")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::EnterprisePrefix()
    :
    ipv4(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4>())
    , ipv6(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "enterprise-prefix"; yang_parent_name = "config-fabric-iwan-virtual-network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::~Ipv6()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::PrefixGroup()
    :
    word(this, {"word"})
{

    yang_name = "prefix-group"; yang_parent_name = "config-fabric-iwan-virtual-network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::~PrefixGroup()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Word_()
    :
    word{YType::str, "word"}
        ,
    vrf(this, {"word"})
{

    yang_name = "word"; yang_parent_name = "prefix-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::Vrf()
    :
    word{YType::str, "word"}
        ,
    config_fabric_iwan_virtual_network_prefix_group(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup>())
{
    config_fabric_iwan_virtual_network_prefix_group->parent = this;

    yang_name = "vrf"; yang_parent_name = "word"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::~Vrf()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (config_fabric_iwan_virtual_network_prefix_group !=  nullptr && config_fabric_iwan_virtual_network_prefix_group->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (config_fabric_iwan_virtual_network_prefix_group !=  nullptr && config_fabric_iwan_virtual_network_prefix_group->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan-virtual-network-prefix-group")
    {
        if(config_fabric_iwan_virtual_network_prefix_group == nullptr)
        {
            config_fabric_iwan_virtual_network_prefix_group = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup>();
        }
        return config_fabric_iwan_virtual_network_prefix_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_fabric_iwan_virtual_network_prefix_group != nullptr)
    {
        _children["config-fabric-iwan-virtual-network-prefix-group"] = config_fabric_iwan_virtual_network_prefix_group;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan-virtual-network-prefix-group" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::ConfigFabricIwanVirtualNetworkPrefixGroup()
    :
    prefix(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix>())
{
    prefix->parent = this;

    yang_name = "config-fabric-iwan-virtual-network-prefix-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::~ConfigFabricIwanVirtualNetworkPrefixGroup()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_data() const
{
    if (is_presence_container) return true;
    return (prefix !=  nullptr && prefix->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan-virtual-network-prefix-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Prefix()
    :
    import(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import>())
    , ipv4(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4>())
    , ipv6(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6>())
{
    import->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "config-fabric-iwan-virtual-network-prefix-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::~Prefix()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return (import !=  nullptr && import->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (import !=  nullptr && import->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import>();
        }
        return import;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(import != nullptr)
    {
        _children["import"] = import;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Import()
    :
    bgp(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp>())
    , eigrp(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp>())
    , isis(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis>())
    , lan_fabric(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric>())
    , ospf(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf>())
    , rip(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip>())
    , wan_fabric(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric>())
{
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    lan_fabric->parent = this;
    ospf->parent = this;
    rip->parent = this;
    wan_fabric->parent = this;

    yang_name = "import"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::~Import()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_data() const
{
    if (is_presence_container) return true;
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lan_fabric !=  nullptr && lan_fabric->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (wan_fabric !=  nullptr && wan_fabric->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lan_fabric !=  nullptr && lan_fabric->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (wan_fabric !=  nullptr && wan_fabric->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lan-fabric")
    {
        if(lan_fabric == nullptr)
        {
            lan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric>();
        }
        return lan_fabric;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "wan-fabric")
    {
        if(wan_fabric == nullptr)
        {
            wan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric>();
        }
        return wan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(lan_fabric != nullptr)
    {
        _children["lan-fabric"] = lan_fabric;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(wan_fabric != nullptr)
    {
        _children["wan-fabric"] = wan_fabric;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "lan-fabric" || name == "ospf" || name == "rip" || name == "wan-fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Bgp()
    :
    word(this, {"word"})
{

    yang_name = "bgp"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::~Bgp()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Eigrp()
    :
    word(this, {"word"})
{

    yang_name = "eigrp"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::~Eigrp()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Isis()
    :
    word(this, {"word"})
{

    yang_name = "isis"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::~Isis()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::LanFabric()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "lan-fabric"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::~LanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Ospf()
    :
    word(this, {"word"})
{

    yang_name = "ospf"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::~Ospf()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Rip()
    :
    word(this, {"word"})
{

    yang_name = "rip"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::~Rip()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::WanFabric()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "wan-fabric"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::~WanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::~Ipv6()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Coap::Coap()
    :
    http(std::make_shared<Native::Coap::Http>())
{
    http->parent = this;

    yang_name = "coap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Coap::~Coap()
{
}

bool Native::Coap::has_data() const
{
    if (is_presence_container) return true;
    return (http !=  nullptr && http->has_data());
}

bool Native::Coap::has_operation() const
{
    return is_set(yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Coap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-coap:coap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Coap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Coap::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Coap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(http != nullptr)
    {
        _children["http"] = http;
    }

    return _children;
}

void Native::Coap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Coap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Coap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Coap::Http::Http()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "http"; yang_parent_name = "coap"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Coap::Http::~Http()
{
}

bool Native::Coap::Http::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Coap::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Coap::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-coap:coap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Coap::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Coap::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Coap::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Coap::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Coap::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Voice::Voice()
    :
    service(this, {"type"})
{

    yang_name = "voice"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<Native::Voice::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
        ,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fax != nullptr)
    {
        _children["fax"] = fax;
    }

    return _children;
}

void Native::Voice::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Voice::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fax" || name == "type")
        return true;
    return false;
}

Native::Voice::Service::Fax::Fax()
    :
    protocol{YType::enumeration, "protocol"},
    fallback{YType::enumeration, "fallback"},
    codec{YType::enumeration, "codec"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    version{YType::enumeration, "version"}
{

    yang_name = "fax"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| fallback.is_set
	|| codec.is_set
	|| ls_redundancy.is_set
	|| hs_redundancy.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(ls_redundancy.yfilter)
	|| ydk::is_set(hs_redundancy.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::Fax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.yfilter)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.yfilter)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
        ls_redundancy.value_namespace = name_space;
        ls_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
        hs_redundancy.value_namespace = name_space;
        hs_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::Fax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy.yfilter = yfilter;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Voice::Service::Fax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "fallback" || name == "codec" || name == "ls-redundancy" || name == "hs-redundancy" || name == "version")
        return true;
    return false;
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{

    yang_name = "voice-card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    if (is_presence_container) return true;
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::VoiceCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card";
    ADD_KEY_TOKEN(slot, "slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VoiceCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::VoiceCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VoiceCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::VoiceCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Power::Power()
    :
    redundancy_mode{YType::enumeration, "redundancy-mode"},
    max_min{YType::enumeration, "max-min"},
    inputs{YType::uint8, "inputs"}
        ,
    inline_(nullptr) // presence node
{

    yang_name = "power"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::~Power()
{
}

bool Native::Power::has_data() const
{
    if (is_presence_container) return true;
    return redundancy_mode.is_set
	|| max_min.is_set
	|| inputs.is_set
	|| (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_mode.yfilter)
	|| ydk::is_set(max_min.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_mode.is_set || is_set(redundancy_mode.yfilter)) leaf_name_data.push_back(redundancy_mode.get_name_leafdata());
    if (max_min.is_set || is_set(max_min.yfilter)) leaf_name_data.push_back(max_min.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inline_ != nullptr)
    {
        _children["inline"] = inline_;
    }

    return _children;
}

void Native::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode = value;
        redundancy_mode.value_namespace = name_space;
        redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-min")
    {
        max_min = value;
        max_min.value_namespace = name_space;
        max_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "max-min")
    {
        max_min.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
}

bool Native::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline" || name == "redundancy-mode" || name == "max-min" || name == "inputs")
        return true;
    return false;
}

Native::Power::Inline::Inline()
    :
    consumption(std::make_shared<Native::Power::Inline::Consumption>())
    , logging(std::make_shared<Native::Power::Inline::Logging>())
{
    consumption->parent = this;
    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Power::Inline::~Inline()
{
}

bool Native::Power::Inline::has_data() const
{
    if (is_presence_container) return true;
    return (consumption !=  nullptr && consumption->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consumption")
    {
        if(consumption == nullptr)
        {
            consumption = std::make_shared<Native::Power::Inline::Consumption>();
        }
        return consumption;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Power::Inline::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(consumption != nullptr)
    {
        _children["consumption"] = consumption;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consumption" || name == "logging")
        return true;
    return false;
}

Native::Power::Inline::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{

    yang_name = "consumption"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::Inline::Consumption::~Consumption()
{
}

bool Native::Power::Inline::Consumption::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Power::Inline::Consumption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Power::Inline::Consumption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Consumption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::Consumption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::Consumption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Power::Inline::Consumption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Consumption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Consumption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Power::Inline::Logging::Logging()
    :
    global{YType::empty, "global"}
{

    yang_name = "logging"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::Inline::Logging::~Logging()
{
}

bool Native::Power::Inline::Logging::has_data() const
{
    if (is_presence_container) return true;
    return global.is_set;
}

bool Native::Power::Inline::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Power::Inline::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Power::Inline::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::DeviceSensor::DeviceSensor()
    :
    accounting{YType::empty, "accounting"}
        ,
    notify(std::make_shared<Native::DeviceSensor::Notify>())
{
    notify->parent = this;

    yang_name = "device-sensor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceSensor::~DeviceSensor()
{
}

bool Native::DeviceSensor::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::DeviceSensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::DeviceSensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-sensor:device-sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DeviceSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::DeviceSensor::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DeviceSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(notify != nullptr)
    {
        _children["notify"] = notify;
    }

    return _children;
}

void Native::DeviceSensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notify" || name == "accounting")
        return true;
    return false;
}

Native::DeviceSensor::Notify::Notify()
    :
    all_changes{YType::empty, "all-changes"}
{

    yang_name = "notify"; yang_parent_name = "device-sensor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DeviceSensor::Notify::~Notify()
{
}

bool Native::DeviceSensor::Notify::has_data() const
{
    if (is_presence_container) return true;
    return all_changes.is_set;
}

bool Native::DeviceSensor::Notify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_changes.yfilter);
}

std::string Native::DeviceSensor::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-device-sensor:device-sensor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_changes.is_set || is_set(all_changes.yfilter)) leaf_name_data.push_back(all_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DeviceSensor::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DeviceSensor::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::DeviceSensor::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-changes")
    {
        all_changes = value;
        all_changes.value_namespace = name_space;
        all_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-changes")
    {
        all_changes.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-changes")
        return true;
    return false;
}

Native::ServiceList::ServiceList()
    :
    mdns_sd(this, {"service_list_name"})
{

    yang_name = "service-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceList::~ServiceList()
{
}

bool Native::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdns_sd.len(); index++)
    {
        if(mdns_sd[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceList::has_operation() const
{
    for (std::size_t index=0; index<mdns_sd.len(); index++)
    {
        if(mdns_sd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-discovery:service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdns-sd")
    {
        auto ent_ = std::make_shared<Native::ServiceList::MdnsSd>();
        ent_->parent = this;
        mdns_sd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mdns_sd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::MdnsSd()
    :
    service_list_name{YType::str, "service-list-name"}
        ,
    deny(this, {"deny_pack"})
    , permit(this, {"deny_pack"})
    , query(std::make_shared<Native::ServiceList::MdnsSd::Query>())
{
    query->parent = this;

    yang_name = "mdns-sd"; yang_parent_name = "service-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ServiceList::MdnsSd::~MdnsSd()
{
}

bool Native::ServiceList::MdnsSd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<deny.len(); index++)
    {
        if(deny[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<permit.len(); index++)
    {
        if(permit[index]->has_data())
            return true;
    }
    return service_list_name.is_set
	|| (query !=  nullptr && query->has_data());
}

bool Native::ServiceList::MdnsSd::has_operation() const
{
    for (std::size_t index=0; index<deny.len(); index++)
    {
        if(deny[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<permit.len(); index++)
    {
        if(permit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(service_list_name.yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::ServiceList::MdnsSd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-discovery:service-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd";
    ADD_KEY_TOKEN(service_list_name, "service-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_list_name.is_set || is_set(service_list_name.yfilter)) leaf_name_data.push_back(service_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        auto ent_ = std::make_shared<Native::ServiceList::MdnsSd::Deny>();
        ent_->parent = this;
        deny.append(ent_);
        return ent_;
    }

    if(child_yang_name == "permit")
    {
        auto ent_ = std::make_shared<Native::ServiceList::MdnsSd::Permit>();
        ent_->parent = this;
        permit.append(ent_);
        return ent_;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::ServiceList::MdnsSd::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : deny.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : permit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(query != nullptr)
    {
        _children["query"] = query;
    }

    return _children;
}

void Native::ServiceList::MdnsSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-list-name")
    {
        service_list_name = value;
        service_list_name.value_namespace = name_space;
        service_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-list-name")
    {
        service_list_name.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "query" || name == "service-list-name")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Deny()
    :
    deny_pack{YType::uint8, "deny-pack"}
        ,
    match(std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>())
{
    match->parent = this;

    yang_name = "deny"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceList::MdnsSd::Deny::~Deny()
{
}

bool Native::ServiceList::MdnsSd::Deny::has_data() const
{
    if (is_presence_container) return true;
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    ADD_KEY_TOKEN(deny_pack, "deny-pack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::ServiceList::MdnsSd::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
        ,
    location(nullptr) // presence node
    , message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceList::MdnsSd::Deny::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_data() const
{
    if (is_presence_container) return true;
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Deny::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Deny::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(location != nullptr)
    {
        _children["location"] = location;
    }

    if(message_type != nullptr)
    {
        _children["message-type"] = message_type;
    }

    return _children;
}

void Native::ServiceList::MdnsSd::Deny::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_data() const
{
    if (is_presence_container) return true;
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Deny::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Deny::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    query{YType::empty, "query"},
    any{YType::empty, "any"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_data() const
{
    if (is_presence_container) return true;
    return announcement.is_set
	|| query.is_set
	|| any.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "query" || name == "any")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Permit()
    :
    deny_pack{YType::uint8, "deny-pack"}
        ,
    match(std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>())
{
    match->parent = this;

    yang_name = "permit"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceList::MdnsSd::Permit::~Permit()
{
}

bool Native::ServiceList::MdnsSd::Permit::has_data() const
{
    if (is_presence_container) return true;
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    ADD_KEY_TOKEN(deny_pack, "deny-pack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::ServiceList::MdnsSd::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
        ,
    location(nullptr) // presence node
    , message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceList::MdnsSd::Permit::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_data() const
{
    if (is_presence_container) return true;
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Permit::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Permit::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(location != nullptr)
    {
        _children["location"] = location;
    }

    if(message_type != nullptr)
    {
        _children["message-type"] = message_type;
    }

    return _children;
}

void Native::ServiceList::MdnsSd::Permit::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_data() const
{
    if (is_presence_container) return true;
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Permit::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Permit::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    query{YType::empty, "query"},
    any{YType::empty, "any"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_data() const
{
    if (is_presence_container) return true;
    return announcement.is_set
	|| query.is_set
	|| any.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "query" || name == "any")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Query::Query()
    :
    service_type{YType::str, "service-type"}
{

    yang_name = "query"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ServiceList::MdnsSd::Query::~Query()
{
}

bool Native::ServiceList::MdnsSd::Query::has_data() const
{
    if (is_presence_container) return true;
    return service_type.is_set;
}

bool Native::ServiceList::MdnsSd::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter);
}

std::string Native::ServiceList::MdnsSd::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ServiceList::MdnsSd::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ServiceList::MdnsSd::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ServiceList::MdnsSd::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-type")
        return true;
    return false;
}

Native::AccessSession::AccessSession()
    :
    attributes(std::make_shared<Native::AccessSession::Attributes>())
    , mac_move(std::make_shared<Native::AccessSession::MacMove>())
{
    attributes->parent = this;
    mac_move->parent = this;

    yang_name = "access-session"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::~AccessSession()
{
}

bool Native::AccessSession::has_data() const
{
    if (is_presence_container) return true;
    return (attributes !=  nullptr && attributes->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::AccessSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Native::AccessSession::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::AccessSession::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(mac_move != nullptr)
    {
        _children["mac-move"] = mac_move;
    }

    return _children;
}

void Native::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "mac-move")
        return true;
    return false;
}

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat::detection {0, "detection"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat::protection {1, "protection"};

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::security {2, "security"};

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::emerg {0, "emerg"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::alert {1, "alert"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::crit {2, "crit"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::err {3, "err"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::warning {4, "warning"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::notice {5, "notice"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::info {6, "info"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::debug {7, "debug"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level::debug {0, "debug"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level::error {1, "error"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level::info {2, "info"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level::trace {3, "trace"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Sourcedb::Logging::Level::warning {4, "warning"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Alert::all {0, "all"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Alert::blacklist {1, "blacklist"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Alert::categories_reputation {2, "categories-reputation"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Alert::whitelist {3, "whitelist"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Level::detailed {0, "detailed"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Level::error {1, "error"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Level::info {2, "info"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold::high_risk {0, "high-risk"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold::low_risk {1, "low-risk"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold::moderate_risk {2, "moderate-risk"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold::suspicious {3, "suspicious"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold::trustworthy {4, "trustworthy"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Threat::detection {0, "detection"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Threat::protection {1, "protection"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Policy::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Policy::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Policy::security {2, "security"};

const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::emerg {0, "emerg"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::alert {1, "alert"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::crit {2, "crit"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::err {3, "err"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::warning {4, "warning"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::notice {5, "notice"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::info {6, "info"};
const Enum::YLeaf Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level::debug {7, "debug"};

const Enum::YLeaf Native::Voice::Service::Type::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::Type::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::Type::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::Type::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::Type::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::Protocol::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::Fallback::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_3 {1, "3"};

const Enum::YLeaf Native::Power::RedundancyMode::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyMode::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMin::max {0, "max"};


}
}

