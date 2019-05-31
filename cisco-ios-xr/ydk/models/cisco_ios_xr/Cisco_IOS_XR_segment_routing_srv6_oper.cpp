
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_srv6_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_srv6_oper {

Srv6::Srv6()
    :
    active(std::make_shared<Srv6::Active>())
    , standby(std::make_shared<Srv6::Standby>())
{
    active->parent = this;
    standby->parent = this;

    yang_name = "srv6"; yang_parent_name = "Cisco-IOS-XR-segment-routing-srv6-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Srv6::~Srv6()
{
}

bool Srv6::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Srv6::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Srv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Srv6::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Srv6::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active != nullptr)
    {
        _children["active"] = active;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    return _children;
}

void Srv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Srv6::clone_ptr() const
{
    return std::make_shared<Srv6>();
}

std::string Srv6::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srv6::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srv6::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srv6::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby")
        return true;
    return false;
}

Srv6::Active::Active()
    :
    locator_all_stale_sids(std::make_shared<Srv6::Active::LocatorAllStaleSids>())
    , manager(std::make_shared<Srv6::Active::Manager>())
    , locators(std::make_shared<Srv6::Active::Locators>())
    , locator_all_sids(std::make_shared<Srv6::Active::LocatorAllSids>())
    , locator_all_active_sids(std::make_shared<Srv6::Active::LocatorAllActiveSids>())
{
    locator_all_stale_sids->parent = this;
    manager->parent = this;
    locators->parent = this;
    locator_all_sids->parent = this;
    locator_all_active_sids->parent = this;

    yang_name = "active"; yang_parent_name = "srv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::~Active()
{
}

bool Srv6::Active::has_data() const
{
    if (is_presence_container) return true;
    return (locator_all_stale_sids !=  nullptr && locator_all_stale_sids->has_data())
	|| (manager !=  nullptr && manager->has_data())
	|| (locators !=  nullptr && locators->has_data())
	|| (locator_all_sids !=  nullptr && locator_all_sids->has_data())
	|| (locator_all_active_sids !=  nullptr && locator_all_active_sids->has_data());
}

bool Srv6::Active::has_operation() const
{
    return is_set(yfilter)
	|| (locator_all_stale_sids !=  nullptr && locator_all_stale_sids->has_operation())
	|| (manager !=  nullptr && manager->has_operation())
	|| (locators !=  nullptr && locators->has_operation())
	|| (locator_all_sids !=  nullptr && locator_all_sids->has_operation())
	|| (locator_all_active_sids !=  nullptr && locator_all_active_sids->has_operation());
}

std::string Srv6::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-stale-sids")
    {
        if(locator_all_stale_sids == nullptr)
        {
            locator_all_stale_sids = std::make_shared<Srv6::Active::LocatorAllStaleSids>();
        }
        return locator_all_stale_sids;
    }

    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Srv6::Active::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "locators")
    {
        if(locators == nullptr)
        {
            locators = std::make_shared<Srv6::Active::Locators>();
        }
        return locators;
    }

    if(child_yang_name == "locator-all-sids")
    {
        if(locator_all_sids == nullptr)
        {
            locator_all_sids = std::make_shared<Srv6::Active::LocatorAllSids>();
        }
        return locator_all_sids;
    }

    if(child_yang_name == "locator-all-active-sids")
    {
        if(locator_all_active_sids == nullptr)
        {
            locator_all_active_sids = std::make_shared<Srv6::Active::LocatorAllActiveSids>();
        }
        return locator_all_active_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locator_all_stale_sids != nullptr)
    {
        _children["locator-all-stale-sids"] = locator_all_stale_sids;
    }

    if(manager != nullptr)
    {
        _children["manager"] = manager;
    }

    if(locators != nullptr)
    {
        _children["locators"] = locators;
    }

    if(locator_all_sids != nullptr)
    {
        _children["locator-all-sids"] = locator_all_sids;
    }

    if(locator_all_active_sids != nullptr)
    {
        _children["locator-all-active-sids"] = locator_all_active_sids;
    }

    return _children;
}

void Srv6::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-stale-sids" || name == "manager" || name == "locators" || name == "locator-all-sids" || name == "locator-all-active-sids")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSids()
    :
    locator_all_stale_sid(this, {"locator_name", "sid_opcode"})
{

    yang_name = "locator-all-stale-sids"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllStaleSids::~LocatorAllStaleSids()
{
}

bool Srv6::Active::LocatorAllStaleSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_all_stale_sid.len(); index++)
    {
        if(locator_all_stale_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Active::LocatorAllStaleSids::has_operation() const
{
    for (std::size_t index=0; index<locator_all_stale_sid.len(); index++)
    {
        if(locator_all_stale_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllStaleSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-stale-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-stale-sid")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid>();
        ent_->parent = this;
        locator_all_stale_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator_all_stale_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllStaleSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::LocatorAllStaleSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::LocatorAllStaleSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-stale-sid")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::LocatorAllStaleSid()
    :
    locator_name{YType::str, "locator-name"},
    sid_opcode{YType::uint32, "sid-opcode"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "locator-all-stale-sid"; yang_parent_name = "locator-all-stale-sids"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::~LocatorAllStaleSid()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return locator_name.is_set
	|| sid_opcode.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(sid_opcode.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/locator-all-stale-sids/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-stale-sid";
    ADD_KEY_TOKEN(locator_name, "locator-name");
    ADD_KEY_TOKEN(sid_opcode, "sid-opcode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (sid_opcode.is_set || is_set(sid_opcode.yfilter)) leaf_name_data.push_back(sid_opcode.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode = value;
        sid_opcode.value_namespace = name_space;
        sid_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "locator-name" || name == "sid-opcode" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "locator-all-stale-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::~SidContext()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::~Key()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::~E()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::~X()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "locator-all-stale-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "locator-all-stale-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::~Owner()
{
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Active::Manager::Manager()
    :
    sid_mgr_params(std::make_shared<Srv6::Active::Manager::SidMgrParams>())
    , sid_mgr_summary(std::make_shared<Srv6::Active::Manager::SidMgrSummary>())
    , platform_capabilities(std::make_shared<Srv6::Active::Manager::PlatformCapabilities>())
{
    sid_mgr_params->parent = this;
    sid_mgr_summary->parent = this;
    platform_capabilities->parent = this;

    yang_name = "manager"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::~Manager()
{
}

bool Srv6::Active::Manager::has_data() const
{
    if (is_presence_container) return true;
    return (sid_mgr_params !=  nullptr && sid_mgr_params->has_data())
	|| (sid_mgr_summary !=  nullptr && sid_mgr_summary->has_data())
	|| (platform_capabilities !=  nullptr && platform_capabilities->has_data());
}

bool Srv6::Active::Manager::has_operation() const
{
    return is_set(yfilter)
	|| (sid_mgr_params !=  nullptr && sid_mgr_params->has_operation())
	|| (sid_mgr_summary !=  nullptr && sid_mgr_summary->has_operation())
	|| (platform_capabilities !=  nullptr && platform_capabilities->has_operation());
}

std::string Srv6::Active::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-mgr-params")
    {
        if(sid_mgr_params == nullptr)
        {
            sid_mgr_params = std::make_shared<Srv6::Active::Manager::SidMgrParams>();
        }
        return sid_mgr_params;
    }

    if(child_yang_name == "sid-mgr-summary")
    {
        if(sid_mgr_summary == nullptr)
        {
            sid_mgr_summary = std::make_shared<Srv6::Active::Manager::SidMgrSummary>();
        }
        return sid_mgr_summary;
    }

    if(child_yang_name == "platform-capabilities")
    {
        if(platform_capabilities == nullptr)
        {
            platform_capabilities = std::make_shared<Srv6::Active::Manager::PlatformCapabilities>();
        }
        return platform_capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_mgr_params != nullptr)
    {
        _children["sid-mgr-params"] = sid_mgr_params;
    }

    if(sid_mgr_summary != nullptr)
    {
        _children["sid-mgr-summary"] = sid_mgr_summary;
    }

    if(platform_capabilities != nullptr)
    {
        _children["platform-capabilities"] = platform_capabilities;
    }

    return _children;
}

void Srv6::Active::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-mgr-params" || name == "sid-mgr-summary" || name == "platform-capabilities")
        return true;
    return false;
}

Srv6::Active::Manager::SidMgrParams::SidMgrParams()
    :
    srv6_enabled{YType::boolean, "srv6-enabled"},
    configured_encap_source_address{YType::str, "configured-encap-source-address"},
    default_encap_source_address{YType::str, "default-encap-source-address"},
    encap_ttl_propagate{YType::boolean, "encap-ttl-propagate"},
    is_sid_holdtime_configured{YType::boolean, "is-sid-holdtime-configured"},
    sid_holdtime_mins_configured{YType::uint32, "sid-holdtime-mins-configured"}
        ,
    encap_hop_limit(std::make_shared<Srv6::Active::Manager::SidMgrParams::EncapHopLimit>())
{
    encap_hop_limit->parent = this;

    yang_name = "sid-mgr-params"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::SidMgrParams::~SidMgrParams()
{
}

bool Srv6::Active::Manager::SidMgrParams::has_data() const
{
    if (is_presence_container) return true;
    return srv6_enabled.is_set
	|| configured_encap_source_address.is_set
	|| default_encap_source_address.is_set
	|| encap_ttl_propagate.is_set
	|| is_sid_holdtime_configured.is_set
	|| sid_holdtime_mins_configured.is_set
	|| (encap_hop_limit !=  nullptr && encap_hop_limit->has_data());
}

bool Srv6::Active::Manager::SidMgrParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srv6_enabled.yfilter)
	|| ydk::is_set(configured_encap_source_address.yfilter)
	|| ydk::is_set(default_encap_source_address.yfilter)
	|| ydk::is_set(encap_ttl_propagate.yfilter)
	|| ydk::is_set(is_sid_holdtime_configured.yfilter)
	|| ydk::is_set(sid_holdtime_mins_configured.yfilter)
	|| (encap_hop_limit !=  nullptr && encap_hop_limit->has_operation());
}

std::string Srv6::Active::Manager::SidMgrParams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::SidMgrParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-mgr-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::SidMgrParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6_enabled.is_set || is_set(srv6_enabled.yfilter)) leaf_name_data.push_back(srv6_enabled.get_name_leafdata());
    if (configured_encap_source_address.is_set || is_set(configured_encap_source_address.yfilter)) leaf_name_data.push_back(configured_encap_source_address.get_name_leafdata());
    if (default_encap_source_address.is_set || is_set(default_encap_source_address.yfilter)) leaf_name_data.push_back(default_encap_source_address.get_name_leafdata());
    if (encap_ttl_propagate.is_set || is_set(encap_ttl_propagate.yfilter)) leaf_name_data.push_back(encap_ttl_propagate.get_name_leafdata());
    if (is_sid_holdtime_configured.is_set || is_set(is_sid_holdtime_configured.yfilter)) leaf_name_data.push_back(is_sid_holdtime_configured.get_name_leafdata());
    if (sid_holdtime_mins_configured.is_set || is_set(sid_holdtime_mins_configured.yfilter)) leaf_name_data.push_back(sid_holdtime_mins_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::SidMgrParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encap-hop-limit")
    {
        if(encap_hop_limit == nullptr)
        {
            encap_hop_limit = std::make_shared<Srv6::Active::Manager::SidMgrParams::EncapHopLimit>();
        }
        return encap_hop_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::SidMgrParams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encap_hop_limit != nullptr)
    {
        _children["encap-hop-limit"] = encap_hop_limit;
    }

    return _children;
}

void Srv6::Active::Manager::SidMgrParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srv6-enabled")
    {
        srv6_enabled = value;
        srv6_enabled.value_namespace = name_space;
        srv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-encap-source-address")
    {
        configured_encap_source_address = value;
        configured_encap_source_address.value_namespace = name_space;
        configured_encap_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-encap-source-address")
    {
        default_encap_source_address = value;
        default_encap_source_address.value_namespace = name_space;
        default_encap_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-ttl-propagate")
    {
        encap_ttl_propagate = value;
        encap_ttl_propagate.value_namespace = name_space;
        encap_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sid-holdtime-configured")
    {
        is_sid_holdtime_configured = value;
        is_sid_holdtime_configured.value_namespace = name_space;
        is_sid_holdtime_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-holdtime-mins-configured")
    {
        sid_holdtime_mins_configured = value;
        sid_holdtime_mins_configured.value_namespace = name_space;
        sid_holdtime_mins_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::SidMgrParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srv6-enabled")
    {
        srv6_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-encap-source-address")
    {
        configured_encap_source_address.yfilter = yfilter;
    }
    if(value_path == "default-encap-source-address")
    {
        default_encap_source_address.yfilter = yfilter;
    }
    if(value_path == "encap-ttl-propagate")
    {
        encap_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "is-sid-holdtime-configured")
    {
        is_sid_holdtime_configured.yfilter = yfilter;
    }
    if(value_path == "sid-holdtime-mins-configured")
    {
        sid_holdtime_mins_configured.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::SidMgrParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap-hop-limit" || name == "srv6-enabled" || name == "configured-encap-source-address" || name == "default-encap-source-address" || name == "encap-ttl-propagate" || name == "is-sid-holdtime-configured" || name == "sid-holdtime-mins-configured")
        return true;
    return false;
}

Srv6::Active::Manager::SidMgrParams::EncapHopLimit::EncapHopLimit()
    :
    use_default{YType::boolean, "use-default"},
    do_propagate{YType::boolean, "do-propagate"},
    value_{YType::uint8, "value"}
{

    yang_name = "encap-hop-limit"; yang_parent_name = "sid-mgr-params"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::SidMgrParams::EncapHopLimit::~EncapHopLimit()
{
}

bool Srv6::Active::Manager::SidMgrParams::EncapHopLimit::has_data() const
{
    if (is_presence_container) return true;
    return use_default.is_set
	|| do_propagate.is_set
	|| value_.is_set;
}

bool Srv6::Active::Manager::SidMgrParams::EncapHopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_default.yfilter)
	|| ydk::is_set(do_propagate.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Srv6::Active::Manager::SidMgrParams::EncapHopLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/sid-mgr-params/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::SidMgrParams::EncapHopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap-hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::SidMgrParams::EncapHopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_default.is_set || is_set(use_default.yfilter)) leaf_name_data.push_back(use_default.get_name_leafdata());
    if (do_propagate.is_set || is_set(do_propagate.yfilter)) leaf_name_data.push_back(do_propagate.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::SidMgrParams::EncapHopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::SidMgrParams::EncapHopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::SidMgrParams::EncapHopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-default")
    {
        use_default = value;
        use_default.value_namespace = name_space;
        use_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-propagate")
    {
        do_propagate = value;
        do_propagate.value_namespace = name_space;
        do_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::SidMgrParams::EncapHopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-default")
    {
        use_default.yfilter = yfilter;
    }
    if(value_path == "do-propagate")
    {
        do_propagate.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::SidMgrParams::EncapHopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-default" || name == "do-propagate" || name == "value")
        return true;
    return false;
}

Srv6::Active::Manager::SidMgrSummary::SidMgrSummary()
    :
    locators_count{YType::uint16, "locators-count"},
    oper_locators_count{YType::uint16, "oper-locators-count"},
    sids_count{YType::uint32, "sids-count"},
    stale_sids_count{YType::uint32, "stale-sids-count"},
    maximum_sids_count{YType::uint32, "maximum-sids-count"}
        ,
    sids_out_of_resource_summary(std::make_shared<Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary>())
{
    sids_out_of_resource_summary->parent = this;

    yang_name = "sid-mgr-summary"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::SidMgrSummary::~SidMgrSummary()
{
}

bool Srv6::Active::Manager::SidMgrSummary::has_data() const
{
    if (is_presence_container) return true;
    return locators_count.is_set
	|| oper_locators_count.is_set
	|| sids_count.is_set
	|| stale_sids_count.is_set
	|| maximum_sids_count.is_set
	|| (sids_out_of_resource_summary !=  nullptr && sids_out_of_resource_summary->has_data());
}

bool Srv6::Active::Manager::SidMgrSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locators_count.yfilter)
	|| ydk::is_set(oper_locators_count.yfilter)
	|| ydk::is_set(sids_count.yfilter)
	|| ydk::is_set(stale_sids_count.yfilter)
	|| ydk::is_set(maximum_sids_count.yfilter)
	|| (sids_out_of_resource_summary !=  nullptr && sids_out_of_resource_summary->has_operation());
}

std::string Srv6::Active::Manager::SidMgrSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::SidMgrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-mgr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::SidMgrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locators_count.is_set || is_set(locators_count.yfilter)) leaf_name_data.push_back(locators_count.get_name_leafdata());
    if (oper_locators_count.is_set || is_set(oper_locators_count.yfilter)) leaf_name_data.push_back(oper_locators_count.get_name_leafdata());
    if (sids_count.is_set || is_set(sids_count.yfilter)) leaf_name_data.push_back(sids_count.get_name_leafdata());
    if (stale_sids_count.is_set || is_set(stale_sids_count.yfilter)) leaf_name_data.push_back(stale_sids_count.get_name_leafdata());
    if (maximum_sids_count.is_set || is_set(maximum_sids_count.yfilter)) leaf_name_data.push_back(maximum_sids_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::SidMgrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sids-out-of-resource-summary")
    {
        if(sids_out_of_resource_summary == nullptr)
        {
            sids_out_of_resource_summary = std::make_shared<Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary>();
        }
        return sids_out_of_resource_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::SidMgrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sids_out_of_resource_summary != nullptr)
    {
        _children["sids-out-of-resource-summary"] = sids_out_of_resource_summary;
    }

    return _children;
}

void Srv6::Active::Manager::SidMgrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locators-count")
    {
        locators_count = value;
        locators_count.value_namespace = name_space;
        locators_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-locators-count")
    {
        oper_locators_count = value;
        oper_locators_count.value_namespace = name_space;
        oper_locators_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sids-count")
    {
        sids_count = value;
        sids_count.value_namespace = name_space;
        sids_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-sids-count")
    {
        stale_sids_count = value;
        stale_sids_count.value_namespace = name_space;
        stale_sids_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-sids-count")
    {
        maximum_sids_count = value;
        maximum_sids_count.value_namespace = name_space;
        maximum_sids_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::SidMgrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locators-count")
    {
        locators_count.yfilter = yfilter;
    }
    if(value_path == "oper-locators-count")
    {
        oper_locators_count.yfilter = yfilter;
    }
    if(value_path == "sids-count")
    {
        sids_count.yfilter = yfilter;
    }
    if(value_path == "stale-sids-count")
    {
        stale_sids_count.yfilter = yfilter;
    }
    if(value_path == "maximum-sids-count")
    {
        maximum_sids_count.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::SidMgrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sids-out-of-resource-summary" || name == "locators-count" || name == "oper-locators-count" || name == "sids-count" || name == "stale-sids-count" || name == "maximum-sids-count")
        return true;
    return false;
}

Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::SidsOutOfResourceSummary()
    :
    out_of_resources_state{YType::enumeration, "out-of-resources-state"},
    oor_yellow_free_sid_threshold{YType::uint32, "oor-yellow-free-sid-threshold"},
    oor_green_free_sid_threshold{YType::uint32, "oor-green-free-sid-threshold"},
    oor_green_count{YType::uint32, "oor-green-count"},
    oor_yellow_count{YType::uint32, "oor-yellow-count"},
    oor_red_count{YType::uint32, "oor-red-count"}
{

    yang_name = "sids-out-of-resource-summary"; yang_parent_name = "sid-mgr-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::~SidsOutOfResourceSummary()
{
}

bool Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_data() const
{
    if (is_presence_container) return true;
    return out_of_resources_state.is_set
	|| oor_yellow_free_sid_threshold.is_set
	|| oor_green_free_sid_threshold.is_set
	|| oor_green_count.is_set
	|| oor_yellow_count.is_set
	|| oor_red_count.is_set;
}

bool Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_of_resources_state.yfilter)
	|| ydk::is_set(oor_yellow_free_sid_threshold.yfilter)
	|| ydk::is_set(oor_green_free_sid_threshold.yfilter)
	|| ydk::is_set(oor_green_count.yfilter)
	|| ydk::is_set(oor_yellow_count.yfilter)
	|| ydk::is_set(oor_red_count.yfilter);
}

std::string Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/sid-mgr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sids-out-of-resource-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_resources_state.is_set || is_set(out_of_resources_state.yfilter)) leaf_name_data.push_back(out_of_resources_state.get_name_leafdata());
    if (oor_yellow_free_sid_threshold.is_set || is_set(oor_yellow_free_sid_threshold.yfilter)) leaf_name_data.push_back(oor_yellow_free_sid_threshold.get_name_leafdata());
    if (oor_green_free_sid_threshold.is_set || is_set(oor_green_free_sid_threshold.yfilter)) leaf_name_data.push_back(oor_green_free_sid_threshold.get_name_leafdata());
    if (oor_green_count.is_set || is_set(oor_green_count.yfilter)) leaf_name_data.push_back(oor_green_count.get_name_leafdata());
    if (oor_yellow_count.is_set || is_set(oor_yellow_count.yfilter)) leaf_name_data.push_back(oor_yellow_count.get_name_leafdata());
    if (oor_red_count.is_set || is_set(oor_red_count.yfilter)) leaf_name_data.push_back(oor_red_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state = value;
        out_of_resources_state.value_namespace = name_space;
        out_of_resources_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-yellow-free-sid-threshold")
    {
        oor_yellow_free_sid_threshold = value;
        oor_yellow_free_sid_threshold.value_namespace = name_space;
        oor_yellow_free_sid_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-green-free-sid-threshold")
    {
        oor_green_free_sid_threshold = value;
        oor_green_free_sid_threshold.value_namespace = name_space;
        oor_green_free_sid_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-green-count")
    {
        oor_green_count = value;
        oor_green_count.value_namespace = name_space;
        oor_green_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-yellow-count")
    {
        oor_yellow_count = value;
        oor_yellow_count.value_namespace = name_space;
        oor_yellow_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-red-count")
    {
        oor_red_count = value;
        oor_red_count.value_namespace = name_space;
        oor_red_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state.yfilter = yfilter;
    }
    if(value_path == "oor-yellow-free-sid-threshold")
    {
        oor_yellow_free_sid_threshold.yfilter = yfilter;
    }
    if(value_path == "oor-green-free-sid-threshold")
    {
        oor_green_free_sid_threshold.yfilter = yfilter;
    }
    if(value_path == "oor-green-count")
    {
        oor_green_count.yfilter = yfilter;
    }
    if(value_path == "oor-yellow-count")
    {
        oor_yellow_count.yfilter = yfilter;
    }
    if(value_path == "oor-red-count")
    {
        oor_red_count.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-of-resources-state" || name == "oor-yellow-free-sid-threshold" || name == "oor-green-free-sid-threshold" || name == "oor-green-count" || name == "oor-yellow-count" || name == "oor-red-count")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::PlatformCapabilities()
    :
    max_sid{YType::uint32, "max-sid"},
    sid_holdtime_mins{YType::uint32, "sid-holdtime-mins"}
        ,
    support(std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support>())
{
    support->parent = this;

    yang_name = "platform-capabilities"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::~PlatformCapabilities()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::has_data() const
{
    if (is_presence_container) return true;
    return max_sid.is_set
	|| sid_holdtime_mins.is_set
	|| (support !=  nullptr && support->has_data());
}

bool Srv6::Active::Manager::PlatformCapabilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sid.yfilter)
	|| ydk::is_set(sid_holdtime_mins.yfilter)
	|| (support !=  nullptr && support->has_operation());
}

std::string Srv6::Active::Manager::PlatformCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sid.is_set || is_set(max_sid.yfilter)) leaf_name_data.push_back(max_sid.get_name_leafdata());
    if (sid_holdtime_mins.is_set || is_set(sid_holdtime_mins.yfilter)) leaf_name_data.push_back(sid_holdtime_mins.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "support")
    {
        if(support == nullptr)
        {
            support = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support>();
        }
        return support;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(support != nullptr)
    {
        _children["support"] = support;
    }

    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sid")
    {
        max_sid = value;
        max_sid.value_namespace = name_space;
        max_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-holdtime-mins")
    {
        sid_holdtime_mins = value;
        sid_holdtime_mins.value_namespace = name_space;
        sid_holdtime_mins.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sid")
    {
        max_sid.yfilter = yfilter;
    }
    if(value_path == "sid-holdtime-mins")
    {
        sid_holdtime_mins.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "support" || name == "max-sid" || name == "sid-holdtime-mins")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::Support()
    :
    srv6{YType::boolean, "srv6"},
    tilfa{YType::boolean, "tilfa"},
    microloop_avoidance{YType::boolean, "microloop-avoidance"}
        ,
    signaled_parameters(std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters>())
    , end_func(this, {})
    , transit_func(this, {})
    , security_rule(this, {})
    , counter(this, {})
{
    signaled_parameters->parent = this;

    yang_name = "support"; yang_parent_name = "platform-capabilities"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::~Support()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<end_func.len(); index++)
    {
        if(end_func[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transit_func.len(); index++)
    {
        if(transit_func[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security_rule.len(); index++)
    {
        if(security_rule[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<counter.len(); index++)
    {
        if(counter[index]->has_data())
            return true;
    }
    return srv6.is_set
	|| tilfa.is_set
	|| microloop_avoidance.is_set
	|| (signaled_parameters !=  nullptr && signaled_parameters->has_data());
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::has_operation() const
{
    for (std::size_t index=0; index<end_func.len(); index++)
    {
        if(end_func[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transit_func.len(); index++)
    {
        if(transit_func[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security_rule.len(); index++)
    {
        if(security_rule[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<counter.len(); index++)
    {
        if(counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srv6.yfilter)
	|| ydk::is_set(tilfa.yfilter)
	|| ydk::is_set(microloop_avoidance.yfilter)
	|| (signaled_parameters !=  nullptr && signaled_parameters->has_operation());
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "support";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6.is_set || is_set(srv6.yfilter)) leaf_name_data.push_back(srv6.get_name_leafdata());
    if (tilfa.is_set || is_set(tilfa.yfilter)) leaf_name_data.push_back(tilfa.get_name_leafdata());
    if (microloop_avoidance.is_set || is_set(microloop_avoidance.yfilter)) leaf_name_data.push_back(microloop_avoidance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaled-parameters")
    {
        if(signaled_parameters == nullptr)
        {
            signaled_parameters = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters>();
        }
        return signaled_parameters;
    }

    if(child_yang_name == "end-func")
    {
        auto ent_ = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc>();
        ent_->parent = this;
        end_func.append(ent_);
        return ent_;
    }

    if(child_yang_name == "transit-func")
    {
        auto ent_ = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc>();
        ent_->parent = this;
        transit_func.append(ent_);
        return ent_;
    }

    if(child_yang_name == "security-rule")
    {
        auto ent_ = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule>();
        ent_->parent = this;
        security_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "counter")
    {
        auto ent_ = std::make_shared<Srv6::Active::Manager::PlatformCapabilities::Support::Counter>();
        ent_->parent = this;
        counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signaled_parameters != nullptr)
    {
        _children["signaled-parameters"] = signaled_parameters;
    }

    count_ = 0;
    for (auto ent_ : end_func.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : transit_func.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : security_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srv6")
    {
        srv6 = value;
        srv6.value_namespace = name_space;
        srv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa")
    {
        tilfa = value;
        tilfa.value_namespace = name_space;
        tilfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance")
    {
        microloop_avoidance = value;
        microloop_avoidance.value_namespace = name_space;
        microloop_avoidance.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srv6")
    {
        srv6.yfilter = yfilter;
    }
    if(value_path == "tilfa")
    {
        tilfa.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance")
    {
        microloop_avoidance.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaled-parameters" || name == "end-func" || name == "transit-func" || name == "security-rule" || name == "counter" || name == "srv6" || name == "tilfa" || name == "microloop-avoidance")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::SignaledParameters()
    :
    max_sl{YType::uint8, "max-sl"},
    max_end_pop_srh{YType::uint8, "max-end-pop-srh"},
    max_t_insert{YType::uint8, "max-t-insert"},
    max_t_encap{YType::uint8, "max-t-encap"},
    max_end_d{YType::uint8, "max-end-d"}
{

    yang_name = "signaled-parameters"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::~SignaledParameters()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::has_data() const
{
    if (is_presence_container) return true;
    return max_sl.is_set
	|| max_end_pop_srh.is_set
	|| max_t_insert.is_set
	|| max_t_encap.is_set
	|| max_end_d.is_set;
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sl.yfilter)
	|| ydk::is_set(max_end_pop_srh.yfilter)
	|| ydk::is_set(max_t_insert.yfilter)
	|| ydk::is_set(max_t_encap.yfilter)
	|| ydk::is_set(max_end_d.yfilter);
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaled-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sl.is_set || is_set(max_sl.yfilter)) leaf_name_data.push_back(max_sl.get_name_leafdata());
    if (max_end_pop_srh.is_set || is_set(max_end_pop_srh.yfilter)) leaf_name_data.push_back(max_end_pop_srh.get_name_leafdata());
    if (max_t_insert.is_set || is_set(max_t_insert.yfilter)) leaf_name_data.push_back(max_t_insert.get_name_leafdata());
    if (max_t_encap.is_set || is_set(max_t_encap.yfilter)) leaf_name_data.push_back(max_t_encap.get_name_leafdata());
    if (max_end_d.is_set || is_set(max_end_d.yfilter)) leaf_name_data.push_back(max_end_d.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sl")
    {
        max_sl = value;
        max_sl.value_namespace = name_space;
        max_sl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-end-pop-srh")
    {
        max_end_pop_srh = value;
        max_end_pop_srh.value_namespace = name_space;
        max_end_pop_srh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-t-insert")
    {
        max_t_insert = value;
        max_t_insert.value_namespace = name_space;
        max_t_insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-t-encap")
    {
        max_t_encap = value;
        max_t_encap.value_namespace = name_space;
        max_t_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-end-d")
    {
        max_end_d = value;
        max_end_d.value_namespace = name_space;
        max_end_d.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sl")
    {
        max_sl.yfilter = yfilter;
    }
    if(value_path == "max-end-pop-srh")
    {
        max_end_pop_srh.yfilter = yfilter;
    }
    if(value_path == "max-t-insert")
    {
        max_t_insert.yfilter = yfilter;
    }
    if(value_path == "max-t-encap")
    {
        max_t_encap.yfilter = yfilter;
    }
    if(value_path == "max-end-d")
    {
        max_end_d.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-sl" || name == "max-end-pop-srh" || name == "max-t-insert" || name == "max-t-encap" || name == "max-end-d")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::EndFunc()
    :
    string{YType::str, "string"}
{

    yang_name = "end-func"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::~EndFunc()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-func";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::TransitFunc()
    :
    string{YType::str, "string"}
{

    yang_name = "transit-func"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::~TransitFunc()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit-func";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::SecurityRule()
    :
    string{YType::str, "string"}
{

    yang_name = "security-rule"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::~SecurityRule()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-rule";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Active::Manager::PlatformCapabilities::Support::Counter::Counter()
    :
    string{YType::str, "string"}
{

    yang_name = "counter"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Manager::PlatformCapabilities::Support::Counter::~Counter()
{
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::Counter::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Manager::PlatformCapabilities::Support::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Manager::PlatformCapabilities::Support::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Manager::PlatformCapabilities::Support::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Manager::PlatformCapabilities::Support::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Manager::PlatformCapabilities::Support::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Manager::PlatformCapabilities::Support::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Active::Manager::PlatformCapabilities::Support::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Active::Locators::Locators()
    :
    locator(this, {"name"})
{

    yang_name = "locators"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Locators::~Locators()
{
}

bool Srv6::Active::Locators::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Active::Locators::has_operation() const
{
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Active::Locators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Locators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator")
    {
        auto ent_ = std::make_shared<Srv6::Active::Locators::Locator>();
        ent_->parent = this;
        locator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::Locators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::Locators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::Locators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Locator()
    :
    name{YType::str, "name"}
        ,
    info(std::make_shared<Srv6::Active::Locators::Locator::Info>())
    , sids(std::make_shared<Srv6::Active::Locators::Locator::Sids>())
{
    info->parent = this;
    sids->parent = this;

    yang_name = "locator"; yang_parent_name = "locators"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::Locators::Locator::~Locator()
{
}

bool Srv6::Active::Locators::Locator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (sids !=  nullptr && sids->has_data());
}

bool Srv6::Active::Locators::Locator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (sids !=  nullptr && sids->has_operation());
}

std::string Srv6::Active::Locators::Locator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/locators/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::Locators::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Srv6::Active::Locators::Locator::Info>();
        }
        return info;
    }

    if(child_yang_name == "sids")
    {
        if(sids == nullptr)
        {
            sids = std::make_shared<Srv6::Active::Locators::Locator::Sids>();
        }
        return sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(sids != nullptr)
    {
        _children["sids"] = sids;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "sids" || name == "name")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Info::Info()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    prefix{YType::str, "prefix"},
    is_operational{YType::boolean, "is-operational"},
    is_default{YType::boolean, "is-default"},
    out_of_resources_state{YType::enumeration, "out-of-resources-state"}
        ,
    interface(std::make_shared<Srv6::Active::Locators::Locator::Info::Interface>())
    , create_timestamp(std::make_shared<Srv6::Active::Locators::Locator::Info::CreateTimestamp>())
{
    interface->parent = this;
    create_timestamp->parent = this;

    yang_name = "info"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Info::~Info()
{
}

bool Srv6::Active::Locators::Locator::Info::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| prefix.is_set
	|| is_operational.is_set
	|| is_default.is_set
	|| out_of_resources_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Active::Locators::Locator::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(out_of_resources_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Active::Locators::Locator::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (out_of_resources_state.is_set || is_set(out_of_resources_state.yfilter)) leaf_name_data.push_back(out_of_resources_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Srv6::Active::Locators::Locator::Info::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Active::Locators::Locator::Info::CreateTimestamp>();
        }
        return create_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state = value;
        out_of_resources_state.value_namespace = name_space;
        out_of_resources_state.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "create-timestamp" || name == "name" || name == "id" || name == "prefix" || name == "is-operational" || name == "is-default" || name == "out-of-resources-state")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Info::Interface::Interface()
    :
    name{YType::str, "name"},
    if_handle{YType::str, "if-handle"},
    programmed_prefix{YType::str, "programmed-prefix"}
{

    yang_name = "interface"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Info::Interface::~Interface()
{
}

bool Srv6::Active::Locators::Locator::Info::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| if_handle.is_set
	|| programmed_prefix.is_set;
}

bool Srv6::Active::Locators::Locator::Info::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(programmed_prefix.yfilter);
}

std::string Srv6::Active::Locators::Locator::Info::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Info::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (programmed_prefix.is_set || is_set(programmed_prefix.yfilter)) leaf_name_data.push_back(programmed_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Info::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Info::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Info::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-prefix")
    {
        programmed_prefix = value;
        programmed_prefix.value_namespace = name_space;
        programmed_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Info::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "programmed-prefix")
    {
        programmed_prefix.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Info::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "if-handle" || name == "programmed-prefix")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Info::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Info::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Active::Locators::Locator::Info::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Active::Locators::Locator::Info::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Active::Locators::Locator::Info::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Info::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Info::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Info::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Info::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Info::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Info::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sids()
    :
    sid(this, {"address"})
{

    yang_name = "sids"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::~Sids()
{
}

bool Srv6::Active::Locators::Locator::Sids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Active::Locators::Locator::Sids::has_operation() const
{
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        auto ent_ = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid>();
        ent_->parent = this;
        sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::Sids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::Locators::Locator::Sids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::Locators::Locator::Sids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::Sid()
    :
    address{YType::str, "address"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "sid"; yang_parent_name = "sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::~Sid()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return address.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Active::Locators::Locator::Sids::Sid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "address" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::~SidContext()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::~Key()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::~E()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::~X()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Active::Locators::Locator::Sids::Sid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::Locators::Locator::Sids::Sid::Owner::~Owner()
{
}

bool Srv6::Active::Locators::Locator::Sids::Sid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Active::Locators::Locator::Sids::Sid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Active::Locators::Locator::Sids::Sid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::Locators::Locator::Sids::Sid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::Locators::Locator::Sids::Sid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::Locators::Locator::Sids::Sid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::Locators::Locator::Sids::Sid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::Locators::Locator::Sids::Sid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Active::Locators::Locator::Sids::Sid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSids()
    :
    locator_all_sid(this, {"locator_name", "sid_opcode"})
{

    yang_name = "locator-all-sids"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllSids::~LocatorAllSids()
{
}

bool Srv6::Active::LocatorAllSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_all_sid.len(); index++)
    {
        if(locator_all_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Active::LocatorAllSids::has_operation() const
{
    for (std::size_t index=0; index<locator_all_sid.len(); index++)
    {
        if(locator_all_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Active::LocatorAllSids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-sid")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid>();
        ent_->parent = this;
        locator_all_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator_all_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::LocatorAllSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::LocatorAllSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-sid")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::LocatorAllSid()
    :
    locator_name{YType::str, "locator-name"},
    sid_opcode{YType::uint32, "sid-opcode"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "locator-all-sid"; yang_parent_name = "locator-all-sids"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::~LocatorAllSid()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return locator_name.is_set
	|| sid_opcode.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(sid_opcode.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/locator-all-sids/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-sid";
    ADD_KEY_TOKEN(locator_name, "locator-name");
    ADD_KEY_TOKEN(sid_opcode, "sid-opcode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (sid_opcode.is_set || is_set(sid_opcode.yfilter)) leaf_name_data.push_back(sid_opcode.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode = value;
        sid_opcode.value_namespace = name_space;
        sid_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "locator-name" || name == "sid-opcode" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::~SidContext()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::~Key()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::~E()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::~X()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::~Owner()
{
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllSids::LocatorAllSid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSids()
    :
    locator_all_active_sid(this, {"locator_name", "sid_opcode"})
{

    yang_name = "locator-all-active-sids"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllActiveSids::~LocatorAllActiveSids()
{
}

bool Srv6::Active::LocatorAllActiveSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_all_active_sid.len(); index++)
    {
        if(locator_all_active_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Active::LocatorAllActiveSids::has_operation() const
{
    for (std::size_t index=0; index<locator_all_active_sid.len(); index++)
    {
        if(locator_all_active_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllActiveSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-active-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-active-sid")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid>();
        ent_->parent = this;
        locator_all_active_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator_all_active_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllActiveSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Active::LocatorAllActiveSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Active::LocatorAllActiveSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-active-sid")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::LocatorAllActiveSid()
    :
    locator_name{YType::str, "locator-name"},
    sid_opcode{YType::uint32, "sid-opcode"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "locator-all-active-sid"; yang_parent_name = "locator-all-active-sids"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::~LocatorAllActiveSid()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return locator_name.is_set
	|| sid_opcode.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(sid_opcode.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/active/locator-all-active-sids/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-active-sid";
    ADD_KEY_TOKEN(locator_name, "locator-name");
    ADD_KEY_TOKEN(sid_opcode, "sid-opcode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (sid_opcode.is_set || is_set(sid_opcode.yfilter)) leaf_name_data.push_back(sid_opcode.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode = value;
        sid_opcode.value_namespace = name_space;
        sid_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "locator-name" || name == "sid-opcode" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::~SidContext()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::~Key()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::~E()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::~X()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::~Owner()
{
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Standby::Standby()
    :
    manager(std::make_shared<Srv6::Standby::Manager>())
    , locators(std::make_shared<Srv6::Standby::Locators>())
    , locator_all_sids(std::make_shared<Srv6::Standby::LocatorAllSids>())
    , locator_all_active_sids(std::make_shared<Srv6::Standby::LocatorAllActiveSids>())
{
    manager->parent = this;
    locators->parent = this;
    locator_all_sids->parent = this;
    locator_all_active_sids->parent = this;

    yang_name = "standby"; yang_parent_name = "srv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::~Standby()
{
}

bool Srv6::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (manager !=  nullptr && manager->has_data())
	|| (locators !=  nullptr && locators->has_data())
	|| (locator_all_sids !=  nullptr && locator_all_sids->has_data())
	|| (locator_all_active_sids !=  nullptr && locator_all_active_sids->has_data());
}

bool Srv6::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (manager !=  nullptr && manager->has_operation())
	|| (locators !=  nullptr && locators->has_operation())
	|| (locator_all_sids !=  nullptr && locator_all_sids->has_operation())
	|| (locator_all_active_sids !=  nullptr && locator_all_active_sids->has_operation());
}

std::string Srv6::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Srv6::Standby::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "locators")
    {
        if(locators == nullptr)
        {
            locators = std::make_shared<Srv6::Standby::Locators>();
        }
        return locators;
    }

    if(child_yang_name == "locator-all-sids")
    {
        if(locator_all_sids == nullptr)
        {
            locator_all_sids = std::make_shared<Srv6::Standby::LocatorAllSids>();
        }
        return locator_all_sids;
    }

    if(child_yang_name == "locator-all-active-sids")
    {
        if(locator_all_active_sids == nullptr)
        {
            locator_all_active_sids = std::make_shared<Srv6::Standby::LocatorAllActiveSids>();
        }
        return locator_all_active_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manager != nullptr)
    {
        _children["manager"] = manager;
    }

    if(locators != nullptr)
    {
        _children["locators"] = locators;
    }

    if(locator_all_sids != nullptr)
    {
        _children["locator-all-sids"] = locator_all_sids;
    }

    if(locator_all_active_sids != nullptr)
    {
        _children["locator-all-active-sids"] = locator_all_active_sids;
    }

    return _children;
}

void Srv6::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manager" || name == "locators" || name == "locator-all-sids" || name == "locator-all-active-sids")
        return true;
    return false;
}

Srv6::Standby::Manager::Manager()
    :
    sid_mgr_params(std::make_shared<Srv6::Standby::Manager::SidMgrParams>())
    , sid_mgr_summary(std::make_shared<Srv6::Standby::Manager::SidMgrSummary>())
    , platform_capabilities(std::make_shared<Srv6::Standby::Manager::PlatformCapabilities>())
{
    sid_mgr_params->parent = this;
    sid_mgr_summary->parent = this;
    platform_capabilities->parent = this;

    yang_name = "manager"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::~Manager()
{
}

bool Srv6::Standby::Manager::has_data() const
{
    if (is_presence_container) return true;
    return (sid_mgr_params !=  nullptr && sid_mgr_params->has_data())
	|| (sid_mgr_summary !=  nullptr && sid_mgr_summary->has_data())
	|| (platform_capabilities !=  nullptr && platform_capabilities->has_data());
}

bool Srv6::Standby::Manager::has_operation() const
{
    return is_set(yfilter)
	|| (sid_mgr_params !=  nullptr && sid_mgr_params->has_operation())
	|| (sid_mgr_summary !=  nullptr && sid_mgr_summary->has_operation())
	|| (platform_capabilities !=  nullptr && platform_capabilities->has_operation());
}

std::string Srv6::Standby::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-mgr-params")
    {
        if(sid_mgr_params == nullptr)
        {
            sid_mgr_params = std::make_shared<Srv6::Standby::Manager::SidMgrParams>();
        }
        return sid_mgr_params;
    }

    if(child_yang_name == "sid-mgr-summary")
    {
        if(sid_mgr_summary == nullptr)
        {
            sid_mgr_summary = std::make_shared<Srv6::Standby::Manager::SidMgrSummary>();
        }
        return sid_mgr_summary;
    }

    if(child_yang_name == "platform-capabilities")
    {
        if(platform_capabilities == nullptr)
        {
            platform_capabilities = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities>();
        }
        return platform_capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_mgr_params != nullptr)
    {
        _children["sid-mgr-params"] = sid_mgr_params;
    }

    if(sid_mgr_summary != nullptr)
    {
        _children["sid-mgr-summary"] = sid_mgr_summary;
    }

    if(platform_capabilities != nullptr)
    {
        _children["platform-capabilities"] = platform_capabilities;
    }

    return _children;
}

void Srv6::Standby::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-mgr-params" || name == "sid-mgr-summary" || name == "platform-capabilities")
        return true;
    return false;
}

Srv6::Standby::Manager::SidMgrParams::SidMgrParams()
    :
    srv6_enabled{YType::boolean, "srv6-enabled"},
    configured_encap_source_address{YType::str, "configured-encap-source-address"},
    default_encap_source_address{YType::str, "default-encap-source-address"},
    encap_ttl_propagate{YType::boolean, "encap-ttl-propagate"},
    is_sid_holdtime_configured{YType::boolean, "is-sid-holdtime-configured"},
    sid_holdtime_mins_configured{YType::uint32, "sid-holdtime-mins-configured"}
        ,
    encap_hop_limit(std::make_shared<Srv6::Standby::Manager::SidMgrParams::EncapHopLimit>())
{
    encap_hop_limit->parent = this;

    yang_name = "sid-mgr-params"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::SidMgrParams::~SidMgrParams()
{
}

bool Srv6::Standby::Manager::SidMgrParams::has_data() const
{
    if (is_presence_container) return true;
    return srv6_enabled.is_set
	|| configured_encap_source_address.is_set
	|| default_encap_source_address.is_set
	|| encap_ttl_propagate.is_set
	|| is_sid_holdtime_configured.is_set
	|| sid_holdtime_mins_configured.is_set
	|| (encap_hop_limit !=  nullptr && encap_hop_limit->has_data());
}

bool Srv6::Standby::Manager::SidMgrParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srv6_enabled.yfilter)
	|| ydk::is_set(configured_encap_source_address.yfilter)
	|| ydk::is_set(default_encap_source_address.yfilter)
	|| ydk::is_set(encap_ttl_propagate.yfilter)
	|| ydk::is_set(is_sid_holdtime_configured.yfilter)
	|| ydk::is_set(sid_holdtime_mins_configured.yfilter)
	|| (encap_hop_limit !=  nullptr && encap_hop_limit->has_operation());
}

std::string Srv6::Standby::Manager::SidMgrParams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::SidMgrParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-mgr-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::SidMgrParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6_enabled.is_set || is_set(srv6_enabled.yfilter)) leaf_name_data.push_back(srv6_enabled.get_name_leafdata());
    if (configured_encap_source_address.is_set || is_set(configured_encap_source_address.yfilter)) leaf_name_data.push_back(configured_encap_source_address.get_name_leafdata());
    if (default_encap_source_address.is_set || is_set(default_encap_source_address.yfilter)) leaf_name_data.push_back(default_encap_source_address.get_name_leafdata());
    if (encap_ttl_propagate.is_set || is_set(encap_ttl_propagate.yfilter)) leaf_name_data.push_back(encap_ttl_propagate.get_name_leafdata());
    if (is_sid_holdtime_configured.is_set || is_set(is_sid_holdtime_configured.yfilter)) leaf_name_data.push_back(is_sid_holdtime_configured.get_name_leafdata());
    if (sid_holdtime_mins_configured.is_set || is_set(sid_holdtime_mins_configured.yfilter)) leaf_name_data.push_back(sid_holdtime_mins_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::SidMgrParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encap-hop-limit")
    {
        if(encap_hop_limit == nullptr)
        {
            encap_hop_limit = std::make_shared<Srv6::Standby::Manager::SidMgrParams::EncapHopLimit>();
        }
        return encap_hop_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::SidMgrParams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encap_hop_limit != nullptr)
    {
        _children["encap-hop-limit"] = encap_hop_limit;
    }

    return _children;
}

void Srv6::Standby::Manager::SidMgrParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srv6-enabled")
    {
        srv6_enabled = value;
        srv6_enabled.value_namespace = name_space;
        srv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-encap-source-address")
    {
        configured_encap_source_address = value;
        configured_encap_source_address.value_namespace = name_space;
        configured_encap_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-encap-source-address")
    {
        default_encap_source_address = value;
        default_encap_source_address.value_namespace = name_space;
        default_encap_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-ttl-propagate")
    {
        encap_ttl_propagate = value;
        encap_ttl_propagate.value_namespace = name_space;
        encap_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sid-holdtime-configured")
    {
        is_sid_holdtime_configured = value;
        is_sid_holdtime_configured.value_namespace = name_space;
        is_sid_holdtime_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-holdtime-mins-configured")
    {
        sid_holdtime_mins_configured = value;
        sid_holdtime_mins_configured.value_namespace = name_space;
        sid_holdtime_mins_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::SidMgrParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srv6-enabled")
    {
        srv6_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-encap-source-address")
    {
        configured_encap_source_address.yfilter = yfilter;
    }
    if(value_path == "default-encap-source-address")
    {
        default_encap_source_address.yfilter = yfilter;
    }
    if(value_path == "encap-ttl-propagate")
    {
        encap_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "is-sid-holdtime-configured")
    {
        is_sid_holdtime_configured.yfilter = yfilter;
    }
    if(value_path == "sid-holdtime-mins-configured")
    {
        sid_holdtime_mins_configured.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::SidMgrParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap-hop-limit" || name == "srv6-enabled" || name == "configured-encap-source-address" || name == "default-encap-source-address" || name == "encap-ttl-propagate" || name == "is-sid-holdtime-configured" || name == "sid-holdtime-mins-configured")
        return true;
    return false;
}

Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::EncapHopLimit()
    :
    use_default{YType::boolean, "use-default"},
    do_propagate{YType::boolean, "do-propagate"},
    value_{YType::uint8, "value"}
{

    yang_name = "encap-hop-limit"; yang_parent_name = "sid-mgr-params"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::~EncapHopLimit()
{
}

bool Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::has_data() const
{
    if (is_presence_container) return true;
    return use_default.is_set
	|| do_propagate.is_set
	|| value_.is_set;
}

bool Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_default.yfilter)
	|| ydk::is_set(do_propagate.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/sid-mgr-params/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap-hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_default.is_set || is_set(use_default.yfilter)) leaf_name_data.push_back(use_default.get_name_leafdata());
    if (do_propagate.is_set || is_set(do_propagate.yfilter)) leaf_name_data.push_back(do_propagate.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-default")
    {
        use_default = value;
        use_default.value_namespace = name_space;
        use_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-propagate")
    {
        do_propagate = value;
        do_propagate.value_namespace = name_space;
        do_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-default")
    {
        use_default.yfilter = yfilter;
    }
    if(value_path == "do-propagate")
    {
        do_propagate.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::SidMgrParams::EncapHopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-default" || name == "do-propagate" || name == "value")
        return true;
    return false;
}

Srv6::Standby::Manager::SidMgrSummary::SidMgrSummary()
    :
    locators_count{YType::uint16, "locators-count"},
    oper_locators_count{YType::uint16, "oper-locators-count"},
    sids_count{YType::uint32, "sids-count"},
    stale_sids_count{YType::uint32, "stale-sids-count"},
    maximum_sids_count{YType::uint32, "maximum-sids-count"}
        ,
    sids_out_of_resource_summary(std::make_shared<Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary>())
{
    sids_out_of_resource_summary->parent = this;

    yang_name = "sid-mgr-summary"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::SidMgrSummary::~SidMgrSummary()
{
}

bool Srv6::Standby::Manager::SidMgrSummary::has_data() const
{
    if (is_presence_container) return true;
    return locators_count.is_set
	|| oper_locators_count.is_set
	|| sids_count.is_set
	|| stale_sids_count.is_set
	|| maximum_sids_count.is_set
	|| (sids_out_of_resource_summary !=  nullptr && sids_out_of_resource_summary->has_data());
}

bool Srv6::Standby::Manager::SidMgrSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locators_count.yfilter)
	|| ydk::is_set(oper_locators_count.yfilter)
	|| ydk::is_set(sids_count.yfilter)
	|| ydk::is_set(stale_sids_count.yfilter)
	|| ydk::is_set(maximum_sids_count.yfilter)
	|| (sids_out_of_resource_summary !=  nullptr && sids_out_of_resource_summary->has_operation());
}

std::string Srv6::Standby::Manager::SidMgrSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::SidMgrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-mgr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::SidMgrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locators_count.is_set || is_set(locators_count.yfilter)) leaf_name_data.push_back(locators_count.get_name_leafdata());
    if (oper_locators_count.is_set || is_set(oper_locators_count.yfilter)) leaf_name_data.push_back(oper_locators_count.get_name_leafdata());
    if (sids_count.is_set || is_set(sids_count.yfilter)) leaf_name_data.push_back(sids_count.get_name_leafdata());
    if (stale_sids_count.is_set || is_set(stale_sids_count.yfilter)) leaf_name_data.push_back(stale_sids_count.get_name_leafdata());
    if (maximum_sids_count.is_set || is_set(maximum_sids_count.yfilter)) leaf_name_data.push_back(maximum_sids_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::SidMgrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sids-out-of-resource-summary")
    {
        if(sids_out_of_resource_summary == nullptr)
        {
            sids_out_of_resource_summary = std::make_shared<Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary>();
        }
        return sids_out_of_resource_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::SidMgrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sids_out_of_resource_summary != nullptr)
    {
        _children["sids-out-of-resource-summary"] = sids_out_of_resource_summary;
    }

    return _children;
}

void Srv6::Standby::Manager::SidMgrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locators-count")
    {
        locators_count = value;
        locators_count.value_namespace = name_space;
        locators_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-locators-count")
    {
        oper_locators_count = value;
        oper_locators_count.value_namespace = name_space;
        oper_locators_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sids-count")
    {
        sids_count = value;
        sids_count.value_namespace = name_space;
        sids_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-sids-count")
    {
        stale_sids_count = value;
        stale_sids_count.value_namespace = name_space;
        stale_sids_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-sids-count")
    {
        maximum_sids_count = value;
        maximum_sids_count.value_namespace = name_space;
        maximum_sids_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::SidMgrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locators-count")
    {
        locators_count.yfilter = yfilter;
    }
    if(value_path == "oper-locators-count")
    {
        oper_locators_count.yfilter = yfilter;
    }
    if(value_path == "sids-count")
    {
        sids_count.yfilter = yfilter;
    }
    if(value_path == "stale-sids-count")
    {
        stale_sids_count.yfilter = yfilter;
    }
    if(value_path == "maximum-sids-count")
    {
        maximum_sids_count.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::SidMgrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sids-out-of-resource-summary" || name == "locators-count" || name == "oper-locators-count" || name == "sids-count" || name == "stale-sids-count" || name == "maximum-sids-count")
        return true;
    return false;
}

Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::SidsOutOfResourceSummary()
    :
    out_of_resources_state{YType::enumeration, "out-of-resources-state"},
    oor_yellow_free_sid_threshold{YType::uint32, "oor-yellow-free-sid-threshold"},
    oor_green_free_sid_threshold{YType::uint32, "oor-green-free-sid-threshold"},
    oor_green_count{YType::uint32, "oor-green-count"},
    oor_yellow_count{YType::uint32, "oor-yellow-count"},
    oor_red_count{YType::uint32, "oor-red-count"}
{

    yang_name = "sids-out-of-resource-summary"; yang_parent_name = "sid-mgr-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::~SidsOutOfResourceSummary()
{
}

bool Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_data() const
{
    if (is_presence_container) return true;
    return out_of_resources_state.is_set
	|| oor_yellow_free_sid_threshold.is_set
	|| oor_green_free_sid_threshold.is_set
	|| oor_green_count.is_set
	|| oor_yellow_count.is_set
	|| oor_red_count.is_set;
}

bool Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_of_resources_state.yfilter)
	|| ydk::is_set(oor_yellow_free_sid_threshold.yfilter)
	|| ydk::is_set(oor_green_free_sid_threshold.yfilter)
	|| ydk::is_set(oor_green_count.yfilter)
	|| ydk::is_set(oor_yellow_count.yfilter)
	|| ydk::is_set(oor_red_count.yfilter);
}

std::string Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/sid-mgr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sids-out-of-resource-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_resources_state.is_set || is_set(out_of_resources_state.yfilter)) leaf_name_data.push_back(out_of_resources_state.get_name_leafdata());
    if (oor_yellow_free_sid_threshold.is_set || is_set(oor_yellow_free_sid_threshold.yfilter)) leaf_name_data.push_back(oor_yellow_free_sid_threshold.get_name_leafdata());
    if (oor_green_free_sid_threshold.is_set || is_set(oor_green_free_sid_threshold.yfilter)) leaf_name_data.push_back(oor_green_free_sid_threshold.get_name_leafdata());
    if (oor_green_count.is_set || is_set(oor_green_count.yfilter)) leaf_name_data.push_back(oor_green_count.get_name_leafdata());
    if (oor_yellow_count.is_set || is_set(oor_yellow_count.yfilter)) leaf_name_data.push_back(oor_yellow_count.get_name_leafdata());
    if (oor_red_count.is_set || is_set(oor_red_count.yfilter)) leaf_name_data.push_back(oor_red_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state = value;
        out_of_resources_state.value_namespace = name_space;
        out_of_resources_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-yellow-free-sid-threshold")
    {
        oor_yellow_free_sid_threshold = value;
        oor_yellow_free_sid_threshold.value_namespace = name_space;
        oor_yellow_free_sid_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-green-free-sid-threshold")
    {
        oor_green_free_sid_threshold = value;
        oor_green_free_sid_threshold.value_namespace = name_space;
        oor_green_free_sid_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-green-count")
    {
        oor_green_count = value;
        oor_green_count.value_namespace = name_space;
        oor_green_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-yellow-count")
    {
        oor_yellow_count = value;
        oor_yellow_count.value_namespace = name_space;
        oor_yellow_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-red-count")
    {
        oor_red_count = value;
        oor_red_count.value_namespace = name_space;
        oor_red_count.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state.yfilter = yfilter;
    }
    if(value_path == "oor-yellow-free-sid-threshold")
    {
        oor_yellow_free_sid_threshold.yfilter = yfilter;
    }
    if(value_path == "oor-green-free-sid-threshold")
    {
        oor_green_free_sid_threshold.yfilter = yfilter;
    }
    if(value_path == "oor-green-count")
    {
        oor_green_count.yfilter = yfilter;
    }
    if(value_path == "oor-yellow-count")
    {
        oor_yellow_count.yfilter = yfilter;
    }
    if(value_path == "oor-red-count")
    {
        oor_red_count.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-of-resources-state" || name == "oor-yellow-free-sid-threshold" || name == "oor-green-free-sid-threshold" || name == "oor-green-count" || name == "oor-yellow-count" || name == "oor-red-count")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::PlatformCapabilities()
    :
    max_sid{YType::uint32, "max-sid"},
    sid_holdtime_mins{YType::uint32, "sid-holdtime-mins"}
        ,
    support(std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support>())
{
    support->parent = this;

    yang_name = "platform-capabilities"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::~PlatformCapabilities()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::has_data() const
{
    if (is_presence_container) return true;
    return max_sid.is_set
	|| sid_holdtime_mins.is_set
	|| (support !=  nullptr && support->has_data());
}

bool Srv6::Standby::Manager::PlatformCapabilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sid.yfilter)
	|| ydk::is_set(sid_holdtime_mins.yfilter)
	|| (support !=  nullptr && support->has_operation());
}

std::string Srv6::Standby::Manager::PlatformCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sid.is_set || is_set(max_sid.yfilter)) leaf_name_data.push_back(max_sid.get_name_leafdata());
    if (sid_holdtime_mins.is_set || is_set(sid_holdtime_mins.yfilter)) leaf_name_data.push_back(sid_holdtime_mins.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "support")
    {
        if(support == nullptr)
        {
            support = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support>();
        }
        return support;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(support != nullptr)
    {
        _children["support"] = support;
    }

    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sid")
    {
        max_sid = value;
        max_sid.value_namespace = name_space;
        max_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-holdtime-mins")
    {
        sid_holdtime_mins = value;
        sid_holdtime_mins.value_namespace = name_space;
        sid_holdtime_mins.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sid")
    {
        max_sid.yfilter = yfilter;
    }
    if(value_path == "sid-holdtime-mins")
    {
        sid_holdtime_mins.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "support" || name == "max-sid" || name == "sid-holdtime-mins")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::Support()
    :
    srv6{YType::boolean, "srv6"},
    tilfa{YType::boolean, "tilfa"},
    microloop_avoidance{YType::boolean, "microloop-avoidance"}
        ,
    signaled_parameters(std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters>())
    , end_func(this, {})
    , transit_func(this, {})
    , security_rule(this, {})
    , counter(this, {})
{
    signaled_parameters->parent = this;

    yang_name = "support"; yang_parent_name = "platform-capabilities"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::~Support()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<end_func.len(); index++)
    {
        if(end_func[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transit_func.len(); index++)
    {
        if(transit_func[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security_rule.len(); index++)
    {
        if(security_rule[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<counter.len(); index++)
    {
        if(counter[index]->has_data())
            return true;
    }
    return srv6.is_set
	|| tilfa.is_set
	|| microloop_avoidance.is_set
	|| (signaled_parameters !=  nullptr && signaled_parameters->has_data());
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::has_operation() const
{
    for (std::size_t index=0; index<end_func.len(); index++)
    {
        if(end_func[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transit_func.len(); index++)
    {
        if(transit_func[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security_rule.len(); index++)
    {
        if(security_rule[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<counter.len(); index++)
    {
        if(counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srv6.yfilter)
	|| ydk::is_set(tilfa.yfilter)
	|| ydk::is_set(microloop_avoidance.yfilter)
	|| (signaled_parameters !=  nullptr && signaled_parameters->has_operation());
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "support";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6.is_set || is_set(srv6.yfilter)) leaf_name_data.push_back(srv6.get_name_leafdata());
    if (tilfa.is_set || is_set(tilfa.yfilter)) leaf_name_data.push_back(tilfa.get_name_leafdata());
    if (microloop_avoidance.is_set || is_set(microloop_avoidance.yfilter)) leaf_name_data.push_back(microloop_avoidance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaled-parameters")
    {
        if(signaled_parameters == nullptr)
        {
            signaled_parameters = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters>();
        }
        return signaled_parameters;
    }

    if(child_yang_name == "end-func")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc>();
        ent_->parent = this;
        end_func.append(ent_);
        return ent_;
    }

    if(child_yang_name == "transit-func")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc>();
        ent_->parent = this;
        transit_func.append(ent_);
        return ent_;
    }

    if(child_yang_name == "security-rule")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule>();
        ent_->parent = this;
        security_rule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "counter")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Manager::PlatformCapabilities::Support::Counter>();
        ent_->parent = this;
        counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signaled_parameters != nullptr)
    {
        _children["signaled-parameters"] = signaled_parameters;
    }

    count_ = 0;
    for (auto ent_ : end_func.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : transit_func.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : security_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srv6")
    {
        srv6 = value;
        srv6.value_namespace = name_space;
        srv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa")
    {
        tilfa = value;
        tilfa.value_namespace = name_space;
        tilfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-avoidance")
    {
        microloop_avoidance = value;
        microloop_avoidance.value_namespace = name_space;
        microloop_avoidance.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srv6")
    {
        srv6.yfilter = yfilter;
    }
    if(value_path == "tilfa")
    {
        tilfa.yfilter = yfilter;
    }
    if(value_path == "microloop-avoidance")
    {
        microloop_avoidance.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaled-parameters" || name == "end-func" || name == "transit-func" || name == "security-rule" || name == "counter" || name == "srv6" || name == "tilfa" || name == "microloop-avoidance")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::SignaledParameters()
    :
    max_sl{YType::uint8, "max-sl"},
    max_end_pop_srh{YType::uint8, "max-end-pop-srh"},
    max_t_insert{YType::uint8, "max-t-insert"},
    max_t_encap{YType::uint8, "max-t-encap"},
    max_end_d{YType::uint8, "max-end-d"}
{

    yang_name = "signaled-parameters"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::~SignaledParameters()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::has_data() const
{
    if (is_presence_container) return true;
    return max_sl.is_set
	|| max_end_pop_srh.is_set
	|| max_t_insert.is_set
	|| max_t_encap.is_set
	|| max_end_d.is_set;
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sl.yfilter)
	|| ydk::is_set(max_end_pop_srh.yfilter)
	|| ydk::is_set(max_t_insert.yfilter)
	|| ydk::is_set(max_t_encap.yfilter)
	|| ydk::is_set(max_end_d.yfilter);
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaled-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sl.is_set || is_set(max_sl.yfilter)) leaf_name_data.push_back(max_sl.get_name_leafdata());
    if (max_end_pop_srh.is_set || is_set(max_end_pop_srh.yfilter)) leaf_name_data.push_back(max_end_pop_srh.get_name_leafdata());
    if (max_t_insert.is_set || is_set(max_t_insert.yfilter)) leaf_name_data.push_back(max_t_insert.get_name_leafdata());
    if (max_t_encap.is_set || is_set(max_t_encap.yfilter)) leaf_name_data.push_back(max_t_encap.get_name_leafdata());
    if (max_end_d.is_set || is_set(max_end_d.yfilter)) leaf_name_data.push_back(max_end_d.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sl")
    {
        max_sl = value;
        max_sl.value_namespace = name_space;
        max_sl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-end-pop-srh")
    {
        max_end_pop_srh = value;
        max_end_pop_srh.value_namespace = name_space;
        max_end_pop_srh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-t-insert")
    {
        max_t_insert = value;
        max_t_insert.value_namespace = name_space;
        max_t_insert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-t-encap")
    {
        max_t_encap = value;
        max_t_encap.value_namespace = name_space;
        max_t_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-end-d")
    {
        max_end_d = value;
        max_end_d.value_namespace = name_space;
        max_end_d.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sl")
    {
        max_sl.yfilter = yfilter;
    }
    if(value_path == "max-end-pop-srh")
    {
        max_end_pop_srh.yfilter = yfilter;
    }
    if(value_path == "max-t-insert")
    {
        max_t_insert.yfilter = yfilter;
    }
    if(value_path == "max-t-encap")
    {
        max_t_encap.yfilter = yfilter;
    }
    if(value_path == "max-end-d")
    {
        max_end_d.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-sl" || name == "max-end-pop-srh" || name == "max-t-insert" || name == "max-t-encap" || name == "max-end-d")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::EndFunc()
    :
    string{YType::str, "string"}
{

    yang_name = "end-func"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::~EndFunc()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-func";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::TransitFunc()
    :
    string{YType::str, "string"}
{

    yang_name = "transit-func"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::~TransitFunc()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit-func";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::SecurityRule()
    :
    string{YType::str, "string"}
{

    yang_name = "security-rule"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::~SecurityRule()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-rule";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::Counter()
    :
    string{YType::str, "string"}
{

    yang_name = "counter"; yang_parent_name = "support"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::~Counter()
{
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/manager/platform-capabilities/support/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Srv6::Standby::Manager::PlatformCapabilities::Support::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Srv6::Standby::Locators::Locators()
    :
    locator(this, {"name"})
{

    yang_name = "locators"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Locators::~Locators()
{
}

bool Srv6::Standby::Locators::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Standby::Locators::has_operation() const
{
    for (std::size_t index=0; index<locator.len(); index++)
    {
        if(locator[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Standby::Locators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Locators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Locators::Locator>();
        ent_->parent = this;
        locator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::Locators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::Locators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::Locators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Locator()
    :
    name{YType::str, "name"}
        ,
    info(std::make_shared<Srv6::Standby::Locators::Locator::Info>())
    , sids(std::make_shared<Srv6::Standby::Locators::Locator::Sids>())
{
    info->parent = this;
    sids->parent = this;

    yang_name = "locator"; yang_parent_name = "locators"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::Locators::Locator::~Locator()
{
}

bool Srv6::Standby::Locators::Locator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (info !=  nullptr && info->has_data())
	|| (sids !=  nullptr && sids->has_data());
}

bool Srv6::Standby::Locators::Locator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (sids !=  nullptr && sids->has_operation());
}

std::string Srv6::Standby::Locators::Locator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/locators/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::Locators::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Srv6::Standby::Locators::Locator::Info>();
        }
        return info;
    }

    if(child_yang_name == "sids")
    {
        if(sids == nullptr)
        {
            sids = std::make_shared<Srv6::Standby::Locators::Locator::Sids>();
        }
        return sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(sids != nullptr)
    {
        _children["sids"] = sids;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "sids" || name == "name")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Info::Info()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    prefix{YType::str, "prefix"},
    is_operational{YType::boolean, "is-operational"},
    is_default{YType::boolean, "is-default"},
    out_of_resources_state{YType::enumeration, "out-of-resources-state"}
        ,
    interface(std::make_shared<Srv6::Standby::Locators::Locator::Info::Interface>())
    , create_timestamp(std::make_shared<Srv6::Standby::Locators::Locator::Info::CreateTimestamp>())
{
    interface->parent = this;
    create_timestamp->parent = this;

    yang_name = "info"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Info::~Info()
{
}

bool Srv6::Standby::Locators::Locator::Info::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| prefix.is_set
	|| is_operational.is_set
	|| is_default.is_set
	|| out_of_resources_state.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Standby::Locators::Locator::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(out_of_resources_state.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Standby::Locators::Locator::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (out_of_resources_state.is_set || is_set(out_of_resources_state.yfilter)) leaf_name_data.push_back(out_of_resources_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Srv6::Standby::Locators::Locator::Info::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Standby::Locators::Locator::Info::CreateTimestamp>();
        }
        return create_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state = value;
        out_of_resources_state.value_namespace = name_space;
        out_of_resources_state.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "out-of-resources-state")
    {
        out_of_resources_state.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "create-timestamp" || name == "name" || name == "id" || name == "prefix" || name == "is-operational" || name == "is-default" || name == "out-of-resources-state")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Info::Interface::Interface()
    :
    name{YType::str, "name"},
    if_handle{YType::str, "if-handle"},
    programmed_prefix{YType::str, "programmed-prefix"}
{

    yang_name = "interface"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Info::Interface::~Interface()
{
}

bool Srv6::Standby::Locators::Locator::Info::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| if_handle.is_set
	|| programmed_prefix.is_set;
}

bool Srv6::Standby::Locators::Locator::Info::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(programmed_prefix.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Info::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Info::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (programmed_prefix.is_set || is_set(programmed_prefix.yfilter)) leaf_name_data.push_back(programmed_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Info::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Info::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Info::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-prefix")
    {
        programmed_prefix = value;
        programmed_prefix.value_namespace = name_space;
        programmed_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Info::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "programmed-prefix")
    {
        programmed_prefix.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Info::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "if-handle" || name == "programmed-prefix")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Info::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Info::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Standby::Locators::Locator::Info::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Standby::Locators::Locator::Info::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Info::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Info::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Info::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Info::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Info::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Info::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Info::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sids()
    :
    sid(this, {"address"})
{

    yang_name = "sids"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::~Sids()
{
}

bool Srv6::Standby::Locators::Locator::Sids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Standby::Locators::Locator::Sids::has_operation() const
{
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid>();
        ent_->parent = this;
        sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::Locators::Locator::Sids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::Locators::Locator::Sids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::Sid()
    :
    address{YType::str, "address"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "sid"; yang_parent_name = "sids"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::~Sid()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return address.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "address" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::~SidContext()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::~Key()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::~E()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::~X()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Standby::Locators::Locator::Sids::Sid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::Locators::Locator::Sids::Sid::Owner::~Owner()
{
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Standby::Locators::Locator::Sids::Sid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::Locators::Locator::Sids::Sid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::Locators::Locator::Sids::Sid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::Locators::Locator::Sids::Sid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::Locators::Locator::Sids::Sid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::Locators::Locator::Sids::Sid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Standby::Locators::Locator::Sids::Sid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSids()
    :
    locator_all_sid(this, {"locator_name", "sid_opcode"})
{

    yang_name = "locator-all-sids"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::LocatorAllSids::~LocatorAllSids()
{
}

bool Srv6::Standby::LocatorAllSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_all_sid.len(); index++)
    {
        if(locator_all_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Standby::LocatorAllSids::has_operation() const
{
    for (std::size_t index=0; index<locator_all_sid.len(); index++)
    {
        if(locator_all_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Standby::LocatorAllSids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::LocatorAllSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-sid")
    {
        auto ent_ = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid>();
        ent_->parent = this;
        locator_all_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator_all_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::LocatorAllSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::LocatorAllSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::LocatorAllSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-sid")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::LocatorAllSid()
    :
    locator_name{YType::str, "locator-name"},
    sid_opcode{YType::uint32, "sid-opcode"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "locator-all-sid"; yang_parent_name = "locator-all-sids"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::~LocatorAllSid()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return locator_name.is_set
	|| sid_opcode.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(sid_opcode.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/locator-all-sids/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-sid";
    ADD_KEY_TOKEN(locator_name, "locator-name");
    ADD_KEY_TOKEN(sid_opcode, "sid-opcode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (sid_opcode.is_set || is_set(sid_opcode.yfilter)) leaf_name_data.push_back(sid_opcode.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode = value;
        sid_opcode.value_namespace = name_space;
        sid_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "locator-name" || name == "sid-opcode" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::~SidContext()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::~Key()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::~E()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::~X()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "locator-all-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::~Owner()
{
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSids()
    :
    locator_all_active_sid(this, {"locator_name", "sid_opcode"})
{

    yang_name = "locator-all-active-sids"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::LocatorAllActiveSids::~LocatorAllActiveSids()
{
}

bool Srv6::Standby::LocatorAllActiveSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_all_active_sid.len(); index++)
    {
        if(locator_all_active_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Srv6::Standby::LocatorAllActiveSids::has_operation() const
{
    for (std::size_t index=0; index<locator_all_active_sid.len(); index++)
    {
        if(locator_all_active_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::LocatorAllActiveSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-active-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-all-active-sid")
    {
        auto ent_ = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid>();
        ent_->parent = this;
        locator_all_active_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locator_all_active_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srv6::Standby::LocatorAllActiveSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srv6::Standby::LocatorAllActiveSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-all-active-sid")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::LocatorAllActiveSid()
    :
    locator_name{YType::str, "locator-name"},
    sid_opcode{YType::uint32, "sid-opcode"},
    sid{YType::str, "sid"},
    allocation_type{YType::enumeration, "allocation-type"},
    function_type{YType::enumeration, "function-type"},
    state{YType::enumeration, "state"},
    has_forwarding{YType::boolean, "has-forwarding"},
    locator{YType::str, "locator"}
        ,
    sid_context(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext>())
    , create_timestamp(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp>())
    , owner(this, {})
{
    sid_context->parent = this;
    create_timestamp->parent = this;

    yang_name = "locator-all-active-sid"; yang_parent_name = "locator-all-active-sids"; is_top_level_class = false; has_list_ancestor = false; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::~LocatorAllActiveSid()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_data())
            return true;
    }
    return locator_name.is_set
	|| sid_opcode.is_set
	|| sid.is_set
	|| allocation_type.is_set
	|| function_type.is_set
	|| state.is_set
	|| has_forwarding.is_set
	|| locator.is_set
	|| (sid_context !=  nullptr && sid_context->has_data())
	|| (create_timestamp !=  nullptr && create_timestamp->has_data());
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::has_operation() const
{
    for (std::size_t index=0; index<owner.len(); index++)
    {
        if(owner[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(locator_name.yfilter)
	|| ydk::is_set(sid_opcode.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(function_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(has_forwarding.yfilter)
	|| ydk::is_set(locator.yfilter)
	|| (sid_context !=  nullptr && sid_context->has_operation())
	|| (create_timestamp !=  nullptr && create_timestamp->has_operation());
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-srv6-oper:srv6/standby/locator-all-active-sids/" << get_segment_path();
    return path_buffer.str();
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-all-active-sid";
    ADD_KEY_TOKEN(locator_name, "locator-name");
    ADD_KEY_TOKEN(sid_opcode, "sid-opcode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());
    if (sid_opcode.is_set || is_set(sid_opcode.yfilter)) leaf_name_data.push_back(sid_opcode.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (function_type.is_set || is_set(function_type.yfilter)) leaf_name_data.push_back(function_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (has_forwarding.is_set || is_set(has_forwarding.yfilter)) leaf_name_data.push_back(has_forwarding.get_name_leafdata());
    if (locator.is_set || is_set(locator.yfilter)) leaf_name_data.push_back(locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-context")
    {
        if(sid_context == nullptr)
        {
            sid_context = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext>();
        }
        return sid_context;
    }

    if(child_yang_name == "create-timestamp")
    {
        if(create_timestamp == nullptr)
        {
            create_timestamp = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp>();
        }
        return create_timestamp;
    }

    if(child_yang_name == "owner")
    {
        auto ent_ = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner>();
        ent_->parent = this;
        owner.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_context != nullptr)
    {
        _children["sid-context"] = sid_context;
    }

    if(create_timestamp != nullptr)
    {
        _children["create-timestamp"] = create_timestamp;
    }

    count_ = 0;
    for (auto ent_ : owner.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode = value;
        sid_opcode.value_namespace = name_space;
        sid_opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "function-type")
    {
        function_type = value;
        function_type.value_namespace = name_space;
        function_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding = value;
        has_forwarding.value_namespace = name_space;
        has_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator")
    {
        locator = value;
        locator.value_namespace = name_space;
        locator.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
    if(value_path == "sid-opcode")
    {
        sid_opcode.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "function-type")
    {
        function_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "has-forwarding")
    {
        has_forwarding.yfilter = yfilter;
    }
    if(value_path == "locator")
    {
        locator.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-context" || name == "create-timestamp" || name == "owner" || name == "locator-name" || name == "sid-opcode" || name == "sid" || name == "allocation-type" || name == "function-type" || name == "state" || name == "has-forwarding" || name == "locator")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::SidContext()
    :
    application_data{YType::str, "application-data"}
        ,
    key(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key>())
{
    key->parent = this;

    yang_name = "sid-context"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::~SidContext()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_data() const
{
    if (is_presence_container) return true;
    return application_data.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_data.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_data.is_set || is_set(application_data.yfilter)) leaf_name_data.push_back(application_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-data")
    {
        application_data = value;
        application_data.value_namespace = name_space;
        application_data.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-data")
    {
        application_data.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "application-data")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Key()
    :
    sid_context_type{YType::enumeration, "sid-context-type"}
        ,
    e(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E>())
    , x(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X>())
    , dx4(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4>())
    , dt4(std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4>())
{
    e->parent = this;
    x->parent = this;
    dx4->parent = this;
    dt4->parent = this;

    yang_name = "key"; yang_parent_name = "sid-context"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::~Key()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_data() const
{
    if (is_presence_container) return true;
    return sid_context_type.is_set
	|| (e !=  nullptr && e->has_data())
	|| (x !=  nullptr && x->has_data())
	|| (dx4 !=  nullptr && dx4->has_data())
	|| (dt4 !=  nullptr && dt4->has_data());
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_context_type.yfilter)
	|| (e !=  nullptr && e->has_operation())
	|| (x !=  nullptr && x->has_operation())
	|| (dx4 !=  nullptr && dx4->has_operation())
	|| (dt4 !=  nullptr && dt4->has_operation());
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_context_type.is_set || is_set(sid_context_type.yfilter)) leaf_name_data.push_back(sid_context_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "e")
    {
        if(e == nullptr)
        {
            e = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E>();
        }
        return e;
    }

    if(child_yang_name == "x")
    {
        if(x == nullptr)
        {
            x = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X>();
        }
        return x;
    }

    if(child_yang_name == "dx4")
    {
        if(dx4 == nullptr)
        {
            dx4 = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4>();
        }
        return dx4;
    }

    if(child_yang_name == "dt4")
    {
        if(dt4 == nullptr)
        {
            dt4 = std::make_shared<Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4>();
        }
        return dt4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(e != nullptr)
    {
        _children["e"] = e;
    }

    if(x != nullptr)
    {
        _children["x"] = x;
    }

    if(dx4 != nullptr)
    {
        _children["dx4"] = dx4;
    }

    if(dt4 != nullptr)
    {
        _children["dt4"] = dt4;
    }

    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type = value;
        sid_context_type.value_namespace = name_space;
        sid_context_type.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-context-type")
    {
        sid_context_type.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e" || name == "x" || name == "dx4" || name == "dt4" || name == "sid-context-type")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::E()
    :
    table_id{YType::uint32, "table-id"},
    opaque_id{YType::uint8, "opaque-id"}
{

    yang_name = "e"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::~E()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| opaque_id.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(opaque_id.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "e";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "opaque-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::X()
    :
    is_protected{YType::boolean, "is-protected"},
    opaque_id{YType::uint8, "opaque-id"},
    interface{YType::str, "interface"},
    nexthop_address{YType::str, "nexthop-address"}
{

    yang_name = "x"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::~X()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_data() const
{
    if (is_presence_container) return true;
    return is_protected.is_set
	|| opaque_id.is_set
	|| interface.is_set
	|| nexthop_address.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protected.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(nexthop_address.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protected.is_set || is_set(is_protected.yfilter)) leaf_name_data.push_back(is_protected.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (nexthop_address.is_set || is_set(nexthop_address.yfilter)) leaf_name_data.push_back(nexthop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protected")
    {
        is_protected = value;
        is_protected.value_namespace = name_space;
        is_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address = value;
        nexthop_address.value_namespace = name_space;
        nexthop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protected")
    {
        is_protected.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "nexthop-address")
    {
        nexthop_address.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protected" || name == "opaque-id" || name == "interface" || name == "nexthop-address")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::Dx4()
    :
    table_id{YType::uint32, "table-id"},
    next_hop_set_id{YType::uint32, "next-hop-set-id"}
{

    yang_name = "dx4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::~Dx4()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set
	|| next_hop_set_id.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(next_hop_set_id.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dx4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (next_hop_set_id.is_set || is_set(next_hop_set_id.yfilter)) leaf_name_data.push_back(next_hop_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id = value;
        next_hop_set_id.value_namespace = name_space;
        next_hop_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-set-id")
    {
        next_hop_set_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id" || name == "next-hop-set-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::Dt4()
    :
    table_id{YType::uint32, "table-id"}
{

    yang_name = "dt4"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::~Dt4()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_data() const
{
    if (is_presence_container) return true;
    return table_id.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_id.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dt4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-id")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::CreateTimestamp()
    :
    time_in_nano_seconds{YType::uint64, "time-in-nano-seconds"},
    age_in_nano_seconds{YType::uint64, "age-in-nano-seconds"}
{

    yang_name = "create-timestamp"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::~CreateTimestamp()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return time_in_nano_seconds.is_set
	|| age_in_nano_seconds.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter)
	|| ydk::is_set(age_in_nano_seconds.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (age_in_nano_seconds.is_set || is_set(age_in_nano_seconds.yfilter)) leaf_name_data.push_back(age_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds = value;
        age_in_nano_seconds.value_namespace = name_space;
        age_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "age-in-nano-seconds")
    {
        age_in_nano_seconds.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-nano-seconds" || name == "age-in-nano-seconds")
        return true;
    return false;
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::Owner()
    :
    owner{YType::str, "owner"}
{

    yang_name = "owner"; yang_parent_name = "locator-all-active-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::~Owner()
{
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set;
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
}

void Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
}

bool Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner")
        return true;
    return false;
}

const Enum::YLeaf SidState::unknown {0, "unknown"};
const Enum::YLeaf SidState::in_use {1, "in-use"};
const Enum::YLeaf SidState::pending {2, "pending"};
const Enum::YLeaf SidState::stale {3, "stale"};

const Enum::YLeaf Srv6EndFunction::unknown {0, "unknown"};
const Enum::YLeaf Srv6EndFunction::end {1, "end"};
const Enum::YLeaf Srv6EndFunction::end_with_psp {2, "end-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_with_usp {3, "end-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_with_psp_usp {4, "end-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_x {5, "end-x"};
const Enum::YLeaf Srv6EndFunction::end_x_with_psp {6, "end-x-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_x_with_usp {7, "end-x-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_x_with_psp_usp {8, "end-x-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_tbl {9, "end-tbl"};
const Enum::YLeaf Srv6EndFunction::end_tbl_with_psp {10, "end-tbl-with-psp"};
const Enum::YLeaf Srv6EndFunction::end_tbl_with_usp {11, "end-tbl-with-usp"};
const Enum::YLeaf Srv6EndFunction::end_tbl_with_psp_usp {12, "end-tbl-with-psp-usp"};
const Enum::YLeaf Srv6EndFunction::end_b6 {13, "end-b6"};
const Enum::YLeaf Srv6EndFunction::end_b6_encaps {14, "end-b6-encaps"};
const Enum::YLeaf Srv6EndFunction::end_bm {15, "end-bm"};
const Enum::YLeaf Srv6EndFunction::end_dx6 {16, "end-dx6"};
const Enum::YLeaf Srv6EndFunction::end_dx4 {17, "end-dx4"};
const Enum::YLeaf Srv6EndFunction::end_dt6 {18, "end-dt6"};
const Enum::YLeaf Srv6EndFunction::end_dt4 {19, "end-dt4"};
const Enum::YLeaf Srv6EndFunction::end_dt46 {20, "end-dt46"};
const Enum::YLeaf Srv6EndFunction::end_dx2 {21, "end-dx2"};
const Enum::YLeaf Srv6EndFunction::end_dx2v {22, "end-dx2v"};
const Enum::YLeaf Srv6EndFunction::end_dx2u {23, "end-dx2u"};
const Enum::YLeaf Srv6EndFunction::end_dx2m {24, "end-dx2m"};
const Enum::YLeaf Srv6EndFunction::end_otp {25, "end-otp"};
const Enum::YLeaf Srv6EndFunction::end_s {26, "end-s"};

const Enum::YLeaf SidAllocation::unknown {0, "unknown"};
const Enum::YLeaf SidAllocation::dynamic {1, "dynamic"};
const Enum::YLeaf SidAllocation::explicit_ {2, "explicit"};

const Enum::YLeaf Srv6OutOfResourceState::oor_green {0, "oor-green"};
const Enum::YLeaf Srv6OutOfResourceState::oor_yellow {1, "oor-yellow"};
const Enum::YLeaf Srv6OutOfResourceState::oor_red {2, "oor-red"};


}
}

