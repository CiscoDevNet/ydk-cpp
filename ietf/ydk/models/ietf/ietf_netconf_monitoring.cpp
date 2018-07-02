
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_monitoring.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_netconf_monitoring {

SchemaFormat::SchemaFormat()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:schema-format")
{

}

SchemaFormat::~SchemaFormat()
{
}

Transport::Transport()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:transport")
{

}

Transport::~Transport()
{
}

GetSchema::GetSchema()
    :
    input(std::make_shared<GetSchema::Input>())
    , output(std::make_shared<GetSchema::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-schema"; yang_parent_name = "ietf-netconf-monitoring"; is_top_level_class = true; has_list_ancestor = false; 
}

GetSchema::~GetSchema()
{
}

bool GetSchema::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetSchema::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetSchema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:get-schema";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSchema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GetSchema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetSchema::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetSchema::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void GetSchema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetSchema::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GetSchema::clone_ptr() const
{
    return std::make_shared<GetSchema>();
}

std::string GetSchema::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string GetSchema::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function GetSchema::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetSchema::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool GetSchema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetSchema::Input::Input()
    :
    identifier{YType::str, "identifier"},
    version{YType::str, "version"},
    format{YType::identityref, "format"}
{

    yang_name = "input"; yang_parent_name = "get-schema"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSchema::Input::~Input()
{
}

bool GetSchema::Input::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| version.is_set
	|| format.is_set;
}

bool GetSchema::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string GetSchema::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSchema::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSchema::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GetSchema::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchema::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void GetSchema::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void GetSchema::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool GetSchema::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "version" || name == "format")
        return true;
    return false;
}

GetSchema::Output::Output()
    :
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "get-schema"; is_top_level_class = false; has_list_ancestor = false; 
}

GetSchema::Output::~Output()
{
}

bool GetSchema::Output::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool GetSchema::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string GetSchema::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    return path_buffer.str();
}

std::string GetSchema::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetSchema::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GetSchema::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchema::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void GetSchema::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void GetSchema::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool GetSchema::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

NetconfState::NetconfState()
    :
    capabilities(std::make_shared<NetconfState::Capabilities>())
    , datastores(std::make_shared<NetconfState::Datastores>())
    , schemas(std::make_shared<NetconfState::Schemas>())
    , sessions(std::make_shared<NetconfState::Sessions>())
    , statistics(std::make_shared<NetconfState::Statistics>())
{
    capabilities->parent = this;
    datastores->parent = this;
    schemas->parent = this;
    sessions->parent = this;
    statistics->parent = this;

    yang_name = "netconf-state"; yang_parent_name = "ietf-netconf-monitoring"; is_top_level_class = true; has_list_ancestor = false; 
}

NetconfState::~NetconfState()
{
}

bool NetconfState::has_data() const
{
    if (is_presence_container) return true;
    return (capabilities !=  nullptr && capabilities->has_data())
	|| (datastores !=  nullptr && datastores->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool NetconfState::has_operation() const
{
    return is_set(yfilter)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (datastores !=  nullptr && datastores->has_operation())
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetconfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<NetconfState::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "datastores")
    {
        if(datastores == nullptr)
        {
            datastores = std::make_shared<NetconfState::Datastores>();
        }
        return datastores;
    }

    if(child_yang_name == "schemas")
    {
        if(schemas == nullptr)
        {
            schemas = std::make_shared<NetconfState::Schemas>();
        }
        return schemas;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<NetconfState::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<NetconfState::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(datastores != nullptr)
    {
        children["datastores"] = datastores;
    }

    if(schemas != nullptr)
    {
        children["schemas"] = schemas;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void NetconfState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NetconfState::clone_ptr() const
{
    return std::make_shared<NetconfState>();
}

std::string NetconfState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string NetconfState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function NetconfState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetconfState::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool NetconfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "datastores" || name == "schemas" || name == "sessions" || name == "statistics")
        return true;
    return false;
}

NetconfState::Capabilities::Capabilities()
    :
    capability{YType::str, "capability"}
{

    yang_name = "capabilities"; yang_parent_name = "netconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Capabilities::~Capabilities()
{
}

bool NetconfState::Capabilities::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : capability.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetconfState::Capabilities::has_operation() const
{
    for (auto const & leaf : capability.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter);
}

std::string NetconfState::Capabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Capabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto capability_name_datas = capability.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), capability_name_datas.begin(), capability_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability.append(value);
    }
}

void NetconfState::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
}

bool NetconfState::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability")
        return true;
    return false;
}

NetconfState::Datastores::Datastores()
    :
    datastore(this, {"name"})
{

    yang_name = "datastores"; yang_parent_name = "netconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Datastores::~Datastores()
{
}

bool NetconfState::Datastores::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<datastore.len(); index++)
    {
        if(datastore[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Datastores::has_operation() const
{
    for (std::size_t index=0; index<datastore.len(); index++)
    {
        if(datastore[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Datastores::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Datastores::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastores";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Datastores::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Datastores::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datastore")
    {
        auto c = std::make_shared<NetconfState::Datastores::Datastore>();
        c->parent = this;
        datastore.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : datastore.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetconfState::Datastores::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Datastores::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Datastores::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datastore")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Datastore()
    :
    name{YType::enumeration, "name"}
        ,
    locks(nullptr) // presence node
{

    yang_name = "datastore"; yang_parent_name = "datastores"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Datastores::Datastore::~Datastore()
{
}

bool NetconfState::Datastores::Datastore::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (locks !=  nullptr && locks->has_data());
}

bool NetconfState::Datastores::Datastore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (locks !=  nullptr && locks->has_operation());
}

std::string NetconfState::Datastores::Datastore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/datastores/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Datastores::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Datastores::Datastore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locks")
    {
        if(locks == nullptr)
        {
            locks = std::make_shared<NetconfState::Datastores::Datastore::Locks>();
        }
        return locks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(locks != nullptr)
    {
        children["locks"] = locks;
    }

    return children;
}

void NetconfState::Datastores::Datastore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Datastores::Datastore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locks" || name == "name")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::Locks()
    :
    global_lock(std::make_shared<NetconfState::Datastores::Datastore::Locks::GlobalLock>())
    , partial_lock(this, {"lock_id"})
{
    global_lock->parent = this;

    yang_name = "locks"; yang_parent_name = "datastore"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

NetconfState::Datastores::Datastore::Locks::~Locks()
{
}

bool NetconfState::Datastores::Datastore::Locks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<partial_lock.len(); index++)
    {
        if(partial_lock[index]->has_data())
            return true;
    }
    return (global_lock !=  nullptr && global_lock->has_data());
}

bool NetconfState::Datastores::Datastore::Locks::has_operation() const
{
    for (std::size_t index=0; index<partial_lock.len(); index++)
    {
        if(partial_lock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global_lock !=  nullptr && global_lock->has_operation());
}

std::string NetconfState::Datastores::Datastore::Locks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Datastores::Datastore::Locks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-lock")
    {
        if(global_lock == nullptr)
        {
            global_lock = std::make_shared<NetconfState::Datastores::Datastore::Locks::GlobalLock>();
        }
        return global_lock;
    }

    if(child_yang_name == "partial-lock")
    {
        auto c = std::make_shared<NetconfState::Datastores::Datastore::Locks::PartialLock>();
        c->parent = this;
        partial_lock.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_lock != nullptr)
    {
        children["global-lock"] = global_lock;
    }

    count = 0;
    for (auto c : partial_lock.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetconfState::Datastores::Datastore::Locks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Datastores::Datastore::Locks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Datastores::Datastore::Locks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-lock" || name == "partial-lock")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::GlobalLock()
    :
    locked_by_session{YType::uint32, "locked-by-session"},
    locked_time{YType::str, "locked-time"}
{

    yang_name = "global-lock"; yang_parent_name = "locks"; is_top_level_class = false; has_list_ancestor = true; 
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::~GlobalLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_data() const
{
    if (is_presence_container) return true;
    return locked_by_session.is_set
	|| locked_time.is_set;
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locked_by_session.yfilter)
	|| ydk::is_set(locked_time.yfilter);
}

std::string NetconfState::Datastores::Datastore::Locks::GlobalLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-lock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Datastores::Datastore::Locks::GlobalLock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locked_by_session.is_set || is_set(locked_by_session.yfilter)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.yfilter)) leaf_name_data.push_back(locked_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Datastores::Datastore::Locks::GlobalLock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
        locked_by_session.value_namespace = name_space;
        locked_by_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
        locked_time.value_namespace = name_space;
        locked_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Datastores::Datastore::Locks::GlobalLock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session.yfilter = yfilter;
    }
    if(value_path == "locked-time")
    {
        locked_time.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locked-by-session" || name == "locked-time")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::PartialLock::PartialLock()
    :
    lock_id{YType::uint32, "lock-id"},
    locked_by_session{YType::uint32, "locked-by-session"},
    locked_time{YType::str, "locked-time"},
    select{YType::str, "select"},
    locked_node{YType::str, "locked-node"}
{

    yang_name = "partial-lock"; yang_parent_name = "locks"; is_top_level_class = false; has_list_ancestor = true; 
}

NetconfState::Datastores::Datastore::Locks::PartialLock::~PartialLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : select.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lock_id.is_set
	|| locked_by_session.is_set
	|| locked_time.is_set;
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_operation() const
{
    for (auto const & leaf : select.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lock_id.yfilter)
	|| ydk::is_set(locked_by_session.yfilter)
	|| ydk::is_set(locked_time.yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(locked_node.yfilter);
}

std::string NetconfState::Datastores::Datastore::Locks::PartialLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-lock";
    ADD_KEY_TOKEN(lock_id, "lock-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Datastores::Datastore::Locks::PartialLock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_id.is_set || is_set(lock_id.yfilter)) leaf_name_data.push_back(lock_id.get_name_leafdata());
    if (locked_by_session.is_set || is_set(locked_by_session.yfilter)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.yfilter)) leaf_name_data.push_back(locked_time.get_name_leafdata());

    auto select_name_datas = select.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), select_name_datas.begin(), select_name_datas.end());
    auto locked_node_name_datas = locked_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), locked_node_name_datas.begin(), locked_node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::PartialLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::PartialLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Datastores::Datastore::Locks::PartialLock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lock-id")
    {
        lock_id = value;
        lock_id.value_namespace = name_space;
        lock_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
        locked_by_session.value_namespace = name_space;
        locked_by_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
        locked_time.value_namespace = name_space;
        locked_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "select")
    {
        select.append(value);
    }
    if(value_path == "locked-node")
    {
        locked_node.append(value);
    }
}

void NetconfState::Datastores::Datastore::Locks::PartialLock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lock-id")
    {
        lock_id.yfilter = yfilter;
    }
    if(value_path == "locked-by-session")
    {
        locked_by_session.yfilter = yfilter;
    }
    if(value_path == "locked-time")
    {
        locked_time.yfilter = yfilter;
    }
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "locked-node")
    {
        locked_node.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lock-id" || name == "locked-by-session" || name == "locked-time" || name == "select" || name == "locked-node")
        return true;
    return false;
}

NetconfState::Schemas::Schemas()
    :
    schema(this, {"identifier", "version", "format"})
{

    yang_name = "schemas"; yang_parent_name = "netconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Schemas::~Schemas()
{
}

bool NetconfState::Schemas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<schema.len(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.len(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Schemas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Schemas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        auto c = std::make_shared<NetconfState::Schemas::Schema>();
        c->parent = this;
        schema.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : schema.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetconfState::Schemas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Schemas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Schemas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schema")
        return true;
    return false;
}

NetconfState::Schemas::Schema::Schema()
    :
    identifier{YType::str, "identifier"},
    version{YType::str, "version"},
    format{YType::identityref, "format"},
    namespace_{YType::str, "namespace"},
    location{YType::str, "location"}
{

    yang_name = "schema"; yang_parent_name = "schemas"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Schemas::Schema::~Schema()
{
}

bool NetconfState::Schemas::Schema::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return identifier.is_set
	|| version.is_set
	|| format.is_set
	|| namespace_.is_set;
}

bool NetconfState::Schemas::Schema::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string NetconfState::Schemas::Schema::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/schemas/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema";
    ADD_KEY_TOKEN(identifier, "identifier");
    ADD_KEY_TOKEN(version, "version");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Schemas::Schema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());

    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Schemas::Schema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location.append(value);
    }
}

void NetconfState::Schemas::Schema::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "namespace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool NetconfState::Schemas::Schema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "version" || name == "format" || name == "namespace" || name == "location")
        return true;
    return false;
}

NetconfState::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "netconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Sessions::~Sessions()
{
}

bool NetconfState::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<NetconfState::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NetconfState::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

NetconfState::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    transport{YType::identityref, "transport"},
    username{YType::str, "username"},
    source_host{YType::str, "source-host"},
    login_time{YType::str, "login-time"},
    in_rpcs{YType::uint32, "in-rpcs"},
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"},
    out_notifications{YType::uint32, "out-notifications"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Sessions::Session::~Session()
{
}

bool NetconfState::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| transport.is_set
	|| username.is_set
	|| source_host.is_set
	|| login_time.is_set
	|| in_rpcs.is_set
	|| in_bad_rpcs.is_set
	|| out_rpc_errors.is_set
	|| out_notifications.is_set;
}

bool NetconfState::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(login_time.yfilter)
	|| ydk::is_set(in_rpcs.yfilter)
	|| ydk::is_set(in_bad_rpcs.yfilter)
	|| ydk::is_set(out_rpc_errors.yfilter)
	|| ydk::is_set(out_notifications.yfilter);
}

std::string NetconfState::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.yfilter)) leaf_name_data.push_back(login_time.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.yfilter)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.yfilter)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.yfilter)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.yfilter)) leaf_name_data.push_back(out_notifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login-time")
    {
        login_time = value;
        login_time.value_namespace = name_space;
        login_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
        in_rpcs.value_namespace = name_space;
        in_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
        in_bad_rpcs.value_namespace = name_space;
        in_bad_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
        out_rpc_errors.value_namespace = name_space;
        out_rpc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
        out_notifications.value_namespace = name_space;
        out_notifications.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "login-time")
    {
        login_time.yfilter = yfilter;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs.yfilter = yfilter;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs.yfilter = yfilter;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors.yfilter = yfilter;
    }
    if(value_path == "out-notifications")
    {
        out_notifications.yfilter = yfilter;
    }
}

bool NetconfState::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "transport" || name == "username" || name == "source-host" || name == "login-time" || name == "in-rpcs" || name == "in-bad-rpcs" || name == "out-rpc-errors" || name == "out-notifications")
        return true;
    return false;
}

NetconfState::Statistics::Statistics()
    :
    netconf_start_time{YType::str, "netconf-start-time"},
    in_bad_hellos{YType::uint32, "in-bad-hellos"},
    in_sessions{YType::uint32, "in-sessions"},
    dropped_sessions{YType::uint32, "dropped-sessions"},
    in_rpcs{YType::uint32, "in-rpcs"},
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"},
    out_notifications{YType::uint32, "out-notifications"}
{

    yang_name = "statistics"; yang_parent_name = "netconf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

NetconfState::Statistics::~Statistics()
{
}

bool NetconfState::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return netconf_start_time.is_set
	|| in_bad_hellos.is_set
	|| in_sessions.is_set
	|| dropped_sessions.is_set
	|| in_rpcs.is_set
	|| in_bad_rpcs.is_set
	|| out_rpc_errors.is_set
	|| out_notifications.is_set;
}

bool NetconfState::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netconf_start_time.yfilter)
	|| ydk::is_set(in_bad_hellos.yfilter)
	|| ydk::is_set(in_sessions.yfilter)
	|| ydk::is_set(dropped_sessions.yfilter)
	|| ydk::is_set(in_rpcs.yfilter)
	|| ydk::is_set(in_bad_rpcs.yfilter)
	|| ydk::is_set(out_rpc_errors.yfilter)
	|| ydk::is_set(out_notifications.yfilter);
}

std::string NetconfState::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string NetconfState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetconfState::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netconf_start_time.is_set || is_set(netconf_start_time.yfilter)) leaf_name_data.push_back(netconf_start_time.get_name_leafdata());
    if (in_bad_hellos.is_set || is_set(in_bad_hellos.yfilter)) leaf_name_data.push_back(in_bad_hellos.get_name_leafdata());
    if (in_sessions.is_set || is_set(in_sessions.yfilter)) leaf_name_data.push_back(in_sessions.get_name_leafdata());
    if (dropped_sessions.is_set || is_set(dropped_sessions.yfilter)) leaf_name_data.push_back(dropped_sessions.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.yfilter)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.yfilter)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.yfilter)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.yfilter)) leaf_name_data.push_back(out_notifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NetconfState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NetconfState::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netconf-start-time")
    {
        netconf_start_time = value;
        netconf_start_time.value_namespace = name_space;
        netconf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos = value;
        in_bad_hellos.value_namespace = name_space;
        in_bad_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sessions")
    {
        in_sessions = value;
        in_sessions.value_namespace = name_space;
        in_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-sessions")
    {
        dropped_sessions = value;
        dropped_sessions.value_namespace = name_space;
        dropped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
        in_rpcs.value_namespace = name_space;
        in_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
        in_bad_rpcs.value_namespace = name_space;
        in_bad_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
        out_rpc_errors.value_namespace = name_space;
        out_rpc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
        out_notifications.value_namespace = name_space;
        out_notifications.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netconf-start-time")
    {
        netconf_start_time.yfilter = yfilter;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos.yfilter = yfilter;
    }
    if(value_path == "in-sessions")
    {
        in_sessions.yfilter = yfilter;
    }
    if(value_path == "dropped-sessions")
    {
        dropped_sessions.yfilter = yfilter;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs.yfilter = yfilter;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs.yfilter = yfilter;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors.yfilter = yfilter;
    }
    if(value_path == "out-notifications")
    {
        out_notifications.yfilter = yfilter;
    }
}

bool NetconfState::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-start-time" || name == "in-bad-hellos" || name == "in-sessions" || name == "dropped-sessions" || name == "in-rpcs" || name == "in-bad-rpcs" || name == "out-rpc-errors" || name == "out-notifications")
        return true;
    return false;
}

NetconfBeep::NetconfBeep()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-beep")
{

}

NetconfBeep::~NetconfBeep()
{
}

NetconfSsh::NetconfSsh()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-ssh")
{

}

NetconfSsh::~NetconfSsh()
{
}

Rnc::Rnc()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:rnc")
{

}

Rnc::~Rnc()
{
}

Yin::Yin()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:yin")
{

}

Yin::~Yin()
{
}

Rng::Rng()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:rng")
{

}

Rng::~Rng()
{
}

Xsd::Xsd()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:xsd")
{

}

Xsd::~Xsd()
{
}

NetconfSoapOverBeep::NetconfSoapOverBeep()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-soap-over-beep")
{

}

NetconfSoapOverBeep::~NetconfSoapOverBeep()
{
}

NetconfTls::NetconfTls()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-tls")
{

}

NetconfTls::~NetconfTls()
{
}

Yang::Yang()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:yang")
{

}

Yang::~Yang()
{
}

NetconfSoapOverHttps::NetconfSoapOverHttps()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-soap-over-https")
{

}

NetconfSoapOverHttps::~NetconfSoapOverHttps()
{
}

const Enum::YLeaf NetconfDatastoreType::running {0, "running"};
const Enum::YLeaf NetconfDatastoreType::candidate {1, "candidate"};
const Enum::YLeaf NetconfDatastoreType::startup {2, "startup"};

const Enum::YLeaf NetconfState::Schemas::Schema::Location::NETCONF {0, "NETCONF"};


}
}

