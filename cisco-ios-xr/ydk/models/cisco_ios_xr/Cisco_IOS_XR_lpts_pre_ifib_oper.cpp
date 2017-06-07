
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_pre_ifib_oper {

LptsPifib::LptsPifib()
    :
    nodes(std::make_shared<LptsPifib::Nodes>())
{
    nodes->parent = this;

    yang_name = "lpts-pifib"; yang_parent_name = "Cisco-IOS-XR-lpts-pre-ifib-oper";
}

LptsPifib::~LptsPifib()
{
}

bool LptsPifib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool LptsPifib::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LptsPifib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib";

    return path_buffer.str();

}

const EntityPath LptsPifib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LptsPifib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<LptsPifib::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void LptsPifib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LptsPifib::clone_ptr() const
{
    return std::make_shared<LptsPifib>();
}

std::string LptsPifib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LptsPifib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LptsPifib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LptsPifib::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "lpts-pifib";
}

LptsPifib::Nodes::~Nodes()
{
}

bool LptsPifib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<LptsPifib::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    hardware(std::make_shared<LptsPifib::Nodes::Node::Hardware>())
	,type_values(std::make_shared<LptsPifib::Nodes::Node::TypeValues>())
{
    hardware->parent = this;

    type_values->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

LptsPifib::Nodes::Node::~Node()
{
}

bool LptsPifib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (hardware !=  nullptr && hardware->has_data())
	|| (type_values !=  nullptr && type_values->has_data());
}

bool LptsPifib::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (hardware !=  nullptr && hardware->has_operation())
	|| (type_values !=  nullptr && type_values->has_operation());
}

std::string LptsPifib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<LptsPifib::Nodes::Node::Hardware>();
        }
        return hardware;
    }

    if(child_yang_name == "type-values")
    {
        if(type_values == nullptr)
        {
            type_values = std::make_shared<LptsPifib::Nodes::Node::TypeValues>();
        }
        return type_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hardware != nullptr)
    {
        children["hardware"] = hardware;
    }

    if(type_values != nullptr)
    {
        children["type-values"] = type_values;
    }

    return children;
}

void LptsPifib::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

LptsPifib::Nodes::Node::TypeValues::TypeValues()
{
    yang_name = "type-values"; yang_parent_name = "node";
}

LptsPifib::Nodes::Node::TypeValues::~TypeValues()
{
}

bool LptsPifib::Nodes::Node::TypeValues::has_data() const
{
    for (std::size_t index=0; index<type_value.size(); index++)
    {
        if(type_value[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::TypeValues::has_operation() const
{
    for (std::size_t index=0; index<type_value.size(); index++)
    {
        if(type_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::TypeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-values";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::TypeValues::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TypeValues' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::TypeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type-value")
    {
        for(auto const & c : type_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::TypeValues::TypeValue>();
        c->parent = this;
        type_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::TypeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : type_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::TypeValues::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::TypeValues::TypeValue::TypeValue()
    :
    pifib_type{YType::enumeration, "pifib-type"}
{
    yang_name = "type-value"; yang_parent_name = "type-values";
}

LptsPifib::Nodes::Node::TypeValues::TypeValue::~TypeValue()
{
}

bool LptsPifib::Nodes::Node::TypeValues::TypeValue::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return pifib_type.is_set;
}

bool LptsPifib::Nodes::Node::TypeValues::TypeValue::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pifib_type.operation);
}

std::string LptsPifib::Nodes::Node::TypeValues::TypeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-value" <<"[pifib-type='" <<pifib_type <<"']";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::TypeValues::TypeValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TypeValue' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pifib_type.is_set || is_set(pifib_type.operation)) leaf_name_data.push_back(pifib_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::TypeValues::TypeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::TypeValues::TypeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::TypeValues::TypeValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pifib-type")
    {
        pifib_type = value;
    }
}

LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::Entry()
    :
    entry{YType::str, "entry"},
    accepts{YType::uint64, "accepts"},
    deliver_list_long{YType::str, "deliver-list-long"},
    deliver_list_short{YType::str, "deliver-list-short"},
    destination_addr{YType::str, "destination-addr"},
    destination_type{YType::str, "destination-type"},
    destination_value{YType::str, "destination-value"},
    drops{YType::uint64, "drops"},
    flow_type{YType::str, "flow-type"},
    intf_handle{YType::uint32, "intf-handle"},
    intf_name{YType::str, "intf-name"},
    is_fgid{YType::uint8, "is-fgid"},
    is_frag{YType::uint8, "is-frag"},
    is_syn{YType::uint8, "is-syn"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    listener_tag{YType::str, "listener-tag"},
    local_flag{YType::uint8, "local-flag"},
    min_ttl{YType::uint8, "min-ttl"},
    opcode{YType::str, "opcode"},
    pifib_program_time{YType::str, "pifib-program-time"},
    pifib_type{YType::uint8, "pifib-type"},
    source_addr{YType::str, "source-addr"},
    source_port{YType::str, "source-port"},
    stale{YType::uint8, "stale"},
    vid{YType::uint32, "vid"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "entry"; yang_parent_name = "type-value";
}

LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::~Entry()
{
}

bool LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::has_data() const
{
    return entry.is_set
	|| accepts.is_set
	|| deliver_list_long.is_set
	|| deliver_list_short.is_set
	|| destination_addr.is_set
	|| destination_type.is_set
	|| destination_value.is_set
	|| drops.is_set
	|| flow_type.is_set
	|| intf_handle.is_set
	|| intf_name.is_set
	|| is_fgid.is_set
	|| is_frag.is_set
	|| is_syn.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| listener_tag.is_set
	|| local_flag.is_set
	|| min_ttl.is_set
	|| opcode.is_set
	|| pifib_program_time.is_set
	|| pifib_type.is_set
	|| source_addr.is_set
	|| source_port.is_set
	|| stale.is_set
	|| vid.is_set
	|| vrf_name.is_set;
}

bool LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation)
	|| is_set(accepts.operation)
	|| is_set(deliver_list_long.operation)
	|| is_set(deliver_list_short.operation)
	|| is_set(destination_addr.operation)
	|| is_set(destination_type.operation)
	|| is_set(destination_value.operation)
	|| is_set(drops.operation)
	|| is_set(flow_type.operation)
	|| is_set(intf_handle.operation)
	|| is_set(intf_name.operation)
	|| is_set(is_fgid.operation)
	|| is_set(is_frag.operation)
	|| is_set(is_syn.operation)
	|| is_set(l3protocol.operation)
	|| is_set(l4protocol.operation)
	|| is_set(listener_tag.operation)
	|| is_set(local_flag.operation)
	|| is_set(min_ttl.operation)
	|| is_set(opcode.operation)
	|| is_set(pifib_program_time.operation)
	|| is_set(pifib_type.operation)
	|| is_set(source_addr.operation)
	|| is_set(source_port.operation)
	|| is_set(stale.operation)
	|| is_set(vid.operation)
	|| is_set(vrf_name.operation);
}

std::string LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[entry='" <<entry <<"']";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Entry' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (accepts.is_set || is_set(accepts.operation)) leaf_name_data.push_back(accepts.get_name_leafdata());
    if (deliver_list_long.is_set || is_set(deliver_list_long.operation)) leaf_name_data.push_back(deliver_list_long.get_name_leafdata());
    if (deliver_list_short.is_set || is_set(deliver_list_short.operation)) leaf_name_data.push_back(deliver_list_short.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.operation)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.operation)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (destination_value.is_set || is_set(destination_value.operation)) leaf_name_data.push_back(destination_value.get_name_leafdata());
    if (drops.is_set || is_set(drops.operation)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.operation)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.operation)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (is_frag.is_set || is_set(is_frag.operation)) leaf_name_data.push_back(is_frag.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.operation)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.operation)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.operation)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.operation)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (local_flag.is_set || is_set(local_flag.operation)) leaf_name_data.push_back(local_flag.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (opcode.is_set || is_set(opcode.operation)) leaf_name_data.push_back(opcode.get_name_leafdata());
    if (pifib_program_time.is_set || is_set(pifib_program_time.operation)) leaf_name_data.push_back(pifib_program_time.get_name_leafdata());
    if (pifib_type.is_set || is_set(pifib_type.operation)) leaf_name_data.push_back(pifib_type.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.operation)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (stale.is_set || is_set(stale.operation)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (vid.is_set || is_set(vid.operation)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
    if(value_path == "accepts")
    {
        accepts = value;
    }
    if(value_path == "deliver-list-long")
    {
        deliver_list_long = value;
    }
    if(value_path == "deliver-list-short")
    {
        deliver_list_short = value;
    }
    if(value_path == "destination-addr")
    {
        destination_addr = value;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
    }
    if(value_path == "destination-value")
    {
        destination_value = value;
    }
    if(value_path == "drops")
    {
        drops = value;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
    if(value_path == "is-fgid")
    {
        is_fgid = value;
    }
    if(value_path == "is-frag")
    {
        is_frag = value;
    }
    if(value_path == "is-syn")
    {
        is_syn = value;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
    }
    if(value_path == "listener-tag")
    {
        listener_tag = value;
    }
    if(value_path == "local-flag")
    {
        local_flag = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "opcode")
    {
        opcode = value;
    }
    if(value_path == "pifib-program-time")
    {
        pifib_program_time = value;
    }
    if(value_path == "pifib-type")
    {
        pifib_type = value;
    }
    if(value_path == "source-addr")
    {
        source_addr = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "stale")
    {
        stale = value;
    }
    if(value_path == "vid")
    {
        vid = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

LptsPifib::Nodes::Node::Hardware::Hardware()
    :
    bfd(std::make_shared<LptsPifib::Nodes::Node::Hardware::Bfd>())
	,index_entries(std::make_shared<LptsPifib::Nodes::Node::Hardware::IndexEntries>())
	,police(std::make_shared<LptsPifib::Nodes::Node::Hardware::Police>())
	,static_police(std::make_shared<LptsPifib::Nodes::Node::Hardware::StaticPolice>())
	,statistics(std::make_shared<LptsPifib::Nodes::Node::Hardware::Statistics>())
	,usage_entries(std::make_shared<LptsPifib::Nodes::Node::Hardware::UsageEntries>())
{
    bfd->parent = this;

    index_entries->parent = this;

    police->parent = this;

    static_police->parent = this;

    statistics->parent = this;

    usage_entries->parent = this;

    yang_name = "hardware"; yang_parent_name = "node";
}

LptsPifib::Nodes::Node::Hardware::~Hardware()
{
}

bool LptsPifib::Nodes::Node::Hardware::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data())
	|| (index_entries !=  nullptr && index_entries->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (static_police !=  nullptr && static_police->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (usage_entries !=  nullptr && usage_entries->has_data());
}

bool LptsPifib::Nodes::Node::Hardware::has_operation() const
{
    return is_set(operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (index_entries !=  nullptr && index_entries->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (static_police !=  nullptr && static_police->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (usage_entries !=  nullptr && usage_entries->has_operation());
}

std::string LptsPifib::Nodes::Node::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-platform-pifib-oper:hardware";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hardware' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<LptsPifib::Nodes::Node::Hardware::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "index-entries")
    {
        if(index_entries == nullptr)
        {
            index_entries = std::make_shared<LptsPifib::Nodes::Node::Hardware::IndexEntries>();
        }
        return index_entries;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<LptsPifib::Nodes::Node::Hardware::Police>();
        }
        return police;
    }

    if(child_yang_name == "static-police")
    {
        if(static_police == nullptr)
        {
            static_police = std::make_shared<LptsPifib::Nodes::Node::Hardware::StaticPolice>();
        }
        return static_police;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<LptsPifib::Nodes::Node::Hardware::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "usage-entries")
    {
        if(usage_entries == nullptr)
        {
            usage_entries = std::make_shared<LptsPifib::Nodes::Node::Hardware::UsageEntries>();
        }
        return usage_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(index_entries != nullptr)
    {
        children["index-entries"] = index_entries;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(static_police != nullptr)
    {
        children["static-police"] = static_police;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(usage_entries != nullptr)
    {
        children["usage-entries"] = usage_entries;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntries()
{
    yang_name = "usage-entries"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::~UsageEntries()
{
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::has_data() const
{
    for (std::size_t index=0; index<usage_entry.size(); index++)
    {
        if(usage_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::has_operation() const
{
    for (std::size_t index=0; index<usage_entry.size(); index++)
    {
        if(usage_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::Hardware::UsageEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-entries";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::UsageEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsageEntries' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::UsageEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage-entry")
    {
        for(auto const & c : usage_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry>();
        c->parent = this;
        usage_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::UsageEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : usage_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::UsageEntries::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageEntry()
    :
    region_id{YType::enumeration, "region-id"}
{
    yang_name = "usage-entry"; yang_parent_name = "usage-entries";
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::~UsageEntry()
{
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::has_data() const
{
    for (std::size_t index=0; index<usage_info.size(); index++)
    {
        if(usage_info[index]->has_data())
            return true;
    }
    return region_id.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::has_operation() const
{
    for (std::size_t index=0; index<usage_info.size(); index++)
    {
        if(usage_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(region_id.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-entry" <<"[region-id='" <<region_id <<"']";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsageEntry' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (region_id.is_set || is_set(region_id.operation)) leaf_name_data.push_back(region_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage-info")
    {
        for(auto const & c : usage_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo>();
        c->parent = this;
        usage_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : usage_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "region-id")
    {
        region_id = value;
    }
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::UsageInfo()
    :
    pipe_id{YType::uint8, "pipe-id"},
    region{YType::uint8, "region"},
    region_id{YType::uint8, "region-id"},
    size{YType::uint32, "size"},
    used{YType::uint32, "used"}
{
    yang_name = "usage-info"; yang_parent_name = "usage-entry";
}

LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::~UsageInfo()
{
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::has_data() const
{
    return pipe_id.is_set
	|| region.is_set
	|| region_id.is_set
	|| size.is_set
	|| used.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(pipe_id.operation)
	|| is_set(region.operation)
	|| is_set(region_id.operation)
	|| is_set(size.operation)
	|| is_set(used.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-info";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsageInfo' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pipe_id.is_set || is_set(pipe_id.operation)) leaf_name_data.push_back(pipe_id.get_name_leafdata());
    if (region.is_set || is_set(region.operation)) leaf_name_data.push_back(region.get_name_leafdata());
    if (region_id.is_set || is_set(region_id.operation)) leaf_name_data.push_back(region_id.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pipe-id")
    {
        pipe_id = value;
    }
    if(value_path == "region")
    {
        region = value;
    }
    if(value_path == "region-id")
    {
        region_id = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
}

LptsPifib::Nodes::Node::Hardware::Police::Police()
{
    yang_name = "police"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::Police::~Police()
{
}

bool LptsPifib::Nodes::Node::Hardware::Police::has_data() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::Hardware::Police::has_operation() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::Hardware::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police-info")
    {
        for(auto const & c : police_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo>();
        c->parent = this;
        police_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : police_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::Police::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::PoliceInfo()
    :
    accepted_stats{YType::uint64, "accepted-stats"},
    acl_config{YType::uint8, "acl-config"},
    acl_str{YType::str, "acl-str"},
    avgrate{YType::uint32, "avgrate"},
    avgrate_type{YType::uint32, "avgrate-type"},
    burst{YType::uint32, "burst"},
    change_type{YType::uint8, "change-type"},
    dropped_stats{YType::uint64, "dropped-stats"},
    iptos_value{YType::uint8, "iptos-value"},
    policer{YType::uint32, "policer"},
    static_avgrate{YType::uint32, "static-avgrate"}
{
    yang_name = "police-info"; yang_parent_name = "police";
}

LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::~PoliceInfo()
{
}

bool LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::has_data() const
{
    return accepted_stats.is_set
	|| acl_config.is_set
	|| acl_str.is_set
	|| avgrate.is_set
	|| avgrate_type.is_set
	|| burst.is_set
	|| change_type.is_set
	|| dropped_stats.is_set
	|| iptos_value.is_set
	|| policer.is_set
	|| static_avgrate.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_stats.operation)
	|| is_set(acl_config.operation)
	|| is_set(acl_str.operation)
	|| is_set(avgrate.operation)
	|| is_set(avgrate_type.operation)
	|| is_set(burst.operation)
	|| is_set(change_type.operation)
	|| is_set(dropped_stats.operation)
	|| is_set(iptos_value.operation)
	|| is_set(policer.operation)
	|| is_set(static_avgrate.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-info";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceInfo' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_stats.is_set || is_set(accepted_stats.operation)) leaf_name_data.push_back(accepted_stats.get_name_leafdata());
    if (acl_config.is_set || is_set(acl_config.operation)) leaf_name_data.push_back(acl_config.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.operation)) leaf_name_data.push_back(acl_str.get_name_leafdata());
    if (avgrate.is_set || is_set(avgrate.operation)) leaf_name_data.push_back(avgrate.get_name_leafdata());
    if (avgrate_type.is_set || is_set(avgrate_type.operation)) leaf_name_data.push_back(avgrate_type.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.operation)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (dropped_stats.is_set || is_set(dropped_stats.operation)) leaf_name_data.push_back(dropped_stats.get_name_leafdata());
    if (iptos_value.is_set || is_set(iptos_value.operation)) leaf_name_data.push_back(iptos_value.get_name_leafdata());
    if (policer.is_set || is_set(policer.operation)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (static_avgrate.is_set || is_set(static_avgrate.operation)) leaf_name_data.push_back(static_avgrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-stats")
    {
        accepted_stats = value;
    }
    if(value_path == "acl-config")
    {
        acl_config = value;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
    }
    if(value_path == "avgrate")
    {
        avgrate = value;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "change-type")
    {
        change_type = value;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats = value;
    }
    if(value_path == "iptos-value")
    {
        iptos_value = value;
    }
    if(value_path == "policer")
    {
        policer = value;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate = value;
    }
}

LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticPolice()
{
    yang_name = "static-police"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::StaticPolice::~StaticPolice()
{
}

bool LptsPifib::Nodes::Node::Hardware::StaticPolice::has_data() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::Hardware::StaticPolice::has_operation() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::Hardware::StaticPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-police";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::StaticPolice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticPolice' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::StaticPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-info")
    {
        for(auto const & c : static_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo>();
        c->parent = this;
        static_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::StaticPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::StaticPolice::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::StaticInfo()
    :
    accepted{YType::uint64, "accepted"},
    burst_rate{YType::uint32, "burst-rate"},
    change_type{YType::uint8, "change-type"},
    dropped{YType::uint64, "dropped"},
    flow_rate{YType::uint32, "flow-rate"},
    punt_reason{YType::uint32, "punt-reason"},
    punt_reason_string{YType::str, "punt-reason-string"},
    sid{YType::uint32, "sid"}
{
    yang_name = "static-info"; yang_parent_name = "static-police";
}

LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::~StaticInfo()
{
}

bool LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::has_data() const
{
    return accepted.is_set
	|| burst_rate.is_set
	|| change_type.is_set
	|| dropped.is_set
	|| flow_rate.is_set
	|| punt_reason.is_set
	|| punt_reason_string.is_set
	|| sid.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted.operation)
	|| is_set(burst_rate.operation)
	|| is_set(change_type.operation)
	|| is_set(dropped.operation)
	|| is_set(flow_rate.operation)
	|| is_set(punt_reason.operation)
	|| is_set(punt_reason_string.operation)
	|| is_set(sid.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-info";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticInfo' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.operation)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.operation)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.operation)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (flow_rate.is_set || is_set(flow_rate.operation)) leaf_name_data.push_back(flow_rate.get_name_leafdata());
    if (punt_reason.is_set || is_set(punt_reason.operation)) leaf_name_data.push_back(punt_reason.get_name_leafdata());
    if (punt_reason_string.is_set || is_set(punt_reason_string.operation)) leaf_name_data.push_back(punt_reason_string.get_name_leafdata());
    if (sid.is_set || is_set(sid.operation)) leaf_name_data.push_back(sid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted")
    {
        accepted = value;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
    }
    if(value_path == "change-type")
    {
        change_type = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "flow-rate")
    {
        flow_rate = value;
    }
    if(value_path == "punt-reason")
    {
        punt_reason = value;
    }
    if(value_path == "punt-reason-string")
    {
        punt_reason_string = value;
    }
    if(value_path == "sid")
    {
        sid = value;
    }
}

LptsPifib::Nodes::Node::Hardware::Bfd::Bfd()
{
    yang_name = "bfd"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::Bfd::~Bfd()
{
}

bool LptsPifib::Nodes::Node::Hardware::Bfd::has_data() const
{
    for (std::size_t index=0; index<bfd_entry_info.size(); index++)
    {
        if(bfd_entry_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::Hardware::Bfd::has_operation() const
{
    for (std::size_t index=0; index<bfd_entry_info.size(); index++)
    {
        if(bfd_entry_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::Hardware::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-entry-info")
    {
        for(auto const & c : bfd_entry_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo>();
        c->parent = this;
        bfd_entry_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_entry_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::Bfd::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::BfdEntryInfo()
    :
    fgid_or_vqi{YType::uint32, "fgid-or-vqi"},
    index_{YType::uint8, "index"},
    is_mcast{YType::uint8, "is-mcast"},
    is_valid{YType::uint8, "is-valid"},
    policer_id{YType::uint32, "policer-id"}
{
    yang_name = "bfd-entry-info"; yang_parent_name = "bfd";
}

LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::~BfdEntryInfo()
{
}

bool LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::has_data() const
{
    return fgid_or_vqi.is_set
	|| index_.is_set
	|| is_mcast.is_set
	|| is_valid.is_set
	|| policer_id.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fgid_or_vqi.operation)
	|| is_set(index_.operation)
	|| is_set(is_mcast.operation)
	|| is_set(is_valid.operation)
	|| is_set(policer_id.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-entry-info";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdEntryInfo' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_or_vqi.is_set || is_set(fgid_or_vqi.operation)) leaf_name_data.push_back(fgid_or_vqi.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (is_mcast.is_set || is_set(is_mcast.operation)) leaf_name_data.push_back(is_mcast.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fgid-or-vqi")
    {
        fgid_or_vqi = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "is-mcast")
    {
        is_mcast = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
}

LptsPifib::Nodes::Node::Hardware::Statistics::Statistics()
    :
    accepted{YType::uint64, "accepted"},
    clear_ts{YType::uint64, "clear-ts"},
    dropped{YType::uint64, "dropped"},
    no_stats_mem_err{YType::uint64, "no-stats-mem-err"}
{
    yang_name = "statistics"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::Statistics::~Statistics()
{
}

bool LptsPifib::Nodes::Node::Hardware::Statistics::has_data() const
{
    return accepted.is_set
	|| clear_ts.is_set
	|| dropped.is_set
	|| no_stats_mem_err.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted.operation)
	|| is_set(clear_ts.operation)
	|| is_set(dropped.operation)
	|| is_set(no_stats_mem_err.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.operation)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (clear_ts.is_set || is_set(clear_ts.operation)) leaf_name_data.push_back(clear_ts.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (no_stats_mem_err.is_set || is_set(no_stats_mem_err.operation)) leaf_name_data.push_back(no_stats_mem_err.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted")
    {
        accepted = value;
    }
    if(value_path == "clear-ts")
    {
        clear_ts = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err = value;
    }
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntries()
{
    yang_name = "index-entries"; yang_parent_name = "hardware";
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::~IndexEntries()
{
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::has_data() const
{
    for (std::size_t index=0; index<index_entry.size(); index++)
    {
        if(index_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::has_operation() const
{
    for (std::size_t index=0; index<index_entry.size(); index++)
    {
        if(index_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LptsPifib::Nodes::Node::Hardware::IndexEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index-entries";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::IndexEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IndexEntries' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::IndexEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index-entry")
    {
        for(auto const & c : index_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry>();
        c->parent = this;
        index_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::IndexEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::IndexEntries::set_value(const std::string & value_path, std::string value)
{
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::IndexEntry()
    :
    index_{YType::int32, "index"},
    acl_str{YType::str, "acl-str"},
    action{YType::uint8, "action"},
    action_string{YType::str, "action-string"},
    cir{YType::uint64, "cir"},
    entry_ptr{YType::uint32, "entry-ptr"},
    entry_shadow_ptr{YType::uint32, "entry-shadow-ptr"},
    fgid_or_sfp{YType::uint32, "fgid-or-sfp"},
    flow_type{YType::uint32, "flow-type"},
    intf_handle{YType::uint32, "intf-handle"},
    intf_name{YType::str, "intf-name"},
    is_fgid{YType::uint8, "is-fgid"},
    is_frag{YType::uint8, "is-frag"},
    is_optimized{YType::uint8, "is-optimized"},
    is_syn{YType::uint8, "is-syn"},
    is_uidb_opt_bit{YType::uint8, "is-uidb-opt-bit"},
    is_vrf{YType::uint8, "is-vrf"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    list_node_ptr{YType::uint32, "list-node-ptr"},
    listener_tag{YType::uint8, "listener-tag"},
    local_addr{YType::str, "local-addr"},
    local_port{YType::uint32, "local-port"},
    local_prefix_len{YType::uint32, "local-prefix-len"},
    lookup_priority{YType::int32, "lookup-priority"},
    min_ttl{YType::uint8, "min-ttl"},
    no_stats{YType::uint8, "no-stats"},
    num_retries{YType::uint8, "num-retries"},
    num_tm_entries{YType::int32, "num-tm-entries"},
    policer_avgrate{YType::uint32, "policer-avgrate"},
    policer_burst{YType::uint32, "policer-burst"},
    priority{YType::uint32, "priority"},
    rack_id{YType::uint32, "rack-id"},
    remote_addr{YType::str, "remote-addr"},
    remote_fgid{YType::uint32, "remote-fgid"},
    remote_prefix_len{YType::uint32, "remote-prefix-len"},
    remote_rack{YType::uint8, "remote-rack"},
    retry_fail_cause{YType::uint8, "retry-fail-cause"},
    rslot{YType::uint32, "rslot"},
    sid{YType::uint32, "sid"},
    state{YType::uint8, "state"},
    storage_priority{YType::int32, "storage-priority"},
    u_len{YType::uint32, "u-len"},
    u_type{YType::uint8, "u-type"},
    u_value{YType::uint32, "u-value"},
    uidb_index{YType::uint32, "uidb-index"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "index-entry"; yang_parent_name = "index-entries";
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::~IndexEntry()
{
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::has_data() const
{
    for (std::size_t index=0; index<hw_info.size(); index++)
    {
        if(hw_info[index]->has_data())
            return true;
    }
    return index_.is_set
	|| acl_str.is_set
	|| action.is_set
	|| action_string.is_set
	|| cir.is_set
	|| entry_ptr.is_set
	|| entry_shadow_ptr.is_set
	|| fgid_or_sfp.is_set
	|| flow_type.is_set
	|| intf_handle.is_set
	|| intf_name.is_set
	|| is_fgid.is_set
	|| is_frag.is_set
	|| is_optimized.is_set
	|| is_syn.is_set
	|| is_uidb_opt_bit.is_set
	|| is_vrf.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| list_node_ptr.is_set
	|| listener_tag.is_set
	|| local_addr.is_set
	|| local_port.is_set
	|| local_prefix_len.is_set
	|| lookup_priority.is_set
	|| min_ttl.is_set
	|| no_stats.is_set
	|| num_retries.is_set
	|| num_tm_entries.is_set
	|| policer_avgrate.is_set
	|| policer_burst.is_set
	|| priority.is_set
	|| rack_id.is_set
	|| remote_addr.is_set
	|| remote_fgid.is_set
	|| remote_prefix_len.is_set
	|| remote_rack.is_set
	|| retry_fail_cause.is_set
	|| rslot.is_set
	|| sid.is_set
	|| state.is_set
	|| storage_priority.is_set
	|| u_len.is_set
	|| u_type.is_set
	|| u_value.is_set
	|| uidb_index.is_set
	|| vrf_id.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::has_operation() const
{
    for (std::size_t index=0; index<hw_info.size(); index++)
    {
        if(hw_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(acl_str.operation)
	|| is_set(action.operation)
	|| is_set(action_string.operation)
	|| is_set(cir.operation)
	|| is_set(entry_ptr.operation)
	|| is_set(entry_shadow_ptr.operation)
	|| is_set(fgid_or_sfp.operation)
	|| is_set(flow_type.operation)
	|| is_set(intf_handle.operation)
	|| is_set(intf_name.operation)
	|| is_set(is_fgid.operation)
	|| is_set(is_frag.operation)
	|| is_set(is_optimized.operation)
	|| is_set(is_syn.operation)
	|| is_set(is_uidb_opt_bit.operation)
	|| is_set(is_vrf.operation)
	|| is_set(l3protocol.operation)
	|| is_set(l4protocol.operation)
	|| is_set(list_node_ptr.operation)
	|| is_set(listener_tag.operation)
	|| is_set(local_addr.operation)
	|| is_set(local_port.operation)
	|| is_set(local_prefix_len.operation)
	|| is_set(lookup_priority.operation)
	|| is_set(min_ttl.operation)
	|| is_set(no_stats.operation)
	|| is_set(num_retries.operation)
	|| is_set(num_tm_entries.operation)
	|| is_set(policer_avgrate.operation)
	|| is_set(policer_burst.operation)
	|| is_set(priority.operation)
	|| is_set(rack_id.operation)
	|| is_set(remote_addr.operation)
	|| is_set(remote_fgid.operation)
	|| is_set(remote_prefix_len.operation)
	|| is_set(remote_rack.operation)
	|| is_set(retry_fail_cause.operation)
	|| is_set(rslot.operation)
	|| is_set(sid.operation)
	|| is_set(state.operation)
	|| is_set(storage_priority.operation)
	|| is_set(u_len.operation)
	|| is_set(u_type.operation)
	|| is_set(u_value.operation)
	|| is_set(uidb_index.operation)
	|| is_set(vrf_id.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index-entry" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IndexEntry' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.operation)) leaf_name_data.push_back(acl_str.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_string.is_set || is_set(action_string.operation)) leaf_name_data.push_back(action_string.get_name_leafdata());
    if (cir.is_set || is_set(cir.operation)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (entry_ptr.is_set || is_set(entry_ptr.operation)) leaf_name_data.push_back(entry_ptr.get_name_leafdata());
    if (entry_shadow_ptr.is_set || is_set(entry_shadow_ptr.operation)) leaf_name_data.push_back(entry_shadow_ptr.get_name_leafdata());
    if (fgid_or_sfp.is_set || is_set(fgid_or_sfp.operation)) leaf_name_data.push_back(fgid_or_sfp.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.operation)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.operation)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.operation)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (is_frag.is_set || is_set(is_frag.operation)) leaf_name_data.push_back(is_frag.get_name_leafdata());
    if (is_optimized.is_set || is_set(is_optimized.operation)) leaf_name_data.push_back(is_optimized.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.operation)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (is_uidb_opt_bit.is_set || is_set(is_uidb_opt_bit.operation)) leaf_name_data.push_back(is_uidb_opt_bit.get_name_leafdata());
    if (is_vrf.is_set || is_set(is_vrf.operation)) leaf_name_data.push_back(is_vrf.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.operation)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.operation)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (list_node_ptr.is_set || is_set(list_node_ptr.operation)) leaf_name_data.push_back(list_node_ptr.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.operation)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (local_prefix_len.is_set || is_set(local_prefix_len.operation)) leaf_name_data.push_back(local_prefix_len.get_name_leafdata());
    if (lookup_priority.is_set || is_set(lookup_priority.operation)) leaf_name_data.push_back(lookup_priority.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.operation)) leaf_name_data.push_back(no_stats.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.operation)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (num_tm_entries.is_set || is_set(num_tm_entries.operation)) leaf_name_data.push_back(num_tm_entries.get_name_leafdata());
    if (policer_avgrate.is_set || is_set(policer_avgrate.operation)) leaf_name_data.push_back(policer_avgrate.get_name_leafdata());
    if (policer_burst.is_set || is_set(policer_burst.operation)) leaf_name_data.push_back(policer_burst.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (rack_id.is_set || is_set(rack_id.operation)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (remote_fgid.is_set || is_set(remote_fgid.operation)) leaf_name_data.push_back(remote_fgid.get_name_leafdata());
    if (remote_prefix_len.is_set || is_set(remote_prefix_len.operation)) leaf_name_data.push_back(remote_prefix_len.get_name_leafdata());
    if (remote_rack.is_set || is_set(remote_rack.operation)) leaf_name_data.push_back(remote_rack.get_name_leafdata());
    if (retry_fail_cause.is_set || is_set(retry_fail_cause.operation)) leaf_name_data.push_back(retry_fail_cause.get_name_leafdata());
    if (rslot.is_set || is_set(rslot.operation)) leaf_name_data.push_back(rslot.get_name_leafdata());
    if (sid.is_set || is_set(sid.operation)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (storage_priority.is_set || is_set(storage_priority.operation)) leaf_name_data.push_back(storage_priority.get_name_leafdata());
    if (u_len.is_set || is_set(u_len.operation)) leaf_name_data.push_back(u_len.get_name_leafdata());
    if (u_type.is_set || is_set(u_type.operation)) leaf_name_data.push_back(u_type.get_name_leafdata());
    if (u_value.is_set || is_set(u_value.operation)) leaf_name_data.push_back(u_value.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.operation)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-info")
    {
        for(auto const & c : hw_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo>();
        c->parent = this;
        hw_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "action-string")
    {
        action_string = value;
    }
    if(value_path == "cir")
    {
        cir = value;
    }
    if(value_path == "entry-ptr")
    {
        entry_ptr = value;
    }
    if(value_path == "entry-shadow-ptr")
    {
        entry_shadow_ptr = value;
    }
    if(value_path == "fgid-or-sfp")
    {
        fgid_or_sfp = value;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
    }
    if(value_path == "is-fgid")
    {
        is_fgid = value;
    }
    if(value_path == "is-frag")
    {
        is_frag = value;
    }
    if(value_path == "is-optimized")
    {
        is_optimized = value;
    }
    if(value_path == "is-syn")
    {
        is_syn = value;
    }
    if(value_path == "is-uidb-opt-bit")
    {
        is_uidb_opt_bit = value;
    }
    if(value_path == "is-vrf")
    {
        is_vrf = value;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
    }
    if(value_path == "list-node-ptr")
    {
        list_node_ptr = value;
    }
    if(value_path == "listener-tag")
    {
        listener_tag = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "local-prefix-len")
    {
        local_prefix_len = value;
    }
    if(value_path == "lookup-priority")
    {
        lookup_priority = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "no-stats")
    {
        no_stats = value;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
    }
    if(value_path == "num-tm-entries")
    {
        num_tm_entries = value;
    }
    if(value_path == "policer-avgrate")
    {
        policer_avgrate = value;
    }
    if(value_path == "policer-burst")
    {
        policer_burst = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "rack-id")
    {
        rack_id = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "remote-fgid")
    {
        remote_fgid = value;
    }
    if(value_path == "remote-prefix-len")
    {
        remote_prefix_len = value;
    }
    if(value_path == "remote-rack")
    {
        remote_rack = value;
    }
    if(value_path == "retry-fail-cause")
    {
        retry_fail_cause = value;
    }
    if(value_path == "rslot")
    {
        rslot = value;
    }
    if(value_path == "sid")
    {
        sid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "storage-priority")
    {
        storage_priority = value;
    }
    if(value_path == "u-len")
    {
        u_len = value;
    }
    if(value_path == "u-type")
    {
        u_type = value;
    }
    if(value_path == "u-value")
    {
        u_value = value;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::HwInfo()
    :
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    policer{YType::uint32, "policer"},
    sort_start_offset{YType::int32, "sort-start-offset"},
    stats_ptr{YType::uint32, "stats-ptr"},
    tm_start_offset{YType::int32, "tm-start-offset"}
{
    yang_name = "hw-info"; yang_parent_name = "index-entry";
}

LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::~HwInfo()
{
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::has_data() const
{
    return accepted.is_set
	|| dropped.is_set
	|| policer.is_set
	|| sort_start_offset.is_set
	|| stats_ptr.is_set
	|| tm_start_offset.is_set;
}

bool LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted.operation)
	|| is_set(dropped.operation)
	|| is_set(policer.operation)
	|| is_set(sort_start_offset.operation)
	|| is_set(stats_ptr.operation)
	|| is_set(tm_start_offset.operation);
}

std::string LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-info";

    return path_buffer.str();

}

const EntityPath LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwInfo' in Cisco_IOS_XR_lpts_pre_ifib_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.operation)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (policer.is_set || is_set(policer.operation)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (sort_start_offset.is_set || is_set(sort_start_offset.operation)) leaf_name_data.push_back(sort_start_offset.get_name_leafdata());
    if (stats_ptr.is_set || is_set(stats_ptr.operation)) leaf_name_data.push_back(stats_ptr.get_name_leafdata());
    if (tm_start_offset.is_set || is_set(tm_start_offset.operation)) leaf_name_data.push_back(tm_start_offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted")
    {
        accepted = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "policer")
    {
        policer = value;
    }
    if(value_path == "sort-start-offset")
    {
        sort_start_offset = value;
    }
    if(value_path == "stats-ptr")
    {
        stats_ptr = value;
    }
    if(value_path == "tm-start-offset")
    {
        tm_start_offset = value;
    }
}

const Enum::YLeaf LptsPifibEnum::isis {0, "isis"};
const Enum::YLeaf LptsPifibEnum::ipv4_frag {1, "ipv4-frag"};
const Enum::YLeaf LptsPifibEnum::ipv4_echo {2, "ipv4-echo"};
const Enum::YLeaf LptsPifibEnum::ipv4_any {3, "ipv4-any"};
const Enum::YLeaf LptsPifibEnum::ipv6_frag {4, "ipv6-frag"};
const Enum::YLeaf LptsPifibEnum::ipv6_echo {5, "ipv6-echo"};
const Enum::YLeaf LptsPifibEnum::ipv6_nd {6, "ipv6-nd"};
const Enum::YLeaf LptsPifibEnum::ipv6_any {7, "ipv6-any"};
const Enum::YLeaf LptsPifibEnum::bfd_any {8, "bfd-any"};
const Enum::YLeaf LptsPifibEnum::all {9, "all"};


}
}

