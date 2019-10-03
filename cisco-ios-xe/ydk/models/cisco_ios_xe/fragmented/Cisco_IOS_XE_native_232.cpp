
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_232.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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


}
}

