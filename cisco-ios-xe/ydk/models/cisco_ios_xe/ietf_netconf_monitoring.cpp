
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_monitoring.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ietf_netconf_monitoring {

Transport::Transport()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:transport")
{
}

Transport::~Transport()
{
}

SchemaFormat::SchemaFormat()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:schema-format")
{
}

SchemaFormat::~SchemaFormat()
{
}

NetconfState::NetconfState()
    :
    capabilities(std::make_shared<NetconfState::Capabilities>())
	,datastores(std::make_shared<NetconfState::Datastores>())
	,files(std::make_shared<NetconfState::Files>())
	,schemas(std::make_shared<NetconfState::Schemas>())
	,sessions(std::make_shared<NetconfState::Sessions>())
	,statistics(std::make_shared<NetconfState::Statistics>())
	,streams(std::make_shared<NetconfState::Streams>())
{
    capabilities->parent = this;

    datastores->parent = this;

    files->parent = this;

    schemas->parent = this;

    sessions->parent = this;

    statistics->parent = this;

    streams->parent = this;

    yang_name = "netconf-state"; yang_parent_name = "ietf-netconf-monitoring";
}

NetconfState::~NetconfState()
{
}

bool NetconfState::has_data() const
{
    return (capabilities !=  nullptr && capabilities->has_data())
	|| (datastores !=  nullptr && datastores->has_data())
	|| (files !=  nullptr && files->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (streams !=  nullptr && streams->has_data());
}

bool NetconfState::has_operation() const
{
    return is_set(yfilter)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (datastores !=  nullptr && datastores->has_operation())
	|| (files !=  nullptr && files->has_operation())
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (streams !=  nullptr && streams->has_operation());
}

std::string NetconfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state";

    return path_buffer.str();

}

const EntityPath NetconfState::get_entity_path(Entity* ancestor) const
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

    if(child_yang_name == "files")
    {
        if(files == nullptr)
        {
            files = std::make_shared<NetconfState::Files>();
        }
        return files;
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

    if(child_yang_name == "streams")
    {
        if(streams == nullptr)
        {
            streams = std::make_shared<NetconfState::Streams>();
        }
        return streams;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(datastores != nullptr)
    {
        children["datastores"] = datastores;
    }

    if(files != nullptr)
    {
        children["files"] = files;
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

    if(streams != nullptr)
    {
        children["streams"] = streams;
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
    return ydk_cisco_ios_xe_models_path;
}

std::string NetconfState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NetconfState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetconfState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NetconfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "datastores" || name == "files" || name == "schemas" || name == "sessions" || name == "statistics" || name == "streams")
        return true;
    return false;
}

NetconfState::Capabilities::Capabilities()
    :
    capability{YType::str, "capability"}
{
    yang_name = "capabilities"; yang_parent_name = "netconf-state";
}

NetconfState::Capabilities::~Capabilities()
{
}

bool NetconfState::Capabilities::has_data() const
{
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

std::string NetconfState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath NetconfState::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto capability_name_datas = capability.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), capability_name_datas.begin(), capability_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "datastores"; yang_parent_name = "netconf-state";
}

NetconfState::Datastores::~Datastores()
{
}

bool NetconfState::Datastores::has_data() const
{
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Datastores::has_operation() const
{
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Datastores::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastores";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datastore")
    {
        for(auto const & c : datastore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Datastores::Datastore>();
        c->parent = this;
        datastore.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : datastore)
    {
        children[c->get_segment_path()] = c;
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
    name{YType::enumeration, "name"},
    transaction_id{YType::str, "tailf-netconf-monitoring:transaction-id"}
    	,
    locks(nullptr) // presence node
{
    yang_name = "datastore"; yang_parent_name = "datastores";
}

NetconfState::Datastores::Datastore::~Datastore()
{
}

bool NetconfState::Datastores::Datastore::has_data() const
{
    return name.is_set
	|| transaction_id.is_set
	|| (locks !=  nullptr && locks->has_data());
}

bool NetconfState::Datastores::Datastore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (locks !=  nullptr && locks->has_operation());
}

std::string NetconfState::Datastores::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/datastores/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Datastores::Datastore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locks" || name == "name" || name == "transaction-id")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::Locks()
    :
    global_lock(std::make_shared<NetconfState::Datastores::Datastore::Locks::GlobalLock>())
	,transaction_lock(nullptr) // presence node
{
    global_lock->parent = this;

    yang_name = "locks"; yang_parent_name = "datastore";
}

NetconfState::Datastores::Datastore::Locks::~Locks()
{
}

bool NetconfState::Datastores::Datastore::Locks::has_data() const
{
    for (std::size_t index=0; index<partial_lock.size(); index++)
    {
        if(partial_lock[index]->has_data())
            return true;
    }
    return (global_lock !=  nullptr && global_lock->has_data())
	|| (transaction_lock !=  nullptr && transaction_lock->has_data());
}

bool NetconfState::Datastores::Datastore::Locks::has_operation() const
{
    for (std::size_t index=0; index<partial_lock.size(); index++)
    {
        if(partial_lock[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global_lock !=  nullptr && global_lock->has_operation())
	|| (transaction_lock !=  nullptr && transaction_lock->has_operation());
}

std::string NetconfState::Datastores::Datastore::Locks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locks";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Locks' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        for(auto const & c : partial_lock)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Datastores::Datastore::Locks::PartialLock>();
        c->parent = this;
        partial_lock.push_back(c);
        return c;
    }

    if(child_yang_name == "transaction-lock")
    {
        if(transaction_lock == nullptr)
        {
            transaction_lock = std::make_shared<NetconfState::Datastores::Datastore::Locks::TransactionLock>();
        }
        return transaction_lock;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_lock != nullptr)
    {
        children["global-lock"] = global_lock;
    }

    for (auto const & c : partial_lock)
    {
        children[c->get_segment_path()] = c;
    }

    if(transaction_lock != nullptr)
    {
        children["transaction-lock"] = transaction_lock;
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
    if(name == "global-lock" || name == "partial-lock" || name == "transaction-lock")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::GlobalLock()
    :
    locked_by_session{YType::uint32, "locked-by-session"},
    locked_time{YType::str, "locked-time"}
{
    yang_name = "global-lock"; yang_parent_name = "locks";
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::~GlobalLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_data() const
{
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

const EntityPath NetconfState::Datastores::Datastore::Locks::GlobalLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalLock' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locked_by_session.is_set || is_set(locked_by_session.yfilter)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.yfilter)) leaf_name_data.push_back(locked_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    locked_node{YType::str, "locked-node"},
    locked_time{YType::str, "locked-time"},
    select{YType::str, "select"}
{
    yang_name = "partial-lock"; yang_parent_name = "locks";
}

NetconfState::Datastores::Datastore::Locks::PartialLock::~PartialLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_data() const
{
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : select.getYLeafs())
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
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : select.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lock_id.yfilter)
	|| ydk::is_set(locked_by_session.yfilter)
	|| ydk::is_set(locked_node.yfilter)
	|| ydk::is_set(locked_time.yfilter)
	|| ydk::is_set(select.yfilter);
}

std::string NetconfState::Datastores::Datastore::Locks::PartialLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-lock" <<"[lock-id='" <<lock_id <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::PartialLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartialLock' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_id.is_set || is_set(lock_id.yfilter)) leaf_name_data.push_back(lock_id.get_name_leafdata());
    if (locked_by_session.is_set || is_set(locked_by_session.yfilter)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.yfilter)) leaf_name_data.push_back(locked_time.get_name_leafdata());

    auto locked_node_name_datas = locked_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), locked_node_name_datas.begin(), locked_node_name_datas.end());
    auto select_name_datas = select.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), select_name_datas.begin(), select_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::PartialLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::PartialLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "locked-node")
    {
        locked_node.append(value);
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
    if(value_path == "locked-node")
    {
        locked_node.yfilter = yfilter;
    }
    if(value_path == "locked-time")
    {
        locked_time.yfilter = yfilter;
    }
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lock-id" || name == "locked-by-session" || name == "locked-node" || name == "locked-time" || name == "select")
        return true;
    return false;
}

NetconfState::Datastores::Datastore::Locks::TransactionLock::TransactionLock()
    :
    locked_by_session{YType::uint32, "locked-by-session"}
{
    yang_name = "transaction-lock"; yang_parent_name = "locks";
}

NetconfState::Datastores::Datastore::Locks::TransactionLock::~TransactionLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::TransactionLock::has_data() const
{
    return locked_by_session.is_set;
}

bool NetconfState::Datastores::Datastore::Locks::TransactionLock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locked_by_session.yfilter);
}

std::string NetconfState::Datastores::Datastore::Locks::TransactionLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-monitoring:transaction-lock";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::TransactionLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransactionLock' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locked_by_session.is_set || is_set(locked_by_session.yfilter)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::TransactionLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::TransactionLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Datastores::Datastore::Locks::TransactionLock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
        locked_by_session.value_namespace = name_space;
        locked_by_session.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Datastores::Datastore::Locks::TransactionLock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session.yfilter = yfilter;
    }
}

bool NetconfState::Datastores::Datastore::Locks::TransactionLock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locked-by-session")
        return true;
    return false;
}

NetconfState::Schemas::Schemas()
{
    yang_name = "schemas"; yang_parent_name = "netconf-state";
}

NetconfState::Schemas::~Schemas()
{
}

bool NetconfState::Schemas::has_data() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";

    return path_buffer.str();

}

const EntityPath NetconfState::Schemas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        for(auto const & c : schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Schemas::Schema>();
        c->parent = this;
        schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schema)
    {
        children[c->get_segment_path()] = c;
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
    location{YType::str, "location"},
    namespace_{YType::str, "namespace"}
{
    yang_name = "schema"; yang_parent_name = "schemas";
}

NetconfState::Schemas::Schema::~Schema()
{
}

bool NetconfState::Schemas::Schema::has_data() const
{
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
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(namespace_.yfilter);
}

std::string NetconfState::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema" <<"[identifier='" <<identifier <<"']" <<"[version='" <<version <<"']" <<"[format='" <<format <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Schemas::Schema::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/schemas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());

    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "location")
    {
        location.append(value);
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "namespace")
    {
        namespace_.yfilter = yfilter;
    }
}

bool NetconfState::Schemas::Schema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "version" || name == "format" || name == "location" || name == "namespace")
        return true;
    return false;
}

NetconfState::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "netconf-state";
}

NetconfState::Sessions::~Sessions()
{
}

bool NetconfState::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath NetconfState::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
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
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    in_rpcs{YType::uint32, "in-rpcs"},
    login_time{YType::str, "login-time"},
    out_notifications{YType::uint32, "out-notifications"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"},
    source_host{YType::str, "source-host"},
    transport{YType::identityref, "transport"},
    username{YType::str, "username"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

NetconfState::Sessions::Session::~Session()
{
}

bool NetconfState::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| in_bad_rpcs.is_set
	|| in_rpcs.is_set
	|| login_time.is_set
	|| out_notifications.is_set
	|| out_rpc_errors.is_set
	|| source_host.is_set
	|| transport.is_set
	|| username.is_set;
}

bool NetconfState::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(in_bad_rpcs.yfilter)
	|| ydk::is_set(in_rpcs.yfilter)
	|| ydk::is_set(login_time.yfilter)
	|| ydk::is_set(out_notifications.yfilter)
	|| ydk::is_set(out_rpc_errors.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string NetconfState::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.yfilter)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.yfilter)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.yfilter)) leaf_name_data.push_back(login_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.yfilter)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.yfilter)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
        in_bad_rpcs.value_namespace = name_space;
        in_bad_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
        in_rpcs.value_namespace = name_space;
        in_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login-time")
    {
        login_time = value;
        login_time.value_namespace = name_space;
        login_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
        out_notifications.value_namespace = name_space;
        out_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
        out_rpc_errors.value_namespace = name_space;
        out_rpc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
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
}

void NetconfState::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs.yfilter = yfilter;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs.yfilter = yfilter;
    }
    if(value_path == "login-time")
    {
        login_time.yfilter = yfilter;
    }
    if(value_path == "out-notifications")
    {
        out_notifications.yfilter = yfilter;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool NetconfState::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "in-bad-rpcs" || name == "in-rpcs" || name == "login-time" || name == "out-notifications" || name == "out-rpc-errors" || name == "source-host" || name == "transport" || name == "username")
        return true;
    return false;
}

NetconfState::Statistics::Statistics()
    :
    dropped_sessions{YType::uint32, "dropped-sessions"},
    in_bad_hellos{YType::uint32, "in-bad-hellos"},
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    in_rpcs{YType::uint32, "in-rpcs"},
    in_sessions{YType::uint32, "in-sessions"},
    netconf_start_time{YType::str, "netconf-start-time"},
    out_notifications{YType::uint32, "out-notifications"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"}
{
    yang_name = "statistics"; yang_parent_name = "netconf-state";
}

NetconfState::Statistics::~Statistics()
{
}

bool NetconfState::Statistics::has_data() const
{
    return dropped_sessions.is_set
	|| in_bad_hellos.is_set
	|| in_bad_rpcs.is_set
	|| in_rpcs.is_set
	|| in_sessions.is_set
	|| netconf_start_time.is_set
	|| out_notifications.is_set
	|| out_rpc_errors.is_set;
}

bool NetconfState::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_sessions.yfilter)
	|| ydk::is_set(in_bad_hellos.yfilter)
	|| ydk::is_set(in_bad_rpcs.yfilter)
	|| ydk::is_set(in_rpcs.yfilter)
	|| ydk::is_set(in_sessions.yfilter)
	|| ydk::is_set(netconf_start_time.yfilter)
	|| ydk::is_set(out_notifications.yfilter)
	|| ydk::is_set(out_rpc_errors.yfilter);
}

std::string NetconfState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath NetconfState::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_sessions.is_set || is_set(dropped_sessions.yfilter)) leaf_name_data.push_back(dropped_sessions.get_name_leafdata());
    if (in_bad_hellos.is_set || is_set(in_bad_hellos.yfilter)) leaf_name_data.push_back(in_bad_hellos.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.yfilter)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.yfilter)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (in_sessions.is_set || is_set(in_sessions.yfilter)) leaf_name_data.push_back(in_sessions.get_name_leafdata());
    if (netconf_start_time.is_set || is_set(netconf_start_time.yfilter)) leaf_name_data.push_back(netconf_start_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.yfilter)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.yfilter)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-sessions")
    {
        dropped_sessions = value;
        dropped_sessions.value_namespace = name_space;
        dropped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos = value;
        in_bad_hellos.value_namespace = name_space;
        in_bad_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
        in_bad_rpcs.value_namespace = name_space;
        in_bad_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
        in_rpcs.value_namespace = name_space;
        in_rpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sessions")
    {
        in_sessions = value;
        in_sessions.value_namespace = name_space;
        in_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netconf-start-time")
    {
        netconf_start_time = value;
        netconf_start_time.value_namespace = name_space;
        netconf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
        out_notifications.value_namespace = name_space;
        out_notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
        out_rpc_errors.value_namespace = name_space;
        out_rpc_errors.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-sessions")
    {
        dropped_sessions.yfilter = yfilter;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos.yfilter = yfilter;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs.yfilter = yfilter;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs.yfilter = yfilter;
    }
    if(value_path == "in-sessions")
    {
        in_sessions.yfilter = yfilter;
    }
    if(value_path == "netconf-start-time")
    {
        netconf_start_time.yfilter = yfilter;
    }
    if(value_path == "out-notifications")
    {
        out_notifications.yfilter = yfilter;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors.yfilter = yfilter;
    }
}

bool NetconfState::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-sessions" || name == "in-bad-hellos" || name == "in-bad-rpcs" || name == "in-rpcs" || name == "in-sessions" || name == "netconf-start-time" || name == "out-notifications" || name == "out-rpc-errors")
        return true;
    return false;
}

NetconfState::Files::Files()
{
    yang_name = "files"; yang_parent_name = "netconf-state";
}

NetconfState::Files::~Files()
{
}

bool NetconfState::Files::has_data() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Files::has_operation() const
{
    for (std::size_t index=0; index<file.size(); index++)
    {
        if(file[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Files::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-monitoring:files";

    return path_buffer.str();

}

const EntityPath NetconfState::Files::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Files::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        for(auto const & c : file)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Files::File>();
        c->parent = this;
        file.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Files::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : file)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Files::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Files::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Files::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

NetconfState::Files::File::File()
    :
    name{YType::str, "name"},
    context{YType::str, "context"},
    created{YType::str, "created"},
    creator{YType::str, "creator"}
{
    yang_name = "file"; yang_parent_name = "files";
}

NetconfState::Files::File::~File()
{
}

bool NetconfState::Files::File::has_data() const
{
    return name.is_set
	|| context.is_set
	|| created.is_set
	|| creator.is_set;
}

bool NetconfState::Files::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(creator.yfilter);
}

std::string NetconfState::Files::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Files::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/tailf-netconf-monitoring:files/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (creator.is_set || is_set(creator.yfilter)) leaf_name_data.push_back(creator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Files::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Files::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Files::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator")
    {
        creator = value;
        creator.value_namespace = name_space;
        creator.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Files::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "creator")
    {
        creator.yfilter = yfilter;
    }
}

bool NetconfState::Files::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "context" || name == "created" || name == "creator")
        return true;
    return false;
}

NetconfState::Streams::Streams()
{
    yang_name = "streams"; yang_parent_name = "netconf-state";
}

NetconfState::Streams::~Streams()
{
}

bool NetconfState::Streams::has_data() const
{
    for (std::size_t index=0; index<stream.size(); index++)
    {
        if(stream[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Streams::has_operation() const
{
    for (std::size_t index=0; index<stream.size(); index++)
    {
        if(stream[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetconfState::Streams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-monitoring:streams";

    return path_buffer.str();

}

const EntityPath NetconfState::Streams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Streams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NetconfState::Streams::Stream>();
        c->parent = this;
        stream.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Streams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stream)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Streams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetconfState::Streams::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetconfState::Streams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

NetconfState::Streams::Stream::Stream()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    replay_log_aged_time{YType::str, "replay-log-aged-time"},
    replay_log_creation_time{YType::str, "replay-log-creation-time"},
    replay_support{YType::boolean, "replay-support"}
{
    yang_name = "stream"; yang_parent_name = "streams";
}

NetconfState::Streams::Stream::~Stream()
{
}

bool NetconfState::Streams::Stream::has_data() const
{
    for (std::size_t index=0; index<subscriber.size(); index++)
    {
        if(subscriber[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| replay_log_aged_time.is_set
	|| replay_log_creation_time.is_set
	|| replay_support.is_set;
}

bool NetconfState::Streams::Stream::has_operation() const
{
    for (std::size_t index=0; index<subscriber.size(); index++)
    {
        if(subscriber[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(replay_log_aged_time.yfilter)
	|| ydk::is_set(replay_log_creation_time.yfilter)
	|| ydk::is_set(replay_support.yfilter);
}

std::string NetconfState::Streams::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Streams::Stream::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/tailf-netconf-monitoring:streams/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (replay_log_aged_time.is_set || is_set(replay_log_aged_time.yfilter)) leaf_name_data.push_back(replay_log_aged_time.get_name_leafdata());
    if (replay_log_creation_time.is_set || is_set(replay_log_creation_time.yfilter)) leaf_name_data.push_back(replay_log_creation_time.get_name_leafdata());
    if (replay_support.is_set || is_set(replay_support.yfilter)) leaf_name_data.push_back(replay_support.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Streams::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber")
    {
        for(auto const & c : subscriber)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Streams::Stream::Subscriber>();
        c->parent = this;
        subscriber.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Streams::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Streams::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "replay-log-aged-time")
    {
        replay_log_aged_time = value;
        replay_log_aged_time.value_namespace = name_space;
        replay_log_aged_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-log-creation-time")
    {
        replay_log_creation_time = value;
        replay_log_creation_time.value_namespace = name_space;
        replay_log_creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-support")
    {
        replay_support = value;
        replay_support.value_namespace = name_space;
        replay_support.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Streams::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "replay-log-aged-time")
    {
        replay_log_aged_time.yfilter = yfilter;
    }
    if(value_path == "replay-log-creation-time")
    {
        replay_log_creation_time.yfilter = yfilter;
    }
    if(value_path == "replay-support")
    {
        replay_support.yfilter = yfilter;
    }
}

bool NetconfState::Streams::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber" || name == "name" || name == "description" || name == "replay-log-aged-time" || name == "replay-log-creation-time" || name == "replay-support")
        return true;
    return false;
}

NetconfState::Streams::Stream::Subscriber::Subscriber()
    :
    session_id{YType::uint32, "session-id"},
    start_time{YType::str, "start-time"},
    stop_time{YType::str, "stop-time"}
{
    yang_name = "subscriber"; yang_parent_name = "stream";
}

NetconfState::Streams::Stream::Subscriber::~Subscriber()
{
}

bool NetconfState::Streams::Stream::Subscriber::has_data() const
{
    return session_id.is_set
	|| start_time.is_set
	|| stop_time.is_set;
}

bool NetconfState::Streams::Stream::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(stop_time.yfilter);
}

std::string NetconfState::Streams::Stream::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Streams::Stream::Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subscriber' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Streams::Stream::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Streams::Stream::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Streams::Stream::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetconfState::Streams::Stream::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
}

bool NetconfState::Streams::Stream::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "start-time" || name == "stop-time")
        return true;
    return false;
}

GetSchema::GetSchema()
    :
    input(std::make_shared<GetSchema::Input>())
	,output(std::make_shared<GetSchema::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "get-schema"; yang_parent_name = "ietf-netconf-monitoring";
}

GetSchema::~GetSchema()
{
}

bool GetSchema::has_data() const
{
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

const EntityPath GetSchema::get_entity_path(Entity* ancestor) const
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
    return ydk_cisco_ios_xe_models_path;
}

std::string GetSchema::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function GetSchema::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetSchema::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool GetSchema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetSchema::Input::Input()
    :
    format{YType::identityref, "format"},
    identifier{YType::str, "identifier"},
    version{YType::str, "version"}
{
    yang_name = "input"; yang_parent_name = "get-schema";
}

GetSchema::Input::~Input()
{
}

bool GetSchema::Input::has_data() const
{
    return format.is_set
	|| identifier.is_set
	|| version.is_set;
}

bool GetSchema::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string GetSchema::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath GetSchema::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetSchema::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchema::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetSchema::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
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
}

void GetSchema::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool GetSchema::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "identifier" || name == "version")
        return true;
    return false;
}

GetSchema::Output::Output()
    :
    data{YType::str, "data"}
{
    yang_name = "output"; yang_parent_name = "get-schema";
}

GetSchema::Output::~Output()
{
}

bool GetSchema::Output::has_data() const
{
    return data.is_set;
}

bool GetSchema::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string GetSchema::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath GetSchema::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetSchema::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchema::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

NetconfSoapOverBeep::NetconfSoapOverBeep()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-soap-over-beep")
{
}

NetconfSoapOverBeep::~NetconfSoapOverBeep()
{
}

Rng::Rng()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:rng")
{
}

Rng::~Rng()
{
}

NetconfSoapOverHttps::NetconfSoapOverHttps()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-soap-over-https")
{
}

NetconfSoapOverHttps::~NetconfSoapOverHttps()
{
}

Rnc::Rnc()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:rnc")
{
}

Rnc::~Rnc()
{
}

NetconfBeep::NetconfBeep()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-beep")
{
}

NetconfBeep::~NetconfBeep()
{
}

Xsd::Xsd()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:xsd")
{
}

Xsd::~Xsd()
{
}

Yin::Yin()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:yin")
{
}

Yin::~Yin()
{
}

Yang::Yang()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:yang")
{
}

Yang::~Yang()
{
}

NetconfSsh::NetconfSsh()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-ssh")
{
}

NetconfSsh::~NetconfSsh()
{
}

NetconfTls::NetconfTls()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-netconf-monitoring", "ietf-netconf-monitoring", "ietf-netconf-monitoring:netconf-tls")
{
}

NetconfTls::~NetconfTls()
{
}

const Enum::YLeaf NetconfDatastoreType::running {0, "running"};
const Enum::YLeaf NetconfDatastoreType::candidate {1, "candidate"};
const Enum::YLeaf NetconfDatastoreType::startup {2, "startup"};

const Enum::YLeaf NetconfState::Schemas::Schema::Location::NETCONF {0, "NETCONF"};

const Enum::YLeaf NetconfState::Files::File::Context::cli {0, "cli"};
const Enum::YLeaf NetconfState::Files::File::Context::netconf {1, "netconf"};
const Enum::YLeaf NetconfState::Files::File::Context::webui {2, "webui"};


}
}

