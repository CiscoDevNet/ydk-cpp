
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "ietf_netconf_monitoring.hpp"

namespace ydk {
namespace ietf_netconf_monitoring {

SchemaFormatIdentity::SchemaFormatIdentity()
     : Identity("ietf-netconf-monitoring:schema-format")
{
}

SchemaFormatIdentity::~SchemaFormatIdentity()
{
}

TransportIdentity::TransportIdentity()
     : Identity("ietf-netconf-monitoring:transport")
{
}

TransportIdentity::~TransportIdentity()
{
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(capability.operation);
}

std::string NetconfState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath NetconfState::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto capability_name_datas = capability.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), capability_name_datas.begin(), capability_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Capabilities::get_children()
{
    return children;
}

void NetconfState::Capabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability")
    {
        capability.append(value);
    }
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
    return is_set(operation)
	|| is_set(locked_by_session.operation)
	|| is_set(locked_time.operation);
}

std::string NetconfState::Datastores::Datastore::Locks::GlobalLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-lock";

    return path_buffer.str();

}

EntityPath NetconfState::Datastores::Datastore::Locks::GlobalLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locked_by_session.is_set || is_set(locked_by_session.operation)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.operation)) leaf_name_data.push_back(locked_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Datastores::Datastore::Locks::GlobalLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Datastores::Datastore::Locks::GlobalLock::get_children()
{
    return children;
}

void NetconfState::Datastores::Datastore::Locks::GlobalLock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
    }
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : select.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(lock_id.operation)
	|| is_set(locked_by_session.operation)
	|| is_set(locked_node.operation)
	|| is_set(locked_time.operation)
	|| is_set(select.operation);
}

std::string NetconfState::Datastores::Datastore::Locks::PartialLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-lock" <<"[lock-id='" <<lock_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NetconfState::Datastores::Datastore::Locks::PartialLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_id.is_set || is_set(lock_id.operation)) leaf_name_data.push_back(lock_id.get_name_leafdata());
    if (locked_by_session.is_set || is_set(locked_by_session.operation)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.operation)) leaf_name_data.push_back(locked_time.get_name_leafdata());

    auto locked_node_name_datas = locked_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), locked_node_name_datas.begin(), locked_node_name_datas.end());
    auto select_name_datas = select.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), select_name_datas.begin(), select_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Datastores::Datastore::Locks::PartialLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Datastores::Datastore::Locks::PartialLock::get_children()
{
    return children;
}

void NetconfState::Datastores::Datastore::Locks::PartialLock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lock-id")
    {
        lock_id = value;
    }
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
    }
    if(value_path == "locked-node")
    {
        locked_node.append(value);
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
    }
    if(value_path == "select")
    {
        select.append(value);
    }
}

NetconfState::Datastores::Datastore::Locks::Locks()
    :
    global_lock(std::make_unique<NetconfState::Datastores::Datastore::Locks::GlobalLock>())
{
    global_lock->parent = this;
    children["global-lock"] = global_lock.get();

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
    return (global_lock !=  nullptr && global_lock->has_data());
}

bool NetconfState::Datastores::Datastore::Locks::has_operation() const
{
    for (std::size_t index=0; index<partial_lock.size(); index++)
    {
        if(partial_lock[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global_lock !=  nullptr && global_lock->has_operation());
}

std::string NetconfState::Datastores::Datastore::Locks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locks";

    return path_buffer.str();

}

EntityPath NetconfState::Datastores::Datastore::Locks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Datastores::Datastore::Locks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-lock")
    {
        if(global_lock != nullptr)
        {
            children["global-lock"] = global_lock.get();
        }
        else
        {
            global_lock = std::make_unique<NetconfState::Datastores::Datastore::Locks::GlobalLock>();
            global_lock->parent = this;
            children["global-lock"] = global_lock.get();
        }
        return children.at("global-lock");
    }

    if(child_yang_name == "partial-lock")
    {
        for(auto const & c : partial_lock)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetconfState::Datastores::Datastore::Locks::PartialLock>();
        c->parent = this;
        partial_lock.push_back(std::move(c));
        children[segment_path] = partial_lock.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Datastores::Datastore::Locks::get_children()
{
    if(children.find("global-lock") == children.end())
    {
        if(global_lock != nullptr)
        {
            children["global-lock"] = global_lock.get();
        }
    }

    for (auto const & c : partial_lock)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetconfState::Datastores::Datastore::Locks::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Datastores::Datastore::Datastore()
    :
    	name{YType::enumeration, "name"}
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
	|| (locks !=  nullptr && locks->has_data());
}

bool NetconfState::Datastores::Datastore::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (locks !=  nullptr && locks->has_operation());
}

std::string NetconfState::Datastores::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetconfState::Datastores::Datastore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/datastores/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Datastores::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "locks")
    {
        if(locks != nullptr)
        {
            children["locks"] = locks.get();
        }
        else
        {
            locks = std::make_unique<NetconfState::Datastores::Datastore::Locks>();
            locks->parent = this;
            children["locks"] = locks.get();
        }
        return children.at("locks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Datastores::Datastore::get_children()
{
    if(children.find("locks") == children.end())
    {
        if(locks != nullptr)
        {
            children["locks"] = locks.get();
        }
    }

    return children;
}

void NetconfState::Datastores::Datastore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
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
    return is_set(operation);
}

std::string NetconfState::Datastores::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastores";

    return path_buffer.str();

}

EntityPath NetconfState::Datastores::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Datastores::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "datastore")
    {
        for(auto const & c : datastore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetconfState::Datastores::Datastore>();
        c->parent = this;
        datastore.push_back(std::move(c));
        children[segment_path] = datastore.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Datastores::get_children()
{
    for (auto const & c : datastore)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetconfState::Datastores::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Schemas::Schema::Schema()
    :
    	format{YType::identityref, "format"},
	 identifier{YType::str, "identifier"},
	 version{YType::str, "version"},
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
    return format.is_set
	|| identifier.is_set
	|| version.is_set
	|| namespace_.is_set;
}

bool NetconfState::Schemas::Schema::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(identifier.operation)
	|| is_set(version.operation)
	|| is_set(location.operation)
	|| is_set(namespace_.operation);
}

std::string NetconfState::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema" <<"[format='" <<format.get() <<"']" <<"[identifier='" <<identifier.get() <<"']" <<"[version='" <<version.get() <<"']";

    return path_buffer.str();

}

EntityPath NetconfState::Schemas::Schema::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/schemas/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.operation)) leaf_name_data.push_back(namespace_.get_name_leafdata());

    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Schemas::Schema::get_children()
{
    return children;
}

void NetconfState::Schemas::Schema::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "location")
    {
        location.append(value);
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
    }
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
    return is_set(operation);
}

std::string NetconfState::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";

    return path_buffer.str();

}

EntityPath NetconfState::Schemas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "schema")
    {
        for(auto const & c : schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetconfState::Schemas::Schema>();
        c->parent = this;
        schema.push_back(std::move(c));
        children[segment_path] = schema.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Schemas::get_children()
{
    for (auto const & c : schema)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetconfState::Schemas::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(in_bad_rpcs.operation)
	|| is_set(in_rpcs.operation)
	|| is_set(login_time.operation)
	|| is_set(out_notifications.operation)
	|| is_set(out_rpc_errors.operation)
	|| is_set(source_host.operation)
	|| is_set(transport.operation)
	|| is_set(username.operation);
}

std::string NetconfState::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NetconfState::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.operation)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.operation)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.operation)) leaf_name_data.push_back(login_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.operation)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.operation)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Sessions::Session::get_children()
{
    return children;
}

void NetconfState::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
    }
    if(value_path == "login-time")
    {
        login_time = value;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
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
    return is_set(operation);
}

std::string NetconfState::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath NetconfState::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetconfState::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetconfState::Sessions::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(dropped_sessions.operation)
	|| is_set(in_bad_hellos.operation)
	|| is_set(in_bad_rpcs.operation)
	|| is_set(in_rpcs.operation)
	|| is_set(in_sessions.operation)
	|| is_set(netconf_start_time.operation)
	|| is_set(out_notifications.operation)
	|| is_set(out_rpc_errors.operation);
}

std::string NetconfState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath NetconfState::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_sessions.is_set || is_set(dropped_sessions.operation)) leaf_name_data.push_back(dropped_sessions.get_name_leafdata());
    if (in_bad_hellos.is_set || is_set(in_bad_hellos.operation)) leaf_name_data.push_back(in_bad_hellos.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.operation)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.operation)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (in_sessions.is_set || is_set(in_sessions.operation)) leaf_name_data.push_back(in_sessions.get_name_leafdata());
    if (netconf_start_time.is_set || is_set(netconf_start_time.operation)) leaf_name_data.push_back(netconf_start_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.operation)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.operation)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::Statistics::get_children()
{
    return children;
}

void NetconfState::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-sessions")
    {
        dropped_sessions = value;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos = value;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
    }
    if(value_path == "in-sessions")
    {
        in_sessions = value;
    }
    if(value_path == "netconf-start-time")
    {
        netconf_start_time = value;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
    }
}

NetconfState::NetconfState()
    :
    capabilities(std::make_unique<NetconfState::Capabilities>())
	,datastores(std::make_unique<NetconfState::Datastores>())
	,schemas(std::make_unique<NetconfState::Schemas>())
	,sessions(std::make_unique<NetconfState::Sessions>())
	,statistics(std::make_unique<NetconfState::Statistics>())
{
    capabilities->parent = this;
    children["capabilities"] = capabilities.get();

    datastores->parent = this;
    children["datastores"] = datastores.get();

    schemas->parent = this;
    children["schemas"] = schemas.get();

    sessions->parent = this;
    children["sessions"] = sessions.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "netconf-state"; yang_parent_name = "ietf-netconf-monitoring";
}

NetconfState::~NetconfState()
{
}

bool NetconfState::has_data() const
{
    return (capabilities !=  nullptr && capabilities->has_data())
	|| (datastores !=  nullptr && datastores->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool NetconfState::has_operation() const
{
    return is_set(operation)
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

EntityPath NetconfState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities.get();
        }
        else
        {
            capabilities = std::make_unique<NetconfState::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities.get();
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "datastores")
    {
        if(datastores != nullptr)
        {
            children["datastores"] = datastores.get();
        }
        else
        {
            datastores = std::make_unique<NetconfState::Datastores>();
            datastores->parent = this;
            children["datastores"] = datastores.get();
        }
        return children.at("datastores");
    }

    if(child_yang_name == "schemas")
    {
        if(schemas != nullptr)
        {
            children["schemas"] = schemas.get();
        }
        else
        {
            schemas = std::make_unique<NetconfState::Schemas>();
            schemas->parent = this;
            children["schemas"] = schemas.get();
        }
        return children.at("schemas");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<NetconfState::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<NetconfState::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfState::get_children()
{
    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities.get();
        }
    }

    if(children.find("datastores") == children.end())
    {
        if(datastores != nullptr)
        {
            children["datastores"] = datastores.get();
        }
    }

    if(children.find("schemas") == children.end())
    {
        if(schemas != nullptr)
        {
            children["schemas"] = schemas.get();
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void NetconfState::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NetconfState::clone_ptr()
{
    return std::make_unique<NetconfState>();
}
GetSchemaRpc::Output::Output()
{
    yang_name = "output"; yang_parent_name = "get-schema";
}

GetSchemaRpc::Output::~Output()
{
}

bool GetSchemaRpc::Output::has_data() const
{
    return false;
}

bool GetSchemaRpc::Output::has_operation() const
{
    return is_set(operation);
}

std::string GetSchemaRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath GetSchemaRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* GetSchemaRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & GetSchemaRpc::Output::get_children()
{
    return children;
}

void GetSchemaRpc::Output::set_value(const std::string & value_path, std::string value)
{
}

GetSchemaRpc::GetSchemaRpc()
    :
    	format{YType::identityref, "format"},
	 identifier{YType::str, "identifier"},
	 version{YType::str, "version"}
    	,
    output(std::make_unique<GetSchemaRpc::Output>())
{
    output->parent = this;
    children["output"] = output.get();

    yang_name = "get-schema"; yang_parent_name = "ietf-netconf-monitoring";
}

GetSchemaRpc::~GetSchemaRpc()
{
}

bool GetSchemaRpc::has_data() const
{
    return format.is_set
	|| identifier.is_set
	|| version.is_set
	|| (output !=  nullptr && output->has_data());
}

bool GetSchemaRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(identifier.operation)
	|| is_set(version.operation)
	|| (output !=  nullptr && output->has_operation());
}

std::string GetSchemaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:get-schema";

    return path_buffer.str();

}

EntityPath GetSchemaRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* GetSchemaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<GetSchemaRpc::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & GetSchemaRpc::get_children()
{
    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void GetSchemaRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

std::unique_ptr<Entity> GetSchemaRpc::clone_ptr()
{
    return std::make_unique<GetSchemaRpc>();
}
NetconfBeepIdentity::NetconfBeepIdentity()
     : Identity("ietf-netconf-monitoring:netconf-beep")
{
}

NetconfBeepIdentity::~NetconfBeepIdentity()
{
}

NetconfSshIdentity::NetconfSshIdentity()
     : Identity("ietf-netconf-monitoring:netconf-ssh")
{
}

NetconfSshIdentity::~NetconfSshIdentity()
{
}

RncIdentity::RncIdentity()
     : Identity("ietf-netconf-monitoring:rnc")
{
}

RncIdentity::~RncIdentity()
{
}

YinIdentity::YinIdentity()
     : Identity("ietf-netconf-monitoring:yin")
{
}

YinIdentity::~YinIdentity()
{
}

RngIdentity::RngIdentity()
     : Identity("ietf-netconf-monitoring:rng")
{
}

RngIdentity::~RngIdentity()
{
}

XsdIdentity::XsdIdentity()
     : Identity("ietf-netconf-monitoring:xsd")
{
}

XsdIdentity::~XsdIdentity()
{
}

NetconfSoapOverBeepIdentity::NetconfSoapOverBeepIdentity()
     : Identity("ietf-netconf-monitoring:netconf-soap-over-beep")
{
}

NetconfSoapOverBeepIdentity::~NetconfSoapOverBeepIdentity()
{
}

NetconfTlsIdentity::NetconfTlsIdentity()
     : Identity("ietf-netconf-monitoring:netconf-tls")
{
}

NetconfTlsIdentity::~NetconfTlsIdentity()
{
}

YangIdentity::YangIdentity()
     : Identity("ietf-netconf-monitoring:yang")
{
}

YangIdentity::~YangIdentity()
{
}

NetconfSoapOverHttpsIdentity::NetconfSoapOverHttpsIdentity()
     : Identity("ietf-netconf-monitoring:netconf-soap-over-https")
{
}

NetconfSoapOverHttpsIdentity::~NetconfSoapOverHttpsIdentity()
{
}


const Enum::YLeaf NetconfDatastoreTypeEnum::running {0, "running"};
const Enum::YLeaf NetconfDatastoreTypeEnum::candidate {1, "candidate"};
const Enum::YLeaf NetconfDatastoreTypeEnum::startup {2, "startup"};

const Enum::YLeaf NetconfState::Schemas::Schema::LocationEnum::NETCONF {0, "NETCONF"};


}
}

